#include<bits/stdc++.h>
using namespace std;
int findkey(string str,char key,int i=0,int ans = 0){
    if(i==str.length()){
        return ans;
    }
    if(str[i]==key){
        ans++;
    }
    return findkey(str,key,i+1,ans);
}
int main(){
    string str;
    cin>>str;
    char key;
    cin>>key;
    cout<<findkey(str,key);
}

