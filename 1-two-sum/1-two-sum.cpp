class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,vector<int>> m1;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            m1[nums[i]].push_back(i);
        }
        for(auto it: nums){
           int cnt= target-it;
           if(m1[cnt].size()==0){
               continue;
           }
            else{
                if(cnt!=it){
                    v.push_back(m1[it][0]);
                    v.push_back(m1[cnt][0]);
                }
                else{
                    if(m1[cnt].size()>=2){
                         v.push_back(m1[it][0]);
                         v.push_back(m1[cnt][1]);
                    }
                    else{
                        continue;
                    }
                }
                return v;
            }
        }
        return v;
    }
};