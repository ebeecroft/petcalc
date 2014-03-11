//Prototype #Abstraction Level 1
int levelcalculatefunc(int health, int attack, int defense, int speed); //Calculates the level of a pet
int costcalculationfunc(int level); //Calculates the cost of a pet

void calculatefunc(int health, int attack, int defense, int speed, int &cost, int &level)
{
   //Assigns the following variables a value
   level = levelcalculatefunc(health, attack, defense, speed);
   cost = costcalculationfunc(level);
}
