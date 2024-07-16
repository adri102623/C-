#include <iostream>
#include <vector>
using namespace std;

const vector<int> posx = {-1, 1, 0, 0};
const vector<int> posy = {0, 0, 1, -1};

void escriu(const vector<char>& cami) {
    for (int i = 0; i < cami.size(); ++i) {
        cout << cami[i];
    }
    cout << endl;
}

void dfs(vector<vector<char>>& mapa, int fila_i, int columna_i, int fila_f, int columna_f, vector<char>& cami, vector<vector<bool>>& usat) {
    if (fila_i == fila_f and columna_i == columna_f) {
        cami.push_back(mapa[fila_i][columna_i]);
        escriu(cami);
        cami.pop_back();

    } 
    else {
        for (int i = 0; i < 4; ++i) {
            int nouf = fila_i + posx[i];
            int nouc = columna_i + posy[i];
            if (nouf >= 0 and nouf < mapa.size() and nouc >= 0 and nouc < mapa[0].size() and not usat[nouf][nouc]) {
                usat[fila_i][columna_i] = true;
                cami.push_back(mapa[fila_i][columna_i]);
                dfs(mapa, nouf, nouc, fila_f, columna_f, cami, usat);
                cami.pop_back();
                usat[fila_i][columna_i] = false;
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> mapa(n, vector<char>(m));
    vector<vector<bool>> usat(n, vector<bool>(m, false));
    vector<char> cami;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mapa[i][j];
        }
    }
    int fila_i, columna_i, fila_f, columna_f;
    cin >> fila_i >> columna_i >> fila_f >> columna_f;
    usat[fila_i][columna_i] = true;
    dfs(mapa, fila_i, columna_i, fila_f, columna_f, cami, usat);

    return 0;
}
