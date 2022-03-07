class Solution {
    
public:
    long long minimalKSum(vector<int>& v, int k) {
        set<int>st(v.begin(),v.end());
        long long ans=0;
        for(auto &a:st)
        {
            if(a<=k)
            {
                k++;
                ans+=a;
            }
        }
        long long kkk=k;
        long long kk=(kkk*(kkk+1)/2);
        ans=kk-ans;
        return ans;
    }
};