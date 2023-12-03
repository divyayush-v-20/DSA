//sum of array using recursion
#include<bits/stdc++.h>
using namespace std;
int sumArr(int* arr,int n,int i=0,int ans = 0){
    if(i==n){
        return ans;
    }
    ans+=arr[i];
    sumArr(arr,n,i+1,ans);
}
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sumArr(arr,n);
}