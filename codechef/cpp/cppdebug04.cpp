/*
sidb95
bhatoresiddharth@gmail.com
cppdebug04
08 May 2024
*/

class Solution {
public:
	bool minFunc(int a, int b) {
		return a < b;
	}

	void decisionFunc(int a=0, int b=0) {
		int ageAlice = a;
		int ageBob = b;
		cout << (minFunc(ageAlice, ageBob) ? "a" : "b") << endl
		return;
	}
};