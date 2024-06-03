/*
euler003
bhatoresiddharth@gmail.com
ITER1: 20, 21 May 2024
ITER2: 03 June 2024
*/

#include <iostream>
#include <math.h>
#include <set>

using namespace std;

long long int SET_LIMIT_X = 100000;
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
    long long int m;
    set <long long int> vis;
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

long long int calcAnswer(long long int num) {
    long long int answer;
    for (int i = num; i >= 0; i --) {
        if (num % i == 0) {
            if (isPrime(i, pow(i, 0.5))) {
                answer = i;
                break;
            }
        }
    }
    return answer;
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
