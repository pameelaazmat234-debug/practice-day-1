# Student Class – C++

A simple C++ OOP project demonstrating **constructors, copy constructors, deep copy, dynamic memory allocation, and destructors**.

## Concepts Covered

* Default constructor
* Parameterized constructor
* Copy constructor
* Deep copy
* Dynamic memory allocation using `new`
* C-style strings using `strlen()` and `strcpy()`
* Destructor and memory deallocation using `delete[]`

## Example

```cpp
Student s1(25, "Pameela");
Student s2(s1);

s1.display();
s2.display();
```

The copy constructor performs a **deep copy**, giving each object its own dynamically allocated memory for the student's name.

## Purpose

This project was created to practice **C++ Object-Oriented Programming and memory management**.
