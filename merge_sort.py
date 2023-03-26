def merge_sort(lista):
    if(len(lista) == 1 ):
        return lista
    
    mid = len(lista) // 2

    izquierdo = lista[:mid]
    derecho = lista[mid:]

    izquierdo_ordenado = merge_sort(izquierdo)
    derecho_ordenado = merge_sort(derecho)

    merged = []

    i, j = 0, 0

    while(i < mid and j < (len(lista) - mid)):
        if(izquierdo_ordenado[i] < derecho_ordenado[j]):
            merged.append(izquierdo_ordenado[i]) 
            i += 1
        else:
            merged.append(derecho_ordenado[j])
            j += 1

    merged += izquierdo_ordenado[i:]
    merged += derecho_ordenado[j:]

    return merged


print("Merge sort\n")
lista = [int(x) for x in input("Ingresa una lista: ").split(" ")]
print("\nLista original: ", lista)
print("Lista ordenada: ", merge_sort(lista))