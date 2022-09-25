include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG 703bd9caab50b139428cea1aaff9974ebee5742e # release-1.10.0
)

FetchContent_MakeAvailable(googletest)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/Easy ${CMAKE_SOURCE_DIR}/Medium ${CMAKE_SOURCE_DIR}/Hard)

add_executable(Google_Tests_run tests.cpp)

target_link_libraries(Google_Tests_run gtest gtest_main)