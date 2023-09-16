class Solution {
public:
    int bs(int left,int right,vector<int>& nums, int target){
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] > target) right = mid-1;
            else left = mid+1;
        }
        
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int left = 0;
        int n = nums.size();
        int right = n-1;
        int mid;
        while(left<= right){
            mid = left+(right-left)/2;
            if((mid == 0 || nums[mid] < nums[mid-1] )&&  ( mid == n-1 || nums[mid] < nums[mid+1]) ) break;
            if(nums[mid] > nums[right]) left = mid+1;
            else right = mid-1;
        }
        int ans = bs(0,mid-1,nums,target);
        if(ans == -1)
            ans = bs(mid,n-1,nums,target);
        return ans;
    }
};