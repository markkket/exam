#include <iostream>//стандартная библиотека основных операций
using namespace std;//облегчает ввод данных

int main()//создаем функцию 
{
	int age = 0;//переменная для возраста
	//распределяем категории
	string a = "babies";//младенцы
	string b = "children";//дети
	string c = "teenagers";//подростки
	string e = "young adults";//молодые люди
	string f = "actual adults";//взрослые
	string g = "old people";//возрастные
	string h = "vampires";//вампиры
	//вводим данные
	cout << "enter age:";//введите возраст
	age = 14;//вводится возраст(здесть был cin)
	cout << age;//выводится возраст
	cout << " ";//отступ
	//создаем условие
	if (age <= 0)
	{
		cout << "are not born yet";//если возраст <=0, то еще не рожденные 
	}
	if ((age <= 1) and (age > 0))
	{
		cout << "are babies";//если возраст от 0 до 1 года то, младенцы
	}
	if ((age > 1) and (age <= 12))
	{
		cout << "are children";//если возраст от 1 до 12 то, дети
	}
	if ((age > 12) and (age <= 17))
	{
		cout << "are teenagers";//если возраст от 13 до 17 то, подростки
	}
	if ((age > 17) and (age <= 30))
	{
		cout << "are young adults";//если возраст от 18 до 30 то, молодые люди
	}
	if ((age > 30) and (age <= 60))
	{
		cout << "are actual adults";//если возраст от 30 до 60 то, взрослые
	}
	if ((age > 60) and (age <= 110))
	{
		cout << "are old people";//если возраст от 60 до 110 то, возрастные
	}
	if (age > 110)
	{
		cout << "are vampires";//если возраст от 110 то, вампиры
	}
}