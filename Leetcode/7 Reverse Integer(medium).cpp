#define ll long long int
class Solution {
public:
    ll help(ll x){
        ll r = 0;
        while(x){
            r=r*10+(x%10);
            x/=10;
        }
        return r;
    }
    ll reverse(ll x) {
        ll n = help(abs(x));
        if(n>INT_MAX || n<INT_MIN) return 0;
        if(x>=0) return n;
        else return n*(-1);
    }
};
