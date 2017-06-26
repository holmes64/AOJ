#include <iostream>
#include <queue>
#include <string>

using namespace std;

// 構造体を使ったほうが参考になる
//http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=2017243#1

int main(){

    queue<int> que;
    queue<string> pnum;
    int n, q;
    int num;
    string p;

    cin >> n >> q;

    for(int i=0; i<n; i++){
        cin >> p >> num;
        pnum.push(p);
        que.push(num);
    }

    int sum=0;
    int current;
    string cs;
    while(pnum.size() != 0){

       cs = pnum.front();       pnum.pop();
       current = que.front();   que.pop();

       if(current - q <= 0){
           sum += current;
           cout << cs << " " << sum << endl;
       }else{
           sum += q;
           current -= q;
           que.push(current);
           pnum.push(cs);
       }
    }

    return 0;
}