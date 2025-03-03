#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void addedge(vector<vector<int>>& graph , int s , int d)
{
   graph[s].push_back(d);
   graph[d].push_back(s);
}
void displayAdjList(vector<vector<int>>& graph) {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << ": "; 
        for (int j : graph[i]) {
            cout << j << " "; 
        }
        cout << endl; 
    }
}
vector<int> bfsgraph(int V, vector<vector<int>>& graph)
{
       int* visit = new int[V]();
       vector<int> bfsresult;
       queue<int> q;
       visit[1] =1;
       q.push(1);
       while(!q.empty())
       {
        int node = q.front();
        q.pop();
        bfsresult.push_back(node);
        for(int n : graph[node])
        {
            if(!visit[n])
            {
                visit[n] =1;
                q.push(n);
            }
        }

       }
       delete[] visit;
       return bfsresult;
};
int main()
{
    int V=10;
    vector<vector<int>> graph(V);
    addedge(graph,1,2);
    addedge(graph,1,6);
    addedge(graph,2,3);
    addedge(graph,2,4);
    addedge(graph,4,5);
    addedge(graph,6,7);
    addedge(graph,6,9);
    addedge(graph,7,8);
    cout << "Adjacency List Representation:" << endl;
    displayAdjList(graph);
    vector<int> bfsResult = bfsgraph(10, graph); 
    cout << "BFS Traversal: ";
    for (int node : bfsResult) {
        cout << node << " ";
    }
    cout << endl;

}