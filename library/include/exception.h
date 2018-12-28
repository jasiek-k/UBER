#ifndef OOPPROJECT_EXCEPTION_H
#define OOPPROJECT_EXCEPTION_H

#include <stdexcept>

using namespace std;
class Exception:public logic_error {
public:
    Exception(string msg);
};


#endif //OOPPROJECT_EXCEPTION_H
