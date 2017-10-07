/*
применяя циклы, необходимо нарисовать прямоугольник размером 5 х 15 из символов @.
Можно эту задачу немного усложнить. Теперь пусть символ для печати фигуры выбирает
пользователь, посредством ввода с клавиатуры. Он же выберет размер – ширину и высоту.
Еще одно новшество – фигура должна быть пустой, а не заполненной, как в нашем
предыдущем примере. То есть она должна состоять только из контура.
*/

#include <iostream>
using namespace std;

int main()
{
    int str, col;
    char ch;
    int i, j;
    cout << "Enter number of strings, columns and type of characters: ";
    cin >> str >> col >> ch;

    for (i=1; i<=str; i++) {
        for (j=1; j<=col; j++)
            (i == 1 || i==str || j==1 || j==col) ? cout << ch : cout << " ";

        cout << endl;
    }
    return 0;
}


 /* Расшифровка тернарного оператора
    if(i == 0 || i==str-1 || j==0 || j==col-1)
        cout << ch;
    else
        cout << " ";
*/