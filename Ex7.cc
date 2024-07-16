#include <iostream>
#include <vector>
#include <string>

using namespace std;

void imprimirCombinacions(vector<char>& combinacioActual) {
    for(char c : combinacioActual) cout << c;
    cout << endl;
}

void generarCombinacions(int n, vector<char>& lletres, vector<char>& combinacioActual, vector<string>& resultats) {
    if(n == 0){ 
        imprimirCombinacions(combinacioActual);
        return;
    }
    else{
        for(char c : lletres){
            combinacioActual.push_back(c);
            generarCombinacions(n-1,lletres,combinacioActual,resultats);
            combinacioActual.pop_back();
        }
    }

    
}


int main() {
    int n;
    cin >> n;
    
    vector<char> lletres = {'A', 'C', 'G', 'T'};
    vector<char> combinacioActual;
    vector<string> resultats;
    
    generarCombinacions(n, lletres, combinacioActual, resultats);
    
    return 0;
}
