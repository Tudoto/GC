
cmake_minimum_required(VERSION 3.16)

# 项目名称
project(GCtest VERSION 1.0 LANGUAGES CXX)

# 设置C++标准（例如C++11）
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 添加源代码目录
set(SOURCES
    src/test.cpp
    src/VM.cpp
    src/Heap.cpp
)

# 创建目标
add_executable(${PROJECT_NAME} ${SOURCES})

# 链接库（如果需要）
# find_package(库名 REQUIRED) # 找到库并设置变量
# target_link_libraries(${PROJECT_NAME} 库名) # 将库链接到目标

# 设置输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
