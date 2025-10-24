#include <cbuild/cbuild.hpp>

int build(CBuild::Context context) {
    
    std::stringstream command;
    command << "cmake -B build ";
    command << "-DCMAKE_CXX_FLAGS=-fPIC ";
    command << "-DCMAKE_C_FLAGS=-fPIC > /dev/null 2>&1";

    system(command.str().c_str());
    system("make -C build > /dev/null 2>&1");
    
    return 0;
}