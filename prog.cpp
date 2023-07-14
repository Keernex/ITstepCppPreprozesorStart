#include "function.h"

#define MY_MACRO_VALUE q


int main()
{
    const int size = 100;
    int arr_int[size];
    double arr_double[size];
    char arr_char[size];

    int q = 0;
    cout << "What data type to use?" << endl;
    cout << "1 - int" << endl; 
    cout << "2 - double" << endl;
    cout << "3 - char" << endl;
    cin >> q;
    if (q == 1)//int
    {
    #define random_mas random_mas_int
    #define print_mas print_mas_int
    #define min_mas min_mas_int 
    #define max_mas max_mas_int 
    #define sort_mas sort_mas_int 
    #define redaction_mas redaction_mas_int 
        while (true)
        {
            int w = 0;
            cout << "1 - random" << endl;
            cout << "2 - print" << endl;
            cout << "3 - min" << endl;
            cout << "4 - max" << endl;
            cout << "5 - sort" << endl;
            cout << "6 - redaction" << endl;
            cout << "7 - end" << endl;
            cin >> w;

            if (w == 1)
            {
                random_mas(arr_int, size);
            }
            if (w == 2)
            {
                print_mas(arr_int, size);
            }
            if (w == 3)
            {
                cout << min_mas(arr_int, size) << endl;
            }
            if (w == 4)
            {
                cout << max_mas(arr_int, size) << endl;
            }
            if (w == 5)
            {
                sort_mas(arr_int, size);
            }
            if (w == 6)
            {
                int index;
                cout << "Which symbol to change: ";
                cin >> index;
                int newValue;
                cout << "What symbol to change to: ";
                cin >> newValue;
                redaction_mas(arr_int, index, newValue);
            }
            if (w == 7)
            {
                break;
            }
        }
    }
    if (q == 2)//double
    {
    #define random_mas random_mas_double 
    #define print_mas print_mas_double 
    #define min_mas min_mas_double 
    #define max_mas max_mas_double 
    #define sort_mas sort_mas_double 
    #define redaction_mas redaction_mas_double 
        while (true)
        {
            int w = 0;
            cout << "1 - random" << endl;
            cout << "2 - print" << endl;
            cout << "3 - min" << endl;
            cout << "4 - max" << endl;
            cout << "5 - sort" << endl;
            cout << "6 - redaction" << endl;
            cout << "7 - end" << endl;
            cin >> w;

            if (w == 1)
            {
                random_mas(arr_double, size);
            }
            if (w == 2)
            {
                print_mas(arr_double, size);
            }
            if (w == 3)
            {
                cout << min_mas(arr_double, size) << endl;
            }
            if (w == 4)
            {
                cout << max_mas(arr_double, size) << endl;
            }
            if (w == 5)
            {
                sort_mas(arr_double, size);
            }
            if (w == 6)
            {
                int index;
                cout << "Which symbol to change: ";
                cin >> index;
                double newValue;
                cout << "What symbol to change to: ";
                cin >> newValue;
                redaction_mas(arr_double, index, newValue);
            }if (w == 7)
            {
                break;
            }
        }
    }
    if (q == 3)//char
    {
    #define random_mas random_mas_char 
    #define print_mas print_mas_char 
    #define min_mas min_mas_char 
    #define max_mas max_mas_char 
    #define sort_mas sort_mas_char 
    #define redaction_mas redaction_mas_char 
        while (true)
        {
            int w = 0;
            cout << "1 - random" << endl;
            cout << "2 - print" << endl;
            cout << "3 - min" << endl;
            cout << "4 - max" << endl;
            cout << "5 - sort" << endl;
            cout << "6 - redaction" << endl;
            cout << "7 - end" << endl;
            cin >> w;

            if (w == 1)
            {
                random_mas(arr_char, size);
            }
            if (w == 2)
            {
                print_mas(arr_char, size);
            }
            if (w == 3)
            {
                cout << min_mas(arr_char, size) << endl;
            }
            if (w == 4)
            {
                cout << max_mas(arr_char, size) << endl;
            }
            if (w == 5)
            {
                sort_mas(arr_char, size);
            }
            if (w == 6)
            {
                int index;
                cout << "Which symbol to change: ";
                cin >> index;
                char newValue;
                cout << "What symbol to change to: ";
                cin >> newValue;
                redaction_mas(arr_char, index, newValue);
            }if (w == 7)
            {
                break;
            }
        }
    }







    return 0;
}