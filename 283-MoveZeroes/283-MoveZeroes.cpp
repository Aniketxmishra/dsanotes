// Last updated: 7/2/2025, 5:43:00 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        queue<int> q;
        int n= nums.size();
        for( int num: nums){
            if (num!=0){
                q.push(num);
            }
        }
        for(int num: nums){

            if(num==0){
                q.push(num);
            }
        }

        
        int index = 0;
        while (!q.empty()) {
          nums[index++] = q.front();
          q.pop();

        }
        
        
            
        

        
    }
};