
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define p2 pair <int,int>

int main () {
    int n,m;
    while (cin >> n >> m) {
        vector <vector <char> > taula (n,vector <char> (m));
        queue <p2> qk;
        queue <p2> qb;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++) {
                cin >> taula[i][j];
                if (taula[i][j]=='K') qk.push({i,j});
                if (taula[i][j]=='B') qb.push({i,j});
            }
        }
        int monedes  = 0;
        while(!qk.empty()){
            p2 pos = qk.front();
            qk.pop();
            if(pos.first >= 0 and pos.first < n and pos.second >= 0 and pos.second < m and taula[pos.first][pos.second] != 'T' and taula[pos.first][pos.second] != 'k' ){
                if (taula[pos.first][pos.second] >= '0' && taula[pos.first][pos.second] <= '9')monedes += taula[pos.first][pos.second] - '0';
                taula[pos.first][pos.second] = 'k';
                qk.push({pos.first+2,pos.second+1});
                qk.push({pos.first+2,pos.second-1});
                qk.push({pos.first-2,pos.second+1});
                qk.push({pos.first-2,pos.second-1});
                qk.push({pos.first+1,pos.second+2});
                qk.push({pos.first+1,pos.second-2});
                qk.push({pos.first-1,pos.second+2});
                qk.push({pos.first-1,pos.second-2});
            }
        }
        while(!qb.empty()){
            p2 pos = qb.front();
            qb.pop();
            if(pos.first >= 0 and pos.first < n and pos.second >= 0 and pos.second < m and taula[pos.first][pos.second] != 'T' and taula[pos.first][pos.second] != 'b' ){
                if (taula[pos.first][pos.second] >= '0' && taula[pos.first][pos.second] <= '9')monedes += taula[pos.first][pos.second] - '0';
                taula[pos.first][pos.second] = 'b';
                qb.push({pos.first+1,pos.second+1});
                qb.push({pos.first-1,pos.second-1});
                qb.push({pos.first-1,pos.second+1});
                qb.push({pos.first+1,pos.second-1});
            }
        }
    cout << monedes << endl;
    }
}