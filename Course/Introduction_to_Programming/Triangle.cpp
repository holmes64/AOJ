#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(){

    double a, b, c;
    cin >> a >> b >> c;

    double e;
    e = sqrt(a*a + b*b -2*a*b*cos(c * (M_PI/180)));

    double S, L, h;
    S = 0.5 * (a * b * sin(c * (M_PI/180)));

    h = 2*S/a;

    printf("%.7lf\n", S);
    printf("%.7lf\n", a+b+e);
    printf("%.7lf\n", h);
    
    return 0;
}