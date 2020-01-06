//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30785
#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    int s = 0;
    while(n != 0){
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main(){
    //freopen("in.txt" , "r" , stdin);
    int n , input;
    priority_queue<pair<int , int> , vector<pair<int , int> > , greater<pair<int , int> > > que;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> input;
        pair<int , int> insert_que;
        insert_que.first = sum(input);
        insert_que.second = input;
        que.push(insert_que);
    }

    for(int i = 0;i < n;i++){
        int output = que.top().second;
        if(i == 0){
            cout << output;
        }
        else{
            cout << " " << output;
        }
        que.pop();
    }
    cout << endl;
}
