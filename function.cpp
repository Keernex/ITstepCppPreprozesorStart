#include "function.h" 

// -------------------- 
void random_mas_int(int arr[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}

void random_mas_double(double arr[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        arr[i] = static_cast<double>(rand()) / RAND_MAX;
    }
}


void random_mas_char(char arr[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        arr[i] = static_cast<char>('A' + rand() % 26);
    }
}
// -------------------- 

void print_mas_int(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print_mas_double(const double arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print_mas_char(const char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// -------------------- 
int min_mas_int(const int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

double min_mas_double(const double arr[], int size)
{
    double min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

char min_mas_char(const char arr[], int size)
{
    char min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

// -------------------- 
int max_mas_int(const int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

double max_mas_double(const double arr[], int size)
{
    double max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

char max_mas_char(const char arr[], int size)
{
    char max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
// -------------------- 

void sort_mas_int(int arr[], int size)
{
    sort(arr, arr + size);
}


void sort_mas_double(double arr[], int size)
{
    sort(arr, arr + size);
}

void sort_mas_char(char arr[], int size)
{
    sort(arr, arr + size);
}

// -------------------- 
void redaction_mas_int(int arr[], int index, int newValue)
{
    arr[index] = newValue;
}

void redaction_mas_double(double arr[], int index, double newValue)
{
    arr[index] = newValue;
}

void redaction_mas_char(char arr[], int index, char newValue)
{
    arr[index] = newValue;
}