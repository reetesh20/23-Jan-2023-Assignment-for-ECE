Q1::
#include <iostream>
using namespace std;

class EXCEPTIONEXAMPLE : public std::exception {
public:
char * what () {
return "Custom C++ Exception";
}
};

int main() {
try {
throw EXCEPTIONEXAMPLE();
} catch (EXCEPTIONEXAMPLE ee) {
cout << "Caught EXCEPTIONEXAMPLE" << endl;
cout << ee.what();
}
}
