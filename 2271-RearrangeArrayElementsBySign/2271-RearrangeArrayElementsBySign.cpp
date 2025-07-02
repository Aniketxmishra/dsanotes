// Last updated: 7/2/2025, 5:42:35 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int>positive;
        for(auto num: nums){
            if(num>=0)
            positive.push(num);
        }
        
        queue<int>negative;
        for(auto num: nums){
            if(num<0){
                negative.push(num);
            }
        }

        vector<int>nums2;
        int n =negative.size() ;
        while( !positive.empty() && !negative.empty()){
            int pos = positive.front();
            positive.pop();
            nums2.push_back(pos);
            int neg = negative.front();
            negative.pop();
            nums2.push_back(neg);
        }
        return nums2;
        
        

        


        
    }
};