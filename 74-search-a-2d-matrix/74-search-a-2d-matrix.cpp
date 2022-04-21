class Solution {
    static bool bs(vector<int> &row, int t){
        int lo=0, hi=row.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(row[mid]==t){
                return true;
            }
            else if(row[mid]>t){
                hi=mid-1;
            }
            else if(row[mid]<t){
                lo=mid+1;
            }
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans;
        for(int i=0;i<matrix.size();i++){
            ans=bs(matrix[i], target);
            if(ans==true) return ans;
        }
        return ans;
    }
};