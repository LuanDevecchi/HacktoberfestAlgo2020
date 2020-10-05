def bubbleSort(sort):
    for k in range(len(sort)-1,0,-1):
        for i in range(k):
            if sort[i]>sort[i+1]:
                temp = sort[i]
                sort[i] = sort[i+1]
                sort[i+1] = temp

list = [12,42,435,14,5,21,57,24]
bubbleSort(list)
print(list)
