// 1. Primitive Data Types
#include <iostream>
#include <string> // Required for string operations
using namespace std;

// Function to demonstrate primitive data types
void primitiveDataTypes() {
    // Integer data type
    int a = 10;
    cout << "Integer: " << a << endl;

    // Floating-point data type
    float b = 5.75;
    cout << "Float: " << b << endl;

    // Boolean data type
    bool c = true;
    cout << "Boolean: " << c << endl; // Outputs 1 for true

    // Character data type
    char d = 'A';
    cout << "Character: " << d << endl;
}

// 2. Character String Types
void characterStringTypes() {
    // String concatenation and operations
    string str1 = "Hello";
    string str2 = "World";

    // Concatenation
    string concatenated = str1 + " " + str2;
    cout << "Concatenated String: " << concatenated << endl;

    // String Length
    cout << "Length of String: " << concatenated.length() << endl;

    // Substring extraction
    cout << "Substring: " << concatenated.substr(0, 5) << endl;

    // String Comparison
    cout << "Comparison (str1 == str2): " << (str1 == str2) << endl;
}

// 3. Enumeration Types
enum Days { MON, TUE, WED, THU, FRI, SAT, SUN }; // Enumeration definition
void enumerationTypes() {
    // Enum demonstration
    Days today = WED;
    cout << "Enum Example: Today is " << today << " (0 = MON, 6 = SUN)" << endl;
}

// 4. Array Types
void arrayTypes() {
    // Static Array: Fixed size at compile time
    int staticArray[5] = {1, 2, 3, 4, 5};
    cout << "Static Array: ";
    for (int i = 0; i < 5; i++) cout << staticArray[i] << " ";
    cout << endl;

    // Dynamic Array: Size is specified at runtime
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int *dynamicArray = new int[size]; // Memory allocated at runtime
    for (int i = 0; i < size; i++) dynamicArray[i] = i * 10;

    cout << "Dynamic Array: ";
    for (int i = 0; i < size; i++) cout << dynamicArray[i] << " ";
    cout << endl;

    delete[] dynamicArray; // Free dynamically allocated memory
}

// 5. Record Types (Struct)
struct Employee {
    string name;
    int age;
    double salary;
};
void recordTypes() {
    // Record (struct) demonstration
    Employee emp = {"Alice", 30, 75000.50};
    cout << "Employee Record: " << emp.name << ", " << emp.age << ", " << emp.salary << endl;
}

// 6. Union Types
union Data {
    int intVal;
    float floatVal;
    char charVal;
};
void unionTypes() {
    Data data;

    // Union stores one value at a time
    data.intVal = 42;
    cout << "Union as Integer: " << data.intVal << endl;

    data.floatVal = 3.14;
    cout << "Union as Float: " << data.floatVal << endl;

    data.charVal = 'X';
    cout << "Union as Character: " << data.charVal << endl;
}

// 7. Pointer Types
void pointerTypes() {
    int var = 20;
    int *ptr = &var; // Pointer holds the address of var

    cout << "Pointer Example: " << endl;
    cout << "Value: " << var << endl;
    cout << "Address: " << ptr << endl;
    cout << "Value via Pointer: " << *ptr << endl;

    // Dynamic memory allocation using a pointer
    int *dynVar = new int(50);
    cout << "Dynamically Allocated Value: " << *dynVar << endl;

    delete dynVar; // Free dynamically allocated memory
}

// Main function to call all demonstrations
int main() {
    cout << "\n1. Primitive Data Types:\n";
    primitiveDataTypes();

    cout << "\n2. Character String Types:\n";
    characterStringTypes();

    cout << "\n3. Enumeration Types:\n";
    enumerationTypes();

    cout << "\n4. Array Types:\n";
    arrayTypes();

    cout << "\n5. Record Types:\n";
    recordTypes();

    cout << "\n6. Union Types:\n";
    unionTypes();

