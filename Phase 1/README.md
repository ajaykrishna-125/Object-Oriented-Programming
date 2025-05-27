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
