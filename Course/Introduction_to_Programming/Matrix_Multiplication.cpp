#include <iostream>
#include <queue>

using namespace std;

#define ll long long

int main(){

    int n, m, l;
    cin >> n >> m >> l;

    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(m, vector<int>(l));
    vector<vector<ll>> c(n, vector<ll>(l));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<l; j++){
            cin >> b[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<l; j++){
            for(int k=0; k<m; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }    

    for(int i=0; i<n; i++){
        for(int j=0; j<l; j++){
            cout << c[i][j];
            if(j != l-1) cout << " ";
        }
        cout << endl;
    }


    return  0;
}