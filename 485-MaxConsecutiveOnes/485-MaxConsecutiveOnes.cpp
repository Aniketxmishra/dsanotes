// Last updated: 7/2/2025, 5:42:56 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxc = 0;
        int count = 0;

        for(int i=0; i<n; i++){
            
            if(nums[i]==1){
                count++;
                maxc= max(count, maxc);
            }
            else count=0;
        }
        
        return maxc;

        
    }
};