class Solution {
public:
    bool isValid(string s) {
        unordered_map <char,int> m = {{'(',1},{')',4},{'[',2},{']',5},{'{',3},{'}',6}};
        stack <char> st;
        bool ans = true;
        for(char i : s)
        {
            if(m[i]>=1 && m[i]<=3) st.push(i);
            else if(!st.empty() && m[i]-3 == m[st.top()]) st.pop();
            else
            {
                ans=false;
                break;
            }
        }
        if(!st.empty()) ans = false;
        return ans;
    }
};
