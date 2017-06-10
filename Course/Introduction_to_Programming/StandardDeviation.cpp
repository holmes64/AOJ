#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(){

    int n;
    double m;
    double a;
    while(1){
        cin >> n;
        if(n == 0){
            break;
        }
        a = 0;
        m = 0;
        double s[n];
        for(int i=0; i<n; i++){
            cin >> s[i];
            m += s[i];
        }
        m /= n; 
        for(int i=0; i<n; i++){
            a+= (s[i] - m)*(s[i] - m);
        }
        a /= n;
        a = sqrt(a);

        printf("%.8lf\n", a);
    }
    

    return 0;
}