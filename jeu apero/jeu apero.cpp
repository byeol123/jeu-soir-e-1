#include <iostream>
#include "boisson.h"
#include "game.h"
#include <Windows.h>
int main()
{
    while (choix != 2)
    {
        std::cout << "Jouer: 1" << "\n" << "Quitter: 2" << "\n";
        std::cout << "Misez sur votre boisson favorite: rhum, tequila, martini, cuatro, jeager, pastis, whisky, vodka, jet27, champagne.\n";
        std::cin >> choix;
        if (choix == 2)
        {
            return 0;
        }
        else if (choix == 1)
        {
            system("cls");
            game(rhum, tequila, martini, cuatro, jeager, pastis, whisky, vodka, jet27, champagne);

        }
    }

}