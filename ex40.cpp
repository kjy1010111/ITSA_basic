//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30796
#include<bits/stdc++.h>
using namespace std;
int main(){
    int isbn[10] = {0};
    char ip;
    for(int i = 0;i < 10;i++){
        cin >> ip;
        if(ip == 'X'){
            isbn[i] = 10;
        }
        else{
            isbn[i] = ip - '0';
        }
    }
    for(int i = 1;i < 10;i++){
        isbn[i] = isbn[i] + isbn[i - 1];
    }
    for(int i = 1;i < 10;i++){
        isbn[i] = isbn[i] + isbn[i - 1];
    }
    if(isbn[9] % 11 == 0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}
