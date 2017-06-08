#include <iostream>
#include <queue>

using namespace std;

int main(){

    int r, c;
    int sum=0;
    int all = 0;
    cin >> r >> c;
    
    vector< vector<int> > sheet((r+1), vector<int>(c+1));

    for(int i=0; i<r; i++){
        sum = 0;
        for(int j=0; j<c; j++){
            cin >> sheet[i][j];
            sum+=sheet[i][j];
        }
        sheet[i][c] = sum;
        all += sum;
    }

    for(int i=0; i<c; i++){
        sum = 0;
        for(int j=0; j<r; j++){
            sum+=sheet[j][i];
        }
        sheet[r][i] = sum;
    }

    sheet[r][c] = all;

    for(int i=0; i<r+1; i++){
        for(int j=0; j<c+1; j++){
            cout << sheet[i][j];
            if(j != c) cout << " ";
        }
        cout << endl;
    }

    return  0;
}