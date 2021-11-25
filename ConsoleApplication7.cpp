#include<iostream>
using namespace std;
int main() {
    setlocale(0, "RU");
    int n, m, k, t, f;
    t = 0;
    while (t != 1)
    {
        cout << "Введите кол-во символов > \n";
        cin >> n;
        int* ar = new int[n];
        int* arr = new int[n];
        
        for (k = 0; k < n; k++) {
            ar[k] = rand() % 100 - 5; arr[k] = rand() % 100 - 5;
            cout << "1 массив > "<<ar[k]<<"   " << "2 массив > " << arr[k] << "\n";
            

        }
        f = 00;
        for (k = 0; k < n; k++) {
            for (m = 0; m < n; m++) {
                if (ar[k] != arr[m]) { f++; };
                
            }if (f < n - 1)ar[k] = 1000000;
            f = 0; 
        }

        for (k = 1; k < n; k++) {

            if (ar[k - 1] < ar[k]) { m = ar[k]; ar[k] = ar[k - 1]; ar[k - 1] = m; }//поиск наименьшего


        }for(k=0;k<n;k++)cout << "конечный массив > " << ar[k] << endl;
        cout << "наименьшее = " << ar[n - 1] << endl << "Чтобы продолжить введите 0, чтобы выйти из программы 1 -> ";
        cin >> t;

    delete[] ar;
    delete[] arr;}
}




