/*
euler030
bhatoresiddharth@gmail.com
sidb95
29 May 2024
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

long long int sumPowerDigits(int i, int N) {
    long long int n1 = i;
    long long int sum = 0;
    while (n1 != 0) {
        sum += pow(n1 % 10, N);
        n1 /= 10;
    }
    return sum;
}


int main() {
    int N;
    cin >> N;
    long long int answer = 0;
    bool FLAG = true;
    long long int sum, sumA1 = 0;
    pair<int, long long int> p1;
    for (long long int i = 2; i <= 1000000; i += 1) {
        sumA1 = sumPowerDigits(i, N);
        if (sumA1 == i) {
            answer += sumA1;
        }
    }
    cout << answer << endl;
    return 0;
}
