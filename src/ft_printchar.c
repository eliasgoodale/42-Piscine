#include <unistd.h>
#include "../include/ft_printchar.h"


void ft_printchar(char glyph)
{
  write(1, &glyph,1);
}
