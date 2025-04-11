#include <iostream>
#include <Windows.h>
#include <vector>
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

struct info {
    int hp, attack;

    items p;
    std::string name;
    std::string ch;

};

std::vector<items>z;

class p {
    int vedro;

public:
    int abs;

    void game() {


        std::cout << "1.Камень\n2.Ножницы\n3.Бумага\n";

        std::string user;

        std::string bot[3]{ "камень","ножницы","бумага" };

        for (int i = 0; i < 3;) {

            std::cin >> user;
            int temp = 1 + rand() % 3;

            if (user == "камень" && bot[temp] == "ножницы" || user == "ножницы" && bot[temp] == "бумага" || user == "бумага" && bot[temp] == "камень") {
                std::cout << "win\n";
                i++;
            }
            else if (user == bot[temp]) {
                std::cout << "draw\n";
            }
            else {
                std::cout << "louse\n";
            }
        }
    }

};

items a;
p x;

info user;
void dom() {
    
    int numbers[4] { 1, -5, -8, 6 };
    int n = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Вывод чисел:\n";
    for (int i = 0; i < n;) {
        std::cout << numbers[i] << std::endl;
        i++;
    }

    std::cout << "положительные числа:\n";
    for (int i = 0; i < n; i++) {
        if (numbers[i] > 0) {
            std::cout << numbers[i] << std::endl;
        }
    }

    std::cout << "отрицательные числа:\n";
    for (int i = 0; i < n; i++) {
        if (numbers[i] < 0) {
            std::cout << numbers[i] << std::endl;
        }
    }

    std::cout << "В порядке увеличения:\n";
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j > n; j++) {

            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
            std::cout << numbers[i] << std::endl;
    }
}



   /* for (int i = 0;i < n; i++) {
    std::cout << numbers[i] << std::endl;
    }*/ //и чо за ошибка аааааааа

void InitGame() {
    std::cout << "Ты ведь хотел когда нибудь оказаться внутри себя? Узнать кем являешься со стороны, каким бы мог быть, каким был на самом деле и какому я тебя ведёт твой путь! Теперь я помогу тебе. Куда ты хочешь пойти в первую очередь?";
    std::cout << "1.Child\n 2. home\n";
        std::cin >> user.ch;
        
        if (user.ch == "Child") {
            x.game();
        }
        else if (user.ch == "home") {
            dom();
        }
        else {
            std::cout << "ERROR";
        }
}


int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    srand(time(NULL));
    InitGame();

}