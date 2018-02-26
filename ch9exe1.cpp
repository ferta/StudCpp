//
// Created by ferta on 25.01.2018.
//
#include <iostream>
#include "ch9exe1.hpp"

void setgolf(golf &g, char *name, int hc) {
    g.fullname = *name;
    g.handicap = hc;
}

//Intractive
int setgolf(golf & g){
    std::cout << "\nInsert NAME: " ;
    std::cin >> g.fullname;
    std::cout << "\nInsert handicap: " ;
    std::cin >> g.handicap;
    std::cout << "\nend" << std::endl ;

};
void sethandicapt(golf &g, int hc){
    g.handicap = hc;
}
void showgolf(const golf &g){
    std::cout << "Name:" << g.fullname << "\nH: " << g.handicap;
}

int main(){
    char *anna_name = "helloAnna\0";
    golf anna;
    anna.fullname = anna_name;
    anna.handicap = 5;
    showgolf(anna);
    return 0;
}