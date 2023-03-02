// hand-made
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        set <int> s;
        set <int> record;
        record.insert(1);
        vector <int> v;
        for(auto i: nums) s.insert(i);
        for(auto i : s) v.emplace_back(i);
        int max = 1;
        bool flag = false;
        for(int i=0 ;i<v.size()-1;++i)
        {

            if(v[i+1] - v[i] ==1) flag = true;
            else 
            {
                flag = false;
                record.insert(max);
                max=1;
            }
            if(flag)
            {
                max++;
                if(i==v.size()-2) record.insert(max);
            }
        }
        int ans = 0;
        for(auto i = record.rbegin();i!=record.rend();++i)
        {
            ans =  *i;
            break;
        }
        return ans;
    }
    
};

// other tips(unordered_set)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans =0;
        unordered_set <int> us;
        for(int i : nums) us.insert(i);
        for(int i : nums)
        {
            if(i!=0x0c0c0c0c && us.count(i-1)!=0)
            continue;
            int cnt =1; // count
            while(i != 0x3f3f3f3f && us.count(i+1) !=0)
            {
                cnt++;
                i++;
            }
            ans = max( ans , cnt);
        }
        return ans;
    }
    
};
