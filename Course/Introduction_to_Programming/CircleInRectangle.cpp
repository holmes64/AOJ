#include<iostream>
#include <cmath>
#include <string>
using namespace std;

#define ll long long

int main(){

    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;

    string Result = "Yes"; 
    
    if( x+r > W){
        Result = "No";
    }
    if( x-r < 0 ){
        Result = "No";
    }
    if( y+r > H ){
        Result = "No";
    }
    if( y-r < 0 ){
        Result = "No";
    }

    cout << Result << endl;


    return 0;
}