#include <iostream>
#include "boisson.h"
#include "game.h"
#include <Windows.h>
int main()
{
    while (choix != 2)
    {
        std::cout << "1 Jouer" << "\n" << "2 Quitter" << "\n";
        std::cout << "Boisson listees dans le jeu : rhum, tequila, martini, cuatro, jeager, pastis, whisky, vodka, jet27, champagne,\n";
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