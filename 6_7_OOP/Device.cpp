#include "Device.h"

Device::Device(int bateryLife) : _bateryLife(bateryLife)
{
}
void Device::showSpec()
{
	cout << "Work time: " << _bateryLife << " hours" << endl;
}

Player::Player(int bateryLife, int tracks) : Device(bateryLife), _tracks(tracks)
{
}

void Player::showSpec()
{
	cout << "Work time: " << _bateryLife << " hours" << endl;
	cout << "Tracks: " << _tracks << endl;
}

Smartphone::Smartphone(int bateryLife, float diagonal) : Device(bateryLife), _diagomal(diagonal)
{
}

void Smartphone::showSpec()
{
	cout << "Work time: " << _bateryLife << " hours" << endl;
	cout << "Diagomal: " << _diagomal << " inches" << endl;
}