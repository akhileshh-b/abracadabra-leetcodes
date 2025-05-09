class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string, vector<string>> ansMap;

    for (string s : strs) {
        vector<int> count(26, 0);


        for (char c : s) {
            count[c - 'a']++;
        }


        stringstream sb;
        for (int i = 0; i < 26; ++i) {
            sb << "#" << count[i];
        }
        string key = sb.str();


        ansMap[key].push_back(s);
    }

    
    vector<vector<string>> result;
    for (auto& pair : ansMap) {
        result.push_back(pair.second);
    }

    return result;   
    }
};