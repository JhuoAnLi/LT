//bad commit
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map <int , int> m;
        vector <int> v;
        for(int i=0 ; i<numbers.size();++i)
        {
            int temp = target - numbers[i];
            auto it = m.find(temp);
            if(it == m.end())
            {
                m[numbers[i]]=i;
            }
            else
            {
                v.emplace_back(it->second+1);
                v.emplace_back(i+1);
            }
        }
        return v;
        
    }
};
// other tips(two pointers)
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        int sum = numbers[left]+numbers[right];
        while( sum != target)
        {
            if(sum > target) right-=1;
            else left+=1;
            sum = numbers[left]+numbers[right]; 
        }
        return {left+1,right+1};
        
    }
};
