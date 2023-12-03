#include<iostream>
using namespace std;
int max(int a ,int b){
    int ans=(a>b)?a:b;
    return ans;
}
int gcd(int a,int b){
    int l=max(a,b);
    int ans;
    for(int i=1;i<=l;i++){
        if(a%i==0 && b%i==0){
            ans=i;
        }
    }return ans;
}
int lcm(int a ,int b){
    int x=gcd(a,b);
    int ans=(a*b)/x;
    return ans;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<"GCD= "<<gcd(n1,n2)<<endl;
    cout<<"LCM= "<<lcm(n1,n2)<<endl;
    return 0;
}