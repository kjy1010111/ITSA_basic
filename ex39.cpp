//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30758
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , ip;
    int p , m ,f , sum , lt60 , ht60 , ht80;
    cin >> n;
    for(int i = 0;i < n;i++){
        p = 0;
        m = 0;
        f = 0;
        sum = 0;
        lt60 = 0;
        ht60 = 0;
        ht80 = 0;
        for(int j = 0;j < 3;j++){
            cin >> ip;
            sum += ip;
            if(ip < 60){
                lt60++;
            }
            if(ip >= 60){
                ht60++;
            }
            if(ip >= 80){
                ht80++;
            }
        }
        if(ht60 == 3){
            cout << "P\n";
            continue;
        }
        if(lt60 == 1 && sum >= 220){
            cout << "P\n";
            continue;
        }
        if(lt60 == 1 && sum < 220){
            cout << "M\n";
            continue;
        }
        if(lt60 == 2 && ht80 == 1){
            cout << "M\n";
            continue;
        }
        cout << "F\n";
    }
}
