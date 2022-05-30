#include <iostream>
//double linked list
using namespace std;
class node{
    public:
    int data;
    node * next;
    node *prev;
    node(int d){   // create a constructor
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~node(){
        int val = this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }
};
void print(node *head){
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
//if we want to find the length of list then
int length(node *head){
    int len = 0;
    node *temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
//insetion at head 
void insertatthead(node * &head,int d){
    node *temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertattail(node *&tail,int d){
    node *temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
//now we see the code which insert at any position
void insertatanyposition(int d, int position,node * &head, node * &tail){
    node *nodetoinsert = new node(d);
    node* temp = head;
    if(position==1){
        insertatthead(head,d);
        return;
    }
   // temp->next->prev = nodetoinsert;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
     if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
    temp->next->prev = nodetoinsert;
}
//now we learn how to delete a node
void deletetionofnode(int position,node * &head){
    if(position==1){
        node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next=NULL;
        delete temp;
    }
}
int main()
{
    node * node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    print(head);
    //cout<<length(head);
    //insertatthead(head,20);
    //print(head);
    //insertatthead(head,30);
    //print(head); //as we see that code is working
    insertattail(tail,20);
    print(head);
    cout<<"head "<<head->data<<" tail "<<tail->data<<endl;
    insertattail(tail,30);
    print(head);//as we see that code is working properly here 
    cout<<"head "<<head->data<<" tail "<<tail->data<<endl;
    insertatanyposition(130,4,head,tail);
    print(head);//as we see that our code is working smoothly
    cout<<"head "<<head->data<<" tail "<<tail->data<<endl;
    insertatanyposition(190,5,head,tail);
    print(head);//as we see that our code is working smoothly
    cout<<"head "<<head->data<<" tail "<<tail->data<<endl;
    insertatanyposition(150,6,head,tail);
    print(head);//as we see that our code is working smoothly
    cout<<"head "<<head->data<<" tail "<<tail->data<<endl;
    

    return 0;
}
