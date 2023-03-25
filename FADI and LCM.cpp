#include <iostream>

using namespace std;

int main() {
    
    int x;
    int par[2];
    
    
    cin >> x;
    
    if(x < 4) {
        par[0] = 1;
        par[1] = x;
    }else {
        for (int i = 1; i < x/i; i++) {
            if(x%i == 0) {
                par[0] = x/i;
                par[1] = x/par[0];
            }
        }
    }
    
    cout << par[0] << " " << par[1];

    return 0;
}

