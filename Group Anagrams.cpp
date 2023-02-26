class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector <vector<string>> ans;
        unordered_map <string,vector<string>> m;
        for(auto i : strs)
        {
            string t = i;
            sort(t.begin(),t.end());
            m[t].push_back(i);
        }
        for(auto j : m) ans.push_back(j.second);
        return ans;
    }
};
