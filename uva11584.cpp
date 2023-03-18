//dp
#include <bits/stdc++.h>
using namespace std;
#define IO                             \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);

bool check(string, int, int);

int main()
{
    IO;
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<int> dp(n + 1, 0); // why we need the extra space because we need dp[-1] so we set the length become n+1, just like dummyhead
        dp[1] = 1; 
        for (int i = 2; i <= n; ++i)
        {
            dp[i] = dp[i - 1] + 1;
            for (int j = 0; j < i; ++j)
            {
                if (check(s, j, i - 1))
                {
                    dp[i] = min(dp[i], dp[j] + 1); // although it's in j index  we founded, however, in dp[j] is not the j index but the j-1 index
                }
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}

bool check(string s, int i, int j)
{
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
