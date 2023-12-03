//check if array is sorted using recursion
#include<bits/stdc++.h>
using namespace std;
bool isSorted(int* arr,int n,int i){
    if(i==n){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    isSorted(arr,n,i+1);
}
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    if(isSorted(arr,n,i)){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
}