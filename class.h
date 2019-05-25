#include <iostream>
#include <string>

using namespace std;

class CS
{
public:
	CS() { os = "Windows"; };
	~CS() { cout << "CS удалено\n"; };
	void set_os(string os);
protected:
	string os;
};

class virus : public CS
{
public:
	virus() : CS() {};
	~virus() {};
protected:

};

class antivirus : public CS
{
public:
	antivirus() : CS() {};
	~antivirus() {};
	void set_price(int price);
	int get_price();
protected:
	int price;
};