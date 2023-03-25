#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string names[2];
    int n;
    
    cin >> names[0] >> names[1];
    cin >> n;
    
    cout << names[0] << " " <<  names[1] << endl;
    
    for (int i = 0; i < n; i++) {
        string auxnames[2];
        cin >> auxnames[0] >> auxnames[1];
        
        if(i == 0 && n != 1){
            names[0] = auxnames[1];
        }else if(i > 0 && n != 1){
            cout << names[0] << " " << auxnames[0] << endl;
        }
        
        if(i == n-1){
            cout << names[0] << " " <<  auxnames[1] << endl;
        }
        
    }
    
    
    
    return 0;
}

