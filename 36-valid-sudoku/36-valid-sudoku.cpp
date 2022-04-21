class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //checking for rows
        for(int i=0;i<9;i++){              
            set<char> v;
            for(int j=0;j<9;j++){
                if(v.find(board[i][j])!=v.end()) return false;
                if(board[i][j]=='.') continue;
                v.insert(board[i][j]);
                
            }
        }
        //checking for columns
        for(int j=0;j<9;j++){
            set<char> v;
            for(int i=0;i<9;i++){
                if(v.find(board[i][j])!=v.end()) return false;
                if(board[i][j]=='.') continue;
                v.insert(board[i][j]);
                
            }
        }
        //checking for sub-boxes
        for (int i=0; i<9; i++) {
             set<char> v;
        for (int j = i - (i % 3); j < i - (i % 3) + 3; j++) {
            for (int k = 3 * (i % 3); k < 3 * (i % 3) + 3; k++) {
                if (v.find(board[j][k])!=v.end()) {
                    return false;
                }
                if (board[j][k]== '.') continue;
                v.insert(board[j][k]);
            }
        }
        }
        return true;
    }
};