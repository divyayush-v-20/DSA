#include<bits/stdc++.h>
using namespace std;
void rightRotate(int* arr,int n,int p){
    for(int i=1;i<=p;i++){
        int l = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = l;
    }
}
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int p;
    cin>>p;
    rightRotate(arr,n,p);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    delete[] arr;
}