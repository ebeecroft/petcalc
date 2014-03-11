#include <math.h>

int costcalculationfunc(int level)
{
   //Sets the value of cost based on the stats of the pet
   int amount = 0;
   amount = round(level*40);
   return amount;
}
