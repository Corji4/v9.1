#include "class.h"

void CS::set_os(string os)
{
	if (os.size())
	{
		this->os = os;
	}
}

void antivirus::set_price(int price)
{
	if (price)
	{
		this->price = price;
	}
}

int antivirus::get_price()
{
	return this->price;
}