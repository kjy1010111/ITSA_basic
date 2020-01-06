//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30771
#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    //cin >> input;
    getline(cin,input);
    for(int i = 0;i < input.size();i++){
        if(input[i] == '!'){
            input[i] = '@';
        }
        else if(input[i] == '#'){
            input[i] = '$';
        }
        else if(input[i] == '$'){
            input[i] = '%';
        }
        else if(input[i] == '%'){
            input[i] = '^';
        }
        else if(input[i] == '&'){
            input[i] = '*';
        }
        else if(input[i] == '('){
            input[i] = ')';
        }
        else if(input[i] == ')'){
            input[i] = '_';
        }
        else if(input[i] == '*'){
            input[i] = '(';
        }
        else if(input[i] == ','){
            input[i] = '.';
        }
        else if(input[i] == '-'){
            input[i] = '=';
        }
        else if(input[i] == '.'){
            input[i] = '/';
        }
        else if(input[i] == '0'){
            input[i] = '-';
        }
        else if(input[i] == '1'){
            input[i] = '2';
        }
        else if(input[i] == '2'){
            input[i] = '3';
        }
        else if(input[i] == '3'){
            input[i] = '4';
        }
        else if(input[i] == '4'){
            input[i] = '5';
        }
        else if(input[i] == '5'){
            input[i] = '6';
        }
        else if(input[i] == '6'){
            input[i] = '7';
        }
        else if(input[i] == '7'){
            input[i] = '8';
        }
        else if(input[i] == '8'){
            input[i] = '9';
        }
        else if(input[i] == '9'){
            input[i] = '0';
        }
        else if(input[i] == ':'){
            input[i] = '"';
        }
        else if(input[i] == ';'){
            input[i] = '\'';
        }
        else if(input[i] == '<'){
            input[i] = '>';
        }
        else if(input[i] == '>'){
            input[i] = '?';
        }
        else if(input[i] == '@'){
            input[i] = '#';
        }
        else if(input[i] == 'a' || input[i] == 'A'){
            input[i] = 's';
        }
        else if(input[i] == 'b' || input[i] == 'B'){
            input[i] = 'n';
        }
        else if(input[i] == 'c' || input[i] == 'C'){
            input[i] = 'v';
        }
        else if(input[i] == 'd' || input[i] == 'D'){
            input[i] = 'f';
        }
        else if(input[i] == 'e' || input[i] == 'E'){
            input[i] = 'r';
        }
        else if(input[i] == 'f' || input[i] == 'F'){
            input[i] = 'g';
        }
        else if(input[i] == 'g' || input[i] == 'G'){
            input[i] = 'h';
        }
        else if(input[i] == 'h' || input[i] == 'H'){
            input[i] = 'j';
        }
        else if(input[i] == 'i' || input[i] == 'I'){
            input[i] = 'o';
        }
        else if(input[i] == 'j' || input[i] == 'J'){
            input[i] = 'k';
        }
        else if(input[i] == 'k' || input[i] == 'K'){
            input[i] = 'l';
        }
        else if(input[i] == 'l' || input[i] == 'L'){
            input[i] = ';';
        }
        else if(input[i] == 'm' || input[i] == 'M'){
            input[i] = ',';
        }
        else if(input[i] == 'n' || input[i] == 'N'){
            input[i] = 'm';
        }
        else if(input[i] == 'o' || input[i] == 'O'){
            input[i] = 'p';
        }
        else if(input[i] == 'p' || input[i] == 'P'){
            input[i] = '[';
        }
        else if(input[i] == 'q' || input[i] == 'Q'){
            input[i] = 'w';
        }
        else if(input[i] == 'r' || input[i] == 'R'){
            input[i] = 't';
        }
        else if(input[i] == 's' || input[i] == 'S'){
            input[i] = 'd';
        }
        else if(input[i] == 't' || input[i] == 'T'){
            input[i] = 'y';
        }
        else if(input[i] == 'u' || input[i] == 'U'){
            input[i] = 'i';
        }
        else if(input[i] == 'v' || input[i] == 'V'){
            input[i] = 'b';
        }
        else if(input[i] == 'w' || input[i] == 'W'){
            input[i] = 'e';
        }
        else if(input[i] == 'x' || input[i] == 'X'){
            input[i] = 'c';
        }
        else if(input[i] == 'y' || input[i] == 'Y'){
            input[i] = 'u';
        }
        else if(input[i] == 'z' || input[i] == 'Z'){
            input[i] = 'x';
        }
        else if(input[i] == '['){
            input[i] = ']';
        }
        else if(input[i] == ']'){
            input[i] = '\\';
        }
        else if(input[i] == '^'){
            input[i] = '&';
        }
        else if(input[i] == '_'){
            input[i] = '+';
        }
        else if(input[i] == '`'){
            input[i] = '1';
        }
        else if(input[i] == '{'){
            input[i] = '}';
        }
        else if(input[i] == '}'){
            input[i] = '|';
        }
    }
    cout << input << endl;
}
