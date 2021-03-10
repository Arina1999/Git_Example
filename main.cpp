#include <iostream>
#include "someclass.h"

using namespace std;
void helloworld()
{
    cout << "Hello World!" << endl;
}
int main()
{
   helloworld();
   SomeClass someObject(true, 10);
   someObject.printsomeIntData();
    return 0;
}
