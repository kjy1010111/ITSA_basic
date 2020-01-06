//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30794
#include<bits/stdc++.h>
using namespace std;
int main(){
    int dice[6] = {0};
    for(int i = 0;i < 6;i++) dice[i] = 0;
    int ip;
    for(int i = 0;i < 4;i++){
        cin >> ip;
        dice[ip - 1]++;
    }
    int big = -1;
    int sum = 0;
    for(int i = 0;i < 6;i++){
        if(dice[i] == 4){
            cout << "WIN\n";
            return 0;
        }
        else if(dice[i] == 3){
            cout << "R\n";
            return 0;
        }
        else if(dice[i] == 2){
            big = i;
        }
        else if(dice[i] == 1){
            sum += (i + 1);
        }
    }
    if(big == -1){
        cout << "R\n";
    }
    else{
        if(sum == 0){
            cout << (big + 1) * 2 << endl;
        }
        else{
            cout << sum << endl;
        }
    }
}
