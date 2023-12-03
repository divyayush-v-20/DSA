//linear search using recursion
#include<bits/stdc++.h>
using namespace std;
int present(int* arr,int n,int x,int i){
    if(i==n){
        return -1;
    }
    if(arr[i]==x){
        return i;
    }
    present(arr,n,x,i+1);
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
    int i=0;
    if(present(arr,n,x,i)==-1){
        cout<<"not present"<<endl;
    }
    else{
        cout<<"present at index "<<present(arr,n,x,i)<<endl;
    }
}