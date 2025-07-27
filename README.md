# cpp_challenges

This repository is a growing collection of C++ coding challenges. It currently includes multiple completed challenges, and more will be added over time as the collection continues to expand.

## Contributing Challenges
You're welcome to contribute to any part of this project—whether it's a new C++ coding challenge, an improvement to existing code or documentation, test coverage, bug fixes, or even new features.
There are two main ways to contribute:
#### 🚀 Option 1: Open a Pull Request  
If you're ready to dive in, feel free to submit a pull request directly. You can contribute:
- A new coding challenge with:
  - Problem description  
  - C++ solution  
  - Example test cases  
  - README update (if needed)
- Fixes or improvements to existing challenges  
- Enhancements to documentation or project structure  
- New features or tooling that improve the overall quality of the project

#### 📝 Option 2: Open an Issue  
If you’d like to suggest a new challenge or improvement before writing code, you can open an issue. Please include:
- A clear description of the problem, idea, or feature  
- Input/output specs and test cases (for challenges)  
- Any relevant context or reasoning  

We can then collaborate on a solution!

📄 SeeThank you for contributing! - Please see [CONTRIBUTING](CONTRIBUTING.md) for details.


## Project Structure

The project is organized into categories.
Each challenge is located in its respective category. Each category contains the solution as well as a corresponding test in the test directory.

## Requirements

- CMake 3.18 or higher
- LLVM CLang[++]
- ninja
- vcpkg(https://github.com/microsoft/vcpkg.) - for package management - for windows os.
- googletest

## Build and Test

### Windows
 ```bash
cmake --preset default-configure-windows --fresh -S . -B build
cmake --build --preset default-build
ctest --preset default-testing
```

### Linux
```bash
cmake --preset default-configure
cmake --build build --target all
ctest --preset default-testing
 ```

## License
This project is licensed under the [MIT License](LICENSE).  
You are free to use, modify, distribute, and share this software for any purpose, including commercial use.
