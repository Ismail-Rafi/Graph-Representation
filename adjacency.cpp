#include<bits/stdc++.h>
using namespace std;
vector<int>graph[5];

print(vector<int>graph[5],int n){
    cout << "graph is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<i<<"-->";
        for(int j=0;j<graph[i].size();j++){
            cout<<graph[i][j]<<' ';
        }
        cout<<endl;
    }

}

int main(){
int nodes,edge;
cin>>nodes>>edge;
for(int i=0;i<edge;i++){
    int u,v;
    cin>>u>>v;
    graph[u].push_back(v);
    graph[v].push_back(u);
}
 print(graph,nodes);


}


