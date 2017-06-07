#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){

    queue<int> que;
    int num;

    while(1){
       cin >> num;
       if(num == 0){
           break;
       }
       que.push(num); 
    }
    
    int que_size = que.size();

    for(int i=1; i <= que_size; i++){
        cout << "Case " << i << ": " << que.front() << endl;
        que.pop();
    }

    return 0;
}