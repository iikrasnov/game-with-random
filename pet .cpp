#include<iostream>
#include<time.h>
using namespace std;


int main() {
	srand(time(0));
	int rand_num = 1 + rand() % 100;
	bool stop = false; 
	int user_input; 
	do {
		cout << "Enter number"; 
		cin >> user_input; 
		if (user_input != rand_num) {
			cout << "You lose, try again...";
		}
		else {
			cout << "You win, good luck!";
			stop = true;
		}
	} while (!stop);
	return 0; 
}