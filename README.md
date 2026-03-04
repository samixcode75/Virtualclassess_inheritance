# 📌 Custom Template List (C++ OOP Project)

## 📖 Project Overview

This project is a **menu-driven C++ program** built using **Object-Oriented Programming (OOP)** concepts and **Templates**.

It implements a dynamic array-based list structure using:

* 🔹 Inheritance
* 🔹 Templates
* 🔹 Dynamic memory allocation
* 🔹 Polymorphism (virtual functions)
* 🔹 Constructor & Destructor handling
* 🔹 Copy constructor
* 🔹 Multi-level inheritance

The program allows users to perform various list operations including prime calculations, duplicate detection, second max/min searching, and half-wise rotations.

---

## 🏗 Class Structure

The project follows **multi-level inheritance**:

```
list<T>        →   Abstract Base Class
    ↓
mylist<T>      →   Concrete Implementation
    ↓
CustomList<T>  →   Extended Functionalities
```

---

## 📂 File Structure

```
list.h          → Abstract base class
mylist.h        → Core list implementation
customlist.h    → Extended features
main.cpp        → Menu-driven program
README.md       → Project documentation
```

---

# 🧠 Class Details

## 1️⃣ list<T> (Abstract Base Class)

* Contains:

  * Dynamic array pointer
  * Maximum size
  * Current size
* Declares pure virtual functions:

  * `addElementAtFirstIndex()`
  * `addElementAtLastIndex()`
  * `removeElementFromEnd()`
  * `removeElementFromStart()`

This makes it an **abstract class**.

---

## 2️⃣ mylist<T>

Implements the base class functions and provides:

* Add element at first index
* Add element at last index
* Remove element from start/end
* Insert at specific index
* Search element
* Display list
* Check if full
* Check if empty

---

## 3️⃣ CustomList<T>

Extends `mylist<T>` and adds advanced features:

### ✅ Additional Functionalities

| Function                     | Description                                       |
| ---------------------------- | ------------------------------------------------- |
| `sum_ofPrime()`              | Finds all prime numbers and returns their sum     |
| `secondMaxEven()`            | Returns second maximum even number                |
| `secondMinOdd()`             | Returns second minimum odd number                 |
| `printDuplicates()`          | Displays numbers that occur more than once        |
| `rotateClockwise(int r)`     | Rotates both halves of the list r times clockwise |
| `rotateAntiClockwise(int r)` | Rotates both halves r times anti-clockwise        |

---

## 🔧 Constructors & Destructor

CustomList includes:

* ✅ Parameterized constructor with default argument
* ✅ Copy constructor
* ✅ Destructor

---

# 🖥 Menu-Based Program

The program uses an **if-else based menu system** that allows the user to:

1. Add element
2. Display list
3. Find sum of prime numbers
4. Find second maximum even
5. Find second minimum odd
6. Print duplicate elements
7. Rotate clockwise
8. Rotate anti-clockwise
9. Exit program

---

# 🔄 Rotation Logic

The list is divided into **two halves**:

Example:

```
[1 2 3 4 | 5 6 7 8]
```

* First half rotates independently
* Second half rotates independently

Both rotations can be:

* Clockwise
* Anti-clockwise

---

# 🧮 Algorithms Used

* Prime checking using optimized loop (√n logic)
* Nested loops for duplicate detection
* Linear traversal for second max/min calculations
* Manual array shifting for rotations

---

# ⏱ Time Complexity

| Operation        | Complexity |
| ---------------- | ---------- |
| Insert           | O(n)       |
| Delete           | O(n)       |
| Search           | O(n)       |
| Print Duplicates | O(n²)      |
| Prime Sum        | O(n√m)     |
| Rotation         | O(n × r)   |

---

# 💡 Concepts Demonstrated

✔ Templates
✔ Dynamic memory allocation
✔ Abstract classes
✔ Virtual functions
✔ Inheritance
✔ Multi-level inheritance
✔ Constructor & Destructor
✔ Copy constructor
✔ Menu-driven program design
✔ Algorithmic thinking

---

# 🚀 How to Compile & Run

Using g++:

```bash
g++ main.cpp -o program
./program
```

Make sure all header files are in the same directory.

---

# 🎯 Learning Outcomes

After completing this project, you should understand:

* How templates work with inheritance
* What dependent base classes are
* Why `this->` is required in template inheritance
* How dynamic arrays are managed manually
* How to design modular OOP projects

---

# 📌 Author

Developed as part of a Data Structures / OOP practice assignment.

---

# ⭐ Future Improvements

* Implement dynamic resizing like `std::vector`
* Optimize duplicate detection using hashing
* Add exception handling
* Improve rotation efficiency using modulo
* Convert to STL-compatible container

---

## 📜 License

This project is for educational purposes.

---

If you found this project useful, consider giving it a ⭐ on GitHub!
