#include<bits/stdc++.h>
using namespace std;
char fu(string str,int i){
    if(i>=str.length()){
        return -1;
    }
    if(str[i]>='A' && str[i]<='Z'){
        return str[i];
    }
    fu(str,i+1);
}
int main(){
    string str;
    cin>>str;
    int i=0;
    char a = fu(str,i);
    cout<<a<<endl;
}