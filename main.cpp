#include <iostream>
#include <cstdlib>
#include <string>

int main(){
  const char* secret = std::getenv("PASSWORD");
  std::string s(secret);
  if (s == "qwerty") {
    std::cout << "Пароль верный!\n";
  }
  else {
    std::cout << "Пароль неверный!\n";
  }
  return 0;
  
}
