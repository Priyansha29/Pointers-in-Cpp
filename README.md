# Pointers-in-C++

## What is a Pointer? 
A **pointer** in C++ is a variable that stores the memory address of another variable. Instead of holding a data value directly, a pointer holds the location of the data in memory.  
Pointers allow:
- Direct memory access and manipulation
- Dynamic memory allocation
- Efficient array and string handling
- Implementation of data structures like linked lists and trees

---

## Theory
Pointers in C++ are variables that hold memory addresses of other variables, providing direct access to memory locations. They enable efficient manipulation of data structures and memory through address arithmetic. Pointers are commonly used for array traversal, function arguments, and building data structures like linked lists.

```
//Declaration
type* pointer_name;  // int* ptr;

//Initialization
type* pointer = &variable;  // int* p = &x;
```
--> Key Features:

1) Memory Address Storage – Pointers store memory addresses of variables, enabling direct access to data locations.
2) Dereferencing – Using the * operator, pointers retrieve or modify the value stored at their memory address.
3) Pointer Arithmetic – Support operations like ++, --, +, - to traverse memory (useful for arrays).
4) Dynamic Memory Handling – Enable efficient memory management (e.g., resizing data structures at runtime).
---

## Programs on Pointers

### 1. Basic Arithmetic Pointer – Increment of Pointer

This program demonstrates pointer arithmetic in C++ by showing how pointer increment operations behave differently based on data types. When a pointer is incremented ```(ptr++)```, it advances by the size of its data type (e.g., ```int*``` moves by 4 bytes, ```double*``` by 8 bytes). The output reveals how each pointer's memory address changes, highlighting how pointer arithmetic is type-dependent and adjusts for the underlying variable size. 

**Algorithm:**
1. Declare variables of different data types (`int`, `bool`, `double`, `float`).
2. Create pointers for each variable type.
3. Assign each pointer the address of its respective variable.
4. Print the initial address stored in the pointer.
5. Increment the pointer and print the new address.
6. Repeat for all data types.

---


### 2. Addition and Subtraction of Values at Two Different Positions in an Array

This program demonstrates pointer subtraction in C++ by calculating the difference between values pointed to by two pointers (p1 and p2) in an array. The pointers are initialized to point to specific elements (```arr[2]``` and ```arr[4]```), and their dereferenced values (```*p2``` - ```*p1```) are subtracted to compute the result (20 in this case). The output shows how pointers can be used to indirectly access and manipulate array elements, highlighting their role in efficient memory-based operations.

**Algorithm:**
1. Initialize an array with integer values.
2. Create two pointers pointing to specific indices of the array.
3. Dereference both pointers to access the values.
4. Perform subtraction and addition of the two values.
5. Display the results.


---

### 3. Printing Characters of a String Using Pointers

This program demonstrates string manipulation using pointers in C++. The user inputs a string which is stored in str1, while a string pointer str_ptr is assigned the address of this string. By dereferencing the pointer (*str_ptr), the program outputs the original string, illustrating how pointers can indirectly access and display string data stored in memory. 

**Algorithm:**
1. Take a string input from the user.
2. Assign a pointer to the first character of the string.
3. Use a loop to print characters one by one by dereferencing the pointer.
4. Increment the pointer until the null terminator (`'\0'`) is reached.

---

### 4. Traversing an Array Using Pointers

This program demonstrates array reversal using pointers in C++. It creates an array of pointers (arrp) where each element stores the address of the corresponding element in the original array (arr). By dereferencing these pointers in reverse order (*arrp[4-i]), it constructs a new reversed array (arr_rev). The output displays both the original and reversed arrays, showcasing how pointers enable efficient memory-level manipulation of array elements without modifying the original array.

**Algorithm:**
1. Initialize an integer array with predefined values.
2. Calculate the array length using `sizeof`.
3. Print the array in original order using indexing.
4. Assign a pointer to the last element of the array.
5. Use a loop to print the array elements in reverse by decrementing the pointer.

---

## Conclusion
Pointers are a fundamental feature of C++ that allow direct access to memory addresses, making programs more flexible and efficient.  
From the experiments above, we learned how to:
- Perform arithmetic operations using values pointed by pointers.
- Understand pointer arithmetic and its relation to data type sizes.
- Traverse arrays and strings using pointers.
- Apply pointers to iterate in both forward and reverse directions.



