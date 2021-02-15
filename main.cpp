#include <iostream>

using namespace std;

void PrintSolidRect( int w, int h, bool bHollow) 
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

void PrintHalfPyrammid(int w, int h, bool bHollow)
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

void PrintInvertedHalfPyrammid(int w, int h, bool bHollow)
{
	int width = w;

	if (bHollow)
	{
		cout << "Hollow Inverted HalfPyrammid: " << endl;
		for (size_t j = 0; j < h; j++)
		{
			if (width < 0 )
			{
				break;
			}

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
			width--;
		}
	}
	else
	{
		cout << "Solid Inverted HalfPyrammid: " << endl;
		for (size_t j = 0; j < h; j++)
		{
			if (width < 0)
			{
				break;
			}

			for (size_t i = 0; i < width; i++)
			{
				cout << "*";
			}
			cout << endl;
			width--;
		}
	}

	cout << "-------------" << endl;
}

void PrintFullPyrammid(int w, int h, bool bHollow)
{
	int width = 1;
	int halfwidth = w/2 + 1;
	int hwidth2 = halfwidth;

	if (bHollow)
	{
		cout << "Hollow FullPyrammid: " << endl;
		for (size_t j = 0; j < h; j++)
		{
			if (width > w)
			{
				break;
			}

			hwidth2--;
			if (hwidth2 > 0)
			{
				for (size_t i = 0; i < hwidth2; i++)
				{
					cout << " ";
				}
			}

			for (size_t i = 0; i < width; i++)
			{
				if (i == 0 || i == width - 1 || j == 0 || j == h - 1)
				{
					if (i % 2 == 0)
					{
						cout << "*";
					}
					else
					{
						cout << "#";
					}
				}  
				else
				{
					cout << "#";
				}

			}

			width += 2;

			cout << endl;
		}
	}
	else
	{
		cout << "Solid FullPyrammid: " << endl;
		for (size_t j = 0; j < h; j++)
		{
			if (width > w)
			{
				break;
			}

			hwidth2--;
			if (hwidth2 > 0 )
			{
				for (size_t i = 0; i < hwidth2; i++)
				{
					cout << " ";
				}
			}

			for (size_t i = 0; i < width; i++)
			{
				if (i % 2 == 0)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}

			width += 2;

			cout << endl;
		}
	}

	cout << "-------------" << endl;
}

int main()
{ 
	//PrintSolidRect(5, 3, false);
	//
	//PrintSolidRect(15, 13, true);
	//
	//PrintHalfPyrammid(5, 5, false);
	//
	//PrintHalfPyrammid(15, 15, true);
	//
	//PrintInvertedHalfPyrammid(5, 5, false);
	//
	//PrintInvertedHalfPyrammid(15, 15, true);

	PrintFullPyrammid(20, 15, false);

	PrintFullPyrammid(16, 16, true);


	system("pause");

	return 0;
}