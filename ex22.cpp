//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30787
#include<bits/stdc++.h>
using namespace std;
int main(){
    int table[3][3];
    int winner = 0;
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            cin >> table[i][j];
        }
    }

    if(table[0][0] == table[0][1] && table[0][1] == table[0][2]) winner = 1;
    if(table[1][0] == table[1][1] && table[1][1] == table[1][2]) winner = 1;
    if(table[2][0] == table[2][1] && table[2][1] == table[2][2]) winner = 1;
    if(table[0][0] == table[1][0] && table[1][0] == table[2][0]) winner = 1;
    if(table[0][1] == table[1][1] && table[1][1] == table[2][1]) winner = 1;
    if(table[0][2] == table[1][2] && table[1][2] == table[2][2]) winner = 1;
    if(table[0][0] == table[1][1] && table[1][1] == table[2][2]) winner = 1;
    if(table[0][2] == table[1][1] && table[1][1] == table[2][0]) winner = 1;

    if(winner) cout << "True\n";
    else cout << "False\n";
}
