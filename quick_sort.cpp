#include<iostream>

using namespace std;

int partition(int[], int, int);
void quick_sort(int[], int, int);
void printArray(int[], int);

int main(){
    int N;
    int* ordered_nums;

    cout << "Quick Sort" << endl << endl;
    cout << "Ingrese el tamaño de la lista: ";
    cin >> N;

    int nums[N];

    cout << endl << "Ingrese los elementos de la lista: " << endl;

    for(int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    cout << endl << "Arreglo ordenado: " << endl;
    quick_sort(nums, 0, N);
    printArray(nums, N);

    return 0;
}

int partition(int* arr, int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    int aux;

    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            aux = arr[i];
            arr[i] = arr[j];
            arr[j] = aux;
        }
    }

    aux = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = aux;

    return i+1;
}

void quick_sort(int* arr, int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}
