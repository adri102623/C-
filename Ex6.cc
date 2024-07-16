#include <iostream>
#include <vector>
using namespace std;
#define p pair<int,int>
#include <queue>

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> taula(n,vector<char>(m,'.'));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
        cin >> taula[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    queue<p> q;
    q.push({x-1,y-1});
    int c = 0;
    while(!q.empty()){
        p pos = q.front();
        q.pop();
        if(pos.first >= 0 and pos.first < n and pos.second >= 0 and pos.second < m and taula[pos.first][pos.second] != 'X'){
            if(taula[pos.first][pos.second] == 't')++c;
            taula[pos.first][pos.second] = 'X';
            q.push({pos.first,pos.second+1});
            q.push({pos.first-1,pos.second});
            q.push({pos.first,pos.second-1});
            q.push({pos.first+1,pos.second});
        }
    }
    cout << c << endl;
}