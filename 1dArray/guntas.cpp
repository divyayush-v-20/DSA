#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int arr[n];
    //0->n-1
    // arr[0] = 1;
    // arr[1] = 5;
    // arr[2] = 4;
    // arr[3] = 3;
    // arr[4] = 2;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}