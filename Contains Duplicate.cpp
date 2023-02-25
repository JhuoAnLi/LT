// use hash_map, cuz O(1)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // hash
        unordered_map <int,int> unm;
        for (auto i : nums)
        {
            unm[i]++;
            if(unm[i] > 1) return true;
        }
        return false;
    }
    
};

// use set and with count()

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool ans = false;
        set <int> s; 
        for(int i=0; i<nums.size();++i)
        {
            if(s.count(nums[i]))
            {
                ans=true;
                break;
            }
            s.insert(nums[i]);
        }
        return ans;
    }
    
};
