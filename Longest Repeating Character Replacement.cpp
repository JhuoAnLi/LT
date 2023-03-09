class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int l = 0;
        int r = 0;
        vector <int> v(26,0);
        int maxn = 0;
        while(r < n)
        {
            v[s[r]-'A']++;
            maxn = max(maxn , v[s[r]-'A']);
            if(r-l+1-maxn > k) //  it means that we have exceeded the allowed number of replacements,                             
            {                 //so we need to move the left index l to shrink the window, updating the frequency vector and maxn accordingly.
                v[s[l]-'A']--;
                l++;
            }
            r++;
        }
        return r-l;
    }

};
