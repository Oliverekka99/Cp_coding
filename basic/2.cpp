#include<bits/stdc++.h>
using namespace std;

int main(){
    // int a = 2;
    // int b = 3;
    // int c = 4;
    // cout << ((b>a) || (b>c)); //true

    // // && and || to check conditions

    int n;
    cin >> n;
    if (n % 2 == 0){ //to check for even
        cout << "YES";
    }else if(n % 3 == 0){
        cout << "n is Divisible by 3";
    }else{
        cout << "NO";
    }
}