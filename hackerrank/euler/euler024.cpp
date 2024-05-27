/*
euler024
bhatoresiddharth@gmail.com
sidb95
27 May 2024
*/

#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

string S = "abcdefghijklm";
string Y = "mlkjihgfedcba";

int SET_LIMIT = 100000;

string swap(string s, int i, int j) {
    char c = s[i];
    s[i] = s[j];
    s[j] = c;
    return s;
}

// one greater lexicographical
string greaterLexicographical1(string s, int m, long int N, 
vector <string>& v1) {
    if (s == Y) {
        return s;
    }
    else {
        long int count = 1;
        int n;
        while (count != N) {
            for (int i = m - 1; i >= 1; i -= 1) {
                while (s[i] < s[i - 1]) {
                    continue;
                }
                s = swap(s, i, i - 1);
                count += 1;
                n = v1.size();
                if (n < SET_LIMIT) {
                    v1.push_back(s);
                }
                if (count == N) {
                    break;
                }
            }
        }
        return s;
    }
    return s;
}

string calcAnswer(long int N, vector<string>& v1) {
    string s = S;
    int n = v1.size();
    if (N < n) {
        return v1[N-1];
    }
    else {
        int m = s.size();
        // setting s
        // taking ```N - 1``` lexicographical greater than s
        s = greaterLexicographical1(s, m, N, v1);
    }
    return s;
}

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        long int N;
        cin >> N;
        //
        vector<string> v1 = {S};
        // prints the answer
        cout << calcAnswer(N, v1) << endl;
    }
    return 0;
}
