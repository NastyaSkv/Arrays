 #include<iostream>
using namespace std;
#define DEC_2_BIN
#define Hexadecimal
#define tab "\t"
#define br break

void main()
{
	setlocale(LC_ALL, "");
#ifdef DEC_2_BIN
	int decimal; //десятичное число введенное пользователем
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_SIZE = 32; // int - 4 байта = 32 бита
	bool bin[MAX_SIZE] = {}; // этот массив будет хранить разряды двоичного числа

	int i = 0; //счетчик разрядов перед while
	/*
	while (decimal)
	{
		bin[i] = decimal % 2; //получаем младший разряд двоичного числа
		decimal /= 2;         //убираем полученный разряд двоичного числа
		i++;
	}*/
	for (; decimal; bin[i] = decimal % 2, decimal /= 2, i++); //for - это тот же while, только с дополнениями
	/* {
		;

	}*/
	//for (; decimal; i++, decimal /= 2)bin[i] = decimal % 2;
	//i--; //компенсируем разряд
	//for (int i = MAX_SIZE-1; i >= 0; i--)
	//попробуем не объявлять счетчик i
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
#endif
	//выведем аск таблицу
	for (int i = 0; i < 256; i++)cout << i << "\t" << char(i);
	cout << 'A' << endl;
	int decimal = 0;
	const int n = 8;
	int hex[n] = {};
	int i = 0;
	for (; decimal; i++)
	{
		hex[i] = decimal % 16;
		decimal /= 16;
	}
	cout << "0x"; //префикс
	for (--i; i >= 0; i--)
	{
		/*switch (hex[i])
		{
		case 10: cout << "A"; break;
		case 11: cout << "B"; break;
		case 12: cout << "C"; break;
		case 13: cout << "D"; break;
		case 14: cout << "E"; break;
		case 15: cout << "F"; break;
		default: cout << hex[i];
		}*/

	}
	cout << endl;
	//оптимизируем код
		/*if hex([i] < 10)
		{
			cout << char(hex[i]+48);
		}
		else
		{
			cout << char(hex[i] + 55);
		}*/
		//или
	for (--i; i >= 0; i--)
	{
		//	cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
		//или
		cout << char(hex[i] + (hex[i] < 10 ? 48 : 55));
	}
}