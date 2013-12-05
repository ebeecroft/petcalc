//Prototype #Abstraction Level 1
int costcalculationfunc(int health, int attack, int defense, int speed); //Calculates the cost of a pet
int levelcalculatefunc(int health, int attack, int defense, int speed); //Calculates the level of a pet

void calculatefunc(int health, int attack, int defense, int speed, int &cost, int &level)
{
   //Assigns the following variables a value
   cost = costcalculationfunc(health, attack, defense, speed);
   level = levelcalculatefunc(health, attack, defense, speed);
}
