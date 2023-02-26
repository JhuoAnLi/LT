class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int rows[m];
        int cols[n];
        memset(rows,0,sizeof(rows));
        memset(cols,0,sizeof(cols));
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(grid[i][j]==1)
                {
                    rows[i]++;
                    cols[j]++;
                }
            }
        }
        int ans=0;
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(grid[i][j]==1 && (rows[i] >=2 || cols[j] >=2))
                {
                    ans++;
                }
            }
        }
        return ans;
        
    }
};
