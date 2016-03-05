#include <math.h>
int getLevel(int petStats[]);
int getCost(int petStats[], int level);

void createpet(int petStats[], int& level, int& cost)
{
   level = getLevel(petStats);
   cost = getCost(petStats, level);
}

int getLevel(int petStats[])
{
   //Calculates the pet's level
   int health = petStats[0];
   int attack = petStats[1];
   int defense = petStats[2];
   int speed = petStats[3];
   int level = round((((log(health*attack*defense*speed)-log(6))/log(1.04))/4)-9+10*exp(-0.089*(health+attack+defense+speed-9)));
   return level;
}

int getCost(int petStats[], int level)
{
   //Calculates the pet's value
   int levelCost = 10 * level;
   levelCost = 0;
   int healthCost = 4 * petStats[0];
   int speedCost = 3 * petStats[3];
   int attackCost = 2 * petStats[1];
   int defenseCost = 1 * petStats[2];
   int statsCost = healthCost + attackCost + defenseCost + speedCost;
   int baseCost = 10;
   int cost = baseCost + levelCost + statsCost;
   return cost;
}