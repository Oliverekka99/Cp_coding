// print print number from 1 to N

#include <bits/stdc++.h>
using namespace std;

int makeSieve(int n){

    bool isPrime[n+1];
    for(int i=0;i<=n;i++){
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;

    for(int i=2;i*i<=n;i++){
        if(isPrime[i] == true){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j] = false;
            }
        }
    }
    int count = 0;
    for(int i=0;i<=n;i++){
        if(isPrime[i] == true){
            count++;
        }
    }
    return count;
    // for(int i=0;i<=n;i++){
    //     cout << i <<" : " << isPrime[i] << endl;
    // }
}
int main(){
    int n;
    cin >> n;

    int nPrimes = makeSieve(n);
    cout << "No of Prime's : "<< nPrimes << endl;
    return 0;
}

/*
make a boolean array & initialize all numbers with true.
make 0 & 1 position false
run i from 2 to root N -> 1st optimization
mark all multiples of i , starting from i*i as false
You have an array with the values.
*/