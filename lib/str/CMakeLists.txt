add_library(str SHARED src/random.cpp src/random.h)

target_include_directories(str PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

