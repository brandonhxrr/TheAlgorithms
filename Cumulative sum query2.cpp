#include <iostream>

using namespace std;

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    
    int N, Q, sum = 0;
    
    cin >> N;
    
    int nums[N], ST[N];
    
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
        sum += nums[i];
        
        ST[i] = sum;
    }
    
    cin >> Q;
    
    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;
        
        if (l == 0) {
            cout << ST[r] << endl;
        }else {
            cout << ST[r] - ST[l - 1] << endl;
        }
    }

    return 0;
}
