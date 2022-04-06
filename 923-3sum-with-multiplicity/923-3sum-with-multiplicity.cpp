class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<long int, long int> freq;
        int mod=1e9+7;
        long int res=0;
        for(auto &it: arr){
            freq[it]++;
        }
        for(int i=0;i<=100;i++){
            for(int j=i;j<=100;j++){
                int k=target-i-j;
                if(k<j) break;
                if(freq[i]==0 || freq[j]==0 || freq[k]==0) continue;
                if(i==j&&j==k){
                    res+=(freq[i]*(freq[i]-1)*(freq[i]-2))/6;
                }
                else if(i<j&&j<k){
                    res+=freq[i]*freq[j]*freq[k];
                }
                else if(i==j){
                    res+=((freq[i]*(freq[i]-1))/2)*freq[k];
                }
                else if(j==k){
                    res+=((freq[j]*(freq[j]-1))/2)*freq[i];
                }
            }
        }
        return res%mod;
    }
};