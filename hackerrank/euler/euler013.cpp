/*
euler013
bhatoresiddharth@gmail.com
sidb95
22 May 2022
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int K = 50;

string calcFirstTen(vector<string>& V1, int N) {
    string answer = "";
    string retAnswer = "";
    int unitsDigit;
    //
    int sum, carry = 0;
    // runs K times, i = K-1 to 0
    for (int i = K - 1; i >= 0; i--) {
        sum = 0;
        // at position i
        for (int j = 0; j < N; j++) {
            sum += (V1[j][i] - '0');
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
    // making retAnswer (first 10 digits of answer)
    for (int i = 0; i < 10; i++) {
        retAnswer += answer[i];
    }
    //
    return retAnswer;
}

int main() {
    vector<string> V1;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        V1.push_back(s);
    }
    cout << calcFirstTen(V1, N) << endl;
    return 0;
}
