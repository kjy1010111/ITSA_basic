//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30747
#include<stdio.h>

int main(){
    int miles;
    double km;

    while(scanf("%d",&miles) != EOF){
        km = 1.6 * (double)miles;
        printf("%.1lf\n",km);
    }
}
