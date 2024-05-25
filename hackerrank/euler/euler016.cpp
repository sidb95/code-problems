/*
euler016
bhatoresiddharth@gmail.com
sidb95
25 May 2024
*/

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

string powerTwoSixty = "1152921504606846976";
long long int twoPower60 = 1152921504606846976;

long long int sumOfDigits(string finalVar) {
    int answer = 0;
    int l = finalVar.size();
    int i = 0;
    while (i != l) {
        answer += (finalVar[i] - '0');
        i++;
    }
    return answer;
}

string calcAnswerAux2(string s, long long int z) {
    long long int sum;
    long long int len1 = s.size();
    long long int unitsDigit;
    long long int carry = 0;
    string answer = "";
    //
    for (long long int i = len1 - 1; i >= 0; i -= 1) {
        sum = 0;
        // at position i
        for (long long int j = 0; j < z; j += 1) {
            sum += s[i];
        }
        // unit place digit calculation
        unitsDigit = ((sum + carry) % 10);
        carry = ((sum + carry) / 10);
        answer = to_string(unitsDigit) + answer;
    }
    // adding carry forward to the answer
    while (carry != 0) {
        unitsDigit = (carry % 10);
        carry /= 10;
        answer = to_string(unitsDigit) + answer;
    }
    return answer;
}

string calcAnswerAux(long long int N, long long int x, long long int y) {
    string s = powerTwoSixty;
    if ((x == 1) && (y == 0)) {
        return powerTwoSixty;
    }
    else {
        long long int z = pow(2, y);
        string str = powerTwoSixty;
        for (long long int i = 0; i < x - 1; i += 1) {
            str = calcAnswerAux2(str, twoPower60);
        }
        cout << "str = " << str << endl;
        string str1 = "";
        for (long long int i = 0; i < str.size(); i++) {
            str1 += str[i];
        }
        str = calcAnswerAux2(str1, z);
        return str;
    }
}

long long int calcAnswer(long long int N) {
    long long int answer;
    if (N < 60) {
        long long int finalVar1 = pow(2, N);
        answer = sumOfDigits(to_string(finalVar1));
    }
    else if (N == 60) {
        answer = sumOfDigits(powerTwoSixty);
    }
    else {
        long long int x = N / 60;
        long long int y = N % 60;
        answer = sumOfDigits(calcAnswerAux(N, x, y));
    }
    return answer;
}


int main() {
    long long int T, t;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        long long int N;
        cin >> N;
        cout << calcAnswer(N) << endl;
    }
    return 0;
}
