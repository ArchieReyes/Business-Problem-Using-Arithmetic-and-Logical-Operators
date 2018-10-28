#include <iostream>

using namespace std;

int main()
{
    int v = 0, s = 0, t = 0, u = 0, a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7, h = 8, i = 10, j = 12, other, bread;
	cout << "          \t\t///   ARC BAKERY SHOP  ///  \n\n \n  There have a choices bread on the Bread Menu and customers want to buy and eat bread. But other customers want to buy beyond to our Bread Menu. In terms of   the lacking option on the Bread Menu will be customers suggest their want to    bake it next soon.\n";
	cout << " \n\t\tBREAD MENU\n \n\t1. Pandesal = " << a << " peso each\n" << " \t2. Pandecoco = " << b << " peso each\n" << " \t3. Puto Seko = " << c << " peso each\n" << " \t4. Monay = " << d << " peso each\n" << " \t5. Ensaymada = " << e << " peso each\n" << " \t6. Empanada = " << f << " peso each\n" << " \t7. Choco Bread = " << g << " peso each\n" << " \t8. Banana Bread = " << h << " peso each\n" << " \t9. Sweet Muffin Bread = " << i << " peso each\n" << "\t10. Buko Pie = " << j << " peso each\n" << "\t11. Proceed\n";
    cout << "\n If your Bread that are missing on our Bread Menu: \n\n Enter your Bread: \n\n Option: Your suggestion to bake a Bread will be offer later or not even.\n \n\t Amount Value For Suggested Bread Order: 100 Peso\n \n If ever NONE, proceed to the main Bread Menu: Type 11\n";
    cin >> bread;
    cout << "\n On Process: Your suggestion to bake a Bread will be offer later or not even.\n" << endl;
    cout << "\n\t\t Your suggestion to bake a Bread will serve. \n\t\t If you willing to wait your order right away" << endl;
	cout << "\n I. What bread would you like to buy?";
	cin >> s;

    cout << "\n II. How many bread would you like to buy for this?";
	cin >> t;

	if (s == 1)
 	{
		cout << "\n Total Amount: " << a*t << " Peso";
	}
 	else if (s == 2)
 	{
	  	cout << "\n Total Amount: " << b*t << " Peso";
	}
	else if (s == 3)
	{
	  	cout << "\n Total Amount: " << c*t << " Peso";
	}
	else if (s == 4)
	{
	  	cout << "\n Total Amount: " << d*t << " Peso";
	}
	else if (s == 5)
	{
	  	cout << "\n Total Amount: " << e*t << " Peso";
	}
	else if (s == 6)
	{
	  	cout << "\n Total Amount: " << f*t << " Peso";
	}
	else if (s == 7)
	{
	  	cout << "\n Total Amount: " << g*t << " Peso";
	}
	else if (s == 8)
	{
	  	cout << "\n Total Amount: " << h*t << " Peso";
	}
	else if (s == 9)
	{
	  	cout << "\n Total Amount: " << i*t << " Peso";
	}
	else if (s == 10)
	{
	  	cout << "\n Total Amount: " << j*t << " Peso";
	}
	else if (s != 0)
	{
	  	cout << "\n\n Result: Transaction Option Not Found On The Bread Menu ";
	}
	else if (s = bread,other)
    {
        cout << "\n\n Result: Transaction Option Not Found On The Bread Menu ";
    }
	cout << "\n\n III. How much is your money worth?";
	cin >> u;

	if (s == 1)
 	{
		cout << "\n Your Exchange Money: " << u-(a*t) << " Peso";
	}
 	else if (s == 2)
 	{
	  	cout << "\n Your Exchange Money: " << u-(b*t) << " Peso";
	}
	else if (s == 3)
	{
	  	cout << "\n Your Exchange Money: " << u-(c*t) << " Peso";
	}
	else if (s == 4)
	{
	  	cout << "\n Your Exchange Money: " << u-(d*t) << " Peso";
	}
	else if (s == 5)
	{
	  	cout << "\n Your Exchange Money: " << u-(e*t) << " Peso";
	}
	else if (s == 6)
	{
	  	cout << "\n Your Exchange Money: " << u-(f*t) << " Peso";
	}
	else if (s == 7)
	{
	  	cout << "\n Your Exchange Money: " << u-(g*t) << " Peso";
	}
	else if (s == 8)
	{
	  	cout << "\n Your Exchange Money: " << u-(h*t) << " Peso";
	}
	else if (s == 9)
	{
	  	cout << "\n Your Exchange Money: " << u-(i*t) << " Peso";
	}
	else if (s == 10)
	{
	  	cout << "\n Your Exchange Money: " << u-(j*t) << " Peso";
	}
	else if (s != 0)
	{
	  	cout << "\n\n Result: Transactions value money cannot be accepted.\n \t Because Of Your Option Is Not Available Right Now ";
	}
	else if (s = other)
    {
        cout << "\n\n Result: Transactions value money cannot be accepted.\n\n \t Because Of Your Option Is Not Available Right Now" << endl;
        cout << "\n\t Except for Suggested Order" << endl;
    }

    cout << "\n\n                               THANK YOU!!!";
    cout << "\n                           For Buying Our Bread";
    cout << "\n                    WE HOPE THAT ALL THE BEST WERE OFFER.";
	return 0;
}
