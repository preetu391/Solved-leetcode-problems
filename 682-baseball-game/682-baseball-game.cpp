class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> v;
        for(auto &it: ops){
            if(it=="D"){
                v.push_back(2*v.back());
            }
            else if(it=="C"){
                v.pop_back();
            }
            else if(it=="+"){
                int x = v.back();
                int y = *(&v.back()-1);
                v.push_back(x+y);
            }
            else{
                v.push_back(stoi(it));
            }
        }
        int sum=0;
        for(auto &i:v){
            sum+=i;
        }
        return sum;
    }
};