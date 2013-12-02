#include <iostream>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[])
{
   //Setup variables
   int hp=0, atk=0, def=0, spd=0, cost=0;
   
   //Set variables to ruby values
   hp = atoi(argv[1]);
   atk = atoi(argv[2]);
   def = atoi(argv[3]);
   spd = atoi(argv[4]);

   //Perform calculation
   cost = round((1+(hp/10)+(atk/5)+(def/5)+(spd/5))*10);

   //Returns the values back to ruby
   //std::cout << p_hp << "," << p_maxhp << "," << p_atk << "," << p_def << "," << p_spd << "," << p_level << "," << p_exp << "," << coins;
   std::cout << cost;
   return 0;
}
