#include "RobotCleaner.h"

RobotCleaner::RobotCleaner(int bateryLife, int weght, int square) : Device(bateryLife), Appliances(weght), _square(square)
{
}

void RobotCleaner::showSpec()
{
	cout << "Work time: " << _bateryLife << " hours" << endl;
	cout << "Weght: " << _weght << " grams" << endl;
	cout << "Square: " << _square << " meters" << endl;
}

