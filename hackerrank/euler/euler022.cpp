/*
euler022
bhatoresiddharth@gmail.com
sidb95
26 May 2024
*/

#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

string calcAnswerAux(int N, unordered_map<long long int, string>& UM1) {
    int m = UM1.size();
    if (N > m) {
        long long int sum = 0;
        for (int i = 1; i < N; i += 1) {
            if ((N % i) == 0) {
                sum += i;
            }
            if (sum > N) {
                UM1[N] = "YES";
                return "YES";
            }
        }
    }
    else {
        return UM1[N];
    }
    UM1[N] = "NO";
    return "NO";
}

string calcAnswer(long long int N, 
unordered_map <long long int, string>& UM1) {
    if (N > 28123) {
        return "YES";       
    }
    else {
        return calcAnswerAux(N, UM1);
    }
}

int main() {
    int t, T;
    cin >> T;
    unordered_map <long long int, string> UM1;
    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;
        cout << calcAnswer(N, UM1) << endl;
    }
    return 0;
}
