#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[200];
    gets(str);
    int max = INT_MIN;
    int min = INT_MAX;
    string longest;
    string shortest;
    string mx="";
    string mn="";
    int w1=0;
    int w2=0;
    for(int i=0;str[i];i++){
        w1++;
        w2++;
        mx+=str[i];
        mn+=str[i];
        if(str[i]==' '){
            if(w1>=max){
                max = w1;
                longest=mx;
            }
            mx="";
            w1=0;
            if(w2<=min){
                min=w2;
                shortest = mn;
            }
            w2=0;
            mn="";
        }
    }

    cout<<"longest word : "<<longest<<endl<<"shortest word : "<<shortest;
    return 0;
}