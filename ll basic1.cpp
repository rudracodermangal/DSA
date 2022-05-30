#include <iostream>
using namespace std;
#include<stdlib.h>
struct Node
{
 int data;
 struct Node *next;
}*first=NULL,*second=NULL;

void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;
 
 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
void create2(int B[],int n){
    int i;
 struct Node *t,*last;
 second=(struct Node *)malloc(sizeof(struct Node));
 second->data=B[0];
 second->next=NULL;
 last=second;
 
 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=B[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
void Display(struct Node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
}


void Insert(struct Node *p,int position,int d)
{
 struct Node* t = new Node;
 t->data = d;
 int c=0;
 if(position==0){
     t->next = first;
     first=t;
 }else{
     while(c<position-1){
         p = p->next;
         c++;
     }
     t->next = p->next;
     p->next = t;
 }
 
}

void insertin_sortedlist(struct Node*p,int data){
    struct Node *t = new Node;
    struct Node *q = NULL;
    t->data = data;
    int c=0;
    if(first==NULL){
        first = t;
        
    }else{
         while(data>(p->data)){
        q=p;
        p=p->next;
        if(p==NULL){
            break;
        }
    }
    if(p==first)
 {
   t->next=first;
   first=t;
 }
 else
 {
   t->next=q->next;
   q->next=t;
 }
    }
   
}
 
void deletefromlinked_list(int position){
    struct Node *q = NULL;
    int c=0;
    struct Node *p = first;
    if(position==1){
        first = first->next;
        p->next=NULL;
        
    }else{
        for(int i=0;i<position-1;i++){
            q=p;
            p=p->next;
        }
        q->next = p->next;
        p->next = NULL;
        
    }
    delete p;
} 

void sorted_or_not(struct Node*p){
    //struct Node *q = NULL;
    bool w = true;
    int x=0;
    while(p!=NULL){
        //q=p;
        if(x>(p->data)){
            w = false;
            break;
        } 
        x = p->data;
        p=p->next;
    }
    if(w==true){
        cout<<"linked list is sorted\n";
    }else{
        cout<<"linked list is not sorted\n";
    }
}

void remove_duplicate(){
    struct Node *p=first;
    struct Node *q=p->next;
 
 while(q!=NULL)
 {
 if(p->data!=q->data)
 {
 p=q;
 q=q->next;
 }
 else
 {
 p->next=q->next;
 delete q;
 q=p->next;
 }
 }
}
void reverse_ll_with1st_appreoch(){
    struct Node* p =first;
    
}
void reverse_linked_listwith_pointer_approch(){
    struct Node *p,*q,*r;
    p = first;
    q=NULL;
    r = NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next = r;
    }
    first = q;
    
}

void concating(struct Node *p,struct Node *q){
    while(p->next!=NULL){
        p=p->next;
    }
    p->next = second;
    second=NULL;
}
void merge(struct Node *p,struct Node *q){
    struct Node *last , *third;
    if(p->data<q->data){
        last=p;
        p=p->next;
        last->next=NULL;
    }else{
        last=q;
        q=q->next;
        last->next=NULL;
    }
    while(p!=NULL&&q!=NULL){
        if(p->data<q->data){
            last->next = p;
            last=p;
            p=p->next;
            last->next=NULL;
        }else{
            last->next = q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p){
        last->next  = p;
    }
    if(q){
        last->next=q;
    }
    
}
int main()
{
 
 //int A[]={10,10,20,20,40,40,50,50};
 int A[]={10,20,30,40,50};
 create(A,5);
 int B[] = {11,33,80,90,100};
 create2(B,5);
 
 Display(second);
 cout<<endl;
 //Insert(first,0,5);
 //Insert(first,1,10);
 ///Insert(first,2,15);
 // Insert(first,3,20);
   //Insert(first,4,25);
    //Insert(first,5,30);
//insertin_sortedlist(first,75);
//deletefromlinked_list(3);
//remove_duplicate();
//reverse_linked_listwith_pointer_approch();
 Display(first);
 cout<<endl;
 merge(first,second);
 Display(first);
 
 //cout<<endl;
 //sorted_or_not(first);
 return 0;
}
