#include<iostream>

using namespace std;

int binary_search(int[], int, int, int);

int main() {

    int N;
    int value;

    cout << "Binary search" << endl << endl;
    cout << "Ingresa el número de elementos: ";
    cin >> N;

    int nums[N];

    cout << "Ingresa los " << N << " elementos de la lista: " << endl;
    
    for(int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    cout << endl << "Ingresa el valor buscado: ";
    cin >> value;

    int pos = binary_search(nums, value, 0, N);

    (pos == -1) 
        ? cout << "El valor no existe en la lista" 
        : cout << "El valor " << value << " está en la posición " << pos;
    return 0;
}

int binary_search(int nums[], int value, int low, int high){

    if(low > high){
        return -1;
    }

    int mid = (low + high)/2;

    if(nums[mid] == value){
        return mid;
    }else if(value < nums[mid]){
        return binary_search(nums, value, low, mid-1);
    }else if(value > nums[mid]){
        return binary_search(nums, value, mid+1, high);
    }
}