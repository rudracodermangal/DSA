#include <iostream>

using namespace std;

void insert(int H[],int n){
    int i=n,temp;
    temp=H[i];
    while(temp>H[i/2]&&i>1){
        H[i]=H[i/2];
        i=i/2;
        
    }
    H[i]=temp;
}

int delete1(int H[],int n){
    int temp,i,j,x,val;
    val=H[1];
    x = H[n];
    H[1]=x;
    H[n]=val;
    i=1,j=2*i;
    
    while(j<n-1){
        if(H[j]<H[j+1]){
        j=j+1;
        }
        if(H[i]<H[j]){
            temp=H[i];
            H[i]=H[j];
            H[j]=temp;
            i=j;
            j=2*j;
        }else{
            break;
        }
       
    }
    return val;
}

int main()
{
    int H[]={0,10,20,30,25,5,40,35};
    for (int i = 2; i < 8; i++) {
       insert(H,i);
    }
    cout<<"deleted element is "<<delete1(H,7)<<endl;
    cout<<"deleted element is "<<delete1(H,6)<<endl;
    cout<<"deleted element is "<<delete1(H,5)<<endl;
    cout<<"deleted element is "<<delete1(H,4)<<endl;
    cout<<"deleted element is "<<delete1(H,3)<<endl;
    cout<<"deleted element is "<<delete1(H,2)<<endl;
    cout<<"deleted element is "<<delete1(H,1)<<endl;
    //cout<<"deleted element is "<<delete1(H,7)<<endl;
    for (int i = 1; i < 8; i++) {
       cout<<H[i]<<" ";
    }
    return 0;
}//10 8 9 2 4 5 7 
//40 25 35 10 5 20 30 
