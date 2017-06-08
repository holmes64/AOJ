#include <iostream>

using namespace std;
#define ll long long

int main(){
    int n, m;
    cin >> n >> m;

    ll a[100][100];
    ll b[100];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }

    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<m; j++){
            sum += a[i][j] * b[j];
        }
        cout << sum << endl;
    }

    return 0;
}