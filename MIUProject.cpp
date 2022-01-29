#include <iostream>
#include <iomanip>
using namespace std;

// Making 2 arrays, one for price & the other for ID. The item originally will be identified through its index. 

void Option1INPUT(int arrayPRICE[], int arrayID[])
{
	for (int i = 0; i < 50; i++)
	{
		cout << "Enter the id of item number " << i + 1 << ": ";
		cin >> arrayID[i];
		cout << "Enter the price of item number " << i + 1 << ": ";
		cin >> arrayPRICE[i];
	}
}

void Option2PRICE(int arrayPRICE[], int arrayID[])
{
	cout << "Please type the item's ID";
	int id;
	cin >> id;
	for (int i = 0; i < 50; i++)
	{
		if (id == arrayID[i]);
		{
			cout << arrayPRICE[i] << "$";
		}
	}
}

void Option3RANGE(int arrayPRICE[], int arrayID[])
{
	int Price1, Price2;
	cout << "Please enter the range of prices: ";
	cin >> Price1 >> Price2;

	for (int i = 0; i < 50; i++)
	{
		if (Price1 < arrayPRICE[i] && Price2 > arrayPRICE[i] || Price1 > arrayPRICE[i] && Price2 < arrayPRICE[i])
		{
			cout << arrayID[i] << " ";
		}
	}
}

void Option4DELETE(int arrayPRICE[], int arrayID[])
{
	cout << "Please type the item's ID";
	int id;
	cin >> id;
	for (int i = 0; i < 50; i++)
	{
		if (id == arrayID[i]);
		{
			arrayID[i] = 0;
			arrayPRICE[i] = 0;
		}
	}

}

void Option5DISPALL(int arrayPRICE[], int arrayID[])
{
	for (int i = 0; i < 50; i++)
	{
		cout << "Item number: " << i + 1 << " : " << arrayID[i] << " " << arrayPRICE[i] << endl;
	}
}

void Option6DELALL(int arrayPRICE[], int arrayID[])
{
	for (int i = 0; i < 50; i++)
	{
		arrayPRICE[i] = 0;
		arrayID[i] = 0;
	}
}

int main()
{
	int itemsPRICE[50], itemsID[50];
	cout << "Please, choose an option:" << endl;
	cout << "(1)Input for ID&Price" << setw(25) << "(2)Price of an item" << setw(35) << "(3)Items within a range of prices" << setw(25) << "(4)Deleting an item" << setw(20) << "(5)View All Items" << setw(20) << "(6)Delete all." << endl;
	int s;
	cin >> s;
	if (s == 1)
	{
		Option1INPUT(itemsPRICE, itemsID); // Input for both the ID&Price of an item through the index of the item.
	}
	else if (s == 2)
	{
		Option2PRICE(itemsPRICE, itemsID); // View the price of an item.
	}
	else if (s == 3)
	{
		Option3RANGE(itemsPRICE, itemsID); // Enter the range of prices, all the items between these two prices will be displayed.
	}
	else if (s == 4)
	{
		Option4DELETE(itemsPRICE, itemsID); // The ID & Price of the item will be set to 0.
	}
	else if (s == 5)
	{
		Option5DISPALL(itemsPRICE, itemsID); // Display the values of both the price and id of all the items.
	}
	else if (s == 6)
	{
		Option6DELALL(itemsPRICE, itemsID); // All the IDs and Prices will be set to 0.
	}
	else cout << "Invalid. Please choose a proper option.";
}