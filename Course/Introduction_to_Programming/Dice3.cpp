#include <iostream>
#include <string>

using namespace std;

class Dice{
    public:
        int dice[6];
        int buf;
        void north(){
            buf = dice[0];
            dice[0] = dice[1];
            dice[1] = dice[5];
            dice[5] = dice[4];
            dice[4] = buf;
        }
        void south(){
            buf = dice[0];
            dice[0] = dice[4];
            dice[4] = dice[5];
            dice[5] = dice[1];
            dice[1] = buf;
        }
        void east(){
            buf = dice[0];
            dice[0] = dice[3];
            dice[3] = dice[5];
            dice[5] = dice[2];
            dice[2] = buf;
        }
        void west(){
            buf = dice[0];
            dice[0] = dice[2];
            dice[2] = dice[5];
            dice[5] = dice[3];
            dice[3] = buf;
        }

       void rotate_R(){
            buf = dice[4];
            dice[4] = dice[2];
            dice[2] = dice[1];
            dice[1] = dice[3];
            dice[3] = buf;
        }
}; 

int main(){
    Dice d;
    Dice d2;
    for(int i=0; i<6; i++){
        cin >> d.dice[i];
    }
    for(int i=0; i<6; i++){
        cin >> d2.dice[i];
    }
    
    for(int j=0; j<6; j++){
        if(d.dice[0] == d2.dice[j]){
            if(j == 0) break;
            if(j == 1) d2.north();
            if(j == 2) d2.west();
            if(j == 3) d2.east();
            if(j == 4) d2.south();
            if(j == 5){
                d2.north();
                d2.north();
            }
        }
    }
    
    int flg = 0;
    int cnt=0;
    for(int l=0; l<4; l++){
        cnt=0;
        d2.rotate_R();
        for(int i=0; i<6; i++){
            if(d.dice[i] == d2.dice[i]) cnt++;
        }
        if(cnt == 6){
            flg = 1;
            break;
        }           
    }
    if(flg == 0){
        for(int l=0; l<4; l++){
            cnt=0;
            d2.north();
            for(int i=0; i<6; i++){
                if(d.dice[i] == d2.dice[i]) cnt++;
            }
            if(cnt == 6){
                flg = 1;
                break;
            }           
        }
    }

    if(cnt == 6){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}