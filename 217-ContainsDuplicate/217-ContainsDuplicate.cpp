// Last updated: 7/2/2025, 5:43:13 PM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        if(nums.size()==1) 
        return false;
       
       
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) 
            return true;
        }
        return false;
    }
};