// Last updated: 7/2/2025, 5:43:09 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> count;
        for(int num: nums){
            count[num]++;
        }
        int n= nums.size();
        int majority= n/2;
        for(const auto &pair : count){
            if(pair.second>majority){
                return pair.first;
            }
        }
        return -1;
    }
};