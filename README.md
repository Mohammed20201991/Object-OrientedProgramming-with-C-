# Object-OrientedProgramming-with-CPP

## Second Year – Artificial Intelligence / College of Information Technology

---

## Table of Contents

1. [Course Description](#course-description)
2. [Prerequisites](#prerequisites)
3. [Course Objectives](#course-objectives)
4. [Core OOP Principles](#core-oop-principles)
5. [Main Concepts Students Must Master](#main-concepts-students-must-master)
6. [Final Course Project](#final-course-project)
7. [Recommended C++ Standard and Tools](#recommended-c-standard)
8. [Expected Final Outcome](#expected-final-outcome)
9. [Repository Structure](#repository-structure)
10. [Getting the Repository](#getting-the-repository)
11. [Docker Development Environment](#docker-development-environment)
12. [Running the Practical Labs](#running-the-practical-labs)
13. [Debugging with GDB](#debugging-with-gdb)
14. [Using VS Code](#using-vs-code)
15. [Command Cheat Sheet](#command-cheat-sheet)
16. [Troubleshooting](#troubleshooting)
17. [Git Workflow](#git-workflow)
18. [License](#license)

---

## Course Description

This course introduces Object-Oriented Programming (OOP) using C++ for second-year students who have already completed:

- Basic Programming
- Structured Programming
- Functions
- Arrays
- Pointers
- Structures
- File Handling

The course focuses on transitioning from procedural programming to object-oriented software design.

Students will learn how to design programs using classes and objects and will progressively study encapsulation, abstraction, composition, inheritance, polymorphism, templates, exception handling, STL, and modern C++ concepts.

---

## Prerequisites

Students should already understand:

- Variables and data types
- Operators
- Conditional statements
- Loops
- Functions
- Arrays
- Strings
- Pointers
- Structures
- Basic memory concepts
- File handling
- Basic C++ syntax

---

## Course Objectives

By the end of this course, students should be able to:

1. Explain the principles of Object-Oriented Programming.
2. Distinguish procedural programming from object-oriented programming.
3. Design classes and objects in C++.
4. Apply encapsulation and data hiding.
5. Implement constructors and destructors.
6. Understand object lifetime.
7. Use composition and aggregation.
8. Implement operator overloading.
9. Apply inheritance.
10. Implement runtime polymorphism.
11. Design abstract classes and interfaces.
12. Understand dynamic memory in object-oriented programs.
13. Understand shallow and deep copying.
14. Use function and class templates.
15. Handle runtime errors using exceptions.
16. Use important Standard Template Library (STL) containers.
17. Use STL algorithms and iterators.
18. Apply modern C++ features.
19. Design medium-sized programs using OOP principles.
20. Develop a complete OOP-based software project.

---

## Core OOP Principles

The course focuses on four major principles:

```text
                  Object-Oriented Programming
                            |
          +-----------------+-----------------+
          |                 |                 |
    Encapsulation       Abstraction      Inheritance
                            |
                       Polymorphism
```

---

## Main Concepts Students Must Master

### Fundamental

* Classes
* Objects
* Constructors
* Destructors
* Encapsulation
* Abstraction

### Intermediate

* Composition
* Aggregation
* Operator Overloading
* Inheritance
* Polymorphism
* Abstract Classes

### Advanced

* Dynamic Memory
* Object Copying
* Templates
* Exception Handling
* STL
* Modern C++

---

## Final Course Project

Students will develop a complete **C++ OOP application**.

### Recommended Projects

1. University Management System
2. Library Management System
3. Hospital Management System
4. Banking System
5. Hotel Management System
6. Vehicle Rental System
7. Cinema Management System
8. E-Commerce Management System
9. Student Management System
10. AI Dataset Management System

### Project Requirements

The project must demonstrate several OOP concepts, including:

* Classes
* Encapsulation
* Constructors
* Composition
* Inheritance
* Polymorphism
* Exception Handling
* STL
* Good Class Design

---

## Recommended C++ Standard

The course uses:

**C++17**

C++20 features can be introduced where appropriate.

### Recommended Development Tools

Students may use:

* Docker (recommended, see [Docker Development Environment](#docker-development-environment))
* Visual Studio
* Visual Studio Code
* Code::Blocks
* GCC / MinGW
* CMake – Introduction

---

## Expected Final Outcome

After completing this course, students should be able to transform a real-world problem into an object-oriented design and implement it as a complete C++ application.

### OOP Application Development Workflow

```text
Real-World Problem
        ↓
Identify Objects
        ↓
Identify Classes
        ↓
Identify Attributes
        ↓
Identify Methods
        ↓
Identify Relationships
        ↓
Encapsulation
        ↓
Inheritance / Composition
        ↓
Polymorphism
        ↓
Implementation in C++
        ↓
Testing
        ↓
Complete OOP Application
```

---

## Repository Structure

```text
Object-OrientedProgramming-with-C-/
│
├── Dockerfile                # Development environment definition
├── .dockerignore
│
├── .devcontainer/
│   └── devcontainer.json     # VS Code Dev Container configuration
│
├── .vscode/
│   ├── tasks.json            # Build tasks
│   └── launch.json           # Debug configuration
│
├── Module/                   # Lecture / module material
├── Practical/                # Practical labs and assignments
│   ├── Labs/
│   │   ├── Lab_02_Classes_and_Objects/
│   │   ├── Lab_05_NamespaceAndLinkage/
│   │   │   └── ExternalLinkagewithClasses/
│   │   │       ├── main.cpp
│   │   │       ├── Student.cpp
│   │   │       └── Student.h
│   │   └── ...
│   └── Assignment/
│
├── LICENSE
└── README.md
```

> The contents of `Module/` and `Practical/` grow as the course progresses.

---

## Getting the Repository

### Prerequisites

| Tool | Purpose | Required |
| --- | --- | --- |
| Docker Desktop for Windows | Runs the C++ development container | Yes |
| Git | Clone and update the repository | Yes |
| Visual Studio Code | Editing code | Recommended |

Make sure **Docker Desktop is running** before using any `docker` command.

### Clone

```powershell
git clone https://github.com/Mohammed20201991/Object-OrientedProgramming-with-C-.git
cd Object-OrientedProgramming-with-C-
```
**Workarounds**

- **Clone inside WSL** (Linux):

  ```bash
  git clone https://github.com/Mohammed20201991/Object-OrientedProgramming-with-C-.git
  cd Object-OrientedProgramming-with-C-
  ```
---

## Docker Development Environment

The repository uses Docker so every student compiles with the same tools, without installing GCC/G++ on Windows.

| Item | Value |
| --- | --- |
| Image | `oop-cpp-dev:1.0` |
| Base image | Ubuntu 24.04 |
| Compiler | G++ |
| C++ standard | C++17 |
| Debugger | GDB |

### Dockerfile

The `Dockerfile` in the repository root is similar to:

```dockerfile
FROM ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y --no-install-recommends \
        g++ \
        gdb \
        make \
        build-essential \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /workspace
CMD ["/bin/bash"]
```

### Build the image (first time only)

From the repository root in PowerShell:

```powershell
docker build -t oop-cpp-dev:1.0 .
docker images
```

Rebuild only if the `Dockerfile` changes.

### Start the container

From the repository root:

```powershell
docker run -it --rm `
  -v "${PWD}:/workspace" `
  -w /workspace `
  oop-cpp-dev:1.0
```

| Option | Meaning |
| --- | --- |
| `-it` | Interactive terminal |
| `--rm` | Remove the container on exit (your files are kept) |
| `-v "${PWD}:/workspace"` | Mount the current Windows folder into the container |
| `-w /workspace` | Start in the mounted folder |

Your source files stay on Windows. Anything you create or edit under `/workspace` is preserved after you exit.

---

## Running the Practical Labs

### Standard workflow

1. **Open PowerShell at the repository root.**

   ```powershell
   cd "D:\IT\مواد دراسية\المرحلة الثانية\OOP\repo\Object-OrientedProgramming-with-C-"
   ```

2. **Start the Docker container** (see above).

3. **Go to the lab folder.**

   ```bash
   cd Practical/Labs/Lab_02_Classes_and_Objects
   ls
   ```

4. **Compile all source files.**

   ```bash
   g++ -std=c++17 -Wall -Wextra -g *.cpp -o app
   ```

5. **Run.**

   ```bash
   ./app
   ```

6. **Exit when finished.**

   ```bash
   exit
   ```

### Example: Lab 05 – Namespace and Linkage

```bash
cd Practical/Labs/Lab_05_NamespaceAndLinkage/ExternalLinkagewithClasses
g++ -std=c++17 -Wall -Wextra -g *.cpp -o app
./app
```

Expected output:

```text
Student ID: 101
Grade: 85

Student ID: 102
Grade: 90
```

### Any other lab

Each lab is compiled from its own folder:

```bash
cd /workspace/Practical/Labs/<Lab_Folder_Name>
g++ -std=c++17 -Wall -Wextra -g *.cpp -o app
./app
```

### Multi-file programs

When a program is split into `main.cpp`, `Student.cpp`, and `Student.h`, compile **all** `.cpp` files together. Headers (`.h`) are included by `#include` and are not passed to the compiler. `*.cpp` covers every source file in the folder. The explicit equivalent is:

```bash
g++ -std=c++17 -Wall -Wextra -g main.cpp Student.cpp -o app
```

### Compiler flags

| Flag | Meaning |
| --- | --- |
| `-std=c++17` | Use the C++17 standard |
| `-Wall -Wextra` | Enable common and extra warnings |
| `-g` | Include debug information for GDB |
| `-o app` | Name the executable `app` |

---

## Debugging with GDB

Compile with `-g`, then start GDB:

```bash
gdb ./app
```

| Command | Action |
| --- | --- |
| `break main` | Breakpoint at `main` |
| `break file.cpp:25` | Breakpoint at line 25 |
| `run` | Start the program |
| `next` | Execute next line (step over) |
| `step` | Step into a function |
| `print var` | Show the value of `var` |
| `backtrace` | Show the call stack |
| `continue` | Run to the next breakpoint |
| `quit` | Leave GDB |

---

## Using VS Code

The repository includes VS Code configuration:

- `.devcontainer/devcontainer.json` – opens the project inside the Docker container.
- `.vscode/tasks.json` – build tasks.
- `.vscode/launch.json` – debugging setup.

**Option A: Dev Container (recommended)**

1. Install the **Dev Containers** extension.
2. Open the repository folder in VS Code.
3. Press `Ctrl+Shift+P` and choose **Dev Containers: Reopen in Container**.

VS Code then runs inside `oop-cpp-dev`, with the compiler and debugger ready.

**Option B: Edit in VS Code, run in Docker**

1. Open the repository folder in VS Code and install the **C/C++** extension.
2. Keep a PowerShell window running the container.
3. Save in VS Code, then compile and run in the container.

---

## Command Cheat Sheet

| Command | Purpose |
| --- | --- |
| `docker build -t oop-cpp-dev:1.0 .` | Build the image |
| `docker images` | List local images |
| `docker run -it --rm -v "${PWD}:/workspace" -w /workspace oop-cpp-dev:1.0` | Start the environment |
| `g++ --version` | Check compiler version |
| `gdb --version` | Check debugger version |
| `ls` / `pwd` | List files / show current directory |
| `g++ -std=c++17 -Wall -Wextra -g *.cpp -o app` | Compile |
| `./app` | Run the program |
| `rm app` | Delete the executable |
| `exit` | Leave the container |

---

## Troubleshooting

| Problem | Cause / Fix |
| --- | --- |
| `invalid path 'Practical /...'` on clone | Trailing space in a folder name on Windows. See [Getting the Repository](#windows-error-invalid-path-practical-assignment). |
| `docker: command not found` | Docker Desktop is not installed or not on PATH. |
| Cannot connect to the Docker daemon | Start Docker Desktop and wait until it is running. |
| `${PWD}` shown literally / empty mount | Use PowerShell, not CMD. In CMD use `%cd%`. |
| `undefined reference to ...` | A `.cpp` file was not compiled. Use `*.cpp` or list every source file. |
| `./app: No such file or directory` | The compile failed or you are in the wrong folder. Run `ls` and recompile. |
| Header not found | Check the `#include "..."` name and location, or add `-I<path>`. |
| `Read-only file system` in WSL | Write to another folder such as `~/OOP/...`. |
| `code: not found` in WSL | VS Code is a Windows app. Open it from Windows and use the WSL extension. |
| `Permission denied` on `./app` | Recompile, or run `chmod +x app`. |

---

## Git Workflow

```bash
git pull origin main          # get the latest changes
git add .
git commit -m "Describe your change"
git push origin main
```

Tips:

- Do not commit executables or build output. Add to `.gitignore`:

  ```text
  app
  *.out
  *.exe
  *.o
  ```

- Run `git status` before committing.
- Avoid folder or file names with trailing spaces or dots so the repository works on Windows.

---

## License

This project is distributed under the terms of the [LICENSE](LICENSE) file.
