def readFile() :
    n = int(input())
    for i in range(n) :
        size = int(input())
        array = input()
        array = array.split(' ')
        array = [int(elements) for elements in array ]
        key = int(input())

        print("size ",size)
        print("array ", array)
        print("key ",key)
        linearsearch(array,size,key)

def linearsearch(array,size,k) :
    cnt = 0
    for x in array :
        if x == k : 
            cnt=cnt+1
            print('present ',cnt)
            return 
        cnt=cnt+1
    print('not present ',cnt)

if __name__ == '__main__' :
    readFile()