#include <iostream>
#include <string>
#include <math.h>
#include <set>
#include <vector>
#include <unordered_map>

using namespace std;


string S = "abcdefghijklm";
string Y = "mlkjihgfedcba";

unordered_map <long long int, string> STR1;
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
string greaterLexicographicalNext(string s, int m) {
    if (s == Y) {
        return s;
    }
    else {
        long int count = 0;
        int n;
        int i = m - 1;
        while ((i >= 1) && (s[i] < s[i - 1])) {
            i -= 1;
        }
        // one swap
        // i cannot be zero valued
        s = swap(s, i, i - 1);
    }
    return s;
}

string calcAnswer(long long int N) {
    string s = S;
    int m = s.size();
    for (int i = 0; i < N - 1; i += 1) {
        greaterLexicographicalNext(s, m);
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
        // prints the answer
        cout << calcAnswer(N) << endl;
    }
    return 0;
}