#include <iostream>
using namespace std;
int main(){
    int i;
    int j;
    int arr[2][3];
    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"the contents are"<<endl;
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
           cout << arr[i][j] << " -> " << 5 * arr[i][j] << endl;

        }
        cout<<endl;
    }
    return 0;
}