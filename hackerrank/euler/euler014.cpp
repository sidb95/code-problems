/*
euler014
bhatoresiddharth@gmail.com
sidb95
25 May 2024
*/

#include <vector>
#include <iostream>
#include <set>
#include <math.h>

using namespace std;

void calcAnswerAux(set < pair<long long int, long long int> >& S, long long int n);
long long int calcAnswer(set < pair<long long int, long long int> >& S, long long int n);

void calcAnswerAux(set < pair<long long int, long long int> >& S, long long int n) {
    if (n == 1) {
        return;
    }
    else {
        pair <long long int, long long int> p1;
        for (long long int i = 1; i <= n; i++) {
            long long int count = 1;
            long long int k = i;
            while (k != 1) {
                if ((k % 2) == 0) {
                    k /= 2;
                }
                else {
                    k = ((k * 3) + 1);
                }
                count++;
            }
            p1.first = i;
            p1.second = count;
            S.insert(p1);
        }
    }
}

long long int calcAnswer(set < pair <long long int, long long int> >& S, long long int n) {
    calcAnswerAux(S, n);
    set <pair <long long int, long long int> >::iterator itr;
    //
    long long int maxSeq = 0;
    long long int answer = 1;
    //
    for (itr = S.begin(); itr != S.end(); itr++) {
        pair <long long int, long long int> p = (*itr);
        maxSeq = max(maxSeq, p.second);
        if (maxSeq == p.second) {
            answer = max(answer, p.first);
        }
    }
    return answer;
}

long long int main() {
    long long int T, t;
    cin >> T;
    set < pair<long long int, long long int> > S1;
    for (t = 0; t < T; t += 1) {
        long long int n;
        cin >> n;
        cout << calcAnswer(S1, n) << endl;
    }
    return 0;
}
