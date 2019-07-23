#include <iostream>
#include <estl.h>

using namespace std;
using namespace estl;

struct test:public comparable<test> {
    bool _cmp(const test &v) const {
        return 0;
    }
};

int main() {
    test t1;
    test t2;
    t1 == t2;
    return 0;
}

