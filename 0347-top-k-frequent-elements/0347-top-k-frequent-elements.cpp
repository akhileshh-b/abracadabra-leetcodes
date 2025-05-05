class Solution {
    
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> abc;
        map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        

        vector<pair<int,int>> sortedfmap(mp.begin(),mp.end());
        sort(sortedfmap.begin(),sortedfmap.end(),[](const pair<int,int>& a, const pair<int,int>& b){
            return a.second> b.second;
        });
        int x=1;      
        for(auto it:sortedfmap){
            
            abc.push_back(it.first);
            if(x==k){
                break;
            }
            x++;
        }
        return abc;
    }
};