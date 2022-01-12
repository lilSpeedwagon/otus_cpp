#include <sstream>

#include <version.hpp>
#include <lib_version/src/version_consts.hpp>

namespace version {

std::string get_build_version() {
    std::stringstream ss;
    ss << PROJECT_VERSION_MAJOR;
    ss << ".";
    ss << PROJECT_VERSION_PATCH;
    return ss.str();
}

}