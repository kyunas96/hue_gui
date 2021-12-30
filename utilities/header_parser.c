#include <stddef.h>

size_t hdf(char *b, size_t size, size_t nitems, void *userdata)
{
  size_t numbytes = size * nitems;
  printf("%s\n", b);
  return numbytes;
}