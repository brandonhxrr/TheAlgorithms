#include <iostream>

using namespace std;

int main() {
    int N, Q;
    
    cin >> N;
    
    int nums[N];
    
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    
    cin >> Q;
    
    int queries[Q][2];
    
    for (int i = 0; i < Q; i++) {
        cin >> queries[i][0];
        cin >> queries[i][1];
    }
    
    cout << "Queries: \n";
    
    for (int i = 0; i < Q; i++) {
        cout << queries[i][0] << " ";
        cout << queries[i][1] << "\n";
    }
    
    
    
    

    return 0;
}

