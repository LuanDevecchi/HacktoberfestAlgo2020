'''
Shell Sort is a variant of Insertion Sort.
Instead of comparing adjacent element,the shell sort
compares distant elements in each pass.
The distance is computed by halving the array size after each pass.
Other sequences are as well used to get the optimal distance
'''

def shellsort (a):
    if len(a) == 0:
        print("The list is empty")
        return
    dist = len(a)//2
    while dist > 0:
        
        
        for i in range (dist,len(a)):
            tmp = a[i]
            j=i
            while j >= dist and a[j-dist] > tmp:
                a[j] = a[j-dist]
                j -= dist
            a[j] = tmp
            print ("list a="+str(a))
        dist = dist//2
        print ("list after each pass="+str(a))

a = [34,2,15,3,21]
shellsort(a)
        
