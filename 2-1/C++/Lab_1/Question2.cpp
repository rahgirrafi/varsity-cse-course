#include <iostream>
#include <string>
using namespace std;


class Menu {
        public:
            Menu(int s, uint8_t level, string options[]){
                menuSize = s;
                level = level;
                for(int i=0; i<s; i++){
                    options[i] = options[i];
                }
            }

            uint8_t level=0;
            uint8_t selected=0;
            int menuSize;
            string options[4];
};
   
int main(){
    string arr[] = {"Option 1", "Option 2", "Option 3"};

   Menu mainmenu(3, 0, arr);
}