#include <iostream>

void dzialanie(int a, int b) {
   
   printf("Dzialanie na int\n");
   int r = a + b;
   printf("%i\n",r);
}

void dzialanie(double a, double b) {

   printf("Dzialanie na double\n");   
   double r = a + b;
   printf("%f\n",r);
}

int main()
{
   dzialanie(2,2);
   dzialanie(2.1 ,2.2);
}
