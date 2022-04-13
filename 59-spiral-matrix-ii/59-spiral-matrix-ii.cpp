class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int>(n));
        int n2=1;
        int rowstart=0, colstart=0, rowend=n-1, colend=n-1;
        while(rowstart<=rowend&&colstart<=colend){
            for(int i=colstart;i<=colend;i++){
            v[rowstart][i]=n2++;
           }
           rowstart++;
           for(int i=rowstart;i<=rowend;i++){
            v[i][colend]=n2++;
           }
           colend--;
           if(rowstart<=rowend){
               for(int i=colend;i>=colstart;i--){
                 v[rowend][i]=n2++;
               }
             rowend--;
           }
           if(colstart<=colend){
               for(int i=rowend;i>=rowstart;i--){
                   v[i][colstart]=n2++;
              }
               colstart++;
           }
        }
        return v;
    }
};