//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30760
#include<stdio.h>
int main(){
    int n , m;

    while(scanf("%d%d",&n,&m) != EOF){
        int output[m][n];

        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                scanf("%d",&output[j][i]);
            }
        }

        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                if(j == 0)
                    printf("%d",output[i][j]);
                else
                    printf(" %d",output[i][j]);
            }
            printf("\n");
        }
    }
}
