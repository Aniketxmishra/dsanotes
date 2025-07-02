// Last updated: 7/2/2025, 5:43:17 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        unordered_map<int, int> count;
        for(auto num:nums){
            count[num]++;
        }

        for(const auto& n :count){
            if(n.second==1){
                return n.first;
            }
           
        }
         return -1;
    }
        
    
         
    
};