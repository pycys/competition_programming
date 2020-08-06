#include <iostream>

using namespace std;

bool search_num(int *sunuke, int num, int max){
    
    bool flag = false;
    
    for(int i=0; i<max; i++){
        if(sunuke[i] == num){
            flag = true;
            break;
        }
    }
    return flag;
}

void array_input(int *array_A, int n){
    for(int i=0; i<n; i++){
        cin >> array_A[i];
    }
}

int main(void){
    
    int N, K;
    cin >> N >> K;
    
    int *sunuke = new int[N];
    int sunuke_i = 0;
    
    for(int i=0; i<K; i++){
        
        int d;
        cin >> d;
        
        int *A = new int[d];
        array_input(A, d);
        
        for(int j=0; j<d; j++){
            if(!search_num(sunuke, A[j], sunuke_i)){
                sunuke[sunuke_i] = A[j];
                sunuke_i++;
            }
        }
        delete[] A;
    }
    
    cout << N - sunuke_i << endl;
    
    delete[] sunuke;
}
