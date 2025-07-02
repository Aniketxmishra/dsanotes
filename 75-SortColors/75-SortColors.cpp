// Last updated: 7/2/2025, 5:43:20 PM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        
        // User function Template for C++


        
        for(int i=0; i<=n-1;i++){
            
            
            for(int j=0;j<n-i-1;j++){
                if(nums[j]>nums[j+1]){
                     swap(nums[j],nums[j+1]);
                    
                }
               
            }
        }
        // Your code here
    }

};