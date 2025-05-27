
# 📦 Phase 1: Core OOP Concepts in C++

This folder contains C++ practice files demonstrating the **4 foundational OOP principles**. Each concept is implemented with a real-world use case to help understand the "why" and "how" behind OOP.

---

## 🧱 Concepts Covered

| No. | Concept           | Description                                              |
|-----|-------------------|----------------------------------------------------------|
| 1   | Encapsulation     | Binding data and functions; hiding internal state        | 
| 2   | Abstraction       | Hiding implementation using abstract classes             | 
| 3   | Inheritance       | Reusing code via parent-child class relationships        | 
| 4   | Polymorphism      | One interface, many implementations (compile & run-time) | 

---



# University Management System (Console App)

A simple C++ console-based project demonstrating all **4 pillars of Object-Oriented Programming**:

## 🔧 OOP Concepts Used
- **Encapsulation**: Private data members like `cls`, `fees`, `salary`, and `subject` are accessed via public methods.
- **Abstraction**: Abstract base class `Person` with a pure virtual function `displayDetails()`.
- **Inheritance**: `Student` and `Professor` classes inherit from `Person`.
- **Polymorphism**: Base class pointer `Person*` is used to call overridden `displayDetails()` at runtime.

## 📁 Files
- `University_system_Project.cpp` — Main source file.

## 🚀 How to Run

```bash
g++ University_system_Project.cpp -o university
./university
