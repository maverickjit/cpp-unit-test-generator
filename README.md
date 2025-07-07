# cpp-unit-test-generator
A C++ unit test generator using LLMs and Google Test.
# C++ Unit Test Generator

This project demonstrates how to automatically generate and refine unit tests for C++ applications using Large Language Models (LLMs) (e.g., LLaMA via Ollama) combined with Google Test.

## ✨ Project Overview

**Key Features:**
- Automatically generate initial unit tests from C++ source code
- Refine and improve tests iteratively
- Detect and resolve build issues
- Measure test coverage
- Integrate with `vcpkg` for dependency management

---

## 🛠️ Technologies Used

- **C++**
- **Google Test** (via `vcpkg`)
- **Ollama** (running self-hosted LLaMA models)
- **Visual Studio** for building and running tests

---

## 📂 Project Structure

cpp-unit-test-generator/
├── generate_tests.txt # Prompt for initial test generation
├── vcpkg.json # vcpkg dependencies
├── test/ # Folder containing generated and refined tests
├── UnitTestProject/
│ ├── UnitTestProject.sln
│ ├── UnitTestProject.vcxproj
│ └── test_math.cpp # Example unit tests
└── README.md


## 🚀 How to Build and Run

### 1️⃣ Clone the repository


git clone https://github.com/maverickjit/CPPUnitGen.git
cd CPPUnitGen
