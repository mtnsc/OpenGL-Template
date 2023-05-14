project(OpenGLTemplate)
cmake_minimum_required(VERSION 3.5)

set(CMAKE_C_STANDARD 99)

include_directories(include)

aux_source_directory(src SRC_MAIN)
add_executable(${PROJECT_NAME} ${SRC_MAIN})

find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)
target_link_libraries(${PROJECT_NAME} ${GLEW_LIBRARIES} GL glfw)