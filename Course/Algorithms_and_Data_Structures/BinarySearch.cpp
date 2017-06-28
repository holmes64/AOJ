#include <iostream>
#include <algorithm>
#include <vector>

#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

int cnt=0;

bool binary_search(vector<int>& data, int keyv){
    int r_ind = data.size();
    int l_ind = 0;
    while(l_ind < r_ind){
        int c_ind = (l_ind + r_ind) / 2;
        if(data[c_ind] == keyv){
            return true;
        }else if(keyv < data[c_ind]){
            r_ind = c_ind;
        }else{
            l_ind = c_ind+1;
        }
    }
    return false;
}

void solve(vector<int>& sorted, vector<int>& unsorted){
    int l = unsorted.size();
    for(int i=0; i<l; i++){
        if( binary_search(sorted, unsorted[i]) ){
            cnt++;
        }
    }
}

int main(){
    int n; cin >> n;
    vector<int> S(n);
    rep(i,n){
        cin >> S[i];
    } 

    int q; cin >> q;
    vector<int> T(q);
    rep(i,q){
        cin >> T[i];
    }

    solve(S, T);    

    cout << cnt << endl;

    return 0;
}