#include <iostream>
#include <string>
#include "nyawa.hpp"
#include "pertanyaan.hpp"
#include "tentang.hpp"
#include "escapeGame.hpp"
using namespace std;
int main(){
    int menu;
    //wip menu utama
    cout<<"-------------------------------------------------------------------------------------------------\n";
    std::cout << R"(
     _______. __  .___  ___. .______    __       _______   ______      __    __   __   ________
    /       ||  | |   \/   | |   _  \  |  |     |   ____| /  __  \    |  |  |  | |  | |       /
   |   (----`|  | |  \  /  | |  |_)  | |  |     |  |__   |  |  |  |   |  |  |  | |  | `---/  /
    \   \    |  | |  |\/|  | |   ___/  |  |     |   __|  |  |  |  |   |  |  |  | |  |    /  /
.----)   |   |  | |  |  |  | |  |      |  `----.|  |____ |  `--'  '--.|  `--'  | |  |   /  /----.
|_______/    |__| |__|  |__| | _|      |_______||_______| \_____\_____\\______/  |__|  /________|)"<<std::endl;
    cout<<"----------------------------------------1.Mulai--------------------------------------------------\n";
    cout<<"--------------------------------------2.Tentang--------------------------------------------------\n";
    cout<<"---------------------------------------3.Keluar--------------------------------------------------\n";
    cout<<"-------------------------------------------------------------------------------------------------\n";
    cin>>menu;

    switch (menu) {
        case 1:
           masukGame();
            break;
        case 2:
            tentangProject();
            break;
        case 3:
            exit(0);
    }




}