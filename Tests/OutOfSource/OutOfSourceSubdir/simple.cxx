#include <stdio.h>
#include <string.h>

#include "testlib.h"
#include "testdp.h"

extern int simple();
extern int simple2();
extern "C" int outlib();

int main ()
{
  if(simple() != 123)
    {
    return -3;
    }
  if (strcmp(animal,"SIZZLING"))
    {
    fprintf(stderr,"Get definitions from a subdir did not work\n");
    return -2;
    }
  if(TestLib() != 1.0)
    {
    return -1;
    }
  if(outlib() != 456)
    {
    return -4;
    }
  if(simple2() != 789)
    {
    return -5;
    }
  return 0;
}
