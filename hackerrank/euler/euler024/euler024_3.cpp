
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

string str1 = "abc";
string str2 = "def";
string str3 = "ghi";
string str4 = "jkl";
char c = 'm';

myFunc1(long long int n) {
    if (n == 1) {
        return str1 + str2 + str3 + str4;
    }
    else if (n == 2) {
        swap(str4, 12, 11);
    }
    else if (n == 3) {
        for (int i = 0; i < 3; i += 1) {
            for (int j = i + 1; j < 3; j += 1)
        }
    }
}

void calcAnswer(long long int N) {
    if (n < 3*2*1) {
        myFunc1(n);
    }
    else if (n < 720) {
        myFunc2(n);
    }
    else if (n < 720 * 504) {
        myFunc3(n);
    }
    else if (n < 720 * 504 * 1320) {
        myFunc4(n);
    }
    else {
        myFunc5(n);
    }
}

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        long long int N;
        cin >> N;
        cout << calcAnswer(N) << endl;
    }
}
