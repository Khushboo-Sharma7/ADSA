#include <iostream>
#include <vector>
#include <unordered_map>

class Graph {
private:
    std::unordered_map<int, std::vector<int>> adjList;

public:
    // Function to add a vertex to the graph
    void addVertex(int v) {
        // If vertex v is not already present in the graph, add it
        if (adjList.find(v) == adjList.end()) {
            adjList[v] = std::vector<int>();
        }
    }

    // Function to add an edge between vertices u and v
    void addEdge(int u, int v) {
        // Add vertex v to the adjacency list of vertex u
        adjList[u].push_back(v);
        // Add vertex u to the adjacency list of vertex v (for undirected graph)
        adjList[v].push_back(u);
    }

    // Function to print the adjacency list representation of the graph
    void printGraph() {
        for (const auto& pair : adjList) {
            std::cout << "Vertex " << pair.first << " is connected to:";
            for (int v : pair.second) {
                std::cout << " " << v;
            }
            std::cout << std::endl;
        }
    }
    /* void deleteNode(const &string v){
        int index=getIndex(v);
        if(index==-1){
            cout <<v<<" is not present in the graph"<<endl;
        }
        else{
            nodes.erase(nodes.begin()+index);
            delete[] graph[index];
            for(int i=index;i<nodeCount-1;++i)
            {
                graph[i]=graph[i+1];
            }
            nodeCount--;
        }

    } */
};

int main() {
    Graph g;

    // Add vertices to the graph
    g.addVertex(0);
    g.addVertex(1);
    g.addVertex(2);
    g.addVertex(3);

    // Add edges to the graph
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);

    // Print the graph
    std::cout << "Graph representation (Adjacency List):" << std::endl;
    g.printGraph();

    return 0;
}
