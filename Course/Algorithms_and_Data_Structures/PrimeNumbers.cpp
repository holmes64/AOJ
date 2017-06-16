#include <iostream>
#include <math.h>

using namespace std;


int pn(int num){

    if(num == 2 || num == 3 || num == 5) return 1;
    if(num < 2 || num % 2 == 0 ) return 0;

    int i = 3;
    while(i <= sqrt(num)){
        if(num % i == 0 ) return 0;
        i+=2;
    }
    return 1;
}

int main(){

    int n;
    int num;
    int cnt=0;
    cin >> n;
    
    for(int i=0; i<n; i++){
       cin >> num;
       cnt += pn(num); 
    }

    cout << cnt << endl;

    return 0;
}