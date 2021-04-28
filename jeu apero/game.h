
#include <ctime>
#include <cstdlib>
#include <windows.h>
void game(int rhum, int tequila, int martini, int cuatro, int jeager, int pastis, int whisky, int vodka, int jet27, int champagne)
{
	while (4 == 4)
	{
		srand(time(NULL));
		std::cout << "Rhum = " << rhum << "\n";
		rhum = rhum + rand() % 6 + 1;
		std::cout << "Tequila = " << tequila << "\n";
		tequila = tequila + rand() % 6 + 1;
		std::cout << "Martini = " << martini << "\n";
		martini = martini + rand() % 6 + 1;
		std::cout << "Cuatro = " << cuatro << "\n";
		cuatro = cuatro + rand() % 6 + 1;
		std::cout << "Jeager = " << jeager << "\n";
		jeager = jeager + rand() % 6 + 1;
		std::cout << "Pastis = " << pastis << "\n";
		pastis = pastis + rand() % 6 + 1;
		std::cout << "Vodka = " << vodka << "\n";
		vodka = vodka + rand() % 6 + 1;
		std::cout << "Jet 27 = " << jet27 << "\n";
		jet27 = jet27 + rand() % 6 + 1;
		std::cout << "Champagne = " << champagne << "\n";
		champagne = champagne + rand() % 6 + 1;
		Sleep(1000);
		system("cls");
		if (rhum >= 100 || tequila >= 100 || martini >= 100 || cuatro >= 100 || jeager >= 100 || pastis >= 100 || whisky >= 100 || vodka >= 100 || jet27 >= 100 || champagne >= 100)
		{
			std::cout << "Rhum = " << rhum << "\n";
			std::cout << "Tequila = " << tequila << "\n";
			std::cout << "Martini = " << martini << "\n";
			std::cout << "Cuatro = " << cuatro << "\n";
			std::cout << "Jeager = " << jeager << "\n";
			std::cout << "Pastis = " << pastis << "\n";
			std::cout << "Vodka = " << vodka << "\n";
			std::cout << "Jet 27 = " << jet27 << "\n";
			std::cout << "Champagne = " << champagne << "\n";
			break;
		}
	}
}