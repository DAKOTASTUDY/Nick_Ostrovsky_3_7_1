// Nick_Ostrovsky_3_7_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define MODE 1
#if MODE == 1
int add(int a, int b)
{
    return a + b;
}
#endif

int main()
{
    int j, k;
  
#ifndef MODE

#error ERROR
#endif
#if MODE == 1

    
        std::cout << "\n\t" << " ASSAULT MODE ON:  " << std::endl;
        std::cout << "\n\t" << " Please, enter a:  " << std::endl;
        std::cin >> j;
        std::cout << "\n\t" << " Please, enter b:  " << std::endl;
        std::cin >> k;
        std::cout << "\n\t" << add(j, k) << std::endl;
       
    
#elif MODE == 0
    
        std::cout << "\n\t" << " TRAINING MODE ON:  " << std::endl;

    
#else 

   
#error UNKNOWN MODE
#endif
    return 0;
}

