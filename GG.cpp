#include <iostream>
using namespace std;
void findminmax(int *arr, int n, int*minval, int*maxval) {
 *minval = *arr;
 *maxval = *arr;
 for(int i=1; i<n; i++){
    if (*(arr+ i) < *minval)
        *minval = *(arr+ i);
    if (*(arr+ i) > *maxval)
        *maxval = *(arr+ i);
 }
}
int main(){
int n;
cout<<"enter the size of array:";
cin>>n;
int *arr = new int[n];
cout<<"enter"<<n<<"elements: \n";
for(int i=0; i<n; i++){
    cout<<"elements" << i+1 << ":";
    cin>>*(arr+i);
}
int minval, maxval;
findminmax(arr, n, &minval, &maxval);
cout<<"min value is: "<<minval<<endl;
cout<<"max value is: "<<maxval<<endl;
delete[] arr;
return 0;
}