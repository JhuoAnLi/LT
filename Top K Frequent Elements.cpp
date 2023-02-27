//remember use emplace zzz~
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector <int> ans;
        unordered_map <int,int> m;
        vector <int> test;
        for(int i : nums)
        {
            m[i]++;
        }
        for(auto i : m)
        {
            test.emplace_back(i.second);
        }
        sort(test.begin(),test.end());//O(nlogn)
        k=test.size()-k;
        for(auto i : m)
        {
            if(i.second >= test[k]) ans.emplace_back(i.first);
        }
        return ans;
    }
};
// priority_queue
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector <int> ans;
        unordered_map <int,int> m;
        priority_queue<pair<int,int>> pq;
        for(auto i : nums)
        {
            m[i]++;
        }
        for(auto i : m)
        {
            pq.push({i.second,i.first});// {priority,value}
        }
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
