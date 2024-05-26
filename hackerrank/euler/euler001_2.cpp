/*
euler001
bhatoresiddharth@gmail.com
sidb95
22, 26 May 2024
*/

#include <iostream>
#include <set>
#include <math.h>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

map < int, vector <int > > M1;

// sum of digits of N
int sumOfDigits(long long int N) {
    int answer = 0;
    while (N != 0) {
        answer += (N % 10);
        N /= 10;
    }
    return answer;
}

// if num is divisible by 3
bool divisibilityCheck3(long long int N) {
    int n = sumOfDigits(N);
    return (n % 3) == 0;
}
// if num is divisible by 5
bool divisibilityCheck5(long long int N) {
    return ((N % 10) == 0) || ((N % 10) == 5);
}
//
long long int sumMultiplesAux1A(long long int n, long long int sum, 
bool FLAG) {
    for (long long int l2 = 3; l2 < n; l2 += 3) {
        if (FLAG) {
            M1[3].push_back(l2);
        }
        sum += l2;
    }
    return sum;
}
//
long long int sumMultiplesAux1B(long long int n, long long int sum, 
bool FLAG) {
    for (long long int l2 = 5; l2 < n; l2 += 5) {
        if (!divisibilityCheck3(l2)) {
            if (FLAG) {
                M1[5].push_back(l2);
            }
            sum += l2;
        }
    }
    return sum;
}
//
long long int sumMultiplesAux2(long long int n, long long int maxNum, 
long long int sum) {
    int m = M1[3].size();
    //
    bool propn1 = true;
    propn1 = (m < maxNum);
    //
    for (int i = 0; i < (propn1? m : maxNum); i++) {
        sum += M1[3][i];
    }
    int q = M1[5].size();
    //
    bool propn2 = true;
    propn2 = (q < maxNum);
    //
    for (int i = 0; i < (propn2? q : maxNum); i++) {
        sum += M1[5][i];
    }
    // if condition holds or not
    if (propn1) {
        long long int posi = ((divisibilityCheck3(m)? m : 
        divisibilityCheck3(m + 1)? (m + 1) : (m + 2)));
        for (int i = posi; i < n; i += 3) {
            sum += i;
            M1[3].push_back(i);
        }
    }
    // if condition holds or not
    if (propn2) {
        long long int posj = ((divisibilityCheck5(q)))? q : 
        (divisibilityCheck5((q + 1))? (q + 1) : 
        (divisibilityCheck5(q + 2))? (q + 2) :
        (divisibilityCheck5(q + 3))? (q + 3) : (q + 4));
        for (int i = posj; i < n; i += 5) {
            if (!divisibilityCheck3(i)) {
                sum += i;
            }
        }
    }
    return sum;
}
//
long long int sumMultiplesAux3(long long int n, long long int maxNum, 
long long int sum) {
    int m = M1[3].size();
    if (m > maxNum) {
        for (int i = 0; M1[3][i] < n; i += 1) {
            sum += M1[3][i];
        }    
    }
    int q = M1[5].size();
    for (int i = 0; M1[5][i] < n; i += 1) {
        sum += M1[5][i];
    }
    return sum;
}
//
long long int sumMultiplesAux(long long int n, long long lastNum, 
long long int maxNum, long long int sum) {
    //
    if (lastNum == -1) {
        sum = sumMultiplesAux1A(n, sum, true);
        sum = sumMultiplesAux1B(n, sum, true);
    }
    else if (lastNum < maxNum) {
        sum = sumMultiplesAux2(n, maxNum, sum);
    }
    else if (lastNum == maxNum) {
        sum = sumMultiplesAux3(n, maxNum, sum);
    }
    else {
        sum = 0;
    }
    return sum;
}
//
long long int sumMultiples(long long int n, long long int lastNum, 
long long int maxNum) {
    //
    long long int sum = 0;
    // edge cases
    if((n == 1) || (n == 2)) {
        return sum;
    }
    // first time in this function
    sum = sumMultiplesAux(n, lastNum, maxNum, sum);
    //
    return sum;
}

int main(){
    int t;
    cin >> t;
    long long int lastNum, maxNum = -1;
    // testcases
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        lastNum = maxNum;
        long long int x = n;
        maxNum = max(maxNum, x);
        // print function
        cout << sumMultiples(x, lastNum, maxNum) << endl;
    }
    return 0;
}
