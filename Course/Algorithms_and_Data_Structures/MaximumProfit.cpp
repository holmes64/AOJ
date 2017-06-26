#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n; 
    int max_v = -1e+9; 
    int min_v;
    cin >> n;
    int R[n];
    cin >> min_v;
    for(int i=0; i<n-1; i++){
        cin >> R[i];
        max_v = max(R[i]-min_v, max_v);
        min_v = min(R[i],min_v); 
    }

    cout << max_v << endl;


    return 0;
}