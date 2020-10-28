#include <iostream>
#include <string>

int WordCount(char* str)
{
  if (str == NULL)
  {
    return 0;
  }
  int numWords = 0;
  while(str != '\0')
  {
    numWords++;
  }
  return numWords;
}

int main()
{
  std::string name;
  std::string str;
  std::cout << "What is your name?" << std::endl;
  std::cin >> name;
  std::cout << "Hello " << name << "!" << std::endl;
  std::cout << "What phrase would you like a word count of?" << std::endl;
  std::cin >> str;
  std::cout << "Word Count: " << WordCount(str);
  
  return 0;
}
