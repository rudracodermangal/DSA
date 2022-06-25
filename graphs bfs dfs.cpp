#include <iostream>
#include <queue>
using namespace std;
//breath first search
void BFS(int A[][7],int start,int n){
    int i=start;
    queue<int>q;
    int visited[7]={0};
    visited[i]=1;
    cout<<i<<" ";
    q.push(i);
    while(!q.empty()){
        i=q.front();
        q.pop();
        for (int j=1;j<n;j++) {
            if(A[i][j]==1&&visited[j]==0){
                cout<<j<<" ";
                visited[j]=1;
                q.push(j);
            }
        }
    }
}

//depth first search
void DFS(int G[][7],int start,int n){
        static int visited[7]={0};
        if(visited[start]==0){
            cout<<start<<" ";
            visited[start]=1;
        for (int j=1;j<n;j++) {
            if(G[start][j]==1&&visited[j]==0){
                DFS(G,j,n);
            }
        }
        }
}

int main()
{
    int G[7][7]={{0,0,0,0,0,0,0},
                {0,0,1,1,0,0,0},
                {0,1,0,0,1,0,0},
                {0,1,0,0,1,0,0},
                {0,0,1,1,0,1,1},
                {0,0,0,0,1,0,0},
                {0,0,0,0,1,0,0}};
    BFS(G,5,7);
    cout<<endl;
    DFS(G,2,7);

    return 0;
}
