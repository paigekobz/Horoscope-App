
#include <iostream>
#include <cstdlib>
using namespace std;

//start by collecting birth month

int main() {
string birth_month = "January";
	int birth_date = 1;
	cout << "What is your birth month?";
	cout << "\n";
	cin >> birth_month;
	cout << "What is your birth date? ";
	cout << "\n";
	cin >> birth_date;

	if (birth_month =="January" && birth_date >= 21) {
		cout << "Your star sign is Aquarius";
	}
	else if (birth_month == "February" && birth_date <= 18) {
		cout << "Your star sign is Aquarius";
	}
	else if (birth_month == "February" && birth_date >= 19) {
		cout << "Your star sign is Pisces";
	}
	else if (birth_month == "March" && birth_date <= 20) {
		cout << "Your star sign is Pisces";
	}
	else if (birth_month == "March" && birth_date >= 21) {
		cout << "Your star sign is Aries";
	}
	else if (birth_month == "April" && birth_date <= 20) {
		cout << "Your star sign is Aries";
	}
	else if (birth_month == "April" && birth_date >= 21) {
		cout << "Your star sign is Taurus";
	}
	else if (birth_month == "May" && birth_date <= 21) {
		cout << "Your star sign is Taurus";
	}
	else if (birth_month == "May" && birth_date >= 22) {
		cout << "Your star sign is Gemini";
	}
	else if (birth_month == "June" && birth_date <= 21) {
		cout << "Your star sign is Gemini";
	}
	else if (birth_month == "June" && birth_date >= 22) {
		cout << "Your star sign is Cancer";
	}
	else if (birth_month == "July" && birth_date <= 22) {
		cout << "Your star sign is Cancer";
	}
	else if (birth_month == "July" && birth_date >= 23) {
		cout << "Your star sign is Leo";
	}
	else if (birth_month == "August" && birth_date <= 24) {
		cout << "Your star sign is Leo";
	}
	else if (birth_month == "August" && birth_date >= 25){
		cout << "Your star sign is Virgo";
	}
	else if (birth_month == "September" && birth_date <= 22) {
		cout << "Your star sign is Virgo";
	}
	else if (birth_month == "September" && birth_date >= 23) {
		cout << "Your star sign is Libra";
	}
	else if (birth_month == "October" && birth_date >= 23) {
		cout << "Your star sign is Libra";
	}
	else if (birth_month == "October" && birth_date >= 24) {
		cout << "Your star sign is Scorpio";
	}
	else if (birth_month == "November" && birth_date <= 22) {
		cout << "Your star sign is Scorpio";
	}
	else if (birth_month == "November" && birth_date >= 23) {
		cout << "Your star sign is Sagittarius";
	}
	else if (birth_month == "December" && birth_date <= 21) {
		cout << "Your star sign is Sagittarius";
	}
	else if (birth_month == "December" && birth_date >= 22) {
		cout << "Your star sign is Capricorn";
	}
	else if (birth_month == "January" && birth_date <= 20) {
		cout << "Your star sign is Capricorn";
	}
}



