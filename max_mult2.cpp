#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    long int a, b, c, d;
    
    cin >> a >> b >> c >> d;
    
    long int m1 = a * c;
    long int m2 = a * d;
    long int m3= b * c;
    long int m4 = b * d;
    
    cout << m1 << endl;
    cout << m2 << endl;
    cout << m3 << endl;
    cout << m4 << endl;
    
    m1 = m1 > m2 ? m1 : m2;
    m1 = m1 > m3 ? m1 : m3;
    m1 = m1 > m4 ? m1 : m4;
    
    cout << m1;
    
    return 0;
}

