#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void InsertAtHead(Node* &head ,int d){
    //new node create
    Node* temp = new Node(d)
    temp -> next = head;
    head =temp;
}
void InserAtPosition( Node* &head,int position,int d)
{
    Node* temp =head;
    int cnt=1;
    while (cnt < position-1){
        temp = temp->next;
    cnt++;
    }
    Node* nodetoinsert= new Node(d);
    Nodetoinsert -> next = temp-> next;
    temp ->next= Nodetoinsert;
}
void print(Node* &head){
    //tranversing a LL
    Node* temp= head;
    while (temp!= NULL) {
 cout<< temp -> data<<"";
 temp = temp -> next;
    }
   cout<<endl;
}

int main(){
    Node* node1= new Node(10);
    cout << node1 ->data << endl;
    cout<< node1 -> next <<endl;

    //head pointed to 
    Node * head = node1;
    print (head);
    InsertAtHead( head , 12);
    print(head);
}