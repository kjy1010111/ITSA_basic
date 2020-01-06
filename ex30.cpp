//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30780
#include<bits/stdc++.h>
using namespace std;
int main(){
    int month , day;
    cin >> month >> day;
    switch(month){
        case 1:
            if(day >= 21){
                cout << "Aquarius\n";
            }
            else{
                cout << "Capricorn\n";
            }
            break;

        case 2:
            if(day >= 19){
                cout << "Pisces\n";
            }
            else{
                cout << "Aquarius\n";
            }
            break;

        case 3:
            if(day >= 21){
                cout << "Aries\n";
            }
            else{
                cout << "Pisces\n";
            }
            break;

        case 4:
            if(day >= 21){
                cout << "Taurus\n";
            }
            else{
                cout << "Aries\n";
            }
            break;

        case 5:
            if(day >= 22){
                cout << "Gemini\n";
            }
            else{
                cout << "Taurus\n";
            }
            break;

        case 6:
            if(day >= 22){
                cout << "Cancer\n";
            }
            else{
                cout << "Gemini\n";
            }
            break;

        case 7:
            if(day >= 23){
                cout << "Leo\n";
            }
            else{
                cout << "Cancer\n";
            }
            break;

        case 8:
            if(day >= 24){
                cout << "Virgo\n";
            }
            else{
                cout << "Leo\n";
            }
            break;

        case 9:
            if(day >= 24){
                cout << "Libra\n";
            }
            else{
                cout << "Virgo\n";
            }
            break;

        case 10:
            if(day >= 24){
                cout << "Scorpio\n";
            }
            else{
                cout << "Libra\n";
            }
            break;

        case 11:
            if(day >= 23){
                cout << "Sagittarius\n";
            }
            else{
                cout << "Scorpio\n";
            }
            break;

        case 12:
            if(day >= 22){
                cout << "Capricorn\n";
            }
            else{
                cout << "Sagittarius\n";
            }
            break;
    }
}
