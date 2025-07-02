// Last updated: 7/2/2025, 5:43:28 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low= 0;
        int high = n-1;
        int ans = n;

        while(low<=high){
            int mid = low+ (high-low)/2;

            if(nums[mid]>=target){
                ans=mid;
                high = mid-1;
            }
            else low = mid +1;
        }

        return ans;
        
    }
};