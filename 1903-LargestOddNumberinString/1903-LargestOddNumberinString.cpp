// Last updated: 12/17/2025, 10:59:06 AM
1class Solution {
2public:
3    string largestOddNumber(string num) {
4        int n = num.length();
5        for(int i= n-1;i>=0; i--){
6            if(num[i]%2!=0){
7                return num.substr(0,i+1);
8            }
9        }
10        return "";
11
12        
13
14        
15    }
16};