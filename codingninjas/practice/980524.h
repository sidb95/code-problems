/*
980524
bhatoresiddharth@gmail.com
sidb95
13 May 2024
*/

#include <bits/stdc++.h>

void swap(vector<int>& arr, int n, int i, int j) {
    int TEMP;
    TEMP = arr[i];
    arr[i] = arr[j];
    arr[j] = TEMP;
}

void bubbleSort(vector<int>& arr, int n) {
    if ((n == 0) || (n == 1)) {
        bool retVal = true;
    }
    else {
        for (int i=0; i<n-1; i++) {
            for (int j=i+1; j<n; j++) {
                if (arr[i] > arr[j]) {
                    swap(arr, n, i, j);
                }
            }
        }
    }
    return;
}
