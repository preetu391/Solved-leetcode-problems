class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> v;
        long long int res=1;
        for(int i=0;i<n;i++){
            v.push_back(res);
            res*=(n-i);
            res/=(i+1);
        }
        v.push_back(1);
        return v;
    }
};