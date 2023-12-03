#include<bits/stdc++.h>
using namespace std;
int solve(int* arr,int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans ^= arr[i];
    }
    for(int i=1;i<n;i++){
        ans^=i;
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
    int ans = solve(arr,n);
    cout<<ans<<endl;
    delete[] arr;
}