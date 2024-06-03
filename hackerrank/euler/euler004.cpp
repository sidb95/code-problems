/*
euler004
bhatoresiddharth@gmail.com
sidb95
25 May 2024
*/

#include <string>
#include <iostream>

using namespace std;

bool isPalindrome(int L) {
    string s = to_string(L);
    int i = 0, j = s.size() - 1;
    //
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i += 1;
        j -= 1;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    map <int, int> M1;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        map <int, int>::iterator itr;
        itr = M1.find(n);
        if (itr != M1.end()) {
            return (itr->second);
        }
        else {
            int K = 100, M = 999;
            int answer = 101101;
            for (int i = K; i <= M; i += 1) {
                for (int j = K; j <= M; j += 1) {
                    int L = j * i;
                    if ((L > 101101) && (L < n)) {
                        if (isPalindrome(L)) {
                            answer = max(answer, L);
                        }
                    }
                }
            }
        }
        M1[n] = answer;
        cout << answer << endl;
    }
    return 0;
}
