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
};



int main(){
    int num;
    int upper, front;
    string D;
    string::iterator itr;

    Dice d;

    for(int i=0; i<6; i++){
        cin >> d.dice[i];
    }
    cin >>D;
    char dir;

    for(itr = D.begin(); itr != D.end(); itr++){
       dir = *itr;
       if(dir == 'N') d.north();
       if(dir == 'S') d.south();
       if(dir == 'W') d.west();
       if(dir == 'E') d.east();
    } 

    cout << d.dice[0] << endl;

    return 0;
}