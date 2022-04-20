class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> v(r, vector<int>(c));
        int n=mat.size(), m=mat[0].size();
        if((n*m)!=(r*c)) return mat;
        vector<int> ans;
        for(int k=0;k<n;k++){
            for(int h=0;h<m;h++){
                ans.push_back(mat[k][h]);
            }
        }
        reverse(ans.begin(),ans.end());
        for(int k=0;k<r;k++){
            for(int h=0;h<c;h++){
                v[k][h]=ans.back();
                ans.pop_back();
            }
        }
        return v;
    }
};