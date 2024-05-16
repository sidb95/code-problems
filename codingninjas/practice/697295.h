/*
697295
bhatoresiddharth@gmail.com
sidb95
15 May 2024
*/

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int>& arr, int s) {
    vector<vector<int>> V1;
    sort(arr.begin(), arr.end());
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i] + arr[j] == s) {
                vector<int> A = {arr[i], arr[j]};
                V1.push_back(A);
            }
        }
    }
    return V1;
}
