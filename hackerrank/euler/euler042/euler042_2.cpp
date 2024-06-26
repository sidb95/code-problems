#include <iostream>
#include <math.h>

using namespace std;

long long int calcAnswer(long long int n) {
    long long int answer;
    double a = pow(1 + (4 * n), 0.5);
    long long int b = pow(1 + (4 * n), 0.5);
    if (a - b == 0) {
        long long int c = (a - 1) / 2;
        if (c >= 1) {
            answer = c;
        }
        else {
            answer = -1;
        }
    }
    else {
        answer = -1;
    }
    return answer;
}

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        long long int tnum;
        cin >> tnum;
        cout << calcAnswer(tnum) << endl;
    }
}
