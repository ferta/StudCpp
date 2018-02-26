//
// Created by ferta on 06.12.2017.
//

#include <iostream>

double getMoneys;
double notMoneys = 0;
double sumM = 0;
const int buf = 4;
double marks[buf] = {5000, 10000, 20000, 35000};
double startK[buf] = {0.0, 0.1, 0.15, 0.2};

int main(int argc, char * argv[]) {
    while(true) {
        std::cout << "Please write  have you money: ";
        std::cin >> getMoneys;
        if (getMoneys > 0) {
            std::cout << getMoneys << std::endl;

            for(int m=0; m < buf-1; ++m){
                sumM = sumM + marks[m]*startK[m];
                std::cout << "getMoneys: " << getMoneys << " marks[" << m << "]: " << marks[m] << " suM: " << sumM << std::endl;
            }
            std::cout << notMoneys << std::endl;
        } else {
            break;
        }
    }
    return 0;
}
