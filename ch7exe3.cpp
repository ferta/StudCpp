//
// Created by ferta on 12.12.2017.
//
#include <iostream>

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void znBox(box b) {
    std::cout << b;
}
int main(int argc, char * argv[]){
    box mybox = {0};

    return 0;
}