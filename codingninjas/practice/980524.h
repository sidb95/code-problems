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
    bool FLAG;
    for (int i=0; i<n-1; i++) {
        FLAG = false;
        for (int j=i+1; j<n; j++) {
            if (arr[i] > arr[j]) {
                swap(arr, n, i, j);
                if (!FLAG) {
                    FLAG = true;
                }
            }
        }
        if (!FLAG) {
            break;
        }
    }
    return;   
}
