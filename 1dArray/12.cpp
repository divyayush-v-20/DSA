#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int* arr,int n){
    vector<int> ans;
    for(int i=0;i<n;i++){
        bool flag = false;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                flag = true;
            }
        }
        if(flag){
            ans.push_back(arr[i]);
        }
    }
    if(ans.size()==0){
        return {-1};
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> duplicates = solve(arr,n);
    
    for(int i=0;i<duplicates.size();i++){
        cout<<duplicates[i]<<" ";
    }
    delete[] arr;
}