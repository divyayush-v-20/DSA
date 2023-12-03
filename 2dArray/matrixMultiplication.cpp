#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows1,cols1,rows2,cols2;
    cin>>rows1>>cols1;
    int m1[rows1][cols1];
    cin>>rows2>>cols2;
    int m2[rows2][cols2];
    if(rows1!=cols2){
        cout<<"multiplication can't be done";
    }
    else{
        for(int i=0;i<rows1;i++){
            for(int j=0;j<cols1;j++){
                cin>>m1[i][j];
            }
        }
        for(int i=0;i<rows2;i++){
            for(int j=0;j<cols2;j++){
                cin>>m2[i][j];
            }
        }
        int ans[rows1][cols2];
        for(int i=0;i<rows1;i++){
            for(int j=0;j<cols2;j++){
                ans[i][j] = 0;
                for(int k=0;k<cols1;k++){
                    ans[i][j]+=(m1[i][k]*m2[k][j]);
                }
            }
        }
        for(int i=0;i<rows1;i++){
            for(int j=0;j<cols2;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}