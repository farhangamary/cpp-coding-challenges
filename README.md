# cpp_challenges

This is a collection of C++ coding challenges, and it will be expanded over time. Currently, it includes one completed challenge, with more challenges to be added in the future.

## Contributing Challenges
If you have a C++ coding challenge you'd like to contribute, please create a new issue in this repository! The process is simple:
Open a new issue and describe the challenge in detail, including:
 - A clear problem statement
 - Input/output specifications
 - Example test cases

Once the issue is created, we'll work together to implement solutions and add tests to ensure correctness.

Thank you for contributing!

## Project Structure

The project is organized into categories.
Each challenge is located in its respective category. Each category contains the solution as well as a corresponding test in the test directory.

## Requirements

- CMake 3.8 or higher
- gcc/g++ for linux
- msvc(cl.exe) - the compiler for windows os.
- vcpkg - for package management - for windows os.
- googletest

## Setup

### Windows Setup (MSVC)

1. Clone the repository
2. Install `vcpkg` and integrate it with Visual Studio (see [vcpkg setup](https://github.com/microsoft/vcpkg/blob/master/docs/users/integration.md)).
3. Install dependencies (GoogleTest):
    ```bash
    vcpkg install gtest
    ```
4. Open the project in MS Visual Studio.
5. Build the project and start tests.

### Linux Setup
1. Clone the repository
2. Install dependencies:
    ```bash
    sudo apt-get install cmake g++ libgtest-dev
    ```
3. Run CMake: create a build directory and run::
    ```bash
    cmake -B build/ -S .
    ```
4. Build the project: go to the build directory and run:
    ```bash
    make --build build/
    ```

## Running Tests
You can run the tests using CTest or directly from Visual Studio.
- To run tests from the terminal, go into the build directory and run:
    ```bash
    ctest --output-on-failure
    ```
- Or use the Visual Studio test runner.
- You can also run the generated executable binaries of the tests.

## License
This project is licensed under the MIT License.
