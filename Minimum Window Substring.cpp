class Solution {
public:
    string minWindow(string s, string t) {
        int i = 0 , j = 0;
        unordered_map <char , int> m;
        for(auto u : t) m[u]++;
        int cnt = t.size();
        tuple <int,int> ans{0,s.size()+1};
        for(;j<s.size();++j)
        {
            if(m[s[j]]>0) cnt--; //check if the substring in s has all t 
            m[s[j]]--;
            if(cnt==0)
            {
                while(1)
                {
                    if(m[s[i]]==0) break;
                    m[s[i]]++; // compensate original minus 1
                    i++;
                }
                if(j-i < get<1>(ans) - get<0>(ans) )
                {
                    get<1>(ans) = j;
                    get<0>(ans) = i;
                }
                m[s[i]]++;// compensate original minus 1
                cnt++;
                i++;
            }
                
        }
        return get<1>(ans) >= s.size()+1 ? string("") : s.substr(get<0>(ans),get<1>(ans) - get<0>(ans) + 1);
    }
};

// new tuple !!!!!?
