//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30766
#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    while(cin >> input){
        int start = 0 , finish = input.size() - 1;

        if(start == finish){
            cout << "YES\n";
            continue;
        }
        while(1){
            start++;
            finish--;

            if(start == finish){
                cout << "YES\n";
                break;
            }

            if(input[start] != input[finish]){
                cout << "NO\n";
                break;
            }

            if(abs(start - finish) == 1){
                cout << "YES\n";
                break;
            }
        }
    }
}
