#include<iostream>
using namespace std;
int prime(int n){
    int flag=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag++;
        }
    }if(flag!=0 || n<=1){
        return 0;
    }else{
        return 1;
    }
}
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=2;i<=n;i++){
        if(prime(i)){
            cnt++;
        }
    }cout<<cnt;
    return 0;
}