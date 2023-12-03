//string to integer using recursion
#include<bits/stdc++.h>
using namespace std;
void strToInt(string str,int n=0,int i=0){
    if(i==str.length()){
        cout<<n<<endl;
        return;
    }
    n = n*10+(str[i]-48);
    strToInt(str,n,i+1);
}
int main(){
    string str;
    cin>>str;
    
    strToInt(str);
}