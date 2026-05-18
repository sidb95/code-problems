/*
euler009
bhatoresiddharth@gmail.com
sidb95
21 May, 30 July 2024
*/


#include <iostream>
#include <math.h>
#include <unordered_map>

using namespace std;

int calcAnswer(int x) {
    int n1 = x;
    unordered_map <int, bool> VIS;
    for (int i = 1; i <= n1; i++) {
        VIS[i] = true;
    }
    unordered_map <int, bool>::iterator itrVIS;
    int retAnswer = -1;
    int productVar;
    bool prop1, prop2, prop3;
    for (int i = 1; i <= (n1 - 2); i++) {
        for (int j = i + 1; j <= (n1 - 1); j++) {
            itrVIS = VIS.find(n1 - (i + j));
            if (itrVIS != VIS.end()) {
                int k = (itrVIS->first);
                prop1 = (k > j);
                if (prop1) {
                    prop2 = ((i * i) + (j * j) == (k * k));
                    prop3 = ((i + j + k) == n1); 
                    if (prop1 && prop2 && prop3) {
                        productVar = (i) * (j) * (k);
                        retAnswer = max(retAnswer, productVar);
                    }
                }
            }
        }
    }
    return retAnswer;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int x = n;
        cout << calcAnswer(x) << endl;
    }
    return 0;
}
