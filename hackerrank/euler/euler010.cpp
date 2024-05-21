/*
euler010
bhatoresiddharth@gmail.com
sidb95
21 May 2024
*/

#include <set>
#include <iostream>
#include <math.h>

using namespace std;

long long int X = 2;
long long int SET_LIMIT_X = 100000

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
    long long int retAnswer = 0;
    set <long long int> vis;
    long long int m = 0;
    if (n == 1) {
        retAnswer = 0;
    }
    else if (n == 2) {
        retAnswer = 2;
    }
    else {
        for (long long int i = 3; i < n; i++) {
            if (vis.find(i) == vis.end()) {
                if (isPrime(i, pow(i, 0.5))) {
                    retAnswer += i;
                }
            }
            else {
                if (m < SET_LIMIT_X) {
                    for (long long int l = i; l < n; l += i) {
                        vis.insert(l);
                        m++;
                    }
                }
            }
        }
        return retAnswer;
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
