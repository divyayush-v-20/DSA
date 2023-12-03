#include<bits/stdc++.h>
using namespace std;
int count(int* arr,int n,int x){
    int ans = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            ans++;
        }
    }
    return ans;
}
int solve(int* arr,int n){
    int m = 1,ans = -1;
    for(int i=0;i<n;i++){
        int c = count(arr,n,arr[i]);
        if(c>m){
            m = c;
            ans = arr[i];
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<solve(arr,n);
    delete[] arr;
}