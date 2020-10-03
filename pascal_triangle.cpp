#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int rows, c = 1;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 0; i < rows; i++)
    {
        for(int space = 1; space <= rows-i; space++)
            cout <<setw(3)<< " ";
        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                c = 1;
            else
                c = c*(i-j+1)/j;
            cout <<setw(3)<< c <<setw(3)<< " ";
        }
        cout << endl;
    }
    return 0;
}
