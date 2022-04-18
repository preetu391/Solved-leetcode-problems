class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> v;
        int cal=0;
        for(int i=0;i<nums.size();i++){
            cal=target-nums[i];
            if(m.find(cal)!=m.end()){
                v.push_back(i);
                v.push_back(m[cal]);
                return v;
            }
            m[nums[i]]=i;
        }
        return {};
    }
};