#include <bits/stdc++.h>

using namespace std;

int main() {
   string x;
    cin >> x;
    char a=' ';
    int b=0 , cnt=0;
    for(int i=0; i<x.size(); i++){
        if(x[i]==a && b<5){
            b++;
        }else{
            a=x[i];
            b=1 , cnt++;
        }
    }
    cout << cnt << '\n';
}