#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	string TicketPrice;
	string NumberOfTicketSold;

	cout << "Ticket Price" << "	" << " Number of Ticket Sold ";
	cout << "	" << endl;

	int box;
	cout << "box ($250): " << "	" ;
	cin >> box;
	cout << "	" << " Total Box Sale Amount:	" <<	box * 250 << endl;

	int sideline;
	cout << "Side line($100): " << " " ;
	cin >> sideline;
	cout << "	" << " Total Side line Sale Amount:	" <<	sideline * 100 << endl;

	int premium;
	cout << "Premium ($50): " << "	" ;
	cin >> premium;
	cout << "	" << " Total Premium Sale Amount:	" <<	premium * 50 << endl;

	int generaladmission;
	cout << "general admission ($25): " << "	" ;
	cin >> generaladmission;
	cout << "	" << " Total General Admission Sale Amount:	" <<	generaladmission * 25 << endl;

	double Total;
	cout << "Total Sale Amount: " << "		" << (box * 250) + (sideline * 100) + (premium * 50) + (generaladmission * 25) << endl;

	_getch();
return 0;
