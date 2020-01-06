//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30748
#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("in.txt" , "r" , stdin);
    int StartH , StartM , EndH , EndM;
    int sm , em , hh;

    cin >> StartH >> StartM >> EndH >> EndM;

    sm = StartM + StartH * 60;
    em = EndM + EndH * 60;
    if(sm > em){
        em += 1440;
    }

    hh = em - sm;
    hh /= 30;

    int sum = 0;
    if(hh > 8){
        sum += (hh - 8) * 60;
        hh = 8;
    }
    if(hh > 4){
        sum += (hh - 4) * 40;
        hh = 4;
    }
    sum += hh * 30;

    cout << sum << endl;
}
