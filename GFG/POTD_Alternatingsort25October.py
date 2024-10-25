class Solution:
    def alternateSort(self,arr):
        arr.sort()
        n=len(arr)
        a,b=0,0
        largest_number=list()
        smallest_number=list()
        result=list()
        mid_point=n/2  
        for index in range(len(arr)):
            if index<mid_point:
                smallest_number.append(arr[index])
            else:
                largest_number.append(arr[index])
        largest_number.reverse()
        for i in range(len(arr)):
            if i % 2 == 0 and a < len(largest_number):
                result.append(largest_number[a])
                a=a+1
            elif b < len(smallest_number):  
                result.append(smallest_number[b])
                b=b+1
                
        return result
