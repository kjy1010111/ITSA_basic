//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30756
#include<bits/stdc++.h>
using namespace std;
int main(){
    char input[100] , tmp[100];
    int money , a1 , a2 , a3 , need , i = 0 , tmp_index = 0;
    scanf("%s",input);
    for(int j = 0;j < 100;j++){
        tmp[j] = '\0';
    }
    tmp_index = 0;
    while(input[i] >= '0' && input[i] <= '9'){
        tmp[tmp_index] = input[i];
        i++;
        tmp_index++;
    }
    i++;
    tmp[tmp_index] = '\0';
    money = atoi(tmp);

    for(int j = 0;j < 100;j++){
        tmp[j] = '\0';
    }
    tmp_index = 0;
    while(input[i] >= '0' && input[i] <= '9'){
        tmp[tmp_index] = input[i];
        i++;
        tmp_index++;
    }
    i++;
    tmp[tmp_index] = '\0';
    a1 = atoi(tmp);

    for(int j = 0;j < 100;j++){
        tmp[j] = '\0';
    }
    tmp_index = 0;
    while(input[i] >= '0' && input[i] <= '9'){
        tmp[tmp_index] = input[i];
        i++;
        tmp_index++;
    }
    i++;
    tmp[tmp_index] = '\0';
    a2 = atoi(tmp);

    for(int j = 0;j < 100;j++){
        tmp[j] = '\0';
    }
    tmp_index = 0;
    while(input[i] >= '0' && input[i] <= '9'){
        tmp[tmp_index] = input[i];
        i++;
        tmp_index++;
    }
    i++;
    tmp[tmp_index] = '\0';
    a3 = atoi(tmp);

    int _1 = 0 , _5 = 0 , _50 = 0;
    need = a1 * 15 + a2 * 20 + a3 * 30;
    if(need > money){
        cout << "0\n";
        return 0;
    }
    else if(need == money){
        cout << "0,0,0\n";
        return 0;
    }

    need = money - need;

    _50 = need / 50;
    need %= 50;
    _5 = need / 5;
    need %= 5;
    _1 = need;
    cout << _1 << "," << _5 << "," << _50 << endl;
}
