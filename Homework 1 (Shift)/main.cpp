//реализовать циклический сдвиг массива на заданное число элементов.
//Элементы массива должны изменитьсвое расположение в памяти

#include<iostream>
using namespace std;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int nul[n];

	cout << "Введите значение элементов массива: ";
	for (int i = 0; i < n; i++) cin >> arr[i];                 //ввод массива

	for (int i = 0; i< n; i++) cout << arr[i] << tab;         //вывод массива
	cout << endl;

	for (int i = 0; i < n; i++) nul[i] = arr[i];               //создание копии массива

	int shift;
	cout << endl << "Введите желаемый сдвиг: "; cin >> shift;  // ввод сдвига

	/*int t = n - shift;
	for (int i = 0; i < t; i++) arr[i] = arr[i + shift];       //сдвиг первых t ячеек

	for (int i = 0; i < shift; i++)                            //сдвиг "хвоста" ячеек (n-t=shift)
	{
		arr[t] = nul[i];
		t++;
	}

	for (int i = 0; i < n; i++) cout << arr[i] << tab;         //вывод сдвинутого массива
	*/
	////
	for (int i = 0; i < shift; i++)
	{
		/*int buffer = arr[1];
		for (int j = n; j > 0; j--)
		{
			buffer = arr[n];            //буферная переменная
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
		*/
		int buffer = arr[n - 1];
		for (int j = n-1; j > 0; j--)
		{
			           //буферная переменная
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
	for (int i = 0; i < n; i++) cout << arr[i] << tab;
}