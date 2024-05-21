/*
euler003
bhatoresiddharth@gmail.com
20, 21 May 2024
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

long long int lastPrime(long long int num) {
    long long int answerVar;
    long long int limit = pow(num, 0.5);
    // check for num = 0, 1, 2
    if ((num == 0) || (num == 1) || (num == 2)) {
        answerVar = num;
    }
    else if (isPrime(num, limit)) {
        answerVar = num;
    }
    else {
        bool prop;
        long long int m;
        set <long long int> vis;
        // if 2 divides num, equate answerVar to 2
        if ((num % X) == 0) {
            answerVar = 2;
        }
        // same as isPrime but setting answerVar, check
        // if for num
        for (long long int i = 3; (i <= num) ; i += X) {
            // answerVar set to i, if prime, and divides
            if ((num % i) == 0) {
                long long int lim1 = pow(i, 0.5);
                if (isPrime(i, lim1)) {
                    answerVar = i;
                }
            }
            m = vis.size();
            if (i <= limit) {
                if (m < SET_LIMIT_X) {
                    for (long long int l = i; l <= num; l += i) {
                        vis.insert(l);
                    }
                }
            }
        }
    }
    return answerVar;
}

long long int calcAnswer(long long int num) {
    return lastPrime(num);
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long long int x;
        x = n;
        // calculating answer
        long long int answer = calcAnswer(x);
        // print answer
        cout << answer << endl;
    }
    return 0;
}
