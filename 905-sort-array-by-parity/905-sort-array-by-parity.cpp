class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        //question can be done in O(1) space and O(n) complexity. For O(1) space we have used two pointers approach
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]%2==0)
			{
				swap(nums[i],nums[j]);
				i++;
			}
        }
        return nums;
    }
};