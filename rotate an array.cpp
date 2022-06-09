#include <bits/stdc++.h>

using namespace std;

int main(){
        int n,d;
        cin>>n>>d;
        int arr[n];
        int a;
        for(int i=0;i<n;i++){
                cin>>a;
                arr[(n-d+i)%n]=a;
        }
        
        for(int i=0;i<n;i++){
                cout<<arr[i]<<" "; 
        }
        return 0;
}
/*hackerrank left rotation problem*/
//but if we want to right rotation of an array then we have to do arr[(n-d+i+2)%n]=a;this thing
