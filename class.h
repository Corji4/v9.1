#include <iostream>
#include <string>

using namespace std;

class CS
{
public:
	CS() { os = "Windows"; };
	~CS() { cout << "����� CS �����\n"; };
	void set_os(string os);
protected:
	string os;
};

class virus : public CS
{
public:
	virus() : CS() {};
	~virus() { cout << "����� virus �����"; };
protected:

};

class antivirus : public CS
{
public:
	antivirus() : CS() {};
	~antivirus() { cout << "����� antivirus �����"; };
	void set_price(int price);
	int get_price();
protected:
	int price;
};

class system_administrator : public antivirus
{
public:
	system_administrator() : antivirus() {};
	~system_administrator() { cout << "����� system_administrator �����"; };
};

class classification : public virus
{
public:
	classification() : virus() {};
	~classification() { cout << "����� classification �����"; };
};