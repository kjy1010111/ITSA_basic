//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=50095
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num[20100] = {0};
    int ip;
    int max_num = 0 , max_value = 0 , sum = 0;
    while(cin >> ip){
        sum++;
        num[ip]++;
        if(num[ip] > max_value){
            max_value = num[ip];
            max_num = ip;
        }
    }

    if(sum % 2 == 1) sum--;
    sum /= 2;
    if(max_value > sum){
        cout << max_num << endl;
    }
    else{
        cout << "n/a\n";
    }
}
