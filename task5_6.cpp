#include <iostream>
using namespace std;
#define MY_MACRO

#ifdef MY_MACRO
#error "MY_MACRO is defined!"
#endif

int main()
{

}