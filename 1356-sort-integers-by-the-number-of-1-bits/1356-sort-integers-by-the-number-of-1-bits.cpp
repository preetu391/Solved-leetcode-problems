class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int, int>> p;
        for(int i=0;i<arr.size();i++){
           p.push_back(make_pair(numsetbits(arr[i]), arr[i]));
        }
        sort(p.begin(), p.end());
        vector<int> v;
        for(auto &it: p){
            v.push_back(it.second);
        }
        return v;
    }
    int numsetbits(int n){
        int s=0;
        while (n)
        {
            n &= (n - 1);
            s++;
        }
        return s;
    }
    static bool cmp(const pair<int,int> &a, const pair<int,int> &b)
         {
            return (a.second < b.second);
         }
};