//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=50115
#include<bits/stdc++.h>
using namespace std;
int main(){
    int TestCase , DataLen , pre , MaxLen , len , data;
    cin >> TestCase;
    for(int i = 0;i < TestCase;i++){
        MaxLen = 0;
        cin >> DataLen;
        for(int j = 0;j < DataLen;j++){
            cin >> data;
            if(j == 0){
                pre = data;
                len = 1;
            }
            else{
                if(data == pre){
                    len++;
                }
                else{
                    if(len > MaxLen){
                        MaxLen = len;
                    }
                    pre = data;
                    len = 1;
                }
            }
        }
        if(len > MaxLen){
            MaxLen = len;
        }
        cout << MaxLen << endl;
    }
}
