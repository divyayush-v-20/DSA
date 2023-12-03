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
int bruteforce(int* arr,int n){   
    // O(n^2)
    int ans = -1;
    for(int i=0;i<n;i++){
        if(count(arr,n,arr[i])==1){
            ans = arr[i];
        }
    }
    return ans;
}
int optimised(int* arr,int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans ^ arr[i];
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
    int ans = bruteforce(arr,n);
    int ans2 = optimised(arr,n);
    cout<<ans<<endl;
    cout<<ans2<<endl;
    delete[] arr;
}