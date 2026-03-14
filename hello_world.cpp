#include <iostream>
#include <string>

//фукнция main 
int
main()
{
  std::string name;//переменная для имени пользователя
  std::cout << "Enter your name: ";
  std::cin >> name;                                      // получение имени
  std::cout << "Hello world form " << name << std::endl; // приветствие
  return 0;
}
