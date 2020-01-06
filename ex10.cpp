//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30757
#include<bits/stdc++.h>
using namespace std;

int gcd(int x , int y){
    if(x == y)
        return x;

    while(x != 0 && y != 0){
        if(x < y)
            swap(x , y);
        x %= y;
    }

    if(x < y)
        swap(x , y);

    return x;
}

int main(){
    int x , y;
    cin >> x >> y;
    cout << gcd(x , y) << endl;
}
