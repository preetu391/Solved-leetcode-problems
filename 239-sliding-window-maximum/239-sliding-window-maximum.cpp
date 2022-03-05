class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0, j=0;
        vector<int> v;
        deque<int> q;
        if(k==1){
            return nums;
        }
        while(j<nums.size()){
            while(!q.empty() && q.back()<nums[j]){
                q.pop_back();
            }
            q.push_back(nums[j]);
            if((j-i+1)<k){
                j++;
            }
            else if((j-i+1)==k){ 
                v.emplace_back(q.front());
                if(nums[i]==q.front()){
                    q.pop_front();
                }
                i++;
                j++;
            }
            
        }
        return v;
    }
};