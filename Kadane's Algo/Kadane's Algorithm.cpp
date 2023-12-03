#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int* arr,int n){

    int max = INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++){
       
        sum+=arr[i];

        if(sum>max){
            max = sum;
        }

        if(sum<0){
            sum=0;
        }

    }
    return max;

}


int main(){
    int n;
    cin>>n;
    int* arr = new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = maxSubarraySum(arr,n);
    cout<<ans;
    delete []arr;
}