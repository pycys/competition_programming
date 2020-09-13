#include <iostream>
using namespace std;
int main(void){
  long long ab[2], cd[2], l[4];
  cin >> ab[0] >> ab[1] >> cd[0] >> cd[1];
  for(int i=0; i<4; i++){
    l[i] = ab[i/2] * cd[i%2];
  }
  long long maxnum = l[0];
  for(int i=1; i<4; i++){
    if(maxnum < l[i]) maxnum = l[i];
  }
  cout << maxnum << endl;
}
