//Prototype #Abstraction Level 1
int valuesetterfunc(char *argv[], int &counter); //Sets the variables to a read in variable from argv

void initializerfunc(int &health, int &attack, int &defense, int &speed, char *argv[]) //Initializes variables
{
   //Count to be used only for value setter
   int count = 0;
   count = 1;

   //Set variables to ruby values
   health = valuesetterfunc(argv, count);
   attack = valuesetterfunc(argv, count);
   defense = valuesetterfunc(argv, count);
   speed = valuesetterfunc(argv, count);
}
