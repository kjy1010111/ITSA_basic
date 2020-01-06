//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30782
#include<bits/stdc++.h>
using namespace std;
int main(){
    string ip;
    int mov;
    getline(cin , ip);
    cin >> mov;
    for(int i = 0;i < ip.size();i++){
        int change = ip[i];
        if(isalpha(ip[i]) && islower(ip[i])){
            change += mov;
            while(!(isalpha(change) && islower(change))){
                change -= 26;
            }
            ip[i] = change;
        }
        else if(isalpha(ip[i]) && isupper(ip[i])){
            change += mov;
            while(!(isalpha(change) && isupper(change))){
                change -= 26;
            }
            ip[i] = change;
        }
        else if(ip[i] >= '0' && ip[i] <= '9'){
            change += mov;
            while(!(change >= '0' && change <= '9')){
                change -= 10;
            }
            ip[i] = change;
        }
    }
    cout << ip << endl;
}
