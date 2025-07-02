// Last updated: 7/2/2025, 5:43:24 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum= 0;
        int maxSum=INT_MIN;
        int n= nums.size();
        
        for (int i=0; i<n;i++){
            sum+=nums[i];
            if(sum>maxSum){
                maxSum= sum;



                
            }
             if(sum<0){
                sum=0;
            }
            

            
            

        }
        return maxSum;
        
    }
};