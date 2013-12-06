#include <math.h>

int levelcalculatefunc(int health, int attack, int defense, int speed)
{
   //Sets the value of level based on the stats of the pet
   int value = 0;
   //double upperlog, lowerlog, total;
   /*log of 1.07 with 20 10 10 10 results in level 2, 1.06 results in level 4, 1.04 results in level 10, 1.05 results in level 6. */
   //value = round(((log((health/10)*(attack/5)*(defense/5)*(speed/5))/log(1.02))/29)+1);
   // log(hp*atk*def*spd)-log(1250)
   value = round((((log(health*attack*defense*speed)-log(1250))/log(1.04))/4)-9+10*exp(-0.089*(attack+defense+speed+health-25)));
   //value = round(((log((health/10)*(attack/5)*(defense/5)*(speed/5))/log(1.04))/4)-9+10*exp(-0.089*(attack+defense+speed+health-25)));
   //lowerlog = log(1/5);
   //upperlog = log((health/10)*(attack/5)*(defense/5)*(speed/5));
   //lowerlog = log(1.02);
   //total = upperlog/lowerlog;
   //std::cerr << "Upper Log value is: " << upperlog << std::endl;
   //std::cerr << "Lower Log value is: " << lowerlog << std::endl;
   //std::cerr << "Total Log value is: " << total << std::endl;
   return value;
}
