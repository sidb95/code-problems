#include <iostream>
#include <string>
#include <math.h>
#include <set>

using namespace std;

string S = "abcdefghijklm";
string Y = "mlkjihgfedcba";
/*
12 <- m wandered 1, l wandered 1
*/
int SET_LIMIT = 100000;

string swap(string s, int i, int j) {
    char c = s[i];
    s[i] = s[j];
    s[j] = c;
    return s;
}

//N greater lexicographical
string greaterLexicographical1(string s, int m, long int N) {
    if (s == Y) {
        return s;
    }
    else {
        long int count = 1;
        bool FLAG = true;
        int n;
        while (count != N) {
            for (int i = m - 1; (i >= 1) && FLAG; i -= 1) {
                while (s[i] < s[i - 1]) {
                    continue;
                }
                s = swap(s, i, i - 1);
                i = m;
                count += 1;
                if (count == N) {
                    FLAG = false;
                }
            }
        }
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
