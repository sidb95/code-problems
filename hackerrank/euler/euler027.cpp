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
pair <int, int> mainFuncAux1(int N) {
    //
    int maxA, maxB;
    int maxPrimes = 0;
    //
    pair <int, int> p1;
    // iterating i for a
    for (int i = N; i >= (-1 * N); i -= 1) {
        // iterating i for j
        for (int j = N; j >= (-1 * N); j -= 1) {
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
            int count = 0;
            //
            // iterating n
            for (int n = 0; FLAG; n += 1) {
                //
                // occur frequent
                int num2 = (n * n);
                int num3 = (i * n);
                // occur frequent
                int modB1 = (j % num2);
                int modB2 = (num2 % j);
                //
                // calc ```x```
                int x = (num2 + num3 + j);
                //
                // edge cases of ```a n j```
                if (i == n) {
                    if ((j % 2) == 0) {
                        continue;
                    }
                }
                else if (j == n) {
                    break;
                }
                else if (i == j) {
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
                else if (j == 0) {
                    break;
                }
                else if (i == 0) {
                    if (modB2 == 0) {
                        continue;
                    }
                    if (modB1 == 0) {
                        continue;
                    }
                }
                if (!isPrime(x, pow(x, 0.5))) {
                    FLAG = false;
                }
                if (FLAG) {
                    count += 1;
                }
            }
            //
            if (maxPrimes < count) {
                maxPrimes = count;
                maxA = i;
                maxB = j;
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
    pair <int, int> p1;
    p1 = mainFuncAux1(N);
    cout << p1.first << " " << p1.second << endl;
    return 0;
}
