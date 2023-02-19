class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<vector<string>> ans(n+1);
        if(n==0) return {};
        else if(n==1) return {"()"};
        ans[0]={""};
        ans[1]={"()"};
        for(int i=2 ; i<=n ; ++i)
            for(int j=0 ; j<i ; ++j)
                for(string k : ans[j])
                    for(string l : ans[i-j-1])
                    {
                        string temp;
                        temp="("+k+")"+l;
                        ans[i].push_back(temp);
                    }
        return ans[n];
    }
};
