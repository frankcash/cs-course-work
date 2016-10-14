#include <stdio.h>
#include "FooStruct.h"


void FooPrintBar(Foo foo){
  printf("%c", foo.bar);
  return;
}
void FooDoubleFoo(Foo* foo){
  foo->foo *= 2;
  return;
}
