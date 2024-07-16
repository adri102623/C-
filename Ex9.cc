#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool isBipartite(vector<vector<int>>& graph, int n) {
    vector<int> colors(n, -1); // Vector de colores para cada vértice (-1 representa el color no asignado)
    queue<int> q;

    for (int i = 0; i < n; i++) {
        if (colors[i] == -1) {
            colors[i] = 0; // Asignar el primer color al vértice i
            q.push(i);

            while (!q.empty()) {
                int u = q.front();
                q.pop();

                for (int v : graph[u]) {
                    if (colors[v] == -1) {
                        colors[v] = 1 - colors[u]; // Asignar un color diferente al vértice v
                        q.push(v);
                    } else if (colors[v] == colors[u]) {
                        return false; // Si dos vértices vecinos tienen el mismo color, no es bipartito
                    }
                }
            }
        }
    }

    return true; // Todos los vértices han sido coloreados de manera bipartita
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        vector<vector<int>> graph(n);

        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }

        bool result = isBipartite(graph, n);
        if (result) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
