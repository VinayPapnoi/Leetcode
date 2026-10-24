class Solution {
public:
    long long mod=pow(10,9)+7;
    int power(long long x, long long n){
        if(x==0) return 0;
        if(n==0) return 1;
        int res = 1;
        while(n>1){
            if(n%2){
                res=(res*x)% mod;
            }
            n=n/2;
            x=(x*x)% mod;
        }
        return (res*x)% mod;
    }

    int countGoodNumbers(long long n) {
        return (1LL * power(5,(n+1)/2)*power(4,n/2) % mod);
    }
};