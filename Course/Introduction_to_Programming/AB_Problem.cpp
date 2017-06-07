#include <iostream>
#include <string>
#include <queue>
using namespace std;

#define ll long long

int main(){

    ll a, b;
    cin >> a >> b;

    ll d, r;
    double f;
    
    d = a / b;
    r = a % b;
    f = double(a) / double(b);

    cout << d << " " << r << " ";
    printf("%.5lf\n",f);

    return 0;
}