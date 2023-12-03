#include<iostream>
using namespace std;
class Node{
    Node* next;
    int data;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }    
};
