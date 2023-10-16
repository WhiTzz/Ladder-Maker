#include <iostream>
using namespace std;
int main()
{
    int lar, choice, i, Void;
    do
    {
        cout <<" Enter 1 for pyramid, 2 for ladder and 3 for pyramid divided in half" << endl;
        cin >> choice;
        if (choice > 3 && choice < 1)
        {
            cout << "Please, select a valid alternative" << endl;
            choice = -100;
        }
    } while (choice == -100);
    int n = 0;
    cout <<"How tall do you want for your shape?" << endl;
    cin >> lar;
    if (choice == 1)
    {
        for (i = lar; i > 0; i--)
        {

            n++;
            Void = i - 1;

            for (int m = 0; m < Void; m++)
            {
                cout << " ";
            }
            for (int k = 0; k < ((n * 2) - 1); k++)
            {
                cout << "#";
            }
            cout << "" << endl;
        }
    }
    if (choice == 2)
    {
        for (i = lar; i > 0; i--)
        {

            n++;
            Void = i - 1;

            for (int m = 0; n < Void; m++)
            {
                cout << " ";
            }
            for (int k = 0; k < n; k++)
            {
                cout << "#";
            }
            cout << "" << endl;
        }
    }

    if (choice == 1)
    {
        for (i = lar; i > 0; i--)
        {

            n++;
            Void = i - 1;

            for (int m = 0; m < Void; m++)
            {
                cout << " ";
            }
            for (int k = 0; k < ((n * 2) - 1); k++)
            {
                cout << "#";
            }
            cout << "" << endl;
        }
    }
    if (choice == 2)
    {
        for (i = lar; i > 0; i--)
        {

            n++;
            Void = i - 1;

            for (int m = 0; m < Void; m++)
            {
                cout << " ";
            }
            for (int k = 0; k < n; k++)
            {
                cout << "#";
            }
        }
    }
    if (choice == 3)
    {
        for (i = lar; i > 0; i--)
        {

            n++;
            Void = i - 1;

            for (int m = 0; m < Void; m++)
            {
                cout << " ";
            }
            for (int k = 1; k <= ((n * 2)); k++)
            {
                cout << "#";
                if (k == n)
                {
                    cout << " ";
                }
            }
           cout<<endl;
        }
    }
}
