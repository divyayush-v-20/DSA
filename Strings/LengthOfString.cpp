#include<iostream>
using namespace std;
int main(){
    char str[52];
    cin>>str;
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    cout<<"Length Of String is "<<count<<endl;
    return 0;
}