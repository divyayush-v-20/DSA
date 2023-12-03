#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int bin,int ans = 0,int i=0){
    if(!bin){
        return ans;
    }
    ans += (bin%10)*pow(2,i);
    binaryToDecimal(bin/10,ans,i+1);
}
int main(){
    int bin;
    cin>>bin;
    int dec = binaryToDecimal(bin);
    cout<<dec<<endl;
}