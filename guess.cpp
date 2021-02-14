//::Cebastian Santiago
//::Random guessing game 10 tries
#include<iostream>
#include<ctime>
#include<time.h>
#include<string>

using namespace std;

int user_input(int&);
void compare(int&, int&);

int main() {
	int left = 0;
	int human = 0;
	int tries = 10;
	int const Maxes = 100;
	srand(time(NULL));
    int guess = 0;
    guess = rand() % Maxes;
	cout << "Guess the number I'll give you bitcoin." << endl;
	cout << "Lose you owe me bitcoin." << endl;

	do{
	    cout << endl;
		cout << endl;
		compare(guess, human);
		tries--;
		cout << "You have these many tries left " << tries << endl;

	} while (tries > left);

	cout << endl;
	cout << endl;
	cout << "You lost you owe me bitcoin ";
	cout << "Or I'll just steal your information...";
	cout << "I already stole it..." << endl;
	cout << "FYI the number was " << guess << endl;
	
	return 0;
}

void compare(int& com, int& user) {
	string URL = "https://bitcoin.org/en/";
	user = user_input(user);
	
	if (user >com ){
		cout << "Number to high." << endl;
	}

	else if(user < com){
		cout << "Number to low." << endl;
	}
	
	else if(user  == com){
		cout << endl;
		cout << endl;
		cout << "Correct you guessed the number " << user;
		cout << " and thats the correct answer I had " << com << endl;
		cout << "Here's the link for your bitcoin" << endl;
		cout << URL << endl;
		system(std::string("start " + URL).c_str());
		exit(0);
	}
}

int user_input(int & input) {
	cout << "Enter a number betweeen 0-100: ";
	cin >> input;
	
	while (input < 0 || input > 100 || !cin){
		cin.clear();
		cin.ignore(400,'\n');
		cout << "Wrong answer retype!:" << endl;
		cout << "Enter a number betweeen 0-100: ";
		cin >> input;
	}
  
	return input;
}
