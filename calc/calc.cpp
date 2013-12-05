#include <iostream>

//Prototype #Abstraction Level 2
void initializerfunc(int &health, int &attack, int &defense, int &speed, char *argv[]); //Initializes variables
void calculatefunc(int health, int attack, int defense, int speed, int &cost, int &level); //Performs the calculations

int main(int argc, char* argv[])
{
   //Setup variables
   int hp=0, atk=0, def=0, spd=0, cost=0, level=0;
   level = 1;   

   //Initializes the variables
   initializerfunc(hp, atk, def, spd, argv);

   //Perform calculation
   calculatefunc(hp, atk, def, spd, cost, level);

   //Returns the values back to ruby
   std::cout << cost << "," << level;
   return 0;
}
