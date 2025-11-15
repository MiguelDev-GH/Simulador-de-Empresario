#include <iostream>
#include <time.h>
#include <conio.h>

using namespace std;

int main()
{
    int numInput;
    clock_t start = clock();
    cout << "Timer: 2 sec"<<endl;
    cout << "Please enter the input: ";

    while ( ! _kbhit() ) //Check for keyboard hit
    {
        //Check if 2 sec timer expired or not
        if (((clock () - start)/ CLOCKS_PER_SEC ) >= 2) 
        {
            cout << "\nTimeout  2 sec . . ." << endl;
            cout << "Please enter the input: ";
            start = clock();                            //Set new timer
        }
    }

    //Get the input here
    cin >> numInput;
    cout << "Data accepted: " << numInput << endl;
    _getch();

    return 0;
}