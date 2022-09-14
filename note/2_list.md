# List 

## List as abstract data type

**List** static
+ store a given number of elements of a given data-type
+ write/modify element at a position
+ read element at a position

**List** dynamic
+ empty list has size 0
+ insert
+ remove
+ count
+ read/modify element at a position
+ specity data-type

## Dynamic List using Array
![](img/2022-09-07_12-09.png)  
What can we do if the array is full?
+ creat a new larger array of double size
+ copy previous array into the new array
+ free the memory for the previous array

Cost in terms of times:
1. Access - Read/write element at an index - constant time $O(1)$
2. Insert - $T\propto n$ or $O(n)$ cost by shifting
3. Remove - $T\propto n$ or $O(n)$ cost by shifting
4. Add(insert at the end) - $O(1)$ if not full, $O(n)$ if full
