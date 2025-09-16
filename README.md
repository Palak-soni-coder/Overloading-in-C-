# Experiment 13  

**Name:** Palak Soni  
**Class:** ENTC A3  
**PRN:** 24070123069  
**Title:** Overloading in C++  

---
  

##  AIM  
To study **Polymorphism in C++** with focus on **Overloading** concepts:  
- Constructor Overloading  
- Function Overloading  
- Operator Overloading  

---
##  Introduction to Overloading in C++

In **C++**, *overloading* allows us to define multiple functions, constructors, or operators with the same name but different parameter lists or behaviors. The main idea is to improve **code readability, flexibility, and reusability**.

When an overloaded function or constructor is called, the **compiler decides which version to execute** based on the number or type of arguments passed.

---
##  Theory  

**Polymorphism in C++ allows one name to have **many forms**. Overloading is a type of **compile-time polymorphism** where functions, constructors, or operators behave differently depending on input.**


###  Constructor Overloading  
**Definition:** Constructor overloading is a feature in C++ that allows a class to have more than one constructor, each with a different parameter list.  

**Purpose:** Enables the creation of objects in different ways depending on the number or type of arguments.  

**Key Points:**  
- Constructors share the same name as the class.  
- Differentiated by parameter list (number/type).  
- Improves flexibility and readability in object creation.  

**Code example:-**
### 1️ Constructor Overloading

```cpp
#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    Student() { name="Unknown"; age=0; }
    Student(string n) { name=n; age=0; }
    Student(string n, int a) { name=n; age=a; }

    void display() { cout << "Name: " << name << ", Age: " << age << endl; }
};

int main() {
    Student s1;
    Student s2("Rahul");
    Student s3("Ananya",21);

    s1.display();
    s2.display();
    s3.display();
}

```
---

###  Function Overloading  
**Definition:** Function overloading is the ability to define multiple functions with the same name but different parameter lists.  

**Purpose:** Allows functions to perform similar tasks with different types or numbers of inputs.  

**Key Points:**  
- Return type alone cannot differentiate overloaded functions.  
- Parameter list must differ.  
- Increases clarity by reusing function names.  
- Compiler decides which function to call at **compile-time**.

**Code Example:-**
```cpp
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) { return a + b; }
    int add(int a, int b, int c) { return a + b + c; }
};

int main() {
    Calculator calc;
    cout << "Sum1: " << calc.add(10,20) << endl;
    cout << "Sum2: " << calc.add(10,20,30) << endl;
}
```
---

###  Operator Overloading  
**Definition:** Operator overloading allows programmers to redefine the meaning of C++ operators (`+`, `-`, `*`, `==`, etc.) for **user-defined types** (classes).  

**Purpose:** Enables objects to be manipulated using operators in a natural and intuitive way.  

**Key Points:**  
- Achieved by defining a special function with `operator` keyword.  
- Improves readability and usability for custom types (e.g., complex numbers, matrices).  
- Only existing operators can be overloaded (cannot create new operators).  
- Some operators (`::`, `sizeof`, `?:`, `.`) cannot be overloaded.

**Syntax:**  
```cpp
class ClassName {
public:
    returnType operator op (argument) {
        // operator definition
    }
};
```
---

## Difference Between Overloading Types  

| Feature              | Constructor Overloading | Function Overloading | Operator Overloading |
|-----------------------|-------------------------|----------------------|----------------------|
| **Definition**        | Multiple constructors with different parameter lists. | Multiple functions with same name but different parameters. | Redefining operators for user-defined types. |
| **Purpose**           | Create objects in different ways. | Perform similar operations with different inputs. | Make operators work with objects intuitively. |
| **Where Used**        | Inside a class (constructors only). | Inside/outside classes. | With user-defined types (classes/structs). |
| **Compile-time?**     | Yes, resolved at compile-time. | Yes, resolved at compile-time. | Yes, resolved at compile-time. |
| **Return Type**       | Not applicable. | Cannot overload by return type alone. | Return type can differ, but parameters matter. |
| **Example Use Case**  | Initialize objects in multiple ways. | Add numbers of different types. | Add two complex numbers with `+`. |

---

##  Codes and Algorithms  

### 1. **Constructor Overloading**

#### Code Summary
A class `Add` has multiple constructors:  
- With 2 integers  
- With 2 floats  
- With 3 integers  
Each constructor performs addition and displays the result.

#### Algorithm
1. Define class `Add`.  
2. Overload the constructors with different parameter lists.  
3. In each constructor, perform addition of parameters and print result.  
4. In `main()`, create objects with different sets of arguments.  


---

### 2. **Constructor Overloading with Characters and Strings**

#### Code Summary
Class `Name` has two constructors:  
- Accepts two characters.  
- Accepts two strings.  
Demonstrates printing and concatenation.

#### Algorithm
1. Define class `Name` with two constructors.  
2. Constructor 1: Accepts characters → prints them directly.  
3. Constructor 2: Accepts strings → concatenates and prints.  
4. In `main()`, create objects with both chars and strings.  



---

### 3. **Function Overloading (Calculator Example)**

#### Code Summary
Two `calc()` functions:  
- `calc(int, int)` → performs addition.  
- `calc(int, int, int)` → performs subtraction.  

#### Algorithm
1. Define two functions with same name `calc` but different parameter lists.  
2. First function: add two numbers and print result.  
3. Second function: subtract two numbers and print result.  
4. In `main()`, call both versions with appropriate arguments.  



---

### 4. **Operator Overloading (Complex Number Addition – Manual)**

#### Code Summary
Class `ComplexAddition` stores real and imaginary parts.  
- Constructor prints the number.  
- A function `add()` adds two complex numbers manually.  

#### Algorithm
1. Define class `ComplexAddition` with variables `real` and `imag`.  
2. Constructor initializes and prints complex number.  
3. Define `add()` to print sum of real and imaginary parts.  
4. In `main()`, create two complex numbers.  
5. Add them and display result.  


---

### 5. **Operator Overloading (String Concatenation with `+`)**

#### Code Summary
Class `Name` stores two strings.  
- Operator `+` is overloaded to concatenate names in a customized way.  

#### Algorithm
1. Define class `Name` with two string members.  
2. Constructor initializes names.  
3. Overload `+` operator to return customized string.  
4. In `main()`, create objects and concatenate them using `+`.  


---

##  Conclusion

Overloading in C++ is one of the most powerful and widely used features of **Polymorphism**. It allows programmers to use the same name for multiple operations, making code **cleaner, more intuitive, and easier to maintain**.  

- **Function Overloading** demonstrates how the same function can work with different numbers or types of parameters, ensuring flexibility without writing separate names for similar tasks.  
- **Constructor Overloading** provides multiple ways to initialize objects, giving developers the ability to handle different initialization requirements smoothly.  
- **Operator Overloading** bridges the gap between built-in and user-defined data types, making custom classes behave like native types (for example, adding complex numbers or concatenating strings with `+`).  

By applying overloading:  
- Programs become **easier to understand**, since similar tasks share the same name.  
- Code **redundancy is reduced**, as multiple versions of a function or constructor coexist under one name.  
- Developers gain the ability to **extend the language features** for their own data types, which makes object-oriented programming in C++ more powerful.  

In short, overloading enhances **flexibility, readability, and efficiency** in programming, and it forms a strong foundation for writing professional and scalable C++ applications.













