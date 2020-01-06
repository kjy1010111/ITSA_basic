//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30795
#include<bits/stdc++.h>
using namespace std;
int main(){
    int d;
    float s = 0 , ns = 0;
    cin >> d;
    if(d > 700){
        s += (d - 700) * 5.63;
        ns += (d - 700) * 4.5;
        d = 700;
    }
    if(d > 500){
        s += (d - 500) * 4.97;
        ns += (d - 500) * 4.01;
        d = 500;
    }
    if(d > 330){
        s += (d - 330) * 4.39;
        ns += (d - 330) * 3.61;
        d = 330;
    }
    if(d > 120){
        s += (d - 120) * 3.02;
        ns += (d - 120) * 2.68;
        d = 120;
    }
    s += d * 2.1;
    ns += d * 2.1;
    printf("Summer months:%.2f\n",s);
    printf("Non-Summer months:%.2f\n",ns);
}
