#include<bits/stdc++.h>
using namespace std;
void reverse(int* arr,int n){
    int l = 0 , h = n - 1 ;
    while(l<h){
        swap(arr[l],arr[h]);
        l++;
        h--;
    }
}
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    delete[] arr;
}