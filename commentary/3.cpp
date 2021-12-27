#include <iostream>//стандартная библиотека основных операций
#include <string>//библиотека символов
using namespace std;//облегчает ввод данных

class duck //создаем функцию
{

public://открытые члены  — это члены класса, к которым можно получить доступ извне этой же структуры или класса
	string name;//символьная переменная для имени

	void swim()
	{
		cout << name << " is swimming" << endl;//выводится фраза "Уточка плавает"
	}

	void fly()
	{
		cout << name << " is flying" << endl;//выводится фраза "Уточка летает"
	}

	void quack()
	{
		cout << name << " is quacking" << endl;//выводится фраза "Уточка крякает"
	}
};

int main()//создается функция 
{
	duck the_best;//локальная переменная 
	the_best.name = "UTOCHKA";// имя - уточка
	the_best.swim(); //плавает
	the_best.fly();//летает
	the_best.quack();//крякает
}