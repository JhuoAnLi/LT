class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       if(s.size()==0) return 0;
       unordered_set <char> one;
       int ans=0,left=0,i=0;
       int len = s.length();
       while(i<len)
       {
           while(one.find(s[i])!=one.end())
           {
               one.erase(s[left]);
               left++;
           }
           ans = max(ans,i-left+1);
           one.insert(s[i]);
           i++;
       }
       return ans;

    }
};

