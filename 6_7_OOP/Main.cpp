#include"RobotCleaner.h"

int main()
{
	setlocale(LC_ALL, "");

	IElectronics* electr[5];

	electr[0] = new Player(50, 300);
	electr[1] = new Smartphone(100, 14.7);
	electr[2] = new Iron(2200, "Teflon");
	electr[3] = new Teapot(3, 1.6);
	electr[4] = new RobotCleaner(4, 3000, 80);
	
	bool ex = true;
	while (ex)
	{
		cout << "Make a choice : 1 - pleyer, 2 - smartphone, 3 - iron, 4 - teapot, 5 - robot-cliner, 0 -  выход" << endl;
		int vibor;
		cin >> vibor;

		switch (vibor)
		{
		case 1:
			electr[0]->showSpec();
			break;
		case 2:
			electr[1]->showSpec();
			break;
		case 3:
			electr[2]->showSpec();
			break;
		case 4:
			electr[3]->showSpec();
			break;
		case 5:
			electr[4]->showSpec();
			break;
		case 0:
			ex = false;
			break;
		default:
			cout << "Выбор от 0 до 5" << endl;
			break;
		}
	}
		

	delete electr[0];
	delete electr[1];
	delete electr[2];
	delete electr[3];
	delete electr[4];

	return 0;
}


