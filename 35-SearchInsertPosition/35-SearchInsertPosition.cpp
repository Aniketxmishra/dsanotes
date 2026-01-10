// Last updated: 1/10/2026, 2:54:05 PM
1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int low=0;
5        int high = nums.size()-1;
6        while(low<=high){
7            int mid = low + (high-low)/2;
8            if(nums[mid]== target){
9                return mid;
10            }
11            if(nums[mid]<target){
12                low= mid+1;
13            }
14            else{
15                high= mid-1;
16            }
17
18        }
19        return low;
20    }
21};