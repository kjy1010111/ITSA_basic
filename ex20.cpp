//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30783
#include<bits/stdc++.h>
using namespace std;
int main(){
    int TestCase;
    string num1 , num2;
    //string output;
    //char num1[35] , num2[35];
    char output[35];
    scanf("%d",&TestCase);
    for(int i = 0;i < TestCase;i++){
        cin >> num1 >> num2;
        //scanf("%s%s",num1 , num2);


        for(int i = 0;i < 35;i++){
            output[i] = '\0';
        }

        reverse(num1.begin() , num1.end());
        reverse(num2.begin() , num2.end());
        //cout << num1 << "\t" << num2 << endl;
        int index = 0 , next = 0;
        while(1){
            if(index >= num1.size() && index >= num2.size()){
                if(next){
                    output[index] = next + '0';
                    index++;
                }
                break;
            }
            int a = 0 , b = 0;
            if(index < num1.size()){
                a = num1[index] - '0';
            }
            if(index < num2.size()){
                b = num2[index] - '0';
            }
            a += b;
            a += next;
            next = 0;
            if(a > 9){
                next = 1;
                a -= 10;
            }
            output[index] = a + '0';
            index++;
        }
        output[index] = '\0';
        //cout << output << endl;
        for(int i = index - 1;i >= 0;i--){
            cout << output[i];
        }
        cout << endl;
        //reverse(output , output + strlen(output) - 1);
        //cout << output << endl;
    }
}
