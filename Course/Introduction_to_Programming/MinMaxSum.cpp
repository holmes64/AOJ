#include <iostream>
#include <string>
#include <queue>
#include <math.h>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

#define ll long long

int main(){

    int n;
    cin >> n;

    int buf;
    vector<int> hairetu;
    for(int i=0; i<n; i++){
        cin >> buf;
        hairetu.push_back(buf);
    }

    sort(hairetu.begin(), hairetu.end(), greater<int>());
    
    long long sum = 0;
    for(auto it : hairetu){
        sum += it;
    }

    cout << hairetu.at(n - 1) << " " << hairetu.at(0) << " " << sum << endl;

    return 0;
}