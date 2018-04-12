#include<iostream>
#include<Windows.h>
using namespace std;
int main() {

	int song;
	
	while (1) {
		cout << "what song do you want?" << endl;
		cin >> song;
		//system("pause");
		switch (song) {


		case 1:
			cout << "song fortnie" << endl;
			PlaySound(TEXT("fortnite.wav.wav"), NULL, SND_FILENAME);
			break;
		case 2:
			cout << " song MCfallen" << endl;
			PlaySound(TEXT("recycle.wav"), NULL, SND_FILENAME);
			break;
		case 3:
			cout << "song man" << endl;
			PlaySound(TEXT("recycle.wav"), NULL, SND_FILENAME);
			break;


		}
	}
}