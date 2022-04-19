class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<nums1.size();i++){
            m[nums1[i]]++;
        }
        for(auto &it:nums2){
            if(m.find(it)!=m.end() && m[it]>0){
                ans.push_back(it);
                m[it]--;
            }
        }
        return ans;
    }
};