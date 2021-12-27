#include <iostream>//стандартная библиотека основных операций
using namespace std;//облегчает ввод данных

int main() //создаем функцию
{
    int length, height, i, j;//переменные для длины, ширины, счетчики
    cout << "enter length: ";//введите длину
    length=12;//(здесь был cin)
    cout << length ;//выводим длину
    cout << "";//отступ

    cout << "enter height: ";//введите ширину
    height=6;//(здесь был cin)
    cout << height;//выводим длину
    cout << "";//отступ

    //создаем циклы

    for (j = 0; j <= height - 1; j++)//цикл для высоты
    {
        cout << "*";//выводится символ

        for (i = 0; i <= length - 1; i++)//цикл для ширины
            cout << "*";//выводится символ
        cout << "*" << endl;//выводится символ
    }

    system("pause");//системный вызов команды pause 
}