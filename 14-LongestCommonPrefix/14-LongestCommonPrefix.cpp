// Last updated: 12/17/2025, 11:34:19 AM
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4       
5        sort(strs.begin(),strs.end());
6        string prefix = strs[0];
7        string last = strs[strs.size()-1];
8         int n= prefix.size();
9        int i =0;
10        for(i=0; i<n;i++){
11            if(prefix[i]!= last[i])
12            break;
13        }
14        return prefix.substr(0,i);
15
16       
17    }        
18    
19};