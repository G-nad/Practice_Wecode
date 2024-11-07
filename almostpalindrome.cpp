#include <bits/stdc++.h>
#define N 1000005
using namespace std;

int n;
int A[N];
vector <int > vi;

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> A[i];
    for (int i = 1; i <= n/2; i++) vi.push_back(A[i]);
    reverse(vi.begin(), vi.end());
    vi.push_back(0);

    int cnt = 0;
    for (int i = 0; i < vi.size(); i++){
        int cur = i + n/2 + 1;
        if (n % 2 == 1) cur++;
        if (vi[i] != A[cur]) cnt++;
    }
    if (cnt > 1) cout << "FALSE";
    else cout << "TRUE";
    return 0;
}
