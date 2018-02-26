//
// Created by ferta on 12.12.2017.
//
#include <iostream>

const int l = 10;
int goals[l] = {0};
int count = 0;

int setGoals() {
    char res;
    for(int i = 0; i < l; ++i ) {
        std::cin >> res;
        if (isdigit(res)) {
            goals[i] = res - '0';
            count++;
        } else {
            break;
        }
    }
    return  count;
}

void printGoals(int *ar, int l){
    std::cout << "Счет: ";
    for (int i = 0; i < l; i++) {
        std::cout << " " << ar[i];
    }
    std::cout << "\n";
}

double srzn(int * array, int l){
    double sum = 0;
    for(int i = 0; i <= l; ++i){
        sum = sum + array[i];
    }
    return  sum/count;
}

int main(int argc, char * argv[]){
    int r = 0;
    r = setGoals();
    printGoals(goals, r);
    std::cout << "Среднее значение = " << srzn(goals, r) << std::endl;
    return 0;
}