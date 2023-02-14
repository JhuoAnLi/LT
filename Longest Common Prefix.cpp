class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        const int len = strs.size();
        int maxx = 0;
        string ans="";
        if(len==1)
        {
            ans+=strs[0];
            return ans;
        }
        for(auto i : strs) i.size() > maxx ? maxx=i.size() : maxx;
        for(int i = 0 ; i < maxx ; ++i)
        {
            int flag = 0;
            for(int k = 0 ; k < len-1 ; ++k)
            {
                if(strs[k][i]==strs[k+1][i]) flag = 1; 
                else
                {
                    flag=0;
                    break;    
                } 
            }
            if(flag) ans+=strs[0][i];
            else break;
        }
        return ans;

    }
};
