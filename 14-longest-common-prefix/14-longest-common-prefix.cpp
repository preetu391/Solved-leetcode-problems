class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string s="";
        bool ok=true;
        for(int i=0;i<200;i++)
        {
            char ch=0;
            bool ok=true;
            for(auto &st:str){
                if(i>=st.size()){ok=false;break;}
                if(ch==0)ch=st[i];
                else {
                    if(st[i]==ch)continue;
                    else{ok=false;break;}
                }
            }
            if(ok)s+=ch;else break;
        }
        return s;
    }
};