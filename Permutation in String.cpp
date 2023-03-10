class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map <char,int> m;
        int l =0;
        int r =0;
        for(auto i : s1)m[i]++;
        while(r<s2.size())
        {
            char c = s2[r++];
            m[c]--;
            while(l<r && m[c]<0) m[s2[l++]]++;
            if(r-l == s1.size()) return true;
        }
        return false;


    }
};
