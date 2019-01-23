// financial-lit-presentation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

int printMenu();
void careerInfo();
void edTraining();
void benefits();
void ditl();
void sources();

int main() {
  int choice = printMenu();
  do{
    switch (choice) {
    case 1:
      careerInfo();
      break;
    case 2:
      edTraining();
      break;
    case 3:
      benefits();
      break;
    case 4:
      ditl();
      break;
    case 5:
      sources();
      break;
    }
  } while (choice != 6);
     
  return 0;
}

int printMenu() {
  std::cout << "Ava Scherocman\n";
  std::cout << "My Career Roadmap: Software Development\n";
  std::cout << "Financial Lit Bell 6\n";
  std::cout <<
    std::setw(15) << std::setfill(' ') << std::setiosflags('left') <<
    "1" <<
    std::resetiosflags('left') <<
    "What is this career?\n" <<
    std::setw(15) << std::setfill(' ') << std::setiosflags('left') <<
    "2" <<
    std::resetiosflags('left') <<
    "Educational/Training Requirements\n" <<
    std::setw(15) << std::setfill(' ') << std::setiosflags('left') <<
    "3" <<
    std::resetiosflags('left') <<
    "Salary/Earnings/Benefits\n" <<
    std::setw(15) << std::setfill(' ') << std::setiosflags('left') <<
    "4" <<
    std::resetiosflags('left') <<
    "A Typical Day in the Life\n" <<
    std::setw(15) << std::setfill(' ') << std::setiosflags('left') <<
    "5" <<
    std::resetiosflags('left') <<
    "Sources\n" << 
    std::setw(15) << std::setfill(' ') << std::setiosflags('left') <<
    "6" <<
    std::resetiosflags('left') <<
    "Close\n" << std::endl;
  int menuChoice;
  std::cout << "Enter a number to choose an option.\n";
  std::cin >> menuChoice;
  return menuChoice;
}

void careerInfo() {
  system("CLS");
  std::cout << "What a software developer actually does can vary greatly depending on what they're working on and/or who they are working for.\n";
  system("Pause");
  system("CLS");
  std::cout << "Some software developers create programs used directly by users. Some develop \"underlying systems\" that run networks or devices.\n";
  system("Pause");
  system("CLS");
  std::cout << "Software developers work with computers, and usually write code as a part of their daily routine. Some work for companies that create";
  std::cout << " programs to publish, and some help manage the systems that run the company.\n";
  system("Pause");
  system("CLS");
  std::cout << "Software developers must determine the needs of their users and create programs that fit those needs.\n";
  std::cout << std::endl << std::endl;
  system("CLS");
}
void edTraining(){
  system("CLS");
  std::cout << "Most software developers enter the field with a bachelor's degree, usually in computer science or software engineering.\n";
  system("Pause");
  system("CLS");
  std::cout << "According to bls.gov, \"Developers must have a strong background in computer programming.\"\n";
  system("Pause");
  system("CLS");
  std::cout << "Software engineers also need to know some information about the users in the field- for example, what doctors need in their programs, if they work for a hospital.\n";
  system("Pause");
  system("CLS");
  std::cout << "Lots of companies offer internships in high school, some paid, some unpaid. College students can apply to work at a co-op, internship, or part time job as a way to further their skills.\n";
  system("Pause");
  system("CLS");
  std::cout << "There are no particular tests you must pass to become a developer. However, most are very logical thinkers and like numbers.\n";
  system("Pause");
  system("CLS");
}
void benefits() {

}
void ditl() {

}
void sources() {
  system("CLS");
  std::cout << "https://www.bls.gov/ooh/computer-and-information-technology/software-developers.htm" << "\n";


}