//haha
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        if(nums.size()<3) return {};
        sort(nums.begin(),nums.end());
        set<vector <int>> s;
        vector <vector <int>> ans;
        for(int i=0;i<nums.size()-2;++i)
        {
            int left = i+1;
            int right = nums.size()-1;
            while(left < right)
            {
                int sum = nums[i]+nums[left] + nums[right];
                if(sum == 0) s.insert({nums[i],nums[left++],nums[right--]});
                else if(sum > 0) right--;
                else left++;
            }
        }
        copy(s.begin(),s.end(),back_inserter(ans));
        return ans;
    }
};
