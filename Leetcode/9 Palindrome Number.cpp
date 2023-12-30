#define intl long long
class Solution {
public:
    bool isPalindrome(intl x) {
        intl r = 0,t=x;
        if(x<0) return false;
        while(x){
            r=r*10+(x%10);
            x/=10;
        }
        return r==t;
    }
};