#include<iostream>
using namespace std;
int length(char* str){
    int c=0;
    for(int i=0;str[i]!='\0';i++){
        c++;
    }return c;
}
void isPalindrome(char* str){
    int n=length(str);
    int l=0,h=n-1,flag=0;
    while(l<=h){
        if(str[l]!=str[h]){
            flag++;
        }
        l++;h--;
    }if(flag){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
int main(){
    char str[52];
    cin>>str;
    isPalindrome(str);
    return 0;
}