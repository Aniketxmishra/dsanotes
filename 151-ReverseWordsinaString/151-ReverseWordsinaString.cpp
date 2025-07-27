// Last updated: 7/27/2025, 4:27:55 PM
class Solution {
public:
    string reverseWords(string s) {
        vector <string> words;
        stringstream ss(s);
        string word;

        while(ss >> word){
            words.push_back(word);

        }

        reverse(words.begin(), words.end());
        string result ;
        for( auto word :words){
            result+= word+" ";
        }
        if(!result.empty()){
            result.pop_back();
        }

        

        
        return result ;
    }
    
};