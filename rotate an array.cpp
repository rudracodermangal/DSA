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
