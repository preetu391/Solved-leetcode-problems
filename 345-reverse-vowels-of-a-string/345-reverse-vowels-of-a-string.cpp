class Solution {
public:
    bool isvowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }
    string reverseVowels(string s) {
        char temp;
        int i=0,j=s.length()-1;
        while(i<j){
            if(isvowel(s[i])&&isvowel(s[j])){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;
                j--;
            }
            else if(isvowel(s[i])){
                j--;
            }
            else if(isvowel(s[j])){
                i++;
            }
            else{
                i++;
                j--;
            }
        }
        return s;
    }
};