#include <iostream>
#include <math.h>
#include <vector>
#include <map>

using namespace std;

map < int, vector < long long int > > M1;

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
    long long int n = sumOfDigits(N);
    return (n % 3) == 0;
}
// if num is divisible by 5
bool divisibilityCheck5(long long int N) {
    return ((N % 10) == 0) || ((N % 10) == 5);
}
//
long long int sumMultiplesAux1A(long long int n, long long int i, 
long long int sum, bool FLAG) {
    for (long long int l2 = i; l2 < n; l2 += 3) {
        if (FLAG) {
            M1[3].push_back(l2);
        }
        sum += l2;
    }
    return sum;
}
//
long long int sumMultiplesAux1B(long long int n, long long int i,  
long long int sum, bool FLAG) {
    for (long long int l2 = i; l2 < n; l2 += 5) {
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
long long int sumMultiplesAux2A(int n, long long int sum) {
    int i = 0;
    int m = M1[3].size();
    while (i < m) {
        if (M1[3][i] < n) {
            sum += M1[3][i];
        }
        i += 1;
    }
    return sum;
}
//
long long int sumMultiplesAux2B(int n, long long int sum) {
    int i = 0;
    int q = M1[5].size();
    while (i < q) {
        if (M1[5][i] < n) {
            sum += M1[5][i];
        }
        i += 1;
    }
    return sum;
}
//
long long int sumMultiplesAux2(long long int n, long long int lastNum, 
long long int maxNum, long long int sum) {
    int m = M1[3].size();
    int q = M1[5].size();
    //
    bool propn1;
    propn1 = (M1[3][m - 1] < maxNum);
    bool propn2;
    propn2 = (M1[5][q - 1] < maxNum);
    //
    sum = sumMultiplesAux2A(n, sum);
    //
    sum = sumMultiplesAux2B(n, sum);
    // if condition holds or not
    if (propn1) {
        long long int posi = ((divisibilityCheck3(m)? m : 
        divisibilityCheck3(m + 1)? (m + 1) : (m + 2)));
        //
        sum = sumMultiplesAux1A(n, posi, sum, true);
        //
    }
    // if condition holds or not
    if (propn2) {
        long long int posj = ((divisibilityCheck5(q)))? q : 
        (divisibilityCheck5((q + 1))? (q + 1) : 
        (divisibilityCheck5(q + 2))? (q + 2) :
        (divisibilityCheck5(q + 3))? (q + 3) : (q + 4));
        //
        sum = sumMultiplesAux1B(n, posj, sum, true);
    }
    return sum;
}
//
long long int sumMultiplesAux3(long long int n, long long int maxNum, 
long long int sum) {
    for (int i = 0; M1[3][i] < n; i += 1) {
        sum += M1[3][i];
    }
    //
    for (int i = 0; M1[5][i] < n; i += 1) {
        sum += M1[5][i];
    }
    //
    return sum;
}
//
long long int sumMultiplesAux(long long int n, long long lastNum, 
long long int maxNum, bool propnA, long long int sum) {
    // edge cases
    if((n == 1) || (n == 2)) {
        return sum;
    }
    //
    if (propnA) {
        sum = sumMultiplesAux1A(n, 3, sum, true);
        sum = sumMultiplesAux1B(n, 5, sum, true);
    }
    else if (lastNum < maxNum) {
        sum = sumMultiplesAux2(n, lastNum, maxNum, sum);
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
    // first time in this function
    sum = sumMultiplesAux(n, lastNum, maxNum, (lastNum == -1), sum);
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
