#include <bits/stdc++.h>
using namespace std;

set <int> S1 = {};

bool isPowerTwo(int TEMP) {
    while (TEMP != 1) {
        if ((TEMP % 2) == 0) {
            TEMP /= 2;
        }
        else {
            return false;
        }
    }
    return true;
}

int noSmallerSlices(int X) {
    bool flag = false;
    if (X <= 4) {
        return 0;
    }
    else {
        flag = (S1.find(X) == S1.end());
        if (!flag) {
            return 0;
        }
    }
    if (flag) {
        int Y = X, answer = 0;
        while ((S1.find(Y) == S1.end())) {
            Y -= 2;
            answer += 4;
        }
        return answer;
    }
}

int main() {
	int t, T, i = 0;
	cin >> T;
	while (pow(2, i) < pow(10, 5) + 1) {
	    S1.insert(pow(2, i));
	    i += 1;
	}
	for (t = 0; t < T; t += 1) {
	    int X;
	    cin >> X;
	    cout << noSmallerSlices(X) << endl;
	}
    return 0;
}
