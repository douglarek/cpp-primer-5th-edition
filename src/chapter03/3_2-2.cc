#include <iostream>
#include <string>

using std::string;

int main(int argc, char *argv[]) {
  for (string s; std::cin >> s; std::cout << s << std::endl)
    ;

  return 0;
}
