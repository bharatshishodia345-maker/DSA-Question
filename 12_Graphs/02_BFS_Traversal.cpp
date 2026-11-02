#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void bfs(int start, vector<vector<int>>&adj,vector<bool>& visited){
	queue<int>q;

	q.push(start);
	visited[start] = true;

	while(!q.empty()){
		int levelSize = q.size();

		for(int i = 0;i<levelSize;i++){
			int node = q.front();
			q.pop();

			cout <<node<<" ";

			for(int j = 0;j<adj.size();j++){
				if(adj[node][j] == 1 && !visited[j]){
					visited[j] = true;
					q.push(j);
				}
			}
		}
		cout<<"\n";
	}
}

int main(){
	int n,e;
	cin>>n>>e;
	vector<vector<int>>adj(n,vector<int>(n,0));

	for(int i =0;i<e;i++){
		int u,v;
		cin>>u>>v;

		adj[u][v] = 1;
		adj[v][u] = 1;
	}
	int start;
	cin>>start;

	vector<bool>visited(n,false);
	bfs(start,adj,visited);
	return 0;
}