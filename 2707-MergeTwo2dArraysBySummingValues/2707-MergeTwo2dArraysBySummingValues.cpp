// Last updated: 7/2/2025, 5:42:30 PM
using namespace std;
class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {

        map<int, int> sum;
        for( auto key : nums1){
            sum[key[0]] = key[1];
        }
        for(auto key : nums2){
            sum[key[0]] +=key[1];
        }

        vector<vector<int>> mergeArr;
        for( auto pair : sum){
            mergeArr.push_back({pair.first, pair.second});
        }

        return mergeArr;



        


        }



        
        
    
    
};