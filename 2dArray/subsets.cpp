//subsets of array
#include<bits/stdc++.h>
using namespace std;
void solve(int* arr,int n,vector<int> &temp,int i=0){
    if(i==n){
        for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
        return;
    }
    temp.push_back(arr[i]);
    solve(arr,n,temp,i+1);
    temp.pop_back();
    solve(arr,n,temp,i+1);
    return;
}
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> temp;
    solve(arr,n,temp);
    return 0;
}