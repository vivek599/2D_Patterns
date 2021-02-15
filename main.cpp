#include <iostream>

using namespace std;

void printSolidRect( int w, int h, bool bHollow) 
{
	if (bHollow)
	{
		cout << "Hollow Rectangle: " << endl;
		for (size_t j = 0; j < h; j++)
		{
			for (size_t i = 0; i < w; i++)
			{
				if (i == 0 || i == w - 1 || j == 0 || j == h - 1 )
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Solid Rectangle: " << endl;
		for (size_t j = 0; j < h; j++)
		{
			for (size_t i = 0; i < w; i++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}

	cout << "-------------" << endl;
}

void printHalfPyrammid(int w, int h, bool bHollow)
{
	int width = 0;

	if (bHollow)
	{
		cout << "Hollow HalfPyrammid: " << endl;
		for (size_t j = 0; j < h; j++)
		{
			if (width > w)
			{
				break;
			}

			width++;
			for (size_t i = 0; i < width; i++)
			{
				if (i == 0 || i == width - 1 || j == 0 || j == h - 1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Solid HalfPyrammid: " << endl;
		for (size_t j = 0; j < h; j++)
		{
			if (width > w)
			{
				break;
			}

			width++;
			for (size_t i = 0; i < width; i++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}

	cout << "-------------" << endl;
}

int main()
{ 
	printSolidRect(5, 3, false);

	printSolidRect(15, 13, true);

	printHalfPyrammid(5, 3, false);

	printHalfPyrammid(15, 13, true);




	system("pause");

	return 0;
}