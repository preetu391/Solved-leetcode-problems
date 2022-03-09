class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        map<string, vector<int>> m;
        int n=str.size();
        for(int i=0;i<n;i++){
            string s=str[i];
            sort(s.begin(),s.end());
            m[s].push_back(i);
        }
        vector<vector<string>> v;
        for(auto &it: m){
            vector<string> vec;
            for(auto &i:it.second){
                vec.push_back(str[i]);
            }
           v.push_back(vec);
        }
        return v;
    }
};