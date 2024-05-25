#include <iostream>
using namespace std;

void printRockVsPaper()
{
    cout << "\033[31m" << endl;
    cout << "      /\\-----.                           <==== /\\       " << endl;
    cout << "     /        \\                       <======    '---- " << endl;
    cout << "----.          |                         <=====         " << endl;
    cout << "-----         /                            <=====.----  " << endl;
    cout << "     `-------'                                          \033[0m" << endl;
    cout << endl << endl;
}

void printPaperVsPaper()
{
    cout << "\033[34m                                            " << endl;
    cout << "     /\\ ====>                          <==== /\\       " << endl;
    cout << "----'    ======>                      <======    '---- " << endl;
    cout << "        =====>                          <=====         " << endl;
    cout << "----.=====>                                <=====.---- " << endl;
    cout << "                                                       \033[0m" << endl;
}

void printScissorVsPaper()
{
    cout << "\033[32m                                                 " << endl;
    cout << "     /\\                                   <==== /\\         " << endl;
    cout << "----'  '=====>                         <======    '----     " << endl;
    cout << "         ======>                         <=====             " << endl;
    cout << "----____/                                   <=====.----     \033[0m" << endl;
    cout << "" << endl;
}

void printPaperVsScissor()
{
    cout << "\033[31m                                               " << endl;
    cout << "     /\\ ====>                                   /\\      " << endl;
    cout << "----'    ======>                         <====='  '----   " << endl;
    cout << "        =====>                         <=======           " << endl;
    cout << "----.=====>                                   \\____----   " << endl;
    cout << "                                                          \033[0m" << endl;
}

void printScissorVsScissor()
{
    cout << "\033[34m                                              " << endl;
    cout << "     /\\                                        /\\       " << endl;
    cout << "----'  '=====>                          <====='  '----   " << endl;
    cout << "         ======>                      <=======           " << endl;
    cout << "----____/                                    \\____----   " << endl;
    cout << "                                                         \033[0m" << endl;
}

void printRockVsScissor()
{
    cout << "\033[32m" << endl;
    cout << "      /\\-----.                                /\\       " << endl;
    cout << "     /        \\                        <====='  '----   " << endl;
    cout << "----.          |                      <=======           " << endl;
    cout << "-----         /                             \\____----   " << endl;
    cout << "     `-------'                                           \033[0m" << endl;
    cout << endl;
}

void printScissorVsRock()
{
    cout << "\033[31m                                                " << endl;
    cout << "     /\\                                  .-----/\\        " << endl;
    cout << "----'  '=====>                          /        \\        " << endl;
    cout << "         ======>                        |         .----    " << endl;
    cout << "----____/                               \\        -----    " << endl;
    cout << "                                         '-------'         " << endl;
    cout << "                                                           \033[0m" << endl;
}

void printPaperVsRock()
{
    cout << "\033[32m                                            " << endl;
    cout << "     /\\ ====>                          .-----/\\       " << endl;
    cout << "----'   =======>                      /        \\      " << endl;
    cout << "        =====>                        |         .----  " << endl;
    cout << "----.=====>                           \\        -----  " << endl;
    cout << "                                       '-------'       " << endl;
    cout << "                                                       \033[0m" << endl;
}

void printRockVsRock()
{
    cout << "\033[34m                                                " << endl;
    cout << "      /\\-----.                         .-----/\\          " << endl;
    cout << "     /        \\                       /        \\         " << endl;
    cout << "----.          |                     |         .----       " << endl;
    cout << "-----         /                       \\         -----     " << endl;
    cout << "     `-------'                         '-------'           " << endl;
    cout << "                                                    \033[0m" << endl;
}