#include <iostream>
#include <random>
#include <string>
#pragma once
struct statusbank {
  int dineur;
  int id;
  std::string naam;

  void greatspace() {
    for (int i = 0; i <= 150; i++) {
      std::cout << "\n";
    }
  }
};

template <typename B, typename Y>

class arithcash {
public:
  B sum(B a, Y b) { return a + b; }
  B res(B a, Y b) { return a - b; }

  B mult(B a, Y b) { return a * b; }

  B div(B a, Y b) { return a / b; }
};

class userlog {
private:
  std::mt19937 idgen;
  std::uniform_int_distribution<int> dist;
  int zloty1;

public:
  userlog() : idgen(std::random_device{}()), dist(1, 1000) {
    this->zloty1 = dist(idgen);
  }

private:
  void DefaultUser(statusbank &user) {

    user.dineur = 100;
    user.id = zloty1;
    user.naam = "bit el insano ";
  }
  void userdef(statusbank &user) {
    user.dineur = 0;
    user.id = zloty1;
    user.naam = "";

    std::cout << "Hola porfavor ingrese sus datos" << std::endl;
    std::cout << "paseme su dinero actual " << std::endl;
    std::cin >> user.dineur;
    std::cout << "paseme su nombre " << std::endl;
    std::cin >> user.naam;
  }

public:
  void login(statusbank &user) {
    std::cout << "deseas iniciar sesion tu mismo o te pongo un por defecto?(1 "
                 "para yo, 2 por defecto)"
              << std::endl;
    int confirmatio = 0;
    std::cin >> confirmatio;
    if (confirmatio == 1) {
      userdef(user);
    } else {
      DefaultUser(user);
    }
  }
};

class billactions {

  void agregardinero(statusbank &user) {
    statusbank e;
    e.greatspace();
    while (true) {
      int option = 0;
      std::cout << "hola buenas cuanto dinero desea insertar?" << std::endl;
      std::cout << "1.100$ 2.300$ 3.700$ 4.1000$ 5. Salir" << std::endl;
      std::cin >> option;

      if (option == 5) {
        break;

      } else if (option == 1) {
        std::cout << "Hola buenas tardes se te ha agregado 100$ a tu cuenta "
                  << std::endl;
        user.dineur += 100;

        continue;
      } else if (option == 2) {
        std::cout << "Hola buenas tardes se te ha agregado 300$ a tu cuenta "
                  << std::endl;
        user.dineur += 300;

        continue;
      } else if (option == 3) {
        std::cout << "Hola buenas tardes se te ha agregado 700$ a tu cuenta "
                  << std::endl;
        user.dineur += 700;

        continue;
      } else if (option == 4) {
        std::cout << "Hola buenas tardes se te ha agregado 1000$ a tu cuenta "
                  << std::endl;
        user.dineur += 1000;

        continue;
      } else {
        break;
      }
    }
  }

  void sacardinero(statusbank &user) {
    statusbank e;
    e.greatspace();

    while (true) {
      int option = 0;
      std::cout << "hola buenas cuanto dinero desea sacar?" << std::endl;
      std::cout << "1.100$ 2.300$ 3.700$ 4.1000$ 5. Salir" << std::endl;
      std::cin >> option;

      if (option == 5) {
        break;

      } else if (option == 1) {
        std::cout << "Hola buenas tardes se te ha quitado  100$ de tu cuenta "
                  << std::endl;
        user.dineur -= 100;

        continue;
      } else if (option == 2) {
        std::cout << "Hola buenas tardes se te ha quitado 300$ de tu cuenta "
                  << std::endl;
        user.dineur -= 300;

        continue;
      } else if (option == 3) {
        std::cout << "Hola buenas tardes se te ha quitado 700$ de tu cuenta "
                  << std::endl;
        user.dineur -= 700;

        continue;
      } else if (option == 4) {
        std::cout << "Hola buenas tardes se te ha quitado 1000$ de tu cuenta "
                  << std::endl;
        user.dineur -= 1000;

        continue;
      } else {
        break;
      }
    }
  }

public:
  void billinit(statusbank &user) {
    statusbank e;
    e.greatspace();

    while (true) {
      int relevans = 0;

      std::cout << "hola buenas tardes usted desea sacar o agregar dinero "
                   "a su cuenta? (1 para sacar, 2 para agregar,3 para salir)"
                << std::endl;
      std::cin >> relevans;
      if (relevans == 1) {

        sacardinero(user);

        continue;

      } else if (relevans == 2) {
        agregardinero(user);
        continue;

      } else if (relevans == 3) {
        break;
      } else {

        std::cout << "poravor ingrese un numero valido " << std::endl;
        continue;
      }
    }
  }
};

class menues {
public:
  void init() {
    while (true) {
      statusbank user;
      userlog neptune;
      billactions moon;
      statusbank r;
      r.greatspace();

      std::cout << "hola bienvenido al inicio de la cuenta de banco, por favor "
                   "presione 1 para iniciar sesion, 0 para salir"
                << std::endl;
      int conf = 0;
      std::cin >> conf;
      if (conf == 1) {
        neptune.login(user);
        r.greatspace();
        moon.billinit(user);
        r.greatspace();
        int conf2 = 0;
        std::cout << "desea ver sus estadisticas? 1 para si 2 para no"
                  << std::endl;
        std::cin >> conf2;
        if (conf2 == 1) {
          std::cout << "su dinero actual es :" << user.dineur
                    << " su id es: " << user.id
                    << " y su nombre es :" << user.naam;
          int conf3;
          std::cout << "presione cualquier numero para continuar" << std::endl;
          std::cin >> conf3;
        }
        continue;
      }

      else {
        break;
      }
    }
  }
};
