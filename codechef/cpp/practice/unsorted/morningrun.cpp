/*
morningrun
bhatoresiddharth@gmail.com
sidb95
16 May 2024
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int X, Y;
	cin >> X >> Y;
	bool retProp = (2*(X+Y) >= 1000)? (true : false);
	if (retProp) {
	    cout << "Yes" << endl;
	}
	else {
	    cout << "No" << endl;
	}
	return 0;
}
