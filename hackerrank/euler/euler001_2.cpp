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

using namespace std;

long long int SET_LIMIT;
long long int SET_LIMIT_1 = 1000000;

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

bool divisibilityCheck5(long long int N) {
    return ((N % 10) == 0) || ((N % 10) == 5);
}

//
pair<int, int> assignerFunc(long long int n, long long int lastNum, long long int maxNum) {
    pair<int, int> retAnswer;
    int posi, posj;
    // maxNum is greater than n, case 1
    if (maxNum > n) {
        // posi calc, case 1
        if (divisibilityCheck3(n)) {
            posi = n;
        }
        else if ((divisibilityCheck3(n + 1))) {
            posi = n + 1;
        }
        else if ((divisibilityCheck3(n + 2))) {
            posi = n + 2;
        }
        else {
            posi = 3;
        }
        // posj calc, case 1
        if (divisibilityCheck5(n)) {
            posj = n;
        }
        else if (divisibilityCheck5(n + 1)) {
            posj = n + 1;
        }
        else if (divisibilityCheck5(n + 2)) {
            posj = n + 2;
        }
        else if (divisibilityCheck5(n + 3)) {
            posj = n + 3;
        }
        else if (divisibilityCheck5(n + 4) ) {
            posj = n + 4;
        }
        else {
            posj = 5;
        }
    }
    else if (maxNum == n){
        if (lastNum == -1) {
            lastNum = 1;
        }
        if (divisibilityCheck3(lastNum)) {
            posi = lastNum;
        }
        else if ((divisibilityCheck3(lastNum + 1)) ) {
            posi = lastNum + 1;
        }
        else if ((divisibilityCheck3(lastNum + 2)) ) {
            posi = lastNum + 2;
        }
        else {
            posi = 3;
        }
        if (divisibilityCheck5(lastNum) ) {
            posj = lastNum;
        }
        else if ((divisibilityCheck5(lastNum + 1)) ) {
            posj = lastNum + 1;
        }
        else if ((divisibilityCheck5(lastNum + 2)) ) {
            posj = lastNum + 2;
        }
        else if ((divisibilityCheck5(lastNum + 3)) ) {
            posj = lastNum + 3;
        }
        else if ((divisibilityCheck5(lastNum + 4))) {
            posj = lastNum + 4;
        }
        else {
            posj = 5;
        }
    }
    retAnswer = make_pair(posi, posj);
    return retAnswer;
}

//
long long int sumMultiples(long long int n, set <int>& VIS, long long int maxNum, long long int lastNum) {
    //
    long long int sum = 0;
    // edge cases
    if((n == 1) || (n == 2)) {
        return 0;
    }
    // looping till SET_LIMIT
    if (n < SET_LIMIT_1) {
        for (int i = 3; i < n; i++) {
            if (divisibilityCheck3(i) || divisibilityCheck5(i)) {
                sum += i;
                VIS.insert(i);        
            }
        }
        return sum;
    }

    //
    int posi, posj;
    // calc posi posj
    pair<int, int> p;
    p = assignerFunc(n, lastNum, maxNum);
    //
    posi = p.first;
    posj = p.second;
    //
    int m = VIS.size();
    int k;
    //
    set <int>::iterator itrVis;
    // summing up the largest non-conflicting summation
    for (itrVis = VIS.begin(); itrVis != VIS.end(); itrVis++) {
        k = (*itrVis);
        if (k < n) {
            sum += k;
        }
        else {
            return sum;
        }
    }
    // summing up (if not returned), multiples of a,
    for (int i = posi; i < n; i += 3) {
        sum += i;
        // exclude those i that are large in size 
        if (SET_LIMIT >= m) {
            m = VIS.size();
            VIS.insert(i);
        }
    }
    // summing up the new multiples of ```b < n```
    for (int j = posj; j < n; j += 5) {
        if (!divisibilityCheck3(j)) {
            sum += j;
            // exclude those j that are large in size 
            if (SET_LIMIT >= m) {
                m = VIS.size();
                VIS.insert(j);
            }
        }
    }
    //
    return sum;
}

int main(){
    int t;
    cin >> t;
    set <int> VIS;
    SET_LIMIT = VIS.max_size();
    long long int maxNum = -1, lastNum;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        lastNum = maxNum;
        long long int x = n;
        maxNum = max(maxNum, x);
        cout << sumMultiples(x, VIS, maxNum, lastNum) << endl;
    }
    return 0;
}
