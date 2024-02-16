#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& arr,int l,int mid,int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    int arr1[n1];
    int arr2[n2];
    for(int x=0;x<n1;x++){
        arr1[x] = arr[l+x];
    }
    for(int x=0;x<n2;x++){
        arr2[x] = arr[mid+x+1];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(arr1[i]>arr2[j]){
            arr[k] = arr2[j];
            j++;
        }
        else{
            arr[k] = arr1[i];
            i++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = arr2[j];
        j++;
        k++;
    }
}
void mergeSort(vector<int>& arr,int l,int r){
    if(l>=r) return;
    int mid = l+(r-l)/2;
    mergeSort(arr,0,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
int main(){
    // int n;
    // cin>>n;
    // vector<int> arr(n);
    // for(int i=0;i<n;i++) cin>>arr[i];
    int n = 10;
    vector<int> arr = {10,1,4,3,6,2,9,8,5,7};
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
