/*
982760
bhatoresiddharth@gmail.com
sidb95
*/

#include <bits/stdc++.h>

using namespace std;

void swap(vector<char>& V1, int i, int j);
bool verifyParantheses(vector<char>& A, int n);
void printParantheses(int n);
void printFunc(vector<char>& V1, int n);

void swap(vector<char>& V1, int i, int j) {
    char TEMP;
    TEMP = V1[i];
    V1[i] = V1[j];
    V1[j] = TEMP;
    return;
}

bool verifyParantheses(vector<char>& A, int n) {
    int count = 0;
    int retVar = true;
    for (int i=0; i<n; i++) {
        if (A[i] == '{') {
            count++;
        }
        if (A[i] == '}') {
            count--;
        }
        if (count < 0) {
            retVar = false;
            break;
        }
    }
    if (count != 0) {
        retVar = false;
    }
    return retVar;
}

void printFunc(vector<char>& V1, int n) {
    for (int i=0; i<((2*n)-1); i++) {
        cout << V1[i];
    }
    cout << V1[n-1] << endl;
    return;
}

void printParantheses(int n) {
    pair<char, char> p1 = {'{', '}'};
    vector<char> V1;
    if (n == 1) {
        cout << p1.first << p1.second << endl;
        return;
    }
    for (int i=0; i<n; i++) {
        V1.push_back(p1.first);
    }
    for (int i=0; i<n; i++) {
        V1.push_back(p1.second);
    }
    bool propVar1 = verifyParantheses(V1, n);
    if (propVar1) {
        printFunc(V1, n);
    }
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-1; j++) {
            swap(V1, n+j, n-1-i);
            bool propVar1 = verifyParantheses(V1, n);
            if (propVar1) {
                printFunc(V1, n);
            }
        }
    }
    bool propVar1 = verifyParantheses(V1, n);
    if (propVar1) {
        printFunc(V1, n);
    }
    return;
}
