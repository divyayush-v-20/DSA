#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n,int i=0) {
    for(int i=0;i<=30;i++){
        if(pow(2,i)==n){
            return true;
        }
    }        
    return false;
}
int main(){
    int n=15;
    if(isPowerOfTwo(n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}