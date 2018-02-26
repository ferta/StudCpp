//
// Created by ferta on 06.12.2017.
//

#include <iostream>
int firstDig;
int secondDig;
double gar;

double garmon(int, int);

double garmon(int f, int s) {
    return 2.0 * f * s / (f + s);
}

int main(int argc, char * argv[]) {
    while(true) {
        std::cout << "Введите первое число: " << std::endl;
        std::cin >> firstDig;
        std::cout << "Введите второе число: " << std::endl;
        std::cin >> secondDig;
        gar = garmon(firstDig, secondDig);
        std::cout << "Среднее гармоническое число = " << gar << std::endl;
        if(!gar) break;
    }

    return 0;
}
