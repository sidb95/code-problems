/*
sbhatore
06 August 2024
*/

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        int n;
        vector <long long int> A, B;
        cin >> n;
        for (int i = 0; i < n; i += 1) {
            long long int TEMP;
            cin >> TEMP;
            A.push_back(TEMP);
        }
        for (int i = 0; i < n; i += 1){
            B.push_back(A[i]);
        }
        for (int i = 1; i < n; i += 1) {
            A[i] += A[i - 1];
        }
        //
        for (int i = 0; i < n; i += 1) {
            for (int j = i + 1; j < n; j += 1) {
                if (B[i] == B[j]) {
                    B[j] = -1;
                }
            }
        }
        int count = 0;
        //
        for (int i = 0; i < n; i += 1) {
            for (int j = 0; j < i + 1; j += 1) {
                if ((A[i] - B[j]) == B[j]) {
                    count += 1;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
