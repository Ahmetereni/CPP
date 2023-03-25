#include <iostream>
#include <unordered_set>

#include <stdlib.h>
#include <time.h>
#define MAIN_LOOP true
#define MAX_DEGER 9
#define MIN_DEGER 0
using namespace std;

void print_random_set() {
	srand(time(NULL));
	int random_number = rand() % (MAX_DEGER + 1) + MIN_DEGER;
	cout << random_number;

	unordered_set<int> set_of_int = {}; // defining a set with values

	std::cout << '\n';

	while (set_of_int.size() < 10) {
		set_of_int.insert(rand() % (MAX_DEGER + 1) + MIN_DEGER);

	}
	for (auto& str : set_of_int) {
		std::cout << str << ' ';
	}
}

void main_loop() {
	

	while (MAIN_LOOP) {
		print_random_set();
		string answer = "n";
		cout << "DO again ? (n for no)\n\n";
		cin >> answer;
		if (answer == "n")
		{
			break;
		}
		else
		{
			print_random_set();
		}

	}
}

	int main()
	{

		main_loop();
		return 0;
	}
