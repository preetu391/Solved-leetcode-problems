// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
int MaxGold(vector<vector<int>>&matrix){
   int n=matrix.size();
    int m=matrix[0].size();
    int mx=0;
    if(m==1){
        if(matrix[0][0]==-1) return 0;
        mx=matrix[0][0];
        for(int i=1;i<n;i++){
            if(matrix[i][0]==-1) return mx;
            else{
                matrix[i][0]+=matrix[i-1][0];
                mx=max(matrix[i][0], mx);
            }
        }
    }
    else{
        for(int i=0;i<m;i++){
        mx=max(mx, matrix[0][i]);
      }
       for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1) continue;
            else if(j==0){
                if(max(matrix[i-1][j], matrix[i-1][j+1])==-1) matrix[i][j]=-1;
                else matrix[i][j]+=max(matrix[i-1][j], matrix[i-1][j+1]);
            }
            else if(j==m-1){
                if(max(matrix[i-1][j], matrix[i-1][j-1])==-1) matrix[i][j]=-1;
                else matrix[i][j]+=max(matrix[i-1][j], matrix[i-1][j-1]);
            }
            else{
                if(max(matrix[i-1][j], max(matrix[i-1][j+1], matrix[i-1][j-1]))==-1) matrix[i][j]=-1;
                else matrix[i][j]+=max(matrix[i-1][j], max(matrix[i-1][j+1], matrix[i-1][j-1]));
            }
           mx=max(mx, matrix[i][j]);
        }
         
    }
    }
    
    return mx;
}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int m, n;
		cin >> m >> n;
		vector<vector<int>>matrix(m, vector<int>(n, 0));
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++)
				cin >> matrix[i][j];
		}
		Solution obj;
		int ans = obj.MaxGold(matrix);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends