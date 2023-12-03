//factorial using recursion
#include<bits/stdc++.h>
using namespace std;
int fact(int n,int ans){
    if(n==0){
        return ans;
    }
    ans*=n;
    fact(n-1,ans);
}
int main(){
    int n;
    cin>>n;
    int ans = 1;
    cout<<fact(n,ans);
}