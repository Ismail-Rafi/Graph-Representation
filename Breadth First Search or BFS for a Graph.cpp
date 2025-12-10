#include<bits/stdc++.h>
using namespace std;

vector<int>graph[100];
bool visited[100];
int dist[100];
void bfs(int start){
   queue<int>q;
   q.push(start);
   visited[start]= true;
   dist[start]=0;

   cout<<" bfs order: ";

   while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";

    for(int i=0;i<graph[node].size();i++){
        int next=graph[node][i];

        if(!visited[next]){
            visited[next]=true;
            dist[next]=dist[node]+1;
            q.push(next);
        }
    }
    cout<<endl;
   }



}



int main(){
int nodes,edge,start;
cin>>nodes>>edge>>start;
for(int i=1;i<=edge;i++){
    int u,v;
    cin>>u>>v;
    graph[u].push_back(v);
    graph[v].push_back(u);
}
 bfs(start);

 cout<<"distance from source: "<<start<<endl;
 for(int i=1;i<=nodes;i++){
    cout<<"distance of "<<i<<" id "<<dist[i]<<endl;
 }


}
