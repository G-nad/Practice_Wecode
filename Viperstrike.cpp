#include <bits/stdc++.h>
#define N 1000005
using namespace std;

double last = -1, now;
int main(){
    double sum = 0;
    while(cin >> now){
        if (now == -1) break;
        if (last == -1) {
            sum = 2.0;
            last = now;
            continue;
        }
        double slowend = last + 2.0;
        if (slowend > now) sum += (now - last);
        else sum += 2;

        last = now;
//        cout << "Total slow time: " << sum << "\n";
    }
    cout << sum;
    return 0;
}
