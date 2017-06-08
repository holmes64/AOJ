#include <iostream>
#include <string>

using namespace std;

int main(){

    string moji;
    int m, h;

    while(1){
        cin >> moji;
        if( moji == "-") break;
        cin >> m;

        for(int i=0; i<m; i++){
            cin >> h;
            moji = moji.substr(h) + moji.substr(0,h);
        }

        cout << moji << endl;
    }


    return 0;
}