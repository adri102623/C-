#include <iostream>
#include <vector>
using namespace std;
#include <queue>

#define p2 pair<int,int>
#define p pair<int,p2>

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<char>> taula(n,vector<char>(m,'.'));
    queue<p> q;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j) cin >> taula[i][j];
    }
    int x,y;
    cin >> x >> y;
    q.push({0,{x-1,y-1}});
    int max = 0;
    while(!q.empty()){
        p2  p22 = q.front().second;
        int d = q.front().first;
        q.pop();
        if(p22.first >= 0 and p22.first < n and p22.second >= 0 and p22.second < m and taula[p22.first][p22.second] != 'X') {
            if(taula[p22.first][p22.second] == 't' and d > max) max = d;
            taula[p22.first][p22.second] = 'X';
            q.push({d+1,{p22.first-1,p22.second}});
            q.push({d+1,{p22.first+1,p22.second}});
            q.push({d+1,{p22.first,p22.second-1}});
            q.push({d+1,{p22.first,p22.second+1}});
        }
    }
    if(max == 0 and taula[x-1][y-1] != 't') cout << "no es pot arribar a cap tresor" << endl;
    else cout << "distancia maxima: " << max << endl;
}