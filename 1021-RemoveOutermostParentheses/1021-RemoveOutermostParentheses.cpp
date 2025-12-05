// Last updated: 12/5/2025, 5:31:18 PM
1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        int n = s.size();
5        int i=0;
6        int count = 0;
7        string ans= "";
8        while(i<n){
9            if(s[i]== '('){
10                if(count>0){
11                    ans+=s[i];
12
13                }
14                count++;
15            }
16            else{
17                count --;
18                if(count>0){
19                    ans+=s[i];
20                }
21            }
22            i++;
23        }
24        return ans;
25
26        
27}
28};
29