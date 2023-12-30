class Solution {
public:
    int sumDigits(int n){
        int ans=0;
        while(n){
            ans+=pow(n%10,2);
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        int s=sumDigits(n);
        for(int i=1;i<=7;i++){
            if(s==1) return true;
            s=sumDigits(s);
        }
        return false;
    }
};