#include<iostream>
#include<Windows.h>
#include<ctime>
using namespace std;


//function declaration
char disaster();


int main() {
srand(time(NULL));
	while (1) {
		cout << " A rando disaster is coming " << endl;
		
		//function call
		cout << " you got a" << disaster()<<endl;
		system("pause");



	}//end game loop
}//end main

//function definition
char disaster() {
	int num = rand() % 100 + 1;

	if (num > 10) {
		cout << "fire";
		return 'f';
	}
	else if (num > 25) {
		cout << "radroach";
		return 'r';
	}
	else if (num > 37) {
		cout << "raider attack";
		return 'ra';
	}
	else if (num > 40) {
		cout << " mole rat";
		return 'm';
	}
	else
		cout << "enchilada attack ";
	return 'n';
}
	
