// Last updated: 7/2/2025, 5:43:37 PM
class Solution {
public:
    bool isPalindrome(int x) {
        long int reverse = 0;
        long int tem = x;
        if(x<0) return false;
        while(tem!=0){
            int rem = tem%10;

            reverse = reverse *10+ rem;
            tem= tem/10;
        }
        return reverse ==x ;
        
    }
};