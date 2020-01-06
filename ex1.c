//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30746
#include<stdio.h>

int main(){
    char input[10];
    char output[5][25];
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 25;j++){
            output[i][j] = ' ';
        }
    }

    scanf("%s",input);

    for(int i = 0;i < 4;i++){
        if(input[i] == '0'){
            output[0][i * 6] = '*';          //*****
            output[0][i * 6 + 1] = '*';
            output[0][i * 6 + 2] = '*';
            output[0][i * 6 + 3] = '*';
            output[0][i * 6 + 4] = '*';

            output[1][i * 6] = '*';           //*   *
            output[1][i * 6 + 1] = ' ';
            output[1][i * 6 + 2] = ' ';
            output[1][i * 6 + 3] = ' ';
            output[1][i * 6 + 4] = '*';

            output[2][i * 6] = '*';          //*   *
            output[2][i * 6 + 1] = ' ';
            output[2][i * 6 + 2] = ' ';
            output[2][i * 6 + 3] = ' ';
            output[2][i * 6 + 4] = '*';

            output[3][i * 6] = '*';           //*   *
            output[3][i * 6 + 1] = ' ';
            output[3][i * 6 + 2] = ' ';
            output[3][i * 6 + 3] = ' ';
            output[3][i * 6 + 4] = '*';

            output[4][i * 6] = '*';          //*****
            output[4][i * 6 + 1] = '*';
            output[4][i * 6 + 2] = '*';
            output[4][i * 6 + 3] = '*';
            output[4][i * 6 + 4] = '*';
        }
        else if(input[i] == '1'){
            output[0][i * 6] = ' ';           //    *
            output[0][i * 6 + 1] = ' ';
            output[0][i * 6 + 2] = ' ';
            output[0][i * 6 + 3] = ' ';
            output[0][i * 6 + 4] = '*';

            output[1][i * 6] = ' ';           //    *
            output[1][i * 6 + 1] = ' ';
            output[1][i * 6 + 2] = ' ';
            output[1][i * 6 + 3] = ' ';
            output[1][i * 6 + 4] = '*';

            output[2][i * 6] = ' ';           //    *
            output[2][i * 6 + 1] = ' ';
            output[2][i * 6 + 2] = ' ';
            output[2][i * 6 + 3] = ' ';
            output[2][i * 6 + 4] = '*';

            output[3][i * 6] = ' ';           //    *
            output[3][i * 6 + 1] = ' ';
            output[3][i * 6 + 2] = ' ';
            output[3][i * 6 + 3] = ' ';
            output[3][i * 6 + 4] = '*';

            output[4][i * 6] = ' ';           //    *
            output[4][i * 6 + 1] = ' ';
            output[4][i * 6 + 2] = ' ';
            output[4][i * 6 + 3] = ' ';
            output[4][i * 6 + 4] = '*';
        }
        else if(input[i] == '2'){
            output[0][i * 6] = '*';          //*****
            output[0][i * 6 + 1] = '*';
            output[0][i * 6 + 2] = '*';
            output[0][i * 6 + 3] = '*';
            output[0][i * 6 + 4] = '*';

            output[1][i * 6] = ' ';           //    *
            output[1][i * 6 + 1] = ' ';
            output[1][i * 6 + 2] = ' ';
            output[1][i * 6 + 3] = ' ';
            output[1][i * 6 + 4] = '*';

            output[2][i * 6] = '*';          //*****
            output[2][i * 6 + 1] = '*';
            output[2][i * 6 + 2] = '*';
            output[2][i * 6 + 3] = '*';
            output[2][i * 6 + 4] = '*';

            output[3][i * 6] = '*';           //*
            output[3][i * 6 + 1] = ' ';
            output[3][i * 6 + 2] = ' ';
            output[3][i * 6 + 3] = ' ';
            output[3][i * 6 + 4] = ' ';

            output[4][i * 6] = '*';          //*****
            output[4][i * 6 + 1] = '*';
            output[4][i * 6 + 2] = '*';
            output[4][i * 6 + 3] = '*';
            output[4][i * 6 + 4] = '*';
        }
        else if(input[i] == '3'){
            output[0][i * 6] = '*';          //*****
            output[0][i * 6 + 1] = '*';
            output[0][i * 6 + 2] = '*';
            output[0][i * 6 + 3] = '*';
            output[0][i * 6 + 4] = '*';

            output[1][i * 6] = ' ';           //    *
            output[1][i * 6 + 1] = ' ';
            output[1][i * 6 + 2] = ' ';
            output[1][i * 6 + 3] = ' ';
            output[1][i * 6 + 4] = '*';

            output[2][i * 6] = '*';          //*****
            output[2][i * 6 + 1] = '*';
            output[2][i * 6 + 2] = '*';
            output[2][i * 6 + 3] = '*';
            output[2][i * 6 + 4] = '*';

            output[3][i * 6] = ' ';           //    *
            output[3][i * 6 + 1] = ' ';
            output[3][i * 6 + 2] = ' ';
            output[3][i * 6 + 3] = ' ';
            output[3][i * 6 + 4] = '*';

            output[4][i * 6] = '*';          //*****
            output[4][i * 6 + 1] = '*';
            output[4][i * 6 + 2] = '*';
            output[4][i * 6 + 3] = '*';
            output[4][i * 6 + 4] = '*';
        }
        else if(input[i] == '4'){
            output[0][i * 6] = '*';           //*   *
            output[0][i * 6 + 1] = ' ';
            output[0][i * 6 + 2] = ' ';
            output[0][i * 6 + 3] = ' ';
            output[0][i * 6 + 4] = '*';

            output[1][i * 6] = '*';           //*   *
            output[1][i * 6 + 1] = ' ';
            output[1][i * 6 + 2] = ' ';
            output[1][i * 6 + 3] = ' ';
            output[1][i * 6 + 4] = '*';

            output[2][i * 6] = '*';          //*****
            output[2][i * 6 + 1] = '*';
            output[2][i * 6 + 2] = '*';
            output[2][i * 6 + 3] = '*';
            output[2][i * 6 + 4] = '*';

            output[3][i * 6] = ' ';           //    *
            output[3][i * 6 + 1] = ' ';
            output[3][i * 6 + 2] = ' ';
            output[3][i * 6 + 3] = ' ';
            output[3][i * 6 + 4] = '*';

            output[4][i * 6] = ' ';           //    *
            output[4][i * 6 + 1] = ' ';
            output[4][i * 6 + 2] = ' ';
            output[4][i * 6 + 3] = ' ';
            output[4][i * 6 + 4] = '*';
        }
        else if(input[i] == '5'){
            output[0][i * 6] = '*';          //*****
            output[0][i * 6 + 1] = '*';
            output[0][i * 6 + 2] = '*';
            output[0][i * 6 + 3] = '*';
            output[0][i * 6 + 4] = '*';

            output[1][i * 6] = '*';           //*
            output[1][i * 6 + 1] = ' ';
            output[1][i * 6 + 2] = ' ';
            output[1][i * 6 + 3] = ' ';
            output[1][i * 6 + 4] = ' ';

            output[2][i * 6] = '*';          //*****
            output[2][i * 6 + 1] = '*';
            output[2][i * 6 + 2] = '*';
            output[2][i * 6 + 3] = '*';
            output[2][i * 6 + 4] = '*';

            output[3][i * 6] = ' ';           //    *
            output[3][i * 6 + 1] = ' ';
            output[3][i * 6 + 2] = ' ';
            output[3][i * 6 + 3] = ' ';
            output[3][i * 6 + 4] = '*';

            output[4][i * 6] = '*';          //*****
            output[4][i * 6 + 1] = '*';
            output[4][i * 6 + 2] = '*';
            output[4][i * 6 + 3] = '*';
            output[4][i * 6 + 4] = '*';
        }
        else if(input[i] == '6'){
            output[0][i * 6] = '*';          //*****
            output[0][i * 6 + 1] = '*';
            output[0][i * 6 + 2] = '*';
            output[0][i * 6 + 3] = '*';
            output[0][i * 6 + 4] = '*';

            output[1][i * 6] = '*';           //*
            output[1][i * 6 + 1] = ' ';
            output[1][i * 6 + 2] = ' ';
            output[1][i * 6 + 3] = ' ';
            output[1][i * 6 + 4] = ' ';

            output[2][i * 6] = '*';          //*****
            output[2][i * 6 + 1] = '*';
            output[2][i * 6 + 2] = '*';
            output[2][i * 6 + 3] = '*';
            output[2][i * 6 + 4] = '*';

            output[3][i * 6] = '*';           //*   *
            output[3][i * 6 + 1] = ' ';
            output[3][i * 6 + 2] = ' ';
            output[3][i * 6 + 3] = ' ';
            output[3][i * 6 + 4] = '*';

            output[4][i * 6] = '*';          //*****
            output[4][i * 6 + 1] = '*';
            output[4][i * 6 + 2] = '*';
            output[4][i * 6 + 3] = '*';
            output[4][i * 6 + 4] = '*';
        }
        else if(input[i] == '7'){
            output[0][i * 6] = '*';          //*****
            output[0][i * 6 + 1] = '*';
            output[0][i * 6 + 2] = '*';
            output[0][i * 6 + 3] = '*';
            output[0][i * 6 + 4] = '*';

            output[1][i * 6] = ' ';           //    *
            output[1][i * 6 + 1] = ' ';
            output[1][i * 6 + 2] = ' ';
            output[1][i * 6 + 3] = ' ';
            output[1][i * 6 + 4] = '*';

            output[2][i * 6] = ' ';           //    *
            output[2][i * 6 + 1] = ' ';
            output[2][i * 6 + 2] = ' ';
            output[2][i * 6 + 3] = ' ';
            output[2][i * 6 + 4] = '*';

            output[3][i * 6] = ' ';           //    *
            output[3][i * 6 + 1] = ' ';
            output[3][i * 6 + 2] = ' ';
            output[3][i * 6 + 3] = ' ';
            output[3][i * 6 + 4] = '*';

            output[4][i * 6] = ' ';           //    *
            output[4][i * 6 + 1] = ' ';
            output[4][i * 6 + 2] = ' ';
            output[4][i * 6 + 3] = ' ';
            output[4][i * 6 + 4] = '*';
        }
        else if(input[i] == '8'){
            output[0][i * 6] = '*';          //*****
            output[0][i * 6 + 1] = '*';
            output[0][i * 6 + 2] = '*';
            output[0][i * 6 + 3] = '*';
            output[0][i * 6 + 4] = '*';

            output[1][i * 6] = '*';           //*   *
            output[1][i * 6 + 1] = ' ';
            output[1][i * 6 + 2] = ' ';
            output[1][i * 6 + 3] = ' ';
            output[1][i * 6 + 4] = '*';

            output[2][i * 6] = '*';          //*****
            output[2][i * 6 + 1] = '*';
            output[2][i * 6 + 2] = '*';
            output[2][i * 6 + 3] = '*';
            output[2][i * 6 + 4] = '*';

            output[3][i * 6] = '*';           //*   *
            output[3][i * 6 + 1] = ' ';
            output[3][i * 6 + 2] = ' ';
            output[3][i * 6 + 3] = ' ';
            output[3][i * 6 + 4] = '*';

            output[4][i * 6] = '*';          //*****
            output[4][i * 6 + 1] = '*';
            output[4][i * 6 + 2] = '*';
            output[4][i * 6 + 3] = '*';
            output[4][i * 6 + 4] = '*';
        }
        else if(input[i] == '9'){
            output[0][i * 6] = '*';          //*****
            output[0][i * 6 + 1] = '*';
            output[0][i * 6 + 2] = '*';
            output[0][i * 6 + 3] = '*';
            output[0][i * 6 + 4] = '*';

            output[1][i * 6] = '*';           //*   *
            output[1][i * 6 + 1] = ' ';
            output[1][i * 6 + 2] = ' ';
            output[1][i * 6 + 3] = ' ';
            output[1][i * 6 + 4] = '*';

            output[2][i * 6] = '*';          //*****
            output[2][i * 6 + 1] = '*';
            output[2][i * 6 + 2] = '*';
            output[2][i * 6 + 3] = '*';
            output[2][i * 6 + 4] = '*';

            output[3][i * 6] = ' ';           //    *
            output[3][i * 6 + 1] = ' ';
            output[3][i * 6 + 2] = ' ';
            output[3][i * 6 + 3] = ' ';
            output[3][i * 6 + 4] = '*';

            output[4][i * 6] = '*';          //*****
            output[4][i * 6 + 1] = '*';
            output[4][i * 6 + 2] = '*';
            output[4][i * 6 + 3] = '*';
            output[4][i * 6 + 4] = '*';
        }
    }

    output[0][23] = '\0';
    output[1][23] = '\0';
    output[2][23] = '\0';
    output[3][23] = '\0';
    output[4][23] = '\0';

    for(int i = 0;i < 5;i++){
        printf("%s\n",output[i]);
    }
}
