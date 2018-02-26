#include <string>

class Person {
private:
    static  const LIMIT = 25;
    string lname;
    char fname[LIMIT];
public:
    Person() { lname = ""; fname[0]= '\0';}
    Person(const string &ln, const char * fn = "Heyyou");
    void  Show() const;
    void FormalShow() const;
};

void Person::Show() const {
    std::cout << lname << " " << fname << std::endl;
};

void Person::FormalShow() const {
    std::cout << lname << "," << fname << std::endl;
};

Person::Person(const string &ln, const char *fn) {
    lname = ln;
    fname = &fn;
};

int main(int argc, char * argv[]){
    Person one;
    Person two("Smythercraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
    one.FormalShow();
    return  0;
}