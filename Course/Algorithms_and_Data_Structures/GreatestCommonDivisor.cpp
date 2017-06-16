#include <iostream>

using namespace std;

int divisor(int a, int b){

    if(a == 0){
        return b;
    }else{
        return divisor(b%a, a);
    }

}

int main(){

    int a, b;
    cin >> a >> b;

    cout << divisor(a,b) << endl;

    return 0;
}



/*
int main(){
    
    int a,b;
    cin >> a >> b;

    int temp;
    int result;

    if(a > b){
        temp = a % b;
        for(int i=1; i<=temp; i++){
            if( (temp%i == 0) && (b%i == 0)) result = i;
        }
    }else if(b > a){
        temp = b % a;
        for(int i=1; i<=temp; i++){
            if( (a%i == 0) && (temp%i == 0)) result = i;
        }
    }else{
        result = a;
    }

    cout << result << endl;

    return 0;
}
*/

