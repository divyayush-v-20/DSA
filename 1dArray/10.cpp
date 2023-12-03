#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int* arr1 = new int[n1];
    int* arr2 = new int[n2];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    vector<int> ans;
    for(int i=0;i<n1;i++){
        ans.push_back(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        ans.push_back(arr2[i]);
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    delete[] arr1;
    delete[] arr2;
}