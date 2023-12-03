#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n,int i){
    if(i>sqrt(n)){
        return true;
    }
    if(n%i==0){
        return false;
    }
    isPrime(n,i+1);
}
int main(){
    int n;
    cin>>n;
    int i=2;
    if(isPrime(n,i)){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
}