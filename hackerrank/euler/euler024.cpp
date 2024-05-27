/*
euler024
bhatoresiddharth@gmail.com
sidb95
27 May 2024
*/

#include <iostream>
#include <string>
#include <math.h>
#include <set>
#include <unordered_map>

using namespace std;

string S = "abcdefghijklm";
string Y = "mlkjihgfedcba";

unordered_map< long int, string > um1;
long int SET_LIMIT = um1.max_size();

string swap(string s, int i, int j) {
    char c = s[i];
    s[i] = s[j];
    s[j] = c;
    return s;
}

// one greater lexicographical
string greaterLexicographical1(string s, int m, long int N) {
    if (s == Y) {
        return s;
    }
    else {
        long int count = 1;
        while (count != N) {
            for (int i = m - 1; i >= 1; i -= 1) {
                while (s[i] < s[i - 1]) {
                    continue;
                }
                s = swap(s, i, i - 1);
                count += 1;
                um1[count] = s;
                if (count == N) {
                    break;
                }
            }
        }
        return s;
    }
    return s;
}

string calcAnswer(long int N) {
    string s = S;
    if (N == 1) {
        um1[1] = s;
        return s;
    }
    if(um1.find(N) != um1.end()) {
        return um1[N];
    }
    else {
        int m = s.size();
        // setting s
        // taking one lexicographical greater than s
        s = greaterLexicographical1(s, m, N);
    }
    return s;
}

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        long int N;
        cin >> N;
        // prints the answer
        cout << calcAnswer(N) << endl;
    }
    return 0;
}
