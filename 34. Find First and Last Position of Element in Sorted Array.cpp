class Solution {
public:
    int n;
    int binary_search(vector<int>& nums, int target){
        int l=0, r=n-1, m;
        while(l<r){
            m=(r+l)/2;
            if (nums[m]<target)  l=m+1;
            else r=m;
        }
        return l;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        n=nums.size();
        if (n==0) return {-1, -1};
        int i=binary_search(nums, target);
        if (nums[i]!=target) return {-1, -1};
        int j=binary_search(nums, target+1);
        if (nums[j]==target) return {i, j}; // j might be n-1. Need this check
        return {i, j-1};
    }
};
