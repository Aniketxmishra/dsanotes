// Last updated: 1/11/2026, 3:30:28 PM
1class Solution {
2public:
3    vector<string> generateParenthesis(int n) {
4        vector<string> ans;
5        string start= "";
6        helper(ans, n, "",0,0);
7        return ans;
8    }
9        void helper(vector<string> & ans, int n, string start, int open, int close){
10            if(open==n && close==n){
11                ans.push_back(start);
12                return;
13            }
14            if(open<n){
15                string newStart = start +'(';
16                helper(ans,n,newStart, open+1,close);
17            }
18            if(close<open){
19                string newStart = start +')';
20                helper(ans,n,newStart, open, close + 1);
21            }
22            
23        }
24        
25
26        
27    
28};