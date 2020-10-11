#include <iostream>
using namespace std;


short find(short *tbudlr, short n) {
    short i;
    for (i = 0; i < 6; i++) {
        if (tbudlr[i] == n) break;
    }
    return i;
}


int main() {
    short TBUDLR[6], rTBUDLR[6];

    for (short i = 0; i < 6; i++) cin >> TBUDLR[i];

    for (short i = 0; i < 6; i+=2) {
        rTBUDLR[i] = TBUDLR[i + 1];
        rTBUDLR[i + 1] = TBUDLR[i];
    }

    long long N, count{};
    short p, r;
    cin >> N >> p;
    r = rTBUDLR[find(TBUDLR, p)];
    for(int i = 1; i < N; i++) {
        cin >> p;
        if (r != rTBUDLR[find(TBUDLR, p)]) {
            if (r == p) count += 2;
            else count += 1;
        }
        r = rTBUDLR[find(TBUDLR, p)];
    }
    cout << count << endl;
}
