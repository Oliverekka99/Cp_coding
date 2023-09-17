/* 
Find Prime Numbers From 1 to N
Send Feedback
Given a number N, find number of primes in the range [1,N].
Input:
The only line of input consists of a number N
Output:
Print the number of primes in the range [1,N].`
Constraints:
1 ≤ N ≤ 1000000
Sample Input : 3 
Sample Output : 2
*/

#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    int countFactors = 0;
    for(int j=1;j*j<=n;j++){
        if((n%j)==0){
            countFactors+=1;
        }else{
            countFactors+=2;
        }
    }
    if(countFactors==2){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin >> n;

    int count = 0;
    for(int i=1;i<=n;i++){
        if(checkPrime(i)){
            count++;
        }
    }
}

// N root n times & we are not using some extra space here

// Try to use space & Reduce the time complexity further.