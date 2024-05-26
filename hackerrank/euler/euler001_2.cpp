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

long long int SET_LIMIT = 100000;

pair<long long int, long long int> assignerFunc(long long int n, long long int lastNum, long long int maxNum, long long int a, long long int b) {
    pair<long long int, long long int> retAnswer;
    long long int posi, posj;
    // maxNum is greater than n, case 1
    if (maxNum > n) {
        // posi calc, case 1
        if ((n % a) == 0) {
            posi = n;
        }
        else if (((n + 1) % a) == 0) {
            posi = n + 1;
        }
        else if (((n + 2) % a) == 0) {
            posi = n + 2;
        }
        else {
            posi = a;
        }
        // posj calc, case 1
        if ((n % b) == 0) {
            posj = n;
        }
        else if (((n + 1) % b) == 0) {
            posj = n + 1;
        }
        else if (((n + 2) % b) == 0) {
            posj = n + 2;
        }
        else if (((n + 3) % b) == 0) {
            posj = n + 3;
        }
        else if (((n + 4) % b) == 0) {
            posj = n + 4;
        }
        else {
            posj = b;
        }
    }
    else if (maxNum == n){
        if (lastNum == -1) {
            lastNum = 1;
        }
        if ((lastNum % a) == 0) {
            posi = lastNum;
        }
        else if (((lastNum + 1) % a) == 0) {
            posi = lastNum + 1;
        }
        else if (((lastNum + 2) % a) == 0) {
            posi = lastNum + 2;
        }
        else {
            posi = a;
        }
        if ((lastNum % b) == 0) {
            posj = lastNum;
        }
        else if (((lastNum + 1) % b) == 0) {
            posj = lastNum + 1;
        }
        else if (((lastNum + 2) % b) == 0) {
            posj = lastNum + 2;
        }
        else if (((lastNum + 3) % b) == 0) {
            posj = lastNum + 3;
        }
        else if (((lastNum + 4) % b) == 0) {
            posj = lastNum + 4;
        }
        else {
            posj = b;
        }
    }
    retAnswer = make_pair(posi, posj);
    return retAnswer;
}

int sumOfDigits(long long int N) {
    int answer = 0;
    while (N != 0) {
        answer += (N % 10);
        N /= 10;
    }
    return answer;
}

bool divisibilityCheck3(long long int N) {
    int n = sumOfDigits(N);
    return (n % 3) == 0;
}

long long int sumMultiples(long long int n, set <long long int>& VIS, long long int maxNum, long long int lastNum, long long int a, long long int b) {
    // edge cases
    if((n == 1) || (n == 2)) {
        return 0;
    }
    //
    long long int posi, posj;
    // calc posi posj
    pair<long long int, long long int> p;
    p = assignerFunc(n, lastNum, maxNum, a, b);
    //
    posi = p.first;
    posj = p.second;
    //
    long long int sum = 0;
    //
    long long int m = VIS.size();
    long long int k;
    //
    set <long long int>::iterator itrVis;
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
    for (long long int i = posi; i < n; i += a) {
        sum += i;
        // exclude those i that are large in size 
        if (SET_LIMIT >= m) {
            m = VIS.size();
            VIS.insert(i);
        }
    }
    // summing up the new multiples of ```b < n```
    for (long long int j = posj; j < n; j += b) {
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
    set <long long int> VIS;
    long long int maxNum = -1, lastNum;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        lastNum = maxNum;
        long long int x = n, a = 3, b = 5;
        maxNum = max(maxNum, x);
        cout << sumMultiples(x, VIS, maxNum, lastNum, a, b) << endl;
    }
    return 0;
}
