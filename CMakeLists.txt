cmake_minimum_required(VERSION 3.10)

project(LibraryManagementSystem)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME}
    src/Book.cpp
    src/Inventory.cpp
    src/Member.cpp
    src/Menu.cpp
    src/Validation.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src
)

add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE ${PROJECT_NAME})

option(BUILD_TESTS "Build the unit tests" ON)

if(BUILD_TESTS)
    message(STATUS "Tests enabled — configuring GoogleTest...")

    enable_testing()

    
    include(FetchContent)
    FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
    )
    FetchContent_MakeAvailable(googletest)

    add_executable(runTests
        tests/test_book.cpp
    )

    target_link_libraries(runTests PRIVATE
        ${PROJECT_NAME}
        GTest::gtest_main
    )

   
    include(GoogleTest)
    gtest_discover_tests(runTests)

endif()
