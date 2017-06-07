#include <iostream>
#include <string>
#include <queue>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

int main(){

    int n;
    cin >> n;

    int num;
    string pattern;    

    bool cards[4][13] = {{false}};

    for(int i=0; i<n; i++){
        cin >> pattern >> num;
        if(pattern == "S")  cards[0][num-1] = true;
        if(pattern == "H")  cards[1][num-1] = true;
        if(pattern == "C")  cards[2][num-1] = true;
        if(pattern == "D")  cards[3][num-1] = true;
    }

    for(int j=0; j<4; j++){
        for(int i=0; i<13; i++){
            if((cards[j][i] == false) && (j == 0)) cout << "S " << i+1 << endl;
            if((cards[j][i] == false) && (j == 1)) cout << "H " << i+1 << endl;
            if((cards[j][i] == false) && (j == 2)) cout << "C " << i+1 << endl;
            if((cards[j][i] == false) && (j == 3)) cout << "D " << i+1 << endl;
        }
    }



    return 0;
}