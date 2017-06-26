#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

int main(){

    stack<int> st;
    string line;
    int r, l;
    while(cin >> line){
        if(line == "+"){
           r = st.top(); st.pop();
           l = st.top(); st.pop();
           st.push(l + r); 
        }else if(line == "-"){
           r = st.top(); st.pop();
           l = st.top(); st.pop();
           st.push(l - r); 
        }else if(line == "*"){
           r = st.top(); st.pop();
           l = st.top(); st.pop();
           st.push(l * r); 
        }else{
           st.push(stoi(line));
        }
    }
    cout << st.top() << endl;


    return 0;
}