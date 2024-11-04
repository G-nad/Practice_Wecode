#include <bits/stdc++.h>
using namespace std;

int base_dmg, buff, n, hp;
int main(){
    cin >> base_dmg >> buff >> n >> hp;
    int cnt = 0;
    while(n > 0){
        if (base_dmg < hp){
            cnt += (hp / base_dmg);
            int remain = hp % base_dmg;
//            cout << remain << " " << base_dmg << "\n";
            if (base_dmg - remain > 0 && remain > 0) cnt++;
            base_dmg += buff;
        }
        else cnt++;
        n--;
    }
    cout << cnt;
    return 0;
}
