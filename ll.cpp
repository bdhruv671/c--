#include<bits/stdc++.h>
using namespace std;
struct Node{
 int data;
 Node *next ;
 Node (int x){
    data = x;
    next = NULL;

 }

};

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head -> next = temp1 ;
    temp1 ->next = temp2;
    cout << temp1-> data;
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}