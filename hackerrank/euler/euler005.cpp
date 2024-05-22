/*
euler005
bhatoresiddharth@gmail.com
sidb95
22 May 2024
*/

#include <iostream>

using namespace std;

bool isPrime(long long int num, long long int limit);
long long int calcAnswer(long long int n);

bool isPrime(long long int num, long long int limit) {
    bool retAnswer = true;
    limit = ((limit % X) == 0) ? (limit - 1) : limit;
    set <long long int> vis;
    long long int m;
    // returns false if numeric is divisible by 2  
    if ((num == 0) || (num == 1) || ((num % X) == 0)) {
        retAnswer = false;
    }
    else if (num == X) {
        retAnswer = true;
    }
    else {
        for (long long int i = 3; i <= limit; i += X) {
            if ((num % i) == 0) {
                retAnswer = false;
                break;
            }
            //
            m = vis.size();
            //
            if (m < SET_LIMIT_X) {
                // if true, visit and mark nodes by multiples
                if (vis.find(i) == (vis.end())) {
                    for (long long int l = i; l <= limit; l += i) {
                        vis.insert(l);
                    }
                }
            }
        }
    }
    //
    return retAnswer;
}


long long int calcAnswer(long long int n) {
    if (n == 1) {
        return 1;
    }
    set <int> primes;
    long long int product = 1;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            primes.insert(i);
        }
    }
    set <int>::iterator itr1;
    for (itr1 = primes.begin(); itr1 != primes.end(); itr1++) {
        product *= (*itr1);
    }
    
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long long int x = n;
        cout << calcAnswer(x) << endl;
    }
    return 0;
}
