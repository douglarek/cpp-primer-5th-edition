#include <iostream>
#include <string>

using std::string;

int main(int argc, char *argv[]) {
  string s1, s2;
  std::cin >> s1 >> s2;

  if (s1.size() == s2.size()) {
    std::cout << "The two strings have the same length." << std::endl;
  } else {
    std::cout << "The longer string is " << (s1.size() > s2.size() ? s1 : s2)
              << std::endl;
  }

  return 0;
}
