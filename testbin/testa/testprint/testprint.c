#include <assert.h>
#include <stdio.h>

int
main()
{
  // 2 is divisible by 2, should return 0
  int res = printint(2);
  assert(res == 0);

  // 1 is not divisible by 2, should 
  res = printint(1);
  assert(res == 1);
}
