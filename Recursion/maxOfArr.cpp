#include<bits/stdc++.h>
using namespace std;
int maxArr(int* arr,int n,int i=0,int ans = INT_MIN){
    if(i==n){
        return ans;
    }
    if(arr[i]>=ans){ans = arr[i];}
    maxArr(arr,n,i+1,ans);
}
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m = maxArr(arr,n);
    cout<<m<<endl;
}