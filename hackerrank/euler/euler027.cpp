/*
euler027
bhatoresiddharth@gmail.com
sidb95
27 May 2024
*/

#include <vector>
#include <iostream>
#include <set>
#include <math.h>

using namespace std;

long long int X = 2;
long long int SET_LIMIT_X = 100000;

// calcs if ```num``` is prime
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
//
void calcAnswer(int a, int b, int n) {
    //
    bool FLAG = true;
    //
    int count = 0;
    //
    // iterating n
    for (int n = 0; FLAG; n += 1) {
        //
        // occur frequent
        int num2 = (n * n);
        int num3 = (a * n);
        // occur frequent
        int modB1 = (b % num2);
        int modB2 = (num2 % b);
        // calc ```x```
        int x = (num2 + num3 + b);
        // edge cases of a, n, b
        if (a == n) {
            if ((b % 2) == 0) {
                continue;
            }
        }
        else if (b == n) {
            break;
        }
        else if (a == b) {
            if ((modB2) == 0) {
                continue;
            }
            if ((modB1) == 0) {
                continue;
            }
            if (((num2) % (n + 1)) == 0) {
                continue;
            }
        }
        else if (b == 0) {
            break;
        }
        else if (a == 0) {
            if (modB2 == 0) {
                continue;
            }
            if (modB1 == 0) {
                continue;
            }
        }
        if (!isPrime(x)) {
            FLAG = false;
        }
        if (FLAG) {
            count += 1;
        }
    }
    return count;
}
//
int main() {
    int N;
    cin >> N;
    int a, b;
    //
    int maxNumPrimes = 0;
    int maxA = 0;
    int maxB = 0;
    //
    // iterating i for a
    for (int i = N; i >= (-1 * N); i -= 1) {
        // iterating i for b
        for (int j = N; j >= (-1 * N); j -= 1) {
            b = j;
            a = i;
            //
            long long int num1 = (a * a) - (4 * b);
            double rNumFloat = pow(num1, 0.5);
            //
            long long int rNumInt = pow(num1, 0.5);
            //
            bool propn1 = (to_string(rNumFloat) == to_string(rNumInt));
            // propn: continue with another value of b
            if (propn1) {
                continue;
            }
            int count = calcAnswer(a, b, N);
            // condition holds, changes req a b
            if (maxNumPrimes < count) {
                maxNumPrimes = count;
                maxA = a;
                maxB = b;
            }
        }
    }
    cout << p1.first << " " << p1.second << endl;
    return 0;
}
