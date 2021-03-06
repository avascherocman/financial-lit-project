// financial-lit-presentation.cpp 
// Ava Scherocman
// Bell 6

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
  int choice;
    do {
      choice = printMenu();
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
  std::cout << "There are no particular tests you must pass to become a developer. However, most are very logical thinkers and like working with numbers.\n";
  system("Pause");
  system("CLS");
}
void benefits() {
  system("CLS");
  std::cout << "The average salary for a software developer, according to bls.gov, is about $103,560 per year.\n";
  system("Pause");
  system("CLS");
  std::cout << "Glassdoor, however, says the average salary is around $92k, about $12k less than the bls.gov estimate.\n";
  system("Pause");
  system("CLS");
  std::cout << "This is not likely what you'll get paid from the beginning, though. That would be more around $66k, according to Glassdoor.\n";
  system("Pause");
  system("CLS");
  std::cout << "Vacation times, medical insurance, and other benefits vary by what company you're working for.\n";
  system("Pause");
  system("CLS");
  std::cout << "A company where I'd love to work, P&G, offers both maternity and paternity leave, 2 weeks of vacation, and comprehensive health insurance.\n";
  system("Pause");
  system("CLS");


}
void ditl() {
  system("CLS");
  std::cout << "Most companies have their programmers work collaboratively in teams, so software developers have lots of meetings to discuss plans for the projects they are working on.\n";
  system("Pause");
  system("CLS");
  std::cout << "On the daily, software developers also have to do lots of problem solving and debugging (fixing) code that has problems.\n";
  system("Pause");
  system("CLS");
  std::cout << "When I shadowed a programmer at Kroger last year, I found that he spent about half of his time programming and half in meetings with other developers, engineers, and managers.\n";
  system("Pause");
  system("CLS");
  std::cout << "Most programmers also spend some of their time learning about new/previously unknown features in the technology they're using. Lots of developers learn a language as they are working on a project.\n";
  system("Pause");
  system("CLS");
}
void sources() {
  system("CLS");
  std::cout << "https://www.bls.gov/ooh/computer-and-information-technology/software-developers.htm" << "\n";
  std::cout << "https://www.glassdoor.com/Salaries/software-developer-salary-SRCH_KO0,18.htm" << "\n";
  std::cout << "https://www.glassdoor.com/Benefits/Procter-and-Gamble-US-Benefits-EI_IE544.0,18_IL.19,21_IN1.htm" << "\n";
  system("Pause");
  system("CLS");

}