//Prototype
int valuesetterfunc(char *argv[], int &counter); //Sets the variables to a read in variable from argv

void initializerfunc(int &health, int &attack, int &defense, int &speed, char *argv[]); //Initializes variables
{
   //Count to be used only for value setter
   int count = 0;
   count = 1;

   //Set variables to ruby values
   hp = valuesetterfunc(argv, count);
   atk = valuesetterfunc(argv, count);
   def = valuesetterfunc(argv, count);
   spd = valuesetterfunc(argv, count);
}
