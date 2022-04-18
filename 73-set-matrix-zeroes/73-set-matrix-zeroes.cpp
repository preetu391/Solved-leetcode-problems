class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size(), m=matrix[0].size(), col=1; //the col variable is defined so as to avoid the clash on the first cell of the matrix as it is commom to both dummy in-place hash tables 
        for(int i=0;i<n;i++){
            if(matrix[i][0]==0)col=0; //it will only be set to zero when a 0 is encountered corresponding to a column
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=matrix[0][j]=0;
                }
            }
        }
        //The first matrix traversal was to create the hash tables and the second one below is to update the values in the matrix according to the hash table
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
            }
            if(col==0)matrix[i][0]=0; //clash avoided as column that particular column will only be updated when col is 0 otherwise values will remain intact 
        }
        //the reason we were able to use in-place hashing in this question was because ultimately 0 in a cell will make that particular row or column 0. Hence we could use the first row and column as dummy hash tables and also didn't have to store the values elsewhere
    }
};