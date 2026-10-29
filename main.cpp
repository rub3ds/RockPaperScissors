#include <iostream>
#include <string>
#include <windows.h>

int main() {
	SetConsoleOutputCP(CP_UTF8);

	int a,b,c;

	std::string Elements = "Choose your element..\n"
		"1 - Rock 🪨 \n"
		"2 - Paper 📃 \n"
		"3 - Scissors ✂️ \n"
		"Type the number of the elements you want \n";
	std::cout << Elements;
	std::cin >> a >> b;

	if (a == 1 && b == 2 || b == 1 && a == 2) {
		std::cout << "Paper beats rock. Paper wins!";
	}
	else if (a == 3 && b == 2 || a == 2 && b == 3) {
		std::cout << "Scissors cuts paper. Scissors wins!";
	}
	else if (a == 1 && b == 3 || a == 3 && b == 1) {
		std::cout << "Rock destroys scissors. Rock wins!";
	}
	else if (a == 1 && b == 1 || a == 2 && b == 2 || a == 3 && b == 3) {
		std::cout << "It's a tie.";
	}

	return 0;
}