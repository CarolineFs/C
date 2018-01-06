#include <iostream>

int main()
{
   std::cout << "Enter two numbers:" << std::endl;
   int v1, v2;
   std::cin >> v1 >> v2;
   int lower, upper;
   if (v1 <= v2)
   {
       lower = v1;
       upper = v2;
   }
   else
   {
       lower = v2;
       upper = v1;
   }
   if ( upper-lower <= 11)
   {
       std::cout << "All integer numbers between "
                << lower << " and "
                << upper << ": "
                << std::endl;
      for (int i = lower + 1; i < upper; ++i)
          std::cout << i << std::endl;
   }
   else
   {
       std::cout << "Too many numbers, sorry." << std::endl;
   }
   return 0;

}
