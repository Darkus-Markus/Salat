// if (user == 1 && bot == 2 || user == 2 && bot == 3 || user == 3 && bot == 1) {
    //   std::cout << "win";
    //}
     //if (user < 3 && user > 1)
     //{
        // std::cout << "no";
     //}
     //(1 && 2 || 2 && 3 || 3 && 1)
//if (user == bot) {
//std::cout << "draw\n";    
//  }
 //else if ((user == 1 && bot == 2) || (user == 2 && bot == 3) || (user == 3 && bot == 1)) {
   //  std::cout << "win\n";
       // }
 //else {
    // std::cout << "no win\n";
       // }

#include <iostream>
    setlocale(LC_ALL, "Russian");

int main() {
    int bot = 3;
    int user = 1;

    std::cout << "1.Камень\n2.Ножницы\n3.Бумага\n";

    do { 
        std::cin >> user; 
    } 
    while (user > 1 && user < 3) {
        switch (user) {
        case 1:{
            if (user == 1) {
                std::cout << "draw\n";
            }
            if (user == 2) {
                std::cout << "win\n";
            }
            if (user == 3) {
                std::cout << "no win\n";
            }
            break;
        }
        case 2:{
            if (user == 2) {
                std::cout << "draw\n";
            }
            if (user == 3) {
                std::cout << "win\n";
            }
            if (user == 1) {
                std::cout << "no win\n";
            }
            break;
        }
          case 3: {
              if (user == 3) {
                  std::cout << "draw\n";
              }
              if (user == 1) {
                  std::cout << "win\n";
              }
              if (user == 2) {
                  std::cout << "no win\n";
              }
              break;
          }
            std::cout << "replay?\n";
           default:
               if (user != 1 || user != 2 || user != 3) {
                   std::cout << "ne verno\n";
               }
               break;
        }