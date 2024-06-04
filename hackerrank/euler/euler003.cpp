/*
euler003
bhatoresiddharth@gmail.com
20, 21 May 2024
03 June 2024
*/

#include <iostream>
#include <math.h>
#include <set>

using namespace std;

long long int SET_LIMIT_X = 100000;
// long long int SET_LIMIT_Y = 10000;
// long long int SET_LIMIT_Z = 1000;
long long int X = 2;

// check if num is prime
bool isPrime(long long int num, long long int limit);
// return lastPrime
long long int lastPrime(long long int num);
// calculate ```lastPrime```
long long int calcAnswer(long long int num);

bool isPrime(long long int num, long long int limit, set <long long int>& vis) {
    bool retAnswer = true;
    limit = ((limit % X) == 0) ? (limit - 1) : limit;
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

long long int lastPrime(set <long long int>& primes) {
    set <long long int>::iterator itr;
    for (itr = primes.rbegin(); itr != primes.rend(); itr++) {
        return (*itr);
    }
    return 0;
}

long long int calcAnswer(long long int num) {
    set <long long int> primes;
    primes.insert(2);
    for (int i = 3; i < pow(num, 0.5); i += 2) {
        if (isPrime(i) == 0) {
            primes.insert(i);
        }
    }
    return lastPrime(primes);
}

int main(){
    int t;
    cin >> t;
    set <long long int> vis;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long long int x;
        x = n;
        // calculating answer
        long long int answer = calcAnswer(x, vis, primes);
        // print answer
        cout << answer << endl;
    }
    return 0;
}
