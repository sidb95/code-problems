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
/*
Returns pair in question
*/
// main helper function 1
pair <long long int, long long int> mainFuncAux1(long long int N) {
    //
    long long int maxA, maxB;
    long long int maxPrimes = 0;
    //
    pair <long long int, long long int> p1;
    // iterating i for a
    for (long long int i = N; i >= (-1 * N); i -= 1) {
        // iterating i for j
        for (long long int j = N; j >= (-1 * N); j -= 1) {
            //
            p1 = make_pair(i, j);
            //
            long long int num1 = (i * i) - (4 * j);
            //
            bool propn2 = (num1 >= 0);
            //
            double fl1 = pow(num1, 0.5);
            long long int num2 = pow(num1, 0.5);
            //
            bool propn1 = (to_string(fl1) == to_string(num2));
            //
            if (propn1) {
                if (propn2) {
                    if (((-1 * i) + (num2)) % 2 == 0) {
                        continue;
                    }
                    if ((((-1 * i) - (num2)) % 2) == 0) {
                        continue;
                    }
                }
            }
            //
            bool FLAG = true;
            //
            long long int count = 0;
            //
            long long int n = 0;
            // iterating n
            while (FLAG) {
                //
                // occur frequent
                long long int num2 = (n * n);
                long long int num3 = (i * n);
                // occur frequent
                //
                // calc ```x```
                long long int x = (num2 + num3 + j);
                if (i == j) {
                    if (((num2) % (n + 1)) == 0) {
                        continue;
                    }
                }
                else if (j == 0) {
                    break;
                }
                if (!isPrime(x, pow(x, 0.5))) {
                    FLAG = false;
                }
                if (FLAG) {
                    count += 1;
                }
                n += 1;
            }
            //
            if (!FLAG) {
                if (maxPrimes < count) {
                    maxPrimes = count;
                    maxA = i;
                    maxB = j;
                }
            }
            //
        }
    }
    p1 = make_pair(maxA, maxB);
    return p1;
}
//
int main() {
    int N;
    cin >> N;
    pair <long long int, long long int> p1;
    p1 = mainFuncAux1(N);
    cout << p1.first << " " << p1.second << endl;
    return 0;
}
