class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int actualmin = INT_MAX;
        int n = arr.size();
        vector<vector<int>> ans;
        
        for(int i=0;i<n-1;i++){
            int mindiff = arr[i+1]-arr[i];
            actualmin = min(actualmin, mindiff);
        }
        for(int i=0;i<n-1;i++){
            if((arr[i+1]-arr[i])==actualmin){
                vector<int> ans1;
                ans1.push_back(arr[i]);
                ans1.push_back(arr[i+1]);
                ans.push_back(ans1);
            }
            
        }
        return ans;
    }
};