//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30759
#include<bits/stdc++.h>
using namespace std;
int main(){
    double r , p;
    int n;
    cin >> r >> n >> p;
    double sum = 0;
    for(int i = 0;i < n;i++){
        sum += p;
        sum = sum + sum * r;
    }
    sum -= 0.5;
    printf("%.lf\n",sum);
}
