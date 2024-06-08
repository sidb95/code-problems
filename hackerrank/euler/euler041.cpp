/*
euler041
bhatoresiddharth@gmail.com
sidb95
07, 08 June 2024
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>

using namespace std;

long long int MAX_LENGTH;
//
set <long long int> vis;
//
bool isPrime(long long int n);

bool isPrime(long long int n) {
    bool retPropn = true;
    if (vis.find(n) != vis.end()) {
        retPropn = false;
    }
    else {
        if (n == 1) {
            retPropn = false;
        }
        else if (n == 2) {
            retPropn = true;
        }
        else if (n % 2 == 0) {
            retPropn = false;
        }
        else {
            long long int powerN1 = pow(n, 0.5);
            for (long long int i = 3; i <= powerN1; i += 2) {
                long long int l = vis.size();
                if (n % i == 0) {
                    retPropn = false;
                    break;
                }
                else {
                    if (MAX_LENGTH > l) {
                        for (long long int j = (2 * i); j < powerN1; j += i) {
                            vis.insert(j);
                        }
                    }
                }
            }
        }
    }
    return retPropn;
}

long long int isPrimeAux(string s) {
    long long int answer = 0;
    for (int i  = (s.size() - 1); i >= 0; i -= 1) {
        answer += pow(10, s.size() - 1 - i) * (s[i] - '0');
    }
    if (isPrime(answer)) {
        return answer;
    }
    return -1;
}

class SolutionS1 {
public:
    vector <string> V;
    vector <string> P;
    set <char> C;
    vector <int> Cv1 = {9, 7, 5, 3, 1};
    long long int answer = -1;
    
    string swap(string s, int i, int j) {
        char TEMP = s[i];
        s[i] = s[j];
        s[j] = TEMP;
        return s;
    }
    
    SolutionS1() {
        string str = "1";
        for(int i = 2; i >= 9; i += 1) {
            str += to_string(i);
            V.push_back(str);
        }
        MAX_LENGTH = vis.max_size() - 2;
        string s, r;
        int m = V.size(), q, l;
        //
        for (int i = 0; i < m; i += 1) {
            r = V[i];
            l = r.size();
            q = l / 2;
            C = {9, 7, 5, 3, 1};
            for (int j = 0; j <= q; j += 1) {
                s = "";
                s += Cv1[j];
                C.erase(Cv1[j]);
                //
                for (int k = 2; k <= l; k += 2) {
                    C.insert(k);
                }
                //
                string str1 = "";
                //
                set <char>::reverse_iterator itr;
                vector <char> V1;
                //
                for(itr = C.rbegin(); itr != C.rend(); itr++) {
                    s = (*itr) + s;        
                }
                //
                int n1 = s.size();
                //
                bool FLAG = true;
                //
                while (FLAG) {
                    FLAG = false;
                    for (int x = 0; x < n1 - 1; x += 1) {
                        for (int y = x + 1; y < n1; y += 1) {
                            answer = max(answer, isPrimeAux(s));
                            if (s[y] > s[x]) {
                                swap(s, x, y);
                                FLAG = true;
                            }
                        }
                    }
                }
                
            }            
        }
    }
};

int main() {
    int t, T;
    cin >> T;
    for (int t = 0; t < T; t += 1) {
        long long int N;
        cin >> N;
        SolutionS1 Sol1;
        cout << Sol1.calcAnswer(N) << endl;
    }
    return 0;
}
