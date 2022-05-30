#include <iostream>
using namespace std;
void insert();  
void delete1();  
void show();

int queue[70],n=70, front = - 1, rear = - 1;
int main()
{
    
    //cin>>n; //the size of queue
    int q;
     //the operation which we have to made
    while(q!=4){ 
        cin>>q;
    switch(q){
       case 1: 
       insert();
       break;
       case 2:
       delete1();
       break;
       case 3:
       show();
       break;
       case 4:
       exit(0);
       break;
       default:
       cout<<"enter a valid choice\n";
    }
    }

    return 0;
}

void insert(){
    if(rear==n-1){
        cout<<"queue is full\n";
        return;
    }else{
        int data;
        cin>>data;
        if(rear==-1 && front==-1){
            rear=front=0;
        }else{
            rear+=1;
        }
        queue[rear]=data;
        cout<<("value inserted\n");
    }
}

void delete1(){
    if(front==-1||front>rear){
        cout<<"queue is underflow\n";
        return;
    }else{
        int e = queue[front];
        if(front==rear){
            front=-1;
            rear=-1;
        }else{
            front+=1;
            
        }
        cout<<"element is deleted "<<e<<endl;
    }
}

void show(){
    if(front==-1||front>rear){
        cout<<"queue is underflow\n";
        return;
    }else{
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
        cout<<"element is displayed\n";
    }
}
