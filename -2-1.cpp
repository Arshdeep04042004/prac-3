//Question 2-1

#include<string.h>
#include<string>
#include<iostream>


using namespace std;

void print_sevens(int *nums, int length);

int main()
{
int old_array[5] = { 7,14,3,28,5 };
int *ptr = &old_array[0];

print_sevens(ptr, 5);

int a;
cin >> a;
return 0;
}

void print_sevens(int *nums, int length)
{
int i = 0;

for (; i < length; i++)
{
if (*(nums + i) % 7 == 0)
{
cout << *(nums + i) << endl;
}
}
}