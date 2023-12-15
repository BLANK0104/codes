#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

// Graph class
class Graph {
private:
    int V; // number of vertices
    vector<int> *adj; // adjacency list

public:
    Graph(int V) {
        this->V = V;
        adj = new vector<int>[V];
    }

    // add edge to the graph
    void addEdge(int v, int w) {
        adj[v].push_back(w);
    }

    // BFS traversal
    void BFS(int s) {
        // mark all vertices as not visited
        bool *visited = new bool[V];
        for (int i = 0; i < V; i++) {
            visited[i] = false;
        }

        // create a queue for BFS
        queue<int> q;

        // mark the current node as visited and enqueue it
        visited[s] = true;
        q.push(s);

        while (!q.empty()) {
            // dequeue a vertex from queue and print it
            s = q.front();
            cout << s << " ";
            q.pop();

            // get all adjacent vertices of the dequeued vertex s
            // if an adjacent vertex has not been visited, then mark it visited and enqueue it
            for (auto i = adj[s].begin(); i != adj[s].end(); ++i) {
                if (!visited[*i]) {
                    visited[*i] = true;
                    q.push(*i);
                }
            }
        }
    }

    // DFS traversal
    void DFS(int s) {
        // mark all vertices as not visited
        bool *visited = new bool[V];
        for (int i = 0; i < V; i++) {
            visited[i] = false;
        }

        // create a stack for DFS
        stack<int> st;

        // push the current source node
        st.push(s);

        while (!st.empty()) {
            // pop a vertex from stack and print it
            s = st.top();
            st.pop();

            // mark the current node as visited
            if (!visited[s]) {
                visited[s] = true;
                cout << s << " ";
            }

            // get all adjacent vertices of the popped vertex s
            // if an adjacent vertex has not been visited, then push it to the stack
            for (auto i = adj[s].begin(); i != adj[s].end(); ++i) {
                if (!visited[*i]) {
                    st.push(*i);
                }
            }
        }
    }
};

// main function
int main() {
    // create a graph
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    // perform BFS traversal starting from vertex 2
    cout << "BFS traversal starting from vertex 2: ";
    g.BFS(2);
    cout << endl;

    // perform DFS traversal starting from vertex 2
    cout << "DFS traversal starting from vertex 2: ";
    g.DFS(2);
    cout << endl;

    return 0;
}
