/*
euler005
bhatoresiddharth@gmail.com
sidb95
22 May 2024
*/

#include <iostream>
#include <set>
#include <math.h>

using namespace std;

//
long long int SET_LIMIT_X = 100000;
long long int X = 2;

/*
 checks whether the num is prime or not
*/
//
bool isPrime(long long int num, long long int limit);
//
/*
 calculates the number divisible by every num from 1 to n.
*/
//
long long int calcAnswer(long long int n);
//
/*
 final calculation
*/
//
long long int finalCalc(long long int n, set <int>& placed, 
long long int product, set<int>& primes, set<int>& nonprimes);
//
/*
check for product divisibility
*/
//
bool checkAuxHelper(long long int product, set<int>& placed);
//
/*
check for divisibility by nonprime np1
*/
//
void checkDivisible(long long int product, set <int>& placed, 
long long int k);
//
/*
 helper function for ```calcAnswer```
*/
//
long long int calcAnswerAux(set <int>& primes, set <int>& nonprimes, 
long long int n);
//
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

bool checkAuxHelper(long long int product, set<int>& placed) {
    set <int>::iterator itr1;
    long long int k;
    for (itr1 = placed.begin(); itr1 != placed.end(); itr1++) {
        k = (*itr1);
        if ((product % k) != 0) {
            return false;
        }
    }
    return true;
}

void checkDivisible(long long int product, set <int>& placed, long long int k) {
    if ((product % k) != 0) {
        placed.insert(k);
    }
    return;
}

long long int finalCalc(long long int n, set <int>& placed, 
long long int product, set<int>& primes, set <int>& nonprimes) {
    int len1 = placed.size();
    if (len1 == 0) {
        return product;
    }
    set <int>::iterator itr1;
    bool propn1;
    long long int k;
    long long int answer;
    //
    for (itr1 = placed.begin(); itr1 != placed.end(); itr1++) {
        k = (*itr1);
        answer = product * k;
        propn1 = checkAuxHelper(answer, placed);
        if (propn1) {
            return answer;
        }
    }
    return answer;
}

long long int calcAnswerAux(set <int>& primes, set <int>& nonprimes, 
long long int n) {
    set <int>::iterator itr1; // primes iterator
    set <int>::iterator itr2; // nonprimes iterator
    //
    long long int product = 1;
    // calc product to product of all primes
    for (itr1 = primes.begin(); itr1 != primes.end(); itr1++) {
        product *= (*itr1);
    }
    //
    long long int k;
    set <int> placed;
    //
    for (itr2 = nonprimes.begin(); itr2 != nonprimes.end(); itr2++) {
        k = (*itr2);
        checkDivisible(product, placed, k);
    }
    return finalCalc(n, placed, product, primes, nonprimes);
}
//
long long int calcAnswer(long long int n) {
    if (n == 1) {
        return 1;
    }
    //
    set <int> primes;
    set <int> nonprimes;
    // set primes
    for (int i = 2; i <= n; i++) {
        if (isPrime(i, pow(i, 0.5))) {
            primes.insert(i);
        }
    }
    // set non primes
    for (int i = 2; i <= n; i++) {
        if (primes.find(i) == primes.end()) {
            nonprimes.insert(i);
        }
    }
    //
    return calcAnswerAux(primes, nonprimes, n);
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
