#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[200];
    gets(str);
    int ans=1;
    for(int i=0;str[i];i++){
        if(str[i]==' '){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}