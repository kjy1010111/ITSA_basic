//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30784
#include<bits/stdc++.h>
using namespace std ;
int main(){
    //freopen("in.txt" , "r" , stdin);
	int ans , guess , A , B;
	int arr_ans[4] , arr_guess[4];

	cin >> ans;
	arr_ans[3] = ans % 10;
    arr_ans[2] = (ans / 10) % 10;
    arr_ans[1] = (ans / 100) % 10;
    arr_ans[0] = (ans / 1000) % 10;
	while(cin >> guess){
        A = 0;
        B = 0;
        if(guess == 0) break;
        arr_guess[3] = guess % 10;
        arr_guess[2] = (guess / 10) % 10;
        arr_guess[1] = (guess / 100) % 10;
        arr_guess[0] = (guess / 1000) % 10;

        for(int i = 0;i < 4;i++){
            for(int j = 0;j < 4;j++){
                if(arr_ans[i] == arr_guess[j]){
                    if(i == j){
                        A++;
                    }
                    else{
                        B++;
                    }
                }
            }
        }
        cout << A << "A" << B << "B" << endl;
	}
}

