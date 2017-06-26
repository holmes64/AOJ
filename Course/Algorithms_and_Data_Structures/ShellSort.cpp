#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int cnt;
vector<int> G;

void insertionSort(int A[], int n, int g){
    
    int v=0;
    int j;

    for(int i=g; i<n; i++){
       v = A[i];
       j = i - g;
       while(j >= 0 && A[j] > v){
           A[j+g] = A[j];
           j -= g;
           cnt++;
       }
       A[j+g] = v;
    }
}

void shellSort(int A[], int n){

    for(int h=1;;){
        if(h > n) break;
        G.push_back(h);
        h = 3*h+1;
    }
    
    cnt=0;
    int m = G.size();

    for(int i=m-1; i>=0; --i) insertionSort(A, n, G[i]);

    cout << m << endl;
    for(int i=m-1; i >= 0; i--){
        if(i != 0){
            cout << G[i] << " ";
        }else{
            cout << G[i] << endl;
        }
    }
    cout << cnt << endl;
    for(int i=0; i<n; i++){
        cout << A[i] << endl;
    }

    
}

int main(){
    int n;
    cin >> n;

    int A[n];
    for(int i=0; i<n; i++)  cin >> A[i]; 
    
    shellSort(A, n);

    return 0;
}