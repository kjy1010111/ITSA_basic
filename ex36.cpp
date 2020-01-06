//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30753
#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    while(cin >> y){
        if(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)){
            cout << "Bissextile Year\n";
        }
        else{
            cout << "Common Year\n";
        }
    }
}
