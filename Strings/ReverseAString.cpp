#include<iostream>
using namespace std;
int main(){
    char str[52];
    cin>>str;
    int c=0;
    for(int i=0;str[i]!='\0';i++){
        c++;
    }
    int l=0,h=c-1;
    while(l<=h){
        int t= str[l];
        str[l]=str[h];
        str[h]=t;
        l++;h--;
    }
    cout<<str;
    return 0;
}