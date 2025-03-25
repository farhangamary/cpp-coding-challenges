# cpp_challenges

This is a collection of C++ coding challenges, and it will be expanded over time. Currently, it includes one completed challenge, with more challenges to be added in the future.

**Feel free to add your challenge - every contribution is highly welcomed!**


## Project Structure

The project is organized into categories.
Each challenge is located in its respective category. Each category contains the solution as well as a corresponding test in the test directory.

## Requirements

- CMake 3.8 or higher
- googletest
- Visual Studio (for Windows)
- vcpkg (for package management - for windows)

## Setup

### Windows Setup (MSVC)

1. Clone the repository
2. Install `vcpkg` and integrate it with Visual Studio (see [vcpkg setup](https://github.com/microsoft/vcpkg/blob/master/docs/users/integration.md)).
3. Install dependencies (GoogleTest):
    ```bash
    vcpkg install gtest
    ```
4. Open the project in Visual Studio.
5. Build the project and start tests.

### Linux Setup
1. Clone the repository
2. Install dependencies:
    ```bash
    sudo apt-get install cmake g++ libgtest-dev
    ```
3. Run CMake:
    ```bash
    cmake .
    ```
4. Build the project:
    ```bash
    make
    ```

## Running Tests
You can run the tests using CTest or directly from Visual Studio.
- To run tests from the terminal:
    ```bash
    ctest --output-on-failure
    ```
- Or use the Visual Studio test runner.
## License
This project is licensed under the MIT License.
