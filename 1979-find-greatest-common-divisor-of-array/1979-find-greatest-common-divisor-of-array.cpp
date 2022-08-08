class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        while(nums[0]!=nums[n-1]){
            if(nums[0]!=nums[n-1]){
                if(nums[0]>nums[n-1]){
                    nums[0]=nums[0]-nums[n-1];
                }else{
                    nums[n-1]=nums[n-1]-nums[0];
                }
            }
        }
        return nums[n-1];
    }
};