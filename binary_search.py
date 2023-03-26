def binary_search(list, value, low, high):
    if(low >= high):
        return -1
    
    mid = (low + high) // 2
    if(value == list[mid]):
        return mid
    elif(value < list[mid]):
        return binary_search(list, value, low, mid - 1)
    elif(value > list[mid]):
        return binary_search(list, value, mid + 1, high)

list = [int(x) for x in input("Ingresa los valores de la lista: ").split(" ")]
pos = binary_search(list, int(input("Ingresa el valor a buscar: ")), 0, len(list))

if (pos == -1):
    print("El valor no se encuentra en la lista") 
else: 
    print("El valor está en la posición ", pos)