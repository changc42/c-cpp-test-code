#include<iostream>
using namespace std;

int main(){
	const int small_price=20;
	const int big_price=45;
	const float tax=0.06;
	
	cout << "Welcome to Frank's carpet cleaning service.\n";
	cout << "How many small rooms would you like?\n";
	
	int small_rooms {0};
	cin  >> small_rooms;
	
	cout << "How many big rooms would you like?\n";
	int big_rooms{0};
	cin >> big_rooms;
	
	cout << "Your invoice:\n";
	cout << "Number of small rooms: \n" << small_rooms << endl;
	cout << "Number of big rooms: " << big_rooms << endl;
	
	int total_small_rooms = small_rooms * small_price;
	int total_big_rooms = big_rooms * big_price;
	cout << "Price for all small rooms: " << total_small_rooms << endl;
	cout << "Price for all big rooms: "  << total_big_rooms << endl;
	
	int price_before_tax = total_big_rooms + total_small_rooms;
	cout << "Price before tax: " << price_before_tax << endl;
	
	int price_tax = price_before_tax * tax;
	cout << "total tax is: " << price_tax << endl;
	
	cout << "total price is: " << price_before_tax + price_tax << endl;
	return 0;
}