//rotate 90 degree
#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows,cols;
    cin>>rows>>cols;
    int arr[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    int arr2[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            arr2[i][j] = arr[j][i];
        }
    }
    for(int i=0;i<rows;i++){
        swap(arr2[i][0],arr2[i][2]);
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
