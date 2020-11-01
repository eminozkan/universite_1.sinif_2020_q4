#include <iostream>

using namespace std;

int main(){
    int rows;
    char typeofPyramid = 'X';
    cout << "Enter number of rows:";
    cin >> rows;
    int row=1;
        if (rows>0) {
            while (rows != 0) {

                for (int i = 0; i < (rows - 1); i++) {
                    cout << ' ';
                }
                for (int j = 0; j < row; j++) {
                    cout << typeofPyramid;
                }

                cout << endl;

                row += 2;
                rows--;


            }
        }else{
            cout << "Please enter number bigger than Zero";
            return -1;
        }








    return 0;
}
