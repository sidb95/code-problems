/*
euler007
bhatoresiddharth@gmail.com
sidb95
21 May 2024
*/

#include <set>
#include <iostream>
#include <math.h>

using namespace std;

long long int SET_LIMIT_X = 100000;
long long int X = 2;
set <long long int> VIS;

bool isPrime(long long int num, long long int limit);
long long int calcAnswer(long long int n);

bool isPrime(long long int num, long long int limit) {
    bool retAnswer = true;
    bool prop = true;
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
            m = VIS.size();
            //
            if (m < SET_LIMIT_X) {
                // if true, visit and mark nodes by multiples
                if (VIS.find(i) == (VIS.end())) {
                    for (long long int l = i; l <= limit; l += i) {
                        VIS.insert(l);
                    }
                }
            }
        }
    }
    //
    return retAnswer;
}

long long int calcAnswer(long long int n) {
    long long int retAnswer;
    if (n == 1) {
        retAnswer = 2;
    }
    else {
        bool FLAG = true;
        int count1 = 1;
        int num1 = 3;
        while (FLAG) {
            if ((isPrime(num1, pow(num1, 0.5)))) {
                count1++;
            }
            if (count1 == n) {
                retAnswer = num1;
                FLAG = false;
            }
            num1 += 2;
        }
    }
    return retAnswer;
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
