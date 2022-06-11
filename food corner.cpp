# include"stdafx.h"

#include<iostream>
#include<string>
using namespace std;
struct items
{	int quantity;
	int bill;
	int stock;
};
void menu()
{
	cout << "1.Pizzas\n";
	cout << "2.Sandwich\n";
	cout << "3.juices\n";
	cout << "4.Exit";
	return;
}
void pizza_flavour(string pizza[])
{
	int p_f_c = 0, price[4] = { 250, 500, 456, 5400 };
	items q;
	items b;
	cout << "these are the flavours" << endl;
	for (int i = 0; i < 4; i++)
	{

		cout << i + 1 << "." << pizza[i] << " Rs." << price[i] << "\n";

	}
	cout << "Which Flavour would you like to have?" << endl;
	cin >> p_f_c;

	if (p_f_c == 1)
	{
		cout << "\nPlease Enter Quantity:" << endl;
		cin >> q.quantity;
		b.bill = q.quantity * price[0];
		cout << "\t\t\t------------Your order-------------------\n";
		cout << " " << q.quantity << " " << pizza[p_f_c - 1];
		cout << "\n Your Total Bill is " << b.bill << "\n Your Order will be delivered in 40 minutes";
		cout << "\n Thank you For Ordering From Fast Food Corner\n";
	}
	else if (p_f_c == 2)
	{
		cout << "\nPlease Enter Quantity:" << endl;
		cin >> q.quantity;
		b.bill = q.quantity * price[1];
		cout << "\t\t\t------------Your order-------------------\n";
		cout << " " << q.quantity << " " << pizza[p_f_c - 1];
		cout << "\n Your Total Bill is " << b.bill << "\n Your Order will be delivered in 40 minutes";
		cout << "\n Thank you For Ordering From Fast Food Corner\n";
	}
	else if (p_f_c == 3)
	{
		cout << "\nPlease Enter Quantity:" << endl;
		cin >> q.quantity;
		b.bill = q.quantity * price[2];
		cout << "\t\t\t------------Your order-------------------\n";
		cout << " " << q.quantity << " " << pizza[p_f_c - 1];
		cout << "\n Your Total Bill is " << b.bill << "\n Your Order will be delivered in 40 minutes";
		cout << "\n Thank you For Ordering From Fast Food Corner\n";
	}
	else if (p_f_c == 4)
	{
		cout << "\nPlease Enter Quantity:" << endl;
		cin >> q.quantity;
		b.bill = q.quantity * price[3];
		cout << "\t\t\t------------Your order-------------------\n";
		cout << " " << q.quantity << " " << pizza[p_f_c - 1];
		cout << "\n Your Total Bill is " << b.bill << "\n Your Order will be delivered in 40 minutes";
		cout << "\n Thank you For Ordering From Fast Food Corner\n";
	}
	else
	{
		cout << "\t\t-------------------Your Order is Not available----------------" << endl;
	}
	return;
}

void sandwich_flav(string sand[])
{
	items b, q;
	int s_f_c, price[3] = { 200, 106, 300 };
	cout << "these are the flavours" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << "." << sand[i] << " Rs." << price[i] << "\n";
	}
	cout << "Which Flavour would you like to have?" << endl;
	cin >> s_f_c;

	switch (s_f_c)
	{
	case 1:
		cout << "\nPlease Enter Quantity:" << endl;
		cin >> q.quantity;
		b.bill = q.quantity * price[0];
		cout << "\t\t\t------------Your order-------------------\n";
		cout << " " << q.quantity << " " << sand[s_f_c - 1];
		cout << "\n Your Total Bill is " << b.bill << "\n Your Order will be delivered in 40 minutes";
		cout << "\n Thank you For Ordering From Fast Food Corner\n";
		break;
	case 2:
		cout << "\nPlease Enter Quantity:" << endl;
		cin >> q.quantity;
		b.bill = q.quantity * price[1];
		cout << "\t\t\t------------Your order-------------------\n";
		cout << " " << q.quantity << " " << sand[s_f_c - 1];
		cout << "\n Your Total Bill is " << b.bill << "\n Your Order will be delivered in 40 minutes";
		cout << "\n Thank you For Ordering From Fast Food Corner\n";
		break;
	case 3:

		cout << "\nPlease Enter Quantity:" << endl;
		cin >> q.quantity;
		b.bill = q.quantity * price[2];
		cout << "\t\t\t------------Your order-------------------\n";
		cout << " " << q.quantity << " " << sand[s_f_c - 1];
		cout << "\n Your Total Bill is " << b.bill << "\n Your Order will be delivered in 40 minutes";
		cout << "\n Thank you For Ordering From Fast Food Corner\n";
	default:
		cout << "\t\t-------------------Your Order is Not available---------------------" << endl;

	}		return;
}
int juice_flav(string juices[])
{
	items q, b;
	int j_f_c, price[5] = { 200, 180, 300, 450, 430 };
	cout << "these are the flavours" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "." << juices[i] << " Rs." << price[i] << "\n";
	}
	cout << "Which Flavour would you like to have?" << endl;
	cin >> j_f_c;

	if (j_f_c == 1)
	{
		cout << "\nPlease Enter Quantity:" << endl;
		cin >> q.quantity;
		b.bill = q.quantity * price[0];
		cout << "\t\t\t------------Your order-------------------\n";
		cout << " " << q.quantity << " " << juices[j_f_c - 1];
		cout << "\n Your Total Bill is " << b.bill << "\n Your Order will be delivered in 40 minutes";
		cout << "\n Thank you For Ordering From Fast Food Corner\n";
	}
	else if (j_f_c == 2)
	{
		cout << "\nPlease Enter Quantity:" << endl;
		cin >> q.quantity;
		b.bill = q.quantity * price[1];
		cout << "\t\t\t------------Your order-------------------\n";
		cout << " " << q.quantity << " " << juices[j_f_c - 1];
		cout << "\n Your Total Bill is " << b.bill << "\n Your Order will be delivered in 40 minutes";
		cout << "\n Thank you For Ordering From Fast Food Corner\n";
	}
	else if (j_f_c == 3)
	{
		cout << "\nPlease Enter Quantity:" << endl;
		cin >> q.quantity;
		b.bill = q.quantity * price[2];
		cout << "\t\t\t------------Your order-------------------\n";
		cout << " " << q.quantity << " " << juices[j_f_c - 1];
		cout << "\n Your Total Bill is " << b.bill << "\n Your Order will be delivered in 40 minutes";
		cout << "\n Thank you For Ordering From Fast Food Corner\n";
	}
	else if (j_f_c == 4)
	{
		cout << "\nPlease Enter Quantity:" << endl;
		cin >> q.quantity;
		b.bill = q.quantity * price[3];
		cout << "\t\t\t------------Your order-------------------\n";
		cout << " " << q.quantity << " " << juices[j_f_c - 1];
		cout << "\n Your Total Bill is " << b.bill << "\n Your Order will be delivered in 40 minutes";
		cout << "\n Thank you For Ordering From Fast Food Corner\n";
	}
	else
	{
		cout << "\t\t-------------------Your Order is Not available----------------" << endl;
	}
	return 0;
}
int main()
{
	char z;
	string name;
	string pizza[4] = { "chicken Fazita", "Chicken Bar BQ", "Peri Peri", "Creamy Max" };
	string sand[3] = { "Club Sandwich", "Chicken Crispy Sandwich", "Chicken Crispy Sandwich" };
	string juices[5]{ "apple juice", " orange juice", "beetroot juice", "mango juice", "carrot juice" };
	int choice;
	cout << "\t\t\t-----------------------------------Fast Food Corner----------------------------------------\n\n";
	cout << "Please Enter Your full Name with full stop(.):";
	getline(cin, name, '.');

	cout << "Hello " << name << "\n here is our menu\n\n";
	cout << "\t\t\t\t----------------------Menu--------------------------\n\n";

	do
	{
		menu();

		cout << "\nEnter your choice:" << endl;
		cin >> choice;

		if (choice == 1)
		{
			pizza_flavour(pizza);
		}
		else if (choice == 2)
		{
			sandwich_flav(sand);
		}
		else if (choice == 3)
		{
			juice_flav(juices);
		}
		else if (choice == 4)
		{
			exit(0);
		}
		else if (choice>5)
		{
			cout << "Sorry we don't have you choice...." << endl;

		}
		cout << "Do you want to see menu again? " << endl;
		cout << "Then press y otherwise press any other character" << endl;
		cin >> z;
	} while (z == 'Y' || z == 'y');
	system("pause");
	return 0;
}