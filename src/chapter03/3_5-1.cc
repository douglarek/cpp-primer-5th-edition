#include <iostream>
#include <string>

using std::string;

int main(int argc, char *argv[]) {
  string s;

  for (string s1; std::cin >> s1;) {
    s += s1;

    std::cout << s << std::endl;
  }

  return 0;
}
