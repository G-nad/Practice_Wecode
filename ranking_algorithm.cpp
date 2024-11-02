#include <bits/stdc++.h>
#define N 1005
using namespace std;

int n;
int A[N], B[N];
map <int, int> save;

bool cmp(int a, int b){
    return a > b;
}
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> A[i];
        B[i] = A[i];
        save[A[i]]++;
    }

    int maxval = 0, maxnum = 0;
    for (auto i : save){
        if (i.second > maxnum || (i.second == maxnum && i.first > maxval)){
            maxnum = i.second;
            maxval = i.first;
        }
    }

    cout << maxval << " ";
    sort(B + 1, B + n + 1, greater<int>());
//    for (int i = 1; i <= n; i++) cout << B[i] << " ";

    int last = 0;
    for (int i = 1; i <= n; i++){
        if (B[i] != B[i - 1]) last = i;
    }
    cout << last;

    return 0;
}
