# Library Management System

A simple yet robust Library Management System built in C++. This application provides essential functionalities for managing a library's book inventory.

## 🌟 Features

- **Book Management:** Add, remove, and view books in the inventory.
- **Detailed Book Information:** Each book is stored with the following details:
  - Title
  - Author
  - ISBN
  - Quantity
  - Price
  - Genre
  - Publisher
  - Year of Publication
- **Menu-Driven Interface:** A user-friendly and interactive menu to navigate through the application's features.
- **Input Validation:** Ensures data integrity by validating user inputs.

## 🚀 Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

- A C++ compiler (like GCC or Clang)
- CMake (version 3.10 or higher)

### Building and Running

1.  **Clone the repository:**

    ```bash
    git clone https://github.com/your-username/LibraryManagementSystem.git
    cd LibraryManagementSystem
    ```

2.  **Create a build directory:**

    ```bash
    mkdir build
    cd build
    ```

3.  **Configure the project with CMake:**

    ```bash
    cmake ..
    ```

4.  **Build the project:**

    ```bash
    make
    ```

5.  **Run the application:**
    ```bash
    ./LibraryManagementSystem
    ```

## Usage

Upon running the application, you will be presented with a menu of options. You can choose to:

- Add a new book to the inventory.
- Remove an existing book from the inventory.
- View a list of all books in the inventory.
- Exit the application.

Follow the on-screen prompts to perform the desired actions.

## 🧪 Testing

This project uses Google Test for unit testing. The tests are located in the `tests/` directory.

To run the tests, you first need to make sure you have enabled testing in your CMake configuration.

1.  **Configure with testing enabled:**
    When you run CMake, you can enable testing with the `-DENABLE_TESTING=ON` flag. If you have an existing build directory, you may need to re-configure.

    ```bash
    # From the build directory
    cmake .. -DENABLE_TESTING=ON
    ```

2.  **Build the tests:**
    The tests will be built along with the main application.

    ```bash
    # From the build directory
    make
    ```

3.  **Run the tests:**
    You can run the tests using `ctest` or by directly executing the test binary.

    ```bash
    # From the build directory
    ctest
    ```

    Or:

    ```bash
    ./runTests
    ```

    _(Note: The test executable name may vary depending on the CMake configuration in `tests/CMakeLists.txt`)_

## 📂 Project Structure

The project is organized into the following directories and files:

```
LibraryManagementSystem/
├── src/
│   ├── Book.h & Book.cpp           # Defines the Book class and its methods
│   ├── Inventory.h & Inventory.cpp   # Manages the collection of books
│   ├── Member.h & Member.cpp         # (Planned) For managing library members
│   ├── Menu.h & Menu.cpp             # Provides the user interface
│   ├── Validation.h & Validation.cpp # Handles input validation
│   └── main.cpp                      # The main entry point of the application
├── tests/                            # Contains unit tests
├── CMakeLists.txt                    # The main CMake script for building the project
└── README.md                         # This file
```

## 💡 Future Enhancements

- **Member Management:** Implement functionality to add, remove, and manage library members.
- **Loan System:** Allow members to borrow and return books.
- **Search Functionality:** Implement search by title, author, or ISBN.
- **Data Persistence:** Save the inventory and member data to a file (e.g., CSV or JSON) to persist between sessions.

## 🤝 Contributing

Contributions are what make the open-source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1.  Fork the Project
2.  Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3.  Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4.  Push to the Branch (`git push origin feature/AmazingFeature`)
5.  Open a Pull Request

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
