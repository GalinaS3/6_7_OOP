#include"Appliances.h"

Appliances::Appliances(int weght) : _weght(weght)
{}
void Appliances::showSpec()
{
	cout << "Weght: " << _weght << " grams" << endl;
}

Iron::Iron(int weght, string soleplate) : Appliances(weght), _soleplate(soleplate)
{

}

void Iron::showSpec()
{
	cout << "Weght: " << _weght << " grams" << endl;
	cout << "Soleplate: " << _soleplate << endl;
}

Teapot::Teapot(int weght, float volume) : Appliances(weght), _volume(volume)
{
}

void Teapot::showSpec()
{
	cout << "Weght: " << _weght << " grams" << endl;
	cout << "Volume: " << _volume << " liters" << endl;
}