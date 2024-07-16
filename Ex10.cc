#include <iostream>
using namespace std;
#include <vector>
#include <queue>
#define p pair<int,int>

int main(){
    int n,m;
    cin >> n >> m;
    queue<pair<double,p>> q;
    vector<vector<char>> tauler(n,vector<char>(m,'.'));
    for(int i = 0; i <n; ++i){
        for(int j = 0; j <m; ++j){
            cin >> tauler[i][j];
            if(tauler[i][j] == 'C') q.push({0,{i,j}});
        }
    }
    double dist = 0;
    double num = 0;
    while(!q.empty()){
        p pos = q.front().second;
        double x = q.front().first;
        q.pop();
        if(pos.first >= 0 and pos.first < n and pos.second >= 0 and pos.second < m and tauler[pos.first][pos.second] != 'a'){
            if(tauler[pos.first][pos.second] == 'F' or tauler[pos.first][pos.second] == '.')++x;
            if(tauler[pos.first][pos.second] == 'F'){
                dist += x;
                ++num;
            }
            tauler[pos.first][pos.second] = 'a';
            q.push({x,{pos.first+1,pos.second+2}});
            q.push({x,{pos.first-1,pos.second+2}});
            q.push({x,{pos.first+1,pos.second-2}});
            q.push({x,{pos.first-1,pos.second-2}});
            q.push({x,{pos.first+2,pos.second+1}});
            q.push({x,{pos.first-2,pos.second+1}});
            q.push({x,{pos.first+2,pos.second-1}});
            q.push({x,{pos.first-2,pos.second-1}});
        }
    }
    double res = dist/num;
    if(num == 0) cout << "el cavall no pot arribar a cap flor" << endl;
    else{
    cout << "flors accessibles: " << num << endl;
    cout.setf(ios::fixed);
    cout.precision(4);
    cout << "distancia mitjana: " << res << endl;
    }
}
