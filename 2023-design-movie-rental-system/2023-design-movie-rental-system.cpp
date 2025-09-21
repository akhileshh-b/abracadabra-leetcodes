#include <vector>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;

// Custom comparator for sorting by price, then shop, then movie
struct MovieEntry {
    int price, shop, movie;
    MovieEntry(int p, int s, int m) : price(p), shop(s), movie(m) {}
    bool operator<(const MovieEntry& other) const {
        if (price != other.price) return price < other.price;
        if (shop != other.shop) return shop < other.shop;
        return movie < other.movie;
    }
};

class MovieRentingSystem {
    // For each movie, set of (price, shop)
    unordered_map<int, set<pair<int, int>>> unrentedMovies;
    // Set of all rented movies: (price, shop, movie)
    set<MovieEntry> rentedMovies;
    // Map (shop, movie) -> price
    map<pair<int, int>, int> shopMovieToPrice;
public:
    MovieRentingSystem(int numShops, vector<vector<int>>& entries) {
        for (auto& entry : entries) {
            int shopId = entry[0], movieId = entry[1], priceVal = entry[2];
            unrentedMovies[movieId].insert({priceVal, shopId});
            shopMovieToPrice[{shopId, movieId}] = priceVal;
        }
    }

    vector<int> search(int movieId) {
        vector<int> result;
        if (unrentedMovies.count(movieId)) {
            for (auto it = unrentedMovies[movieId].begin(); it != unrentedMovies[movieId].end() && result.size() < 5; ++it)
                result.push_back(it->second);
        }
        return result;
    }

    void rent(int shopId, int movieId) {
        int priceVal = shopMovieToPrice[{shopId, movieId}];
        unrentedMovies[movieId].erase({priceVal, shopId});
        rentedMovies.insert(MovieEntry(priceVal, shopId, movieId));
    }

    void drop(int shopId, int movieId) {
        int priceVal = shopMovieToPrice[{shopId, movieId}];
        rentedMovies.erase(MovieEntry(priceVal, shopId, movieId));
        unrentedMovies[movieId].insert({priceVal, shopId});
    }

    vector<vector<int>> report() {
        vector<vector<int>> result;
        for (auto it = rentedMovies.begin(); it != rentedMovies.end() && result.size() < 5; ++it)
            result.push_back({it->shop, it->movie});
        return result;
    }
};