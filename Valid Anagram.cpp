// double map and to check whether the value is equal
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        map <char,int> m1,m2;
        for(int  i=0 ; i<s.size();++i)
        {
            m1[s[i]]++;
            m2[t[i]]++;
        }
        for(auto i : s)
        {
            if(m1[i] != m2[i]) return false;
        }
        return true;
    }
};
//just sort
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};
// nice solution, cuz we consider the greater number and new char , so the lower number problom is in the condition.
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int> map;
        for(char c : s) map[c] ++;
        for(char c : t) 
            if(-- map[c] == -1) return false;
        return true;
    }
};
