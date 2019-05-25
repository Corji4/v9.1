#include <iostream>
#include <string>

using namespace std;

class CS
{
public:
	CS() { os = "Windows"; };
	~CS() { cout << "класс CS удалён\n"; };
	void set_os(string os);
protected:
	string os;
};

class virus : public CS
{
public:
	virus() : CS() {};
	~virus() { cout << "класс virus удалён"; };
protected:

};

class antivirus : public CS
{
public:
	antivirus() : CS() {};
	~antivirus() { cout << "класс antivirus удалён"; };
	void set_price(int price);
	int get_price();
protected:
	int price;
};

class system_administrator : public antivirus
{
public:
	system_administrator() : antivirus() {};
	~system_administrator() { cout << "класс system_administrator удалён"; };
};

class classification : public virus
{
public:
	classification() : virus() {};
	~classification() { cout << "класс classification удалён"; };
};