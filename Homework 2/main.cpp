//1.Выполнить циклический сдвиг массива вправо;
//2.массив из десяти элементов заполнить УНИКАЛЬНЫМИ случайными числами в диапазоне от 0 до 10;

#include<iostream>
using namespace std;

#define tab "\t"

//#define TASK_1
//#define TASK_2

int main()
{
    setlocale(LC_ALL, "Russian");

#ifdef TASK_1
    const int n = 10;
    int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
    //Вывод исходного массива на экран
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << tab;
    }
    cout << endl;

    //Сдвиг массива
    int shifts;
    cout << "Введите количество сдвигов: "; cin >> shifts;
    for (int i = 0; i < shifts; i++)
    {
        int buffer = arr[n - 1];            //буферная переменная
        for (int i = n; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = buffer;
    }

    //Вывод сдвинутого массива на экран
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << tab;
    }
    cout << endl;

#endif

#ifdef TASK_2
    setlocale(LC_ALL, "");
    const int n = 10;
    int arr[n];
    //заполнение массива уникальными случайными числами

    for (int i = 0; i < n; i++)
    {
        bool unique; //в этой переменной будем запоминать уник.наше число или нет
                     //флаг уникальности
        do {
            arr[i] = rand() % n;
            unique = true; //предполагаем что сгенерировалось уникальное случайное число
                           //но это нужно сравнить
            for (int j = 0; j < i; j++)
            {
                if (arr[i] == arr[j])
                {
                    unique = false;
                    break;
                }
            }
        } while (!unique);
    }
    //вывод массива
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << tab;
    }
    cout << endl;
#endif
}