#include <iostream>
#include <string>

using std::string;

int main(int argc, char *argv[]) {

  for (string line; getline(std::cin, line); std::cout << line << std::endl)
    ;
  return 0;
}
