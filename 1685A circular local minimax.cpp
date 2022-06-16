#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       int a[n];
        int temp;
        //int q;
        for (int i = 0; i < n; i++) {
            cin>>a[i];
            //a.push_back(q);
        }
        int ans[n];
        sort(a, a+n);
        int i=0,j=n/2,x=0,y=1;
        while(i<n/2&&j<n){
            ans[x]=a[i];
            ans[y]=a[j];
            i++;
            j++;
            x+=2;
            y+=2;
        }
        int p=0;
        if(n%2!=0){
            ans[n-1]=a[n-1];
        }
        for (int i = 0; i < n-2; i++) {
            if((ans[i]>ans[i+1])&&((ans[i+1]<ans[i+2]))||(ans[i]<ans[i+1])&&((ans[i+1]>ans[i+2]))){
                p+=1;
            }else{
                cout<<"NO\n";
                break;
            }
        }
        if(p==n-2){
            cout<<"YES\n";
            for (int i = 0; i < n; i++) {
                /* code */
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        
        }
        
    }

    return 0;
}
