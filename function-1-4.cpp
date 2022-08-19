#include <iostream>
#include <cstring>

using namespace std;

void copyArr(double *old_array, double *new_array, int length) {

for(int i=0; i<length; i++) {

*(new_array + i) = *old_array;

*old_array ++;
}
}