class Solution {
public:
    
    int maxProduct(int n) {
        vector<int> letters;
        while(n>0){
            letters.push_back(n%10);
            n=n/10;
        }
        sort(letters.begin(), letters.end(),greater<>());

        return letters[0]*letters[1];
    }
};