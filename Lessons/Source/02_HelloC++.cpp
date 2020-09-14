// before starting, visual studio will freak out
// if it sees more than one main, so add an '#if 0'
// to '01_HelloWorld' and from here on out, change it
// to '1' if it's the file you want to compile and run

// this doesn't need '.h' at the end, because it's
// a fundamental C++ file
#include <iostream> // cout, endl

// this integer is in the global space, anyone and everyone
// that includes this file can see it, and if two files use
// a variable of the same name, and are then included together,
// then there will be errors
int myInt1 = 10;

// this is a namespace, it's where you put things when you don't
// want them to be global, classes, functions, and variables can
// all go in namespaces
namespace MyNameSpace {
  int myInt2 = 11;
}

#if 0
int main(int argc, char* argv[])
{

  // the C++ style printouts are in the 'std' namespace
  // and they use operator overloading to get around those
  // no-automatic-string-conversion isues
  std::cout << "Hello" << ' ' << "World: " << myInt1 << std::endl; // 'endl' is just '\n'

  // if we want myInt2 we need to invoke the namespace
  std::cout << MyNameSpace::myInt2 << std::endl;
}
#endif