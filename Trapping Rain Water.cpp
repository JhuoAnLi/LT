// I'm so bad
class Solution {
public:
    int trap(vector<int>& height) {
        int left[height.size()];
        int right[height.size()];
        int ans = 0 ;
        memset(left,0,sizeof(left));
        memset(right,0,sizeof(right));
        for(int i=1;i<height.size()-1;++i) left[i] = max(left[i-1], height[i-1]); // dp
        for(int i = height.size()-2;i>=0;--i) right[i] = max(right[i+1],height[i+1]); //dp
        for(int i= 1; i<height.size()-1;++i)
        {
            int minh = min(left[i],right[i]);
            if(minh > height[i])ans+=minh-height[i]; 
        }
        return ans;
    }
};
