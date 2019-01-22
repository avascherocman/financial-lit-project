// financial-lit-presentation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

void printMenu();

int main()
{
  char ans = 'Y';
  while (ans == 'Y') {
    printMenu();
    std::cout << "Would you like to run again? Enter \"Y\" for yes, \"N\" for no.\n";
    std::cin >> ans;
  }
    return 0;
}

void printMenu() {
  std::cout << std::setw(50) << std::setfill('*') << "Options\n";
}