//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30755
#include<stdio.h>
#include<string.h>

int main(){
    int TestCase;
    char oper[3] , FirstR[10] , FirstI[10] , SecondR[10] , SecondI[10];
    scanf("%d",&TestCase);
    for(int i = 0;i < TestCase;i++){
        scanf("%s%s%s%s%s",oper , FirstR , FirstI , SecondR , SecondI);

        oper[strlen(oper)] = '\0';
        FirstR[strlen(FirstR)] = '\0';
        FirstI[strlen(FirstI)] = '\0';
        SecondR[strlen(SecondR)] = '\0';
        SecondI[strlen(SecondI)] = '\0';

        int fr = atoi(FirstR) , fi = atoi(FirstI) , sr = atoi(SecondR) , si = atoi(SecondI);

        if(oper[0] == '+')
            printf("%d %d\n",fr + sr , fi + si);
        else if(oper[0] == '-')
            printf("%d %d\n",fr - sr , fi - si);
        else if(oper[0] == '*')
            printf("%d %d\n",fr * sr - fi * si , fr * si + fi * sr);
    }
}
