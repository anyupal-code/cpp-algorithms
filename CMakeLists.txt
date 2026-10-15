cmake_minimum_required(VERSION 4.3)
project(cpp_algorithms)

# Глобальные настройки — применяются ко всем подпроектам
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# Все бинарники складываются в build/bin/
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Список подпапок с задачами
add_subdirectory(task01_spiral)
add_subdirectory(task02_pascal)
add_subdirectory(task03_side_diag)
add_subdirectory(task04_sort)
add_subdirectory(task05_first_occurrence)
add_subdirectory(task06_stable_sort)
add_subdirectory(task07_zeros_to_end)
add_subdirectory(task08_print)
add_subdirectory(task09_even_arrays)
add_subdirectory(task10_side_diag_sum)
add_subdirectory(task11_snail)
add_subdirectory(task12_weekday)
#add_subdirectory(task13_diagonals)
#add_subdirectory(task14_palindrome)
#add_subdirectory(task15_file_stats)