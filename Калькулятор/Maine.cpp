#include <iostream> //Включаем поток ввода вывода
using namespace std; //подключаем пространство имен std
int main()
{
	setlocale(0, ""); //В кодировке UTF-8 не выводит русские символы на дисплей. пришлось сет локал добавить
	int a, b; //Инициализируем целые переменные
	cout << "Введите два целых числа a и b " << endl; //Выводим на дисплей запрос 
	cin >> a >> b; //Вводим переменные в программу
	cout << "a+b = " << (a+b) << endl << "a-b = " << (a-b) << endl << "a*b = " << (a*b) << endl << "a/b = " << (a/b) << endl; //Выводим результаты вычислений на экран
	cout << "Остаток от деления a/b = " << (a%b) << endl << "a И b = " << (a&b) << endl << "a ИЛИ b = " << (a|b) << endl << "a Исключающее ИЛИ b = " << (a^b) << endl; // Продолжаем выводить на дисплей
	return 0; //Спасибо за внимание =)
	}