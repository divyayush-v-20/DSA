#include<bits/stdc++.h>
using namespace std;
int binarySearch(int* arr,int n,int x){
    int l = 0 , h = n - 1 , m ;
    while(l<h){
        m = l + (h-l)/2 ;
        if(arr[m]==x){
            return m;
        }
        else if(arr[m]>x){
            h = m - 1;
        }
        else{
            l = m + 1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<binarySearch(arr,n,x);
    delete[] arr;
}