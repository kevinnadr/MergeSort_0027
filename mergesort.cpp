#include <iostream>
using namespace std;

//create main array & temporary array
int arr[20], B[20];
//n is array input size
int n;

void input()
{
    while (true)
    {
        cout << "masukkan Panjang element array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksismal panjang array adalah 20";
        }
    }
