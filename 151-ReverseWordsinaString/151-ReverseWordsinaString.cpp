// Last updated: 12/10/2025, 4:13:39 PM
1class Solution {
2public:
3    string reverseWords(string s) {
4        vector <string> words;
5        stringstream ss(s);
6        string word;
7
8        while(ss >> word){
9            words.push_back(word);
10
11        }
12
13        reverse(words.begin(), words.end());
14        string result ;
15        for( auto word :words){
16            result+= word+" ";
17        }
18        if(!result.empty()){
19            result.pop_back();
20        }
21
22        
23
24        
25        return result ;
26    }
27    
28};