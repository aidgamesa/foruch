cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DCROW_ENABLE_DEBUG")

project(foruch)
find_package(Crow)

file(GLOB SOURCE src/*.cpp)

add_executable(foruch ${SOURCE})
target_link_libraries(foruch PUBLIC Crow::Crow)

include_directories(include)