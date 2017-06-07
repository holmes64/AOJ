#include<iostream>
#include <cmath>
using namespace std;

#define ll long long

int main(){

    int a, b, c;
    cin >> a >> b >> c;

    int temp;

    if(b <= a){
        temp = a;
        a = b;
        b = temp;
    }
    if(c <= b){
        temp = b;
        b = c;
        c = temp;
    }
    if(b <= a){
        temp = a;
        a = b;
        b = temp;
    }

    cout << a << " " << b << " " << c << endl;

    return 0;
}