/*
893191
bhatoresiddharth@gmail.com
sidb95
19 May 2024
*/

#include <bits/stdc++.h> 

using namespace std;

vector<string> V1;
vector<string> numberPattern(int n) {
	if (n == 0) {
		return V1;
	}
	if (n == 1) {
		string str = "";
		return V1.push_back(to_string(n)+str);
		return V1;
	}
	else {
		for (int i=1; i<=n; i++) {
			string str = "";
			for (int j=0; j<i; j++) {
				str += to_string(i + j );
			}
			V1.push_back(str);
		}
	}
	return V1;
}
