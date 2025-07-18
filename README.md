# EduTrack_SchoolManagement_in_C

# 🎓 School Management System (C Language)

A modular C program simulating a basic **School Management System**, featuring Students, Courses, and a School entity. The system allows dynamic creation of students and courses, student enrollment, grade tracking, and various utility functions such as checking enrollment and listing passed students.

---

## 🧩 Features

- 📚 Create students with ID, name, and average grade  
- 🏫 Create courses and enroll multiple students  
- 🏛️ Create a school containing multiple courses  
- ✅ Check if a student is enrolled in a course or the entire school  
- 🎯 Print all courses a student is taking  
- 🏆 List students who passed a course based on average grade  

---

## 🛠️ Tech Stack

- **Language:** C (ISO C99)
- **Build Tool:** GCC + Makefile
- **Memory:** Dynamic memory allocation (`malloc` / `free`)
- **Modularity:** Organized into `.c` and `.h` files for scalability

---

## 📁 Project Structure
- school_project/
- ├── main.c # Entry point
- ├── student.c/.h # Student creation and data
- ├── course.c/.h # Course logic and student enrollment
- ├── school.c/.h # School-level management
- ├── Makefile # Easy build configuration
- └── README.md # Project documentation


---

## 🚀 Getting Started

### ✅ Prerequisites
- GCC Compiler (`gcc`)
- Make utility

### 📦 Build & Run

```bash
make        # Compiles the project
./main      # Runs the program
make clean  # Cleans up binaries