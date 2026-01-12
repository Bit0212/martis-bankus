#include "bank.hpp"
#include <iostream>
int main() {
  std::cout << "Made by bit the constantinus  "<<std::endl;
            << std::endl;
  statusbank user;
  statusbank k;
  menues main;
  userlog log;
  billactions bill;
  log.login(user);
  bill.agregardinero(user);

  return 0;
}
