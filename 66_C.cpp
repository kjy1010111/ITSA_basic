//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=44088
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string ip;
    cin >> t;

    for(int i = 0;i < t;i++){
        cin >> ip;
        ip[ip.size()] = '\0';
        cout << "Tokens found:\n";
        for(int j = 0;j < ip.size();j++){
            if(ip[j] == ':' || ip[j] == ',' || ip[j] == ';'){
                cout << endl;
            }
            else{
                cout << ip[j];
            }
        }
        cout << endl;
    }
}
