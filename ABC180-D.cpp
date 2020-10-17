#include <iostream>
using namespace std;
 
int main(void) {
    long long x, y, a, b, ans={};
    cin >> x >> y >> a >> b;
    while ((double)a*x<=2e18 && a*x<=x+b && a*x<y) {
      x*=a;
      ans++;
    }
    cout << ans+(y-1-x)/b << endl;
}
