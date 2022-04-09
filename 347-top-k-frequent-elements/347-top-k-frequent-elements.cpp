class Solution {
    private:
      static bool cmp(const pair<int,int> &a,const pair<int,int> &b){
        return a.second>b.second;
    }
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto &it:m){
          v.push_back({it.first,it.second});
        }
        sort(v.begin(), v.end(), cmp);
        vector<int> s;
        for(int i=0;i<k;i++){
           s.push_back(v[i].first);
        }
        return s;
    }
};