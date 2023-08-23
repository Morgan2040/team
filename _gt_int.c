#include "main.h"

/**
 * gt_int - c function to get integer
 * @numb: integer input
 */


void gt_int(int numb)
{
int r;

if (numb == 0)
return;

r = numb / 10;

gt_int(r);
_putchar(numb % 10 + '0');

return;
}
