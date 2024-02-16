#include<bits/stdc++.h>
using namespace std;
int part(vector<int>& arr,int l,int r){
    int pivot = arr[r];
    int i = l - 1;
    for(int j=l;j<=r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}
void quickSort(vector<int>& arr,int l,int r){
    if(l<r){
        int pidx = part(arr,l,r);
        quickSort(arr,l,pidx-1);
        quickSort(arr,pidx+1,r);
    }
}
int main(){
    int n = 10;
    vector<int> arr = {10,1,4,3,6,2,9,8,5,7};
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
