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
   int stats = health + attack + defense + speed;
   int base = 10;
   //10 stats = lv 2, 12 stats = 3, 14 stats = 4
   int level = 2 + (stats - base)/2; //lv 2, 2->1->3, 4->2->4, 6->3->5, 8->4->6, ++ 
//   int level = 1 + (stats - base); //From level 2 standpoint
   return level;
}

int getCost(int petStats[], int level)
{
   //Calculates the pet's value
   int levelCost = 10 * level;
   int healthCost = 4 * petStats[0];
   int speedCost = 3 * petStats[3];
   int attackCost = 2 * petStats[1];
   int defenseCost = 1 * petStats[2];
   int statsCost = healthCost + attackCost + defenseCost + speedCost;
   int baseCost = 10;
   int cost = baseCost + levelCost + statsCost;
   return cost;
}
