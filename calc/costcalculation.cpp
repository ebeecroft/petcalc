#include <math.h>

int costcalculationfunc(int health, int attack, int defense, int speed)
{
   //Sets the value of cost based on the stats of the pet
   int amount = 0;
   amount = round((1+(health/10)+(attack/5)+(defense/5)+(speed/5))*10);
   return amount;
}
