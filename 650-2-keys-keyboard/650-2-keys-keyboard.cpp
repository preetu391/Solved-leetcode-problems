class Solution {
public:
    int minSteps(int n) {
        int ans=0;
        while(n%2==0){
            ans+=2;
            n/=2;
        }
        while(n%3==0){
            ans+=3;
            n/=3;
        }
        for(int i=5;i*i<=n;i+=6){
            while(n%i==0){
                ans+=i;
                n/=i;
            }
            while(n%(i+2)==0){
                ans+=(i+2);
                n/=(i+2);
            }
        }
        if(n>3) ans+=n;
        return ans;
    }
};