#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<long long int, string> UM;

// returns sum of digits of ```N```
int noOfDigits(string str) {
    return str.size();
}

// function ```sumStrings```
string sumStrings(string s1, string s2) {
    string str = "";
    //
    int n = s1.size(), m = s2.size(), i, j;
    int sum = 0, carry = 0;
    //
    for (i = m - 1; i >= 0; i -= 1) {
        j = n - 1 - ((m - 1) - i);
        sum = ((s2[i] - '0') + (s1[j] - '0') + carry) % 10;
        carry = ((s2[i] - '0') + (s1[j] - '0') + carry) / 10;
        str = to_string(sum) + str;
    }
    //
    for (i = j - 1; i >= 0; i -= 1) {
        sum = ((s1[i] - '0') + carry) % 10;
        carry = ((s1[i] - '0') + carry) / 10;
        str = to_string(sum) + str;
    }
    if (carry) {
        str = to_string(carry) + str;
    }
    return str;
}

// returns Nth term of fibonacci series
string fib(long long int n) {
    if (UM.find(n) != UM.end()) {
        return UM[n];
    }
    if (n == 1) {
        UM[1] = "1";
        return "1";
    }
    else if (n == 2) {
        UM[2] = "1";
        return "1";
    }
    else {
        UM[n] = sumStrings(fib(n - 1), fib(n - 2));
    }
    return UM[n];
}


// function ```calcAnswer```
int calcAnswer(int N) {
    int retAnswer;
    bool FLAG = false;
    string a1;
    for (long long int i = 1; !FLAG; i += 1) {
        a1 = fib(i);
        FLAG = (noOfDigits(a1) == N);
        if (FLAG) {
            retAnswer = i;
        }
    }
    return retAnswer;
}

// ```main``` function
int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        int N;
        cin >> N;
        cout << calcAnswer(N) << endl;
    }
    return 0;
}
