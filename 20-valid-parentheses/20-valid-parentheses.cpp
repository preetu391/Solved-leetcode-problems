class Solution {
public:
    bool isValid(string str) {
        bool ok=false;
        stack<char> s;
        map<char,int> m;
        m['(']=1;
        m[')']=-1;
        m['{']=2;
        m['}']=-2;
        m['[']=3;
        m[']']=-3;
        int sum=0;
        for(int i=0;i<str.size();i++){
            if(m[str[i]]>0) s.push(str[i]);
            else{
                if(s.empty()) return false;
                sum+=m[str[i]]+m[s.top()];
                if(!sum){
                    s.pop();
                }
                else{
                    return false;
                }
            }
        }
        return s.empty();
    }
};