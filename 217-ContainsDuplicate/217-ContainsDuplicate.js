// Last updated: 7/2/2025, 5:43:07 PM
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let seen = new Set();

    for(num of nums){
        if (seen.has(num)){
            return true
        }
        seen.add(num);
    }
     
    

 
    return false;
}
    
    
