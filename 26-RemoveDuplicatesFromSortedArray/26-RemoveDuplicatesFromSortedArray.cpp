// Last updated: 7/2/2025, 5:43:34 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        map<int, int> count; 
        
        for (int num : nums) {
            count[num]++; 
        }

        int index = 0; 
        for (const auto& entry : count) {
            nums[index++] = entry.first; 
        }

        return index;
       }
    
        
    
};