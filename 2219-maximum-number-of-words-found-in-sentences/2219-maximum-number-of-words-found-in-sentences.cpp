class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int actmax=0;
        for(auto it:sentences){
            int currmax=1;
            for(char c:it){
            if(c==' '){
                 currmax++;
            }
            }
            actmax=max(currmax,actmax);
        }
        return actmax;
        }
};