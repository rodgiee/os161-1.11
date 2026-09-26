#include <assert.h>

int
main()
{
  // length of 5 is multiple of 5, return 1
  int res = reversestring("world", 5);
  assert(res == 1);

  // length of 2 is NOT multiple of 5, return 0
  int res = reversestring("no", 2);
  assert(res == 0);

  return 0;
}
