# cpp_challenges

This is a collection of C++ coding challenges, and it will be expanded over time. Currently, it includes one completed challenge, with more challenges to be added in the future.

## Contributing Challenges
If you have a C++ coding challenge you'd like to contribute, please create a new issue in this repository! The process is simple:
Open a new issue and describe the challenge in detail, including:
 - A clear problem statement
 - Input/output specifications
 - Example test cases

Once the issue is created, we'll work together to implement solutions and add tests to ensure correctness.

Thank you for contributing! - Please see [CONTRIBUTING](CONTRIBUTING.md) for details.

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
cmake --build --preset default-build
ctest --preset default-testing
 ```
### License
This project is licensed under the [MIT License](LICENSE).  
You are free to use, modify, distribute, and share this software for any purpose, including commercial use.
