/*
euler011
bhatoresiddharth@gmail.com
sidb95
21, 22 May 2024
*/

#include <iostream>
#include <vector>

using namespace std;

/*
 Space left horizontolly for segment of length four
 through right
*/
bool inGrid1 (int posi, int posj, int n);
/*
 Space left vertically for segment of length four
 through down
*/
bool inGrid2(int posi, int posj, int n);
/* 
 Calculate horizontol, vertical and diagonal segment
sum, and return maximum answer at (posi, posj)
*/
int calcBlock1(vector< vector<int> > grid, int n, int posi, int posj);
int calcAnswer(vector< vector<int> > grid, int n);

bool inGrid1 (int posi, int posj, int n) {
    // can calc right
    if (posj < n) {
        if ((posi + 3) < n) {
            return true;
        }
    }
    return false;
}

bool inGrid2(int posi, int posj, int n) {
    if (posi < n) {
        if ((posj + 3) < n) {
            return true;
        }
    }
    return false;
}

int calcBlock1(vector< vector<int> > grid, int n, int posi, int posj) {
    int retAnswer = 0;
    // check for horizontol, vertical and diagonal
    // availabilities
    bool propn[4];
    // setting ```propn[i]```
    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            propn[i] = inGrid1(posi, posj, n);
        }
        else if (i == 1) {
            propn[i] = inGrid2(posi, posj, n);
        }
        else if (i == 2) {
            propn[i] = propn[0] && propn[1];
        }
    }
    // hor, ver and diag ```answer[i]```
    int answer[4];
    // multiply the four positions, 3 segments
    // (if possible (see propn1, propn2))
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 3; j++) {
                answer[i] = 1;
            }
            for (int l = 0; l < 4; l++) {
                if (propn[i]) {
                    if (i == 0) {
                        answer[i] *= grid[posi + l][posj];
                    }
                    else if (i == 1) {
                        answer[i] *= grid[posi][posj + l];
                    }
                    else if (i == 2) {
                        answer[i] *= grid[posi + l][posj + l];
                    }
                    else {
                        answer[i] = 0;
                        break;
                    }
                }
            }
            retAnswer = max(max(answer[0], answer[1]), answer[2]);
        }
    return retAnswer;
}

int calcAnswer(vector< vector<int> > grid, int n) {
    // base position
    int posi, posj;
    // answer to be returned
    int retAnswer = 0;
    // current product
    int answer;
    // iterate over n elements in grid, line by line
    for (posi = 0; posi < n; posi++) {
        // line number posi, column number posj
        for (posj = 0; posj < n; posj++) {
            answer = calcBlock1(grid, n, posi, posj);
            retAnswer = max(retAnswer, answer);
        }
    }
    return retAnswer;
}


int main(){
    vector< vector<int> > grid(20,vector<int>(20));
    for(int grid_i = 0; grid_i < 20; grid_i++){
        for(int grid_j = 0; grid_j < 20; grid_j++){
            cin >> grid[grid_i][grid_j];
        }
    }
    cout << calcAnswer(grid, 20) << endl;
    return 0;
}
