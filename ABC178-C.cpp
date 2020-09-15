#include <iostream>
using namespace std;
typedef long long ll;

const ll mod = 1000000007;

ll powmod(ll x, ll y){
  ll result = 1;
  for(ll i=0; i<y; i++){
    result = result*x%mod;
  }
  return result;
}

int main(void){
  ll N, A;
  cin >> N;
  A = powmod(9, N);
  ll ans = (powmod(10, N) - A - A + powmod(8, N)) % mod;
  cout << (ans + mod) % mod << endl;
}
