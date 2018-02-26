#include <iostream>
#include <vector>

#define MAXHOUSE 5

struct house {
    int num = -1;
    unsigned int width = 0;
    bool visibility = false;
};

int main(int argc, char* argv[]) {
    std::vector<house> allHouses;
    int maxWidth = 0;
    char width[10];

    for(int i = 0; i < MAXHOUSE; i++){
        house currentHouse;
        currentHouse.num = i;
        while (true) {
            std::cout << "Введите высоту дома №" << i << " : ";
            std::cin >> width;
            int w = atoi(width);
            if (w > 0) {
                currentHouse.width = w;
                break;
            } else {
                continue;
            }
        }
        if(currentHouse.width > maxWidth) {
            maxWidth = currentHouse.width;
            currentHouse.visibility = true;
        }
        allHouses.insert(allHouses.begin(),currentHouse);
    }

    std::cout << "--->  ";
    for(std::vector<house>::iterator it=allHouses.begin(); it<allHouses.end(); it++){
        std::cout << it->width << ((it->visibility) ? "* " : " " ) ;
    }
    std::cout << "\t" << "****\n";
    return  0;
}