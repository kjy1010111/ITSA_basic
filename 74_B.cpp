//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=50114
#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcase , shoot = 0;
    double x , y;
    cin >> testcase;
    for(int i = 0;i < testcase;i++){
        shoot = 0;
        cin >> x >> y;
        for(int j = 0;j <= 10;j++){
            if((x - 10) * (x - 10) + (y - 10) * (y - 10) <= (j + 1) * (j + 1)){
                cout << (10 - j) << endl;
                shoot = 1;
                break;
            }
        }
        if(shoot == 0){
            cout << 0 << endl;
        }
    }
}
