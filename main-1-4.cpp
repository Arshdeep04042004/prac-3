int main() {
int size = 10;
double *old_array = new double[size];
double *new_array = new double[size];

for(int i=0; i<size; i++) {
old_array[i] = i*i*i/10.0;
}

copyArr(old_array, new_array, size);

cout << "The new array elements are: " << endl;
for(int i=0; i<size; i++) {
cout << new_array[i] << " ";
}
}