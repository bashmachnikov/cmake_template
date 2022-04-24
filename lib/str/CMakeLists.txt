add_library(str SHARED src/random.cpp src/random.h)

target_include_directories(str PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

execute_process(
    COMMAND git describe --dirty --always
    WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
    OUTPUT_VARIABLE GIT_HASH
    OUTPUT_STRIP_TRAILING_WHITESPACE
    )
message(STATUS ${GIT_HASH})
target_compile_definitions(str PUBLIC GIT_HASH="${GIT_HASH}")