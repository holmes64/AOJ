#include <iostream>
#include <string>
#include <queue>
using namespace std;

#define ll long long

int main(){

    ll a, b, c;
    cin >> a >> b >> c;
    ll cnt = 0;

    for(a; a<=b; a++){
        if((c % a) == 0){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}