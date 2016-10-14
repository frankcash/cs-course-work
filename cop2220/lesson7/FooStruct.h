#ifndef FOOSTRUCT_H
#define FOOSTRUCT_H

typedef struct Foo_struct{
  int foo;
  char bar;
}Foo;

void FooPrintBar(Foo foo);
void FooDoubleFoo(Foo* foo);

#endif
