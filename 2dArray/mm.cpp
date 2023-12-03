#include<bits/stdc++.h>
using namespace std;

int main(){
	int r1,c1,r2,c2;
	cin >> r1 >> c1;
	int arr1[r1][c1];
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cin >> arr1[i][j];
		}
	}
	cin >> r2>>c2;
	int arr2[r2][c2];
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			cin >> arr2[i][j];
		}
	}
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			int ans=0;
			for(int k=0;k<c1;k++){
				ans+=(arr1[i][k]*arr2[k][j]);
			}
			cout << ans <<" ";
	}
	cout << endl;
}
}