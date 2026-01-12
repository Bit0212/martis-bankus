#include <iostream>
#include <random>
#include <string>
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
  std::random_device ko;
  std::mt19937 gen(ko());

  std::uniform_int_distribution<> dist(1, 1000);

  void DefaultUser(statusbank &k) {

    k.dineur = 100;
    k.id = dist(gen);
    k.naam = "bit el insano ";
  }
  void userdef(statusbank &user) {
    user.dineur = 0;
    user.id = dist(gen);
    user.naam = "";

    std::cout << "Hola porfavor ingrese sus datos" << std::endl;
    std::cout << "paseme su dinero actual " << std::endl;
    std::cin >> user.dineur;
    std::cout << "paseme su nombre " << std::endl;
    std::cin >> user.naam;
  }

public:
  void login() {
    std::cout << "deseas iniciar sesion tu mismo o te pongo un por defecto?(1 "
                 "para yo, 2 por defecto)"
              << std::endl;
    int confirmatio = 0;
    std::cin >> confirmatio;
    if (confirmatio == 1) {
      userdef();
    } else {
      DefaultUser();
    }
  }
};

class billactions {
  void agregardinero(statusbank &user, statusbank k &) {
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
        k.dineur += 100;

        continue;
      } else if (option == 2) {
        std::cout << "Hola buenas tardes se te ha agregado 300$ a tu cuenta "
                  << std::endl;
        user.dineur += 300;
        k.dineur += 300;

        continue;
      } else if (option == 3) {
        std::cout << "Hola buenas tardes se te ha agregado 700$ a tu cuenta "
                  << std::endl;
        user.dineur += 700;
        k.dineur += 700;

        continue;
      } else if (option == 4) {
        std::cout << "Hola buenas tardes se te ha agregado 1000$ a tu cuenta "
                  << std::endl;
        user.dineur += 1000;
        k.dineur += 1000;

        continue;
      } else {
        break;
      }
    }

    void sacardinero(statusbank & user, statusbank k &) {
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
          k.dineur -= 100;

          continue;
        } else if (option == 2) {
          std::cout << "Hola buenas tardes se te ha quitado 300$ de tu cuenta "
                    << std::endl;
          user.dineur -= 300;
          k.dineur -= 300;

          continue;
        } else if (option == 3) {
          std::cout << "Hola buenas tardes se te ha quitado 700$ de tu cuenta "
                    << std::endl;
          user.dineur -= 700;
          k.dineur -= 700;

          continue;
        } else if (option == 4) {
          std::cout << "Hola buenas tardes se te ha quitado 1000$ de tu cuenta "
                    << std::endl;
          user.dineur -= 1000;
          k.dineur -= 1000;

          continue;
        } else {
          break;
        }
      }

    public:
      void billinit() {
        while (true) {
          int relevans = 0;

          std::cout << "hola buenas tardes usted desea sacar o agregar dinero "
                       "a su cuenta? (1 para sacar, 2 para agregar,3 para si)"
                    << std::endl;
          std::cin >> relevans;
          if (relevans == 1) {

            sacardinero();
            continue;

          } else if (relevans == 2) {
            agregardinero();
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

      void init() {
        userlog neptune;
        billactions moon;
        std::cout
            << "hola bienvenido al inicio de la cuenta de banco, por favor "
               "presione 1 para iniciar sesion, 0 para salir";
        int conf = 0;
        std::cin >> conf;
        if (conf == 1) {
          neptune.login();
          moon.billinit();

        }

        else {
        }
      }
    };
