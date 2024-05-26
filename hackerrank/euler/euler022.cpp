/*
euler022
bhatoresiddharth@gmail.com
sidb95
26 May 2024
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

long long int calcAnswer(string s, long long int m, long long int k) {
    long long int answer = 0;
    for (long long int i = 0; i < m; i++) {
        answer += (s[i] - 'A' + 1);
    }
    return answer * k;
}
bool sortAux(string strA, string strB) {
    return strA < strB;
} 
int main() {
    long long int N, n;
    cin >> N;
    map <string, long long int> M1;
    vector <string> VS1;
    for (n = 0; n < N; n += 1) {
        string s;
        cin >> s;
        M1[s] = (n + 1);
        VS1.push_back(s);
    }
    long long int Q;
    cin >> Q;
    vector <string> V1;
    //
    for (n = 0; n < Q; n += 1) {
        string s;
        cin >> s;
        V1.push_back(s);
    }
    //
    sort(VS1.begin(), VS1.end(), sortAux);
    //
    map <string, long long int>::iterator itr1;
    //
    long long int m = V1.size();
    for (long long int i = 0; i < Q; i += 1) {
        string q = V1[i];
        itr1 = M1.find(q);
        long long int k = (*itr1).second;
        cout << (calcAnswer(q, q.size(), k)) << endl;
    }
    return 0;
}
