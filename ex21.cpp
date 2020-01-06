//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30786
#include<bits/stdc++.h>
using namespace std;
int main(){
    float max_num , min_num;

    float input;

    for(int i = 0;i < 10;i++){
        cin >> input;
        if(i == 0){
            max_num = input;
            min_num = input;
        }
        else{
            if(input > max_num) max_num = input;

            if(input < min_num) min_num = input;
        }
    }
    printf("maximum:%.2f\n",max_num);
    printf("minimum:%.2f\n",min_num);
}
