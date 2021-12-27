#include<iostream>//стандартная библиотека основных операций
#include <string>

using namespace std;//облегчает ввод данных

class Index
{
private:
	string name;
	string street;
	int numberD;
	int numberK;
	string city;
	string area;
	int index;
public:
	Index(string name, string street, int numberD, int numberK, string city, string area, int index)
	{
		this->name = name;//переменная для имени
		this->street = street;//переменная для улицы
		this->numberD = numberD;//переменная для номера дома
		this->numberK = numberK;//переменная для номера квартиры
		this->city = city;//переменная для города
		this->area = area;//переменная для области
		this->index = index;//переменная для индекса
	}
	void Information()
	{
		cout << "Name: " << name << endl;
		cout << "Street: " << street << endl;
		cout << "NumberD: " << numberD << endl;
		cout << "NumberK: " << numberK << endl;
		cout << "City: " << city << endl;
		cout << "Area: " << area << endl;
		cout << "Index: " << index << endl;
	}
};
int main()
{
	Index I("Valeria", "Stroitelei", 60, 208, "Ivanovo", "Ivanovo region", 153040);
	I.Information();
}