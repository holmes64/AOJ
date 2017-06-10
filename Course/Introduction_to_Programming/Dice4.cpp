#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
#include <map>
using namespace std;
 
#define rep(i,a,b) for(int i=(a);i<(b);i++)
 
class Dice {
private:
    map<char, string> mp;
public:
    string d = "RENSWL";
    vector<int> v; //UFRLBD:123456
    Dice() {
        init();
        v.resize(6);
    };
    Dice(vector<int> v) :v(v) {
        init();
    };
    void init(){
        mp[d[0]] = "2354";
        mp[d[1]] = "1463";
        mp[d[2]] = "1265";
        mp[d[3]] = "1562";
        mp[d[4]] = "1364";
        mp[d[5]] = "2453";
    }
    void input() { rep(i, 0, 6) { cin >> v[i]; } }
    void roll(char c) { roll(mp[c]); }
    void roll(string s) {
        int tmp = v[s[0] - '1'];
        rep(i, 1, s.size())v[s[i - 1] - '1'] = v[s[i] - '1'];
        v[s[s.size() - 1] - '1'] = tmp;
    }
    bool operator==(const Dice &D)const { return v == D.v; }
};
 
signed main() {
    int n; cin >> n;
    vector<Dice> D(n); rep(i, 0, n) { D[i].input(); }
    rep(i, 0, n) {
        rep(j, i + 1, n) {
            rep(k, 0, 30) {
                if (D[i] == D[j]) {
                    cout << "No" << endl;
                    return 0;
                }
                D[j].roll( D[j].d[rand() % 6] );
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}