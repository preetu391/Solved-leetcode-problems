class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> pn(n);
        for(int i=0;i<n;i++){
            pn[i].resize(i+1);
            pn[i][0] = pn[i][i] = 1;
            for(int j=1;j<i;j++){
                pn[i][j]=pn[i-1][j]+pn[i-1][j-1];
            }
        }
        return pn;
    }
};