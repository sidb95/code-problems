/*
1094906
bhatoresiddharth@gmail.com
sidb95
19 May 2024
*/

#include <bits/stdc++.h> 

pair<int, int> absDiff(vector<int>& arr, int n) {
	pair<int, int> answer = {arr[0], (n < 2) ? 0 : arr[1]};
	for (int i=2; i<n; i++) {
		if ((i%2) == 0) {
			answer.first -= arr[i];
		}
		else {
			answer.second -= arr[i];
		}
	}
	return answer;
}
