//        switch (bot) {
    //
//            case 1: 
//                if (user == 1) {
//                    std::cout << "draw\n";
//                }
//                if (user == 2) {
//                    i++;
//                    std::cout << "win\n";
//                }
//                if (user == 3) {
//                    std::cout << "no win\n";
//                }
//                break;
//           
//
//            case 2: 
//                if (user == 2) {
//                    std::cout << "draw\n";
//                }
//                if (user == 3) {
//                    std::cout << "win\n";
//                    i++;
//                }
//                if (user == 1) {
//                    std::cout << "no win\n";
//                }
//                break;
//            

           /* case 3: 
                if (user == 3) {
                    std::cout << "draw\n";
                }
                if (user == 1) {
                    std::cout << "win\n";
                    i++;
                }
                if (user == 2) {
                    std::cout << "no win\n";
                }
                break;
        

                  std::cout << "replay?\n";

            default:
                if (user != 1 || user != 2 || user != 3) {
                    std::cout << "ne verno\n";
                }
                break;
        }*/

struct object {
    int x, y;
};

struct items {

    int compas;
    int watch;
    bool phone = false;
    object heal;
};

#include <iostream>
void game() {

    int user = 1;

    std::cout << "1.Камень\n2.Ножницы\n3.Бумага\n";
    
   
    for (int i = 0; i < 3;) {

        std::cin >> user;

    int bot = 1 + rand() % 3;

         if (user == 1 && bot == 2 || user == 2 && bot == 3 || user == 3 && bot == 1) {
               std::cout << "win\n";
               i++;
         }

         else if (user == bot) {
             std::cout << "draw\n";
         }

         else {
             std::cout << "louse\n";
         }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));

    game();
}