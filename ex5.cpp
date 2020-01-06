//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30750
#include<bits/stdc++.h>
using namespace std;

string PosBin(int x){
    string bin = "00000000";
    int digit = 7;

    while(x != 0){
        if(x % 2 == 1){
            bin[digit] = '1';
        }
        if(digit == 0)
            break;
        x /= 2;
        digit--;
    }

    return bin;
}

string NegBin(int x){
    string bin = "00000000";

    int digit = 7;
    x = -1 - x;

    while(x != 0){
        if(x % 2 == 1){
            bin[digit] = '1';
        }
        if(digit == 0)
            break;
        x /= 2;
        digit--;
    }

    for(int i = 0;i < 8;i++){
        if(bin[i] == '0')
            bin[i] = '1';
        else
            bin[i] = '0';
    }

    return bin;
}

int main(){
    int input;
    while(cin >> input){
        if(input >= 0){
            cout << PosBin(input) << endl;
        }
        else{
            cout << NegBin(input) << endl;
        }
    }
}
