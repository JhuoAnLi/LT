class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans =0;
        const int m =nums1.size(),n = nums2.size();
        int to =m+n;
        int p1=0,p2=0,q=0;
        int arr [m+n];
        while(p1<m||p2<n)
        {
            if(p1==m) q=nums2[p2++];
            else if(p2==n) q=nums1[p1++];
            else if(nums1[p1] < nums2[p2]) q=nums1[p1++];
            else q=nums2[p2++];
            arr [p1+p2-1] = q;
        }
        if (to==1) return arr[to-1];
        else
        {
            if(to%2==0) ans=(arr[to/2]+arr[to/2-1])/2.0;
            else ans = arr[to/2];
        }
        return ans;
    }
}
