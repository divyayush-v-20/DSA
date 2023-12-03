#include<bits/stdc++.h>
using namespace std;
void sort012(int* arr,int n){
    int c0=0,c1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) c0++;
        if(arr[i]==1) c1++;
    }
    for(int i=0;i<c0;i++){
        arr[i] = 0;
    }
    for(int i=c0;i<c0+c1;i++){
        arr[i] = 1;
    }
    for(int i=c0+c1;i<n;i++){
        arr[i] = 2;
    }
}
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    delete[] arr;
}