#ifndef FUNCYION_H 

#define _CRT_SECURE_NO_WARNINGS 
#include <iostream> 
#include <regex> 
#include <time.h> 
#include <windows.h> 
#include <algorithm> 
#include <string> 
#include <sstream> 
#include <cstring> 
#include <cctype> 
#include <vector> 
using namespace std;


#define random_mas random_mas_int 
#define random_mas random_mas_double 
#define random_mas random_mas_char 
void random_mas_int(int arr[], int size);
void random_mas_double(double arr[], int size);
void random_mas_char(char arr[], int size);

#define print_mas print_mas_int 
#define print_mas print_mas_double 
#define print_mas print_mas_char 
void print_mas_int(const int arr[], int size);
void print_mas_double(const double arr[], int size);
void print_mas_char(const char arr[], int size);


#define min_mas min_mas_int 
#define min_mas min_mas_double 
#define min_mas min_mas_char 
int min_mas_int(const int arr[], int size);
double min_mas_double(const double arr[], int size);
char min_mas_char(const char arr[], int size);

#define max_mas max_mas_int 
#define max_mas max_mas_double 
#define max_mas max_mas_char 
int max_mas_int(const int arr[], int size);
double max_mas_double(const double arr[], int size);
char max_mas_char(const char arr[], int size);

#define sort_mas sort_mas_int 
#define sort_mas sort_mas_double 
#define sort_mas sort_mas_char 
void sort_mas_int(int arr[], int size);
void sort_mas_double(double arr[], int size);
void sort_mas_char(char arr[], int size);

#define redaction_mas redaction_mas_int 
#define redaction_mas redaction_mas_double 
#define redaction_mas redaction_mas_char 
void redaction_mas_int(int arr[], int index, int newValue);
void redaction_mas_double(double arr[], int index, double newValue);
void redaction_mas_char(char arr[], int index, char newValue);

#endif