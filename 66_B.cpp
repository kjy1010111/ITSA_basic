#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[10] , b[10] , c[10];
    char op1[10] , op2[10];
    /*string a , b , c;
    string op1 , op2;*/
    while(cin >> a >> op1 >> b >> op2 >> c){
        float x = -1;
        if(strcmp(op1 , "+") == 0){
            if(strcmp(a , "x") == 0){
                x = atof(c) - atof(b);
            }
            else if(strcmp(b , "x") == 0){
                x = atof(c) - atof(a);
            }
            else if(strcmp(c , "x") == 0){
                x = atof(a) + atof(b);
            }
        }
        else if(strcmp(op1 , "-") == 0){
            if(strcmp(a , "x") == 0){
                x = atof(c) + atof(b);
            }
            else if(strcmp(b , "x") == 0){
                x = atof(a) - atof(c);
            }
            else if(strcmp(c , "x") == 0){
                x = atof(a) - atof(b);
            }
        }
        else if(strcmp(op1 , "*") == 0){
            if(strcmp(a , "x") == 0){
                x = atof(c) / atof(b);
            }
            else if(strcmp(b , "x") == 0){
                x = atof(c) / atof(a);
            }
            else if(strcmp(c , "x") == 0){
                x = atof(a) * atof(b);
            }
        }
        else if(strcmp(op1 , "/") == 0){
            if(strcmp(a , "x") == 0){
                x = atof(c) * atof(b);
            }
            else if(strcmp(b , "x") == 0){
                x = atof(a) / atof(c);
            }
            else if(strcmp(c , "x") == 0){
                x = atof(a) / atof(b);
            }
        }
        printf("%.1f\n",x);
    }
}
