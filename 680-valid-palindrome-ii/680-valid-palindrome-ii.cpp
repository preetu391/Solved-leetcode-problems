class Solution {
public:
    bool validPalindrome(string s) {
       int i=0, j=s.size()-1, c=0, c1=0;
        while(i<j){
            if(s[i]==s[j]){
                i++; j--;
            }
            else{
                c++;
                i++;
            }
            if(c>1) break;
        }
        i=0, j=s.size()-1, c1=0;
        while(i<j){
            if(s[i]==s[j]){
                i++; j--;
            }
            else{
                c1++;
                j--;
            }
            if(c1>1) break;
        }
        if(c1==1||c==1) return true;
        if(c1==0||c==0) return true;
        return false;
    }
};