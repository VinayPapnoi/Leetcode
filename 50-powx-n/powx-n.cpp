class Solution {
public:

    double helper(double x, long long n){
        if( x==0) return 0;
        if(n==0) return 1;

        double res = helper(x,n/2);
        res = res*res;

        if(n%2) return res*x;
        else return res;
    }
    double myPow(double x, int n) {
        if(n<0){
            
            return 1.0/helper(x,-(long long)n);
        }
        return helper(x,n);
    }
};