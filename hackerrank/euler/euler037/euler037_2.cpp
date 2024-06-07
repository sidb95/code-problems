#include <iostream>

using namespace std;

bool isPrime(long long int n) {
    bool retPropn = true;
    if (n == 1) {
        retPropn = false;
    }
    for (long long int i = 3; i < pow(n, 0.5); i += 2) {
        if (n % i == 0) {
            retPropn = false;
        }
    }
    return retPropn;
}

bool isTruncatable(long long int n) {
    bool retPropn = true;
    vector <int> digits;
    long long int num1 = n;
    while (num1 != 0) {
        if (!isPrime(num1)) {
            retPropn = false;
            break;
        }
        digits.push_back(num1 % 10);
        num1 /= 10;
    }
    int m = digits.size();
    int num2 = 0;
    for (int j = 0; j < m; j += 1) {
        num2 += pow(10, j) * digits[m - 1 - j];
        if (!isPrime(num2)) {
            retPropn = false;
            break;
        } 
    }
    return retPropn;
}

long long int calcAnswer(long long int N) {
    long long int answer = 0;
    for (long long int i = 11; i < N; i += 2) {
        if (isTruncatable(i)) {
            answer += i;
        }
    }
    return answer;
}

int main() {
    long long int N;
    cin >> N;
    cout << calcAnswer(N) << endl;
    return 0;
}
