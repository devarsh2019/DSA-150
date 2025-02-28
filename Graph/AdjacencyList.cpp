#include<iostream>
#include<vector>
using namespace std;
//Adjacency List used to store the graph with the space complexity O(E)
void addedge(vector<vector<int>>& graph , int source,int destination)
{
   graph[source].push_back(destination);
   graph[destination].push_back(source);
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
int main()
{
    int V=3;
   vector<vector<int>> graph(V);
  addedge(graph,0,1);
  addedge(graph,2,0);
  addedge(graph,1,2);

  cout << "Adjacency List Representation:" << endl;
  displayAdjList(graph);

  return 0;
}