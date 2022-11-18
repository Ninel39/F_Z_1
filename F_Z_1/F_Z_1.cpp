// F_Z_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
/*Написать функцию, которая принимает два параметра: основание степени и показатель
степени, и вычисляет степень числа на основе полученных данных.
*/

int powInnumber(int number, int powNum)
{
    if (powNum == 0)
        return 1;
    if (powNum == 1)
        return number;
    int result = number;
    for (int i = 0; i < powNum - 1; i++)
        result *= number;
    return result;
}

int main()
{
    int number, powNum;
    cout << "Enter number : ";
    cin >> number;
    cout << "Enter pow : ";
    cin >> powNum;
    cout << "Rezultat = " << powInnumber(number, powNum) << endl;
}

