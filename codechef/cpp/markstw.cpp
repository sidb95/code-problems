/*
markstw
bhatoresiddharth@gmail.com
sidb95
07 May 2024
*/

#include <iostream>
using namespace std;

class Solution {
private:
	int x, y;
public:
	bool AliceHappyOrNot(int a, int b, bool retVar=false) {
		x = a;
		y = b;
		if(x >= (2*y)) {
			retVar = true;
		}
		return retVar;
	}

	void printAliceIsHappy(bool varProp) {
		varProp = (AliceHappyOrNot(x, y));
		if(varProp) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
		return;
	}
};

int main() {
    int x,y;
    cin>>x>>y;
    Solution mySol;
    bool varProp = mySol.AliceHappyOrNot(x, y);
    mySol.printAliceIsHappy(varProp);
	return 0;
}
