#include <iostream>
#include <string>

using namespace std;

int main(){

    string moji;
    getline(cin, moji);

    for(int i=0; i<moji.size(); i++){
        if(moji[i] >= 'a' && moji[i] <= 'z'){
            moji[i] += 'A' - 'a';
        }else if(moji[i] >= 'A' && moji[i] <= 'Z'){
            moji[i] += 'a' - 'A';
        }        
    }

    cout << moji << endl;
    
    return 0;
}