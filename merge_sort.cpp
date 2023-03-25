#include <iostream>

using namespace std;

int* mergeSort(int[], int);
void printArray(int[], int);

int main() {
    int N;
    
    cout << "Merge Sort" << endl;
    cout << "Ingresa el número de elementos de la lista: ";
    cin >> N;
    
    int nums[N];
    int* numsOrd;
    
    for(int i = 0; i < N; i++) {
        cin >> nums[i]; 
    }
    
    cout << "Arreglo ordenado" << endl;
    numsOrd = mergeSort(nums, N);
    printArray(numsOrd, N);
    
    delete[] numsOrd;
    return 0;
}

int* mergeSort(int arr[], int size){
    if(size == 1){
        return arr;
    }
    
    int mid = size / 2;
    int izquierdo[mid];
    int derecho[size - mid];
    int j = 0;
    
    for(int i = 0; i < size; i++) {
        if(i < mid){
            izquierdo[i] = arr[i];
        }else {
            derecho[j] = arr[i];
            j++;
        }
    }
    
    int* izquierdo_ordenado = mergeSort(izquierdo, mid);
    int* derecho_ordenado = mergeSort(derecho, size - mid);
    
    int i = 0, k = 0;
    j = 0;
    
    int* ordenado = new int[size];
    
    while(i < mid && j < (size - mid)){
        if(izquierdo_ordenado[i] < derecho_ordenado[j]){
            ordenado[k] = izquierdo_ordenado[i];
            i++;
        }else {
            ordenado[k] = derecho_ordenado[j];
            j++;
        }
        k++;
    }
    
    while(i < mid){
        ordenado[k] = izquierdo_ordenado[i];
        i++;
        k++;
    }
    
    while(j < (size - mid)){
        ordenado[k] = derecho_ordenado[j];
        j++;
        k++;
    }
    
    return ordenado;
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}