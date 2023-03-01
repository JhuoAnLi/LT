//hand-made
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set <char> s;
        for(auto i : board)
        {
            for(auto j: i)
            {
                auto it = s.find(j);
                if(it == s.end() && j!='.')
                {
                    s.insert(j);
                }
                else if(it!=s.end())
                {
                    return false;
                }
            }
            s.clear();
        }
        for(int i=0;i<9;++i)
        {
            for(int j=0;j<9;++j)
            {
                auto it = s.find(board[j][i]);
                if(it == s.end() && board[j][i]!='.')
                {
                    s.insert(board[j][i]);
                }
                else if(it!=s.end())
                {
                    return false;
                }
            }
            s.clear();
        }
        for(int h = 0 ; h<7 ; h+=3)
        {
            for(int i=0+h;i<3+h;++i)
            {
                for(int j=0+h;j<3+h;++j)
                {
                    auto it = s.find(board[j][i]);
                    if(it == s.end() && board[j][i]!='.')
                    {
                        s.insert(board[j][i]);
                    }
                    else if(it!=s.end())
                    {
                        return false;
                    }
                }
                
            }
            s.clear();
        }
            for(int i=0;i<3;++i)
            {
                for(int j=3;j<6;++j)
                {
                    auto it = s.find(board[j][i]);
                    if(it == s.end() && board[j][i]!='.')
                    {
                        s.insert(board[j][i]);
                    }
                    else if(it!=s.end())
                    {
                        return false;
                    }
                }
                
            }
            s.clear();
            for(int i=0;i<3;++i)
            {
                for(int j=6;j<9;++j)
                {
                    auto it = s.find(board[j][i]);
                    if(it == s.end() && board[j][i]!='.')
                    {
                        s.insert(board[j][i]);
                    }
                    else if(it!=s.end())
                    {
                        return false;
                    }
                }
                
            }
            s.clear();
            for(int i=3;i<6;++i)
            {
                for(int j=0;j<3;++j)
                {
                    auto it = s.find(board[j][i]);
                    if(it == s.end() && board[j][i]!='.')
                    {
                        s.insert(board[j][i]);
                    }
                    else if(it!=s.end())
                    {
                        return false;
                    }
                }
                
            }
            s.clear();
            for(int i=3;i<6;++i)
            {
                for(int j=6;j<9;++j)
                {
                    auto it = s.find(board[j][i]);
                    if(it == s.end() && board[j][i]!='.')
                    {
                        s.insert(board[j][i]);
                    }
                    else if(it!=s.end())
                    {
                        return false;
                    }
                }
                
            }
            s.clear();
            for(int i=6;i<9;++i)
            {
                for(int j=0;j<3;++j)
                {
                    auto it = s.find(board[j][i]);
                    if(it == s.end() && board[j][i]!='.')
                    {
                        s.insert(board[j][i]);
                    }
                    else if(it!=s.end())
                    {
                        return false;
                    }
                }
                
            }
            s.clear();
            for(int i=6;i<9;++i)
            {
                for(int j=3;j<6;++j)
                {
                    auto it = s.find(board[j][i]);
                    if(it == s.end() && board[j][i]!='.')
                    {
                        s.insert(board[j][i]);
                    }
                    else if(it!=s.end())
                    {
                        return false;
                    }
                }
                
            }
            s.clear();
        return true;

    }
};
