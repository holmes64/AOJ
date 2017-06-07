#include<iostream>
#include <cmath>
using namespace std;

#define ll long long

int main(){

    ll S;
    cin >> S;

    int h, m, s;

    h = S / 3600;
    m = (S % 3600) / 60;
    s = (S % 3600) % 60;
    
    cout << h << ":" << m << ":" << s << endl;

    return 0;
}