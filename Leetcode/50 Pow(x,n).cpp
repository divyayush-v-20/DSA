class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1.0;
        if(n==1) return x;
        if(n==-1) return 1/x;
        double tmp = myPow(x,n/2);
        if(n%2==0) return tmp*tmp;
        if(n%2==1) return tmp*tmp*x;
        else return tmp*tmp/x;
    }
};
