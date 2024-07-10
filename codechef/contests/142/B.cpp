#include <bits/stdc++.h>
using namespace std;

bool canDraw(int X, int Y) {
    if (X == 0) {
        if (Y == 1) {
            return true;
        }
        else if (Y == 2) {
            return true;
        }
        else if (Y == 0) {
            return true;
        }
    }
    else if (X == 1) {
        if (Y == 1) {
            return true;
        }
        else if (Y == 2) {
            return true;
        }
        else if (Y == 3) {
            return true;
        }
        else if (Y == 0) {
            return true;
        }
    }
    else if (X == 2) {
        if (Y == 1) {
            return true;
        }
        else if (Y == 2) {
            return true;
        }
        else if (Y == 3) {
            return true;
        }
        else if (Y == 4) {
            return true;
        }
    }
    else if (X == 3) {
        if (Y == 2) {
            return true;
        }
        else if (Y == 3) {
            return true;
        }
        else if (Y == 4) {
            return true;
        }
        else if (Y == 5) {
            return true;
        }
    }
    return false;
}

int main() {
	int T;
	cin >> T;
	for (int t = 0; t < T; t += 1) {
	    int X, Y;
	    cin >> X >> Y;
	    if (canDraw(X, Y)) {
	        cout << "YES" << endl;
	    }
	    else {
	        cout << "NO" << endl;
	    }
	}
    return 0;
}
