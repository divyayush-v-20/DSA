#include<bits/stdc++.h>
using namespace std;
pair<int,int> solve(vector<vector<int>> &mat,int &target){
    pair<int,int> ans = {-1,-1};
    int rows = mat.size();
    int cols = mat[0].size();
    int s = 0, e = rows*cols - 1;
    while(s<=e){
        int m = s + (e-s)/2;
        int i = m/cols;
        int j = m%cols;
        if(mat[i][j]==target){
            ans.first = i;
            ans.second = j;
            return ans;
        }
        else if(mat[i][j]>target){
            e = m - 1;
        }
        else{
            s = m + 1;
        }
    }
}
int main(){
    vector<vector<int>> mat;
    int x;
    for(int i=0;i<3;i++){
        vector<int> row;
        for(int j=0;j<3;j++){
            cin>>x;
            row.push_back(x);
        }
        mat.push_back(row);
    }
    int target;
    cin>>target;
    pair<int,int> posi = solve(mat,target);
    cout<<posi.first<<" "<<posi.second<<endl;
}
