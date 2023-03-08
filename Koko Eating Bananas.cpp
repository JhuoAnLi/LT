//haha
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = 1e9;
        while(l<=r)
        {
            int m = (l+r) >> 1;
            if(p(piles,m,h)) l = m+1;
            else r = m-1;
        }
        return l;
    }
    bool p (vector <int>& piles , int k ,int h)
    {
        long long res=0;
        for(long long i : piles) res+=(i-1)/k+1;
        return res>h;
    } 
};
