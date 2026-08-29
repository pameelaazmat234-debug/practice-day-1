# Student Class – C++ OOP

This project demonstrates the use of **constructors, copy constructors, deep copy, dynamic memory allocation, and destructors** in C++.

## Features

* Default constructor
* Parameterized constructor
* Copy constructor
* Deep copy using dynamic memory
* C-style string handling using `strlen()` and `strcpy()`
* Destructor for releasing dynamically allocated memory
* Display function to show student information

## Concepts Demonstrated

### 1. Default Constructor

Creates a student with a default roll number and an empty name.

### 2. Parameterized Constructor

Initializes the student's roll number and dynamically allocates memory for the student's name.

### 3. Copy Constructor

Creates a new `Student` object by copying an existing object.

A **deep copy** is used for the dynamically allocated `name` so that each object has its own separate memory.

### 4. Destructor

The destructor releases the dynamically allocated memory using `delete[]`.

## Deep Copy

The copy constructor creates separate memory for the new object's name:

```cpp
name = new char[strlen(obj.name) + 1];
strcpy(name, obj.name);
```

This prevents both objects from pointing to the same memory.

## Example

```cpp
Student s1(25, "Pameela");
Student s2(s1);

s1.display();
s2.display();
```

Both objects contain the same student information, but their `name` values are stored in separate memory locations.

## Technologies Used

* C++
* Object-Oriented Programming
* Dynamic Memory Allocation
* C-Style Strings

## Learning Goal

The purpose of this project is to understand how C++ manages objects and dynamically allocated memory, especially how **deep copying prevents memory-related problems when pointers are used inside classes**.




