//check palindrome using recursion
#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(int n,int rev,int tmp){
    if(tmp==0){
        return n==rev;
    }
    rev = rev*10+(tmp%10);
    checkPalindrome(n,rev,tmp/10);
}
int main(){
    int n;
    cin>>n;
    int rev = 0;
    int tmp = n;
    bool c = checkPalindrome(n,rev,tmp);
    if(c){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
}