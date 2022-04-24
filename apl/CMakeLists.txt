execute_process(
    COMMAND git describe --dirty --always
    WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
    OUTPUT_VARIABLE GIT_HASH
    OUTPUT_STRIP_TRAILING_WHITESPACE
    )
message(STATUS ${GIT_HASH})


add_executable(apl src/main.cpp)
target_link_libraries(apl PRIVATE str)
target_compile_definitions(str PUBLIC GIT_HASH="${GIT_HASH}")