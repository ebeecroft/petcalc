//Prototype #Abstraction Level 1
int costcalculationfunc(int health, int attack, int defense, int speed); //Calculates the cost of a pet

void calculatefunc(int health, int attack, int defense, int speed, int &cost)
{
   //Assigns the following variables a value
   cost = costcalculationfunc(health, attack, defense, speed);
}
