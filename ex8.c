//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30752
#include<stdio.h>
int main(){
    int input , isPrime;
    while(scanf("%d",&input) != EOF){
        isPrime = 1;
        for(int i = 2;i * i <= input;i++){
            if(input % i == 0){
                printf("NO\n");
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            printf("YES\n");
    }
}
