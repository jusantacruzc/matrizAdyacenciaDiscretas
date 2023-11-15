//made by Esteban Santacruz 

#include <bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i = a; i<b ; i++)

int main(){
    // matrices Cuadradas. Desde aqui se modifica la matriz, la consola solo muestra el resultado
    vector<vector<int>> matriz = {{0, 1, 0}, {1, 0, 0}, {0, 0, 0}};
    int countDiagonal = 0;
    REP(i, 0, matriz[0].size()){
        if(matriz[i][i] == 1){
            countDiagonal ++;
        }
    }
    (countDiagonal == matriz[0].size()) ? cout << "Es reflexiva" << "\n" : cout << "No es reflexiva" << "\n";
    
    bool van = true;
    REP(i, 0 ,  matriz[0].size()){
        REP(j, 0 ,  matriz[0].size()){
            if(matriz[i][j] != matriz[j][i]){
                van = false;
            }
        }
    }
    
    (van) ? cout << "Es simetrica" << "\n" : cout << "No es simetrica" << "\n";




    return 0;
}