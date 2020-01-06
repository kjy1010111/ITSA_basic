//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30751
#include<bits/stdc++.h>
using namespace std;
int main(){
    int input;
    while(cin >> input){
        int sum = 0;
        for(int i = 1;i <= input;i++){
            if(i % 3 == 0){
                sum += i;
            }
        }
        cout << sum << endl;
    }
}
