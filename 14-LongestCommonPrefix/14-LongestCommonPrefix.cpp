// Last updated: 12/8/2025, 2:27:51 PM
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        sort(strs.begin(), strs.end());
5        string prefix= strs[0];
6        string last= strs[strs.size()-1];
7        int i=0;
8        for( i =0; i<strs[0].size();i++){
9            
10            if(prefix[i]!=last[i]){
11                break;
12            }
13             
14
15        }
16        
17       
18    return prefix.substr(0,i);
19    }        
20    
21};