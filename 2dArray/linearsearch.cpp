#include<bits/stdc++.h>
using namespace std;int main(){
    int rows,cols;
    cin>>rows>>cols;
    int arr[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    int t;
    cin>>t;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==t){
                cout<<"element found at row "<<i+1<<" column "<<j+1;
                break;
            }
        }
    }
    return 0;
}