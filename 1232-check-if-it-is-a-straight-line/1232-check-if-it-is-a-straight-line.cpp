class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        if(c.size()==2) return true;
        int dy=(c[1][1]-c[0][1]), dx=(c[1][0]-c[0][0]);
        for(int i=1;i<c.size()-1;i++){
            int y=c[i+1][1]-c[i][1], x=c[i+1][0]-c[i][0];
            if(dy*x!=dx*y) return false;
        }
        return true;
    }
};