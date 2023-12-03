#include<bits/stdc++.h>
using namespace std;
void swapAlt(int* arr,int n,int x=0){
    if(x==n){
        return;
    }
    int t = arr[x];
    arr[x] = arr[x+1];
    arr[x+1] = t;
    swapAlt(arr,n,x+2);
}
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapAlt(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}