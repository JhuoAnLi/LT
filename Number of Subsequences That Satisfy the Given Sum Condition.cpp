// use qpow(快速冪) and tow pointers

class Solution {
    const long long maxn = 7+1e9;
    private: 
    int qpows(int n)
    {
        long long ans=1,p=2;
        while(n)
        {
            if(n&1)
                ans*=p, ans%=maxn;
            p*=p;
            p%=maxn;
            n>>=1;

        }
        return ans;
    }
    public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        if(nums[0]*2 > target) return 0;
        unsigned long long l = 0;
        unsigned long long r = nums.size()-1;
        unsigned long long ans = 0;
        while(l<=r)
        {
            if((nums[l] + nums[r]) <= target)
            {
                ans += qpows(r-l);
                l++;
            }
            else r--;
        }
        return ans % maxn;
    }
};
