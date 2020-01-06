//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30792
#include<bits/stdc++.h>
using namespace std;
int main(){
    float h;
    int g;
    while(cin >> h >> g){
        if(g == 1){
            printf("%.1f\n",(h - 80) * 0.7);
        }
        else{
            printf("%.1f\n",(h - 70) * 0.6);
        }
    }
}
