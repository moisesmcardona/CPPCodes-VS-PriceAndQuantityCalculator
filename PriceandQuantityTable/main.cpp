#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double firstitem, seconditem;
	int firstquantity, secondquantity;
	cout << "Please input the price and quantity of the first item\n";
	cin >> firstitem >> firstquantity;
	cout << "\nPlease input the price and quantity of the secnd item\n";
	cin >> seconditem >> secondquantity;
	cout << "\n";
	cout << setw(15) << "PRICE" << setw(15) << "QUANTITY\n";
	cout << setw(15) << firstitem << setw(12) << firstquantity << '\n' ;
	cout << setw(15) << seconditem << setw(12) << secondquantity << '\n';
	system("pause");
	return 0;
}
