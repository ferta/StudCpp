#include <iostream>

std::string arr = "128457389478394758347857898";

int main(int argc, char* argv[])
{
   bool needUp = true;
   for(int dig=arr.length(); dig >= 0 ; dig-- ) {
      std::cout << "number = " << arr[dig] <<  "\n";
      int tmpDig = std::stoi(arr[dig]);
      if(tmpDig < 9){
        arr[dig] = std::to_string(tmpDig+1);
        break;
      } else {
        arr[dig] = std::to_string(0);
      }
   }
   return 0;
}
