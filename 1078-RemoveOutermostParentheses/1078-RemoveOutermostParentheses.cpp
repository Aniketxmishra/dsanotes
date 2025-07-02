// Last updated: 7/2/2025, 5:42:46 PM
class Solution {
public:
    string removeOuterParentheses(string s) {
        int count =0;
        int i=0;
        int n = s.size();
        string ans= "";
        while(i<n){
            if(s[i]=='('){
                if(count >0){
                    ans+=s[i];
                }
                count++;
            }
            else{
                count--;
                if(count>0){
                    ans+=s[i];
                }
            }
            i++;
        }
        return ans;
    }
};