#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(){

    double x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double dist;

    dist = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
    printf("%.8lf\n", dist);
    return 0;
}