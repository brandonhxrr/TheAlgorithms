#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int a, b, c, d;
    
    long int max = INT_MIN;
    
    cin >> a >> b >> c >> d;
    
    int mults[4];
    
    mults[0] = a * c;
    mults[1] = a * d;
    mults[2] = b * c;
    mults[3] = b * d;
    
    for (int i = 0; i < 3; i++) {
        cout << mults[i] << endl;
        if(mults[i] > max){
            max = mults[i];
        }
    }

    cout << max;
    
    return 0;
}

