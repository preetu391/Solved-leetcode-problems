class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>>pq;
    int ele,max_ele;
    KthLargest(int k, vector<int>& nums) {
        ele = k;
        int i;
        for(auto x : nums){
            pq.push(x);
            if(pq.size() > k){
                pq.pop();
            }
            max_ele = pq.top();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > ele){
            pq.pop();
        }
        max_ele = pq.top();
        return max_ele;
    }
};


/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */