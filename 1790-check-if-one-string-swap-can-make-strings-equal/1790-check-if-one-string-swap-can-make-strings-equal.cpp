class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;
        else{
            for(int i=0;i<s1.size();i++){
                for(int j=i;j<s1.size();j++){
                    string s=s1;
                    swap(s[i],s[j]);
                    if(s==s2) return true;
                }
            }
            for(int i=0;i<s2.size();i++){
                for(int j=i;j<s2.size();j++){
                    string s=s2;
                    swap(s[i],s[j]);
                    if(s==s1) return true;
                }
            }
            return false;
        }
        return false;
    }
};