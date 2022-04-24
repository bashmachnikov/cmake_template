#include "random.h"
#include <vector>

const std::vector<std::string> g_str = {
    "hello",
    "afganistan",
    "bananistan",
    GIT_HASH
};

const std::string& get_random_string()
{
    return g_str[1];
}
