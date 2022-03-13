class Solution {
public:
    int findMin(vector<int>& nums) {
        //when array is not rotated 
        if(nums[0]<nums[nums.size()-1]) return nums[0];
        
        // when the array is rotated
        int start=0, end=nums.size()-1, mid, ans=INT_MAX;
        
        if(nums.size()==1) return nums[0];
        else if(nums.size()==2) return min(nums[0], nums[1]);
        while(start<=end){
            mid=start+(end-start)/2;
            int prev=(mid+nums.size()-1)%nums.size();
            int next=(mid+1)%nums.size();
            ans=nums[mid];
            if(nums[mid]<nums[prev]&&nums[mid]<nums[next]){
                return nums[mid];
            }
            else if(mid!=0&& nums[mid]<=nums[end]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};