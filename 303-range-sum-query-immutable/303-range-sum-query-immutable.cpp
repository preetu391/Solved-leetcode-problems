class NumArray {
private:
    // to save the cache result, data[i] means the sum of nums[0..i]
    // another way is to use data[i] to store the sum of nums[0..(i-1)],
    // so that we can avoid left - 1 (which could be -1 -- invalid) in the sumRange() function.
    vector<int> data; 
public:
    NumArray(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            data.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        // Time: O(1), Space: O(n), we are exchanging space complexity for time complexity
        // Intuition: prefix sum is a pretty important preprocessing strategy to speed up
        // It follows the inclusion and exclusion principle.
        if (left == 0)
            return data[right];
        return data[right] - data[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */