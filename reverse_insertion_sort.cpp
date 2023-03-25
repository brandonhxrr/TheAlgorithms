#include <iostream>

using namespace std;

int main() {
    
    int N;
    
    cin >> N;
    
    int nums[N];
    
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    
    ///*
    for (int i = N - 2; i >= 0; i--) {
            int j = i + 1;

            while (j < N) {
                int key = nums[j-1];
                if (nums[j] > nums[j-1]) {
                    nums[j-1] = nums[j];
                    nums[j] = key;
                }
                j++;
            }

        }
    //*/
    
    
    /*
    for (int i = 1; i < N; i++) {
        int key = nums[i];
        
        int j = i - 1;
        
        while (j > -1 && nums[j] > key) {
            
            nums[j+1] = nums[j];
            j--;
        }
        
        nums[j + 1] = key;
        
    }
    //*/
    
    for (int i = 0; i < N; i++) {
        cout << nums[i];
    }

    return 0;
}

