//
//  main.cpp
//  
//
#include <iostream>
#include <locale>
#include <fstream>
#include "Func.hpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian_Russia.1251");
    int Mass[10000]; int a=0;
    
    *Mass = *Masiv::FunInput(a, Mass);
    
    *Mass = *Masiv::FunSort(a, Mass); //Удалить простые и дублировать составные суммой в 15
    
    Masiv::FunOutput(a, Mass);
    
    return 0;
}
