# Experiment 13  

**Name:** Palak Soni  
**Class:** ENTC A3  
**PRN:** 24070123069  
**Title:** Operator Overloading in C++  

---
  

##  AIM  
To study **Polymorphism in C++** with focus on **Overloading** concepts:  
- Constructor Overloading  
- Function Overloading  
- Operator Overloading  

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

Name: Unknown, Age: 0
Name: Rahul, Age: 0
Name: Ananya, Age: 21

---
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

##  Algorithms  

### 1 Addition Using Constructor Overloading  
1. Start.  
2. Define class `Add` with private variable `sum`.  
3. Create constructor with 3 integers → add & print sum (double).  
4. Create constructor with 2 integers → add & print sum (int).  
5. In `main()`, create objects with 2 and 3 arguments.  
6. End.  

---

### 2️ Name Printing Using Constructor Overloading  
1. Start.  
2. Define class `Name`.  
3. Create constructor with 2 chars → print together.  
4. Create constructor with 2 strings → concatenate & print.  
5. In `main()`, create objects with chars and strings.  
6. End.  

---

### 3️ Calculator Using Function Overloading  
1. Start.  
2. Define function `calc(int,int)` → add numbers.  
3. Define function `calc(int,int,int)` → subtract numbers.  
4. In `main()`, call both versions.  
5. End.  

---

### 4️ Complex Number Addition  
1. Start.  
2. Define class `ComplexAddition` with `real` and `imag`.  
3. Constructor initializes values.  
4. Define `add()` function to add & print result.  
5. In `main()`, create objects and call `add()`.  
6. End.  

---

### 5️ String Concatenation Using Constructor & Method  
1. Start.  
2. Define class `Name` with two strings.  
3. Constructor initializes `name1` & `name2`.  
4. Define method `add()` → concatenate & print.  
5. In `main()`, create object and call `add()`.  
6. End.  

---

##  Conclusion  
- **Constructor Overloading** → Flexibility in object creation.  
- **Function Overloading** → Reuse function names with different inputs.  
- **Operator Overloading** → Make objects behave like built-in types.  

Together, they demonstrate **compile-time polymorphism**, improving **flexibility, readability, and usability** in C++ programming.  

---





