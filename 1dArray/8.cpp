#include<bits/stdc++.h>
using namespace std;
int missingElement(int* arr,int n){
    int p = 0;
    for(int i=1;i<=n;i++){
        p+=i;
    }
    for(int i=0;i<n;i++){
        p-=arr[i];
    }
    return p;
}
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = missingElement(arr,n);
    cout<<ans<<endl;
    delete[] arr;
}