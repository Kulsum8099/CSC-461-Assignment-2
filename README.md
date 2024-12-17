# Data Types in C++

## Overview

This project demonstrates the key concepts of **data types** as described in Chapter 6 of the textbook *"Concepts of Programming Languages" by Robert W. Sebesta*.

The program is written in **C++** and covers the following topics:
1. **Primitive Data Types**: Demonstrates integer, float, boolean, and character types.
2. **Character String Types**: Covers string operations like concatenation, length, substring, and comparison.
3. **Enumeration Types**: Shows how enumerations can represent named constants.
4. **Array Types**: Explains static arrays and dynamic arrays (stack vs heap).
5. **Record Types**: Implements a `struct` to group heterogeneous data.
6. **Union Types**: Shows how unions can store different types of data at different times.
7. **Pointer Types**: Demonstrates pointers and dynamic memory allocation.

---

## Files
- **data_types_demo.cpp**: Source code containing all implementations.
- **README.md**: Documentation explaining the code and usage.

---

## How to Compile and Run
1. Ensure you have a C++ compiler installed (e.g., `g++`).
2. Compile the code:
   ```bash
   g++ -o data_types_demo data_types_demo.cpp
    ```
3. Run the executable:
   
On Windows:
   ```bash
   data_types_demo.exe
   ```
On Linux/macOS:
   ```bash
   ./data_types_demo
   ```
4. Input the required values when prompted.

---

## Sample Output
### 1. Primitive Data Types
 ```bash
1. Primitive Data Types:
Integer: 10
Float: 5.75
Boolean: 1
Character: A
 ```

### 2. Character String Types
 ```bash
2. Character String Types:
Concatenated String: Hello World
Length of String: 11
Substring: Hello
Comparison (str1 == str2): 0
 ```

### 3. Enumeration Types
 ```bash
3. Enumeration Types:
Enum Example: Today is 2 (0 = MON, 6 = SUN)
 ```
_Note:_ The value 2 corresponds to WED in the enumeration.

### 4. Array Types

Input:
 ```bash
Enter size of array: 3
 ```
Output:
 ```bash
4. Array Types:
Static Array: 1 2 3 4 5 
Dynamic Array: 0 10 20
 ```

### 5. Record Types
 ```bash
5. Record Types:
Employee Record: Alice, 30, 75000.5
 ```

### 6. Union Types
 ```bash
6. Union Types:
Union as Integer: 42
Union as Float: 3.14
Union as Character: X
 ```
_Note:_ A union can only hold one value at a time, so the previous values are overwritten.

### 7. Pointer Types
 ```bash
7. Pointer Types:
Pointer Example: 
Value: 20
Address: 0x7ffee1b4f4dc
Value via Pointer: 20
Dynamically Allocated Value: 50
 ```
_Note:_ The memory address shown (0x7ffee1b4f4dc) will vary for each run.

---

## Key Concepts Explained
1. Primitive Data Types: Basic building blocks of data manipulation (int, float, bool, char).
2. Character String Types: Operations include concatenation, substring, and length checking.
3. Enumeration Types: Useful for defining a set of named constants.
4. Array Types:
Static Arrays: Fixed at compile-time.
Dynamic Arrays: Allocated during runtime.
5. Record Types (struct): A way to define a record with multiple fields.
6. Union Types: Memory-saving technique that holds one type at a time.
7. Pointer Types:
Demonstrates memory addresses and dynamic memory allocation.
