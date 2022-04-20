class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int minx=-1, miny=-1;
        map<int, vector<int>> m;
        for(int i=0;i<points.size();i++){
            if(points[i][0]==x){
                m[abs(y-points[i][1])].push_back(i);
            }
            else if(points[i][1]==y){
                m[abs(x-points[i][0])].push_back(i);
            }
            else if((points[i][0]==x)&&(points[i][1]==y)) return i;
        }
        if(m.size()!=0){
            for(auto &it: m){
                for(auto &i: it.second){
                    return i;
                }
            }
        }
        return -1;
    }
};