#include <bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(false);cin.tie(0);
void dfs(const vector<string>& world , vector<vector<bool>>& visited,cosnt int& i,const int& j);
int main()
{
  IO;
  int N;
  cin>>N;
  while(N--)
  {
   vector <string> world;
   vector <vector<bool>> visited; // double
   vector <int> count (26,0);
   int r = 0, c = 0, max = -1;
   cin>>r>>c;
   world.emplace_back(string(c+2," "));
   for(int j=0;j<r;++j)
   {
     string s;
     cin>>s;
     world.emplace_back(" "+ s +" ");
   }
    world.emplace_back(string(c+2," "));
    visited.assign(r+2,vector<bool>(c+2,false)); // number, value
    for(int i=1 ; i<=r ; ++i)
      for(int j=1 ; j<=c ; ++j)
      {
        if(!visited[i][j])
        {
          if(max < ++count[world[i][j]-'a'])
            max = count[world[i][j]-'a'];
          dfs(world,visited,i,j);
        }
      }
       cout << "World #" << i + 1 << endl;
        for (int j = max; j >= 1; j--) {
            for (int k = 0; k < 26; k++) {
                if (count[k] == j) {
                    cout << static_cast<char>(k + 'a') <<": "<<count[k]
                         << endl;
                }
            }
        }
  }
  return 0;
}
void dfs(const vector<string>& world, vector<vector<bool>>visited, const int& i, const int& j)
{
  visited[i][j]=true;
  if(world[i-1][j] == world[i][j] && visited[i-1][j] == false) dfs(world,visited,i-1,j);
  if(world[i+1][j] == world[i][j] && visited[i+1][j] == false) dfs(world,visited,i+1,j);
  if(world[i][j-1] == world[i][j] && visited[i][j-1] == false) dfs(world,visited,i,j-1);
  if(world[i][j+1] == world[i][j] && visited[i][j+1] == false) dfs(world,visited,i,j+1);
}
