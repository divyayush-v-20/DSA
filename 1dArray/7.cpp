#include<bits/stdc++.h>
using namespace std;
void solve(int* arr,int n,int x){
    sort(arr,arr+n);
    int l = 0 , h = n - 1 ;
    while(l<h){
        int s = arr[l] + arr[h];
        if(s==x){
            cout<<arr[l++]<<" "<<arr[h--]<<endl;
        }
        else if(s>x){
            h--;
        }
        else{
            l++;
        }
    }
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
    solve(arr,n,x);
    delete[] arr;
}