// 1. Primitive Data Types
#include <iostream>
using namespace std;

void primitiveDataTypes() {
    // Integer
    int a = 10;
    cout << "Integer: " << a << endl;

    // Floating Point
    float b = 5.75;
    cout << "Float: " << b << endl;

    // Boolean
    bool c = true;
    cout << "Boolean: " << c << endl;

    // Character
    char d = 'A';
    cout << "Character: " << d << endl;
}

// 2. Character String Types
#include <string>
void characterStringTypes() {
    string str1 = "Hello";
    string str2 = "World";
    
    // Concatenation
    string concatenated = str1 + " " + str2;
    cout << "Concatenated String: " << concatenated << endl;

    // Length
    cout << "Length of String: " << concatenated.length() << endl;

    // Substring
    cout << "Substring: " << concatenated.substr(0, 5) << endl;

    // Comparison
    cout << "Comparison (str1 == str2): " << (str1 == str2) << endl;
}

// 3. Enumeration Types
enum Days {MON, TUE, WED, THU, FRI, SAT, SUN};
void enumerationTypes() {
    Days today = WED;
    cout << "Enum Example: Today is " << today << " (0 = MON, 6 = SUN)" << endl;
}

// 4. Array Types
void arrayTypes() {
    // Static Array
    int staticArray[5] = {1, 2, 3, 4, 5};
    cout << "Static Array: ";
    for (int i = 0; i < 5; i++) cout << staticArray[i] << " ";
    cout << endl;

    // Stack-Dynamic Array
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int *dynamicArray = new int[size];
    for (int i = 0; i < size; i++) dynamicArray[i] = i * 10;
    cout << "Dynamic Array: ";
    for (int i = 0; i < size; i++) cout << dynamicArray[i] << " ";
    delete[] dynamicArray;
    cout << endl;
}

// 5. Record Types
struct Employee {
    string name;
    int age;
    double salary;
};
void recordTypes() {
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
    int *ptr = &var;

    cout << "Pointer Example: " << endl;
    cout << "Value: " << var << endl;
    cout << "Address: " << ptr << endl;
    cout << "Value via Pointer: " << *ptr << endl;

    // Dynamic Memory Allocation
    int *dynVar = new int(50);
    cout << "Dynamically Allocated Value: " << *dynVar << endl;
    delete dynVar;
}

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

    cout << "\n7. Pointer Types:\n";
    pointerTypes();

    return 0;
}
