// one include file for reusabillity and prevention of multiple includes

#define Includes_Included // "don't reinclude this file"

// include c++ standard .h files

#ifndef IOStream_Included
#define IOStream_Included

#include <iostream>

#endif

#ifndef String_Included
#define String_Included

#include <string>

#endif

#ifndef List_Included
#define List_Included

#include <list.h>

#endif


// include c++ nonstandard .h files

#ifndef ToDoClass_Included
#define ToDoClass_Included

#include ToDoClass

#endif
