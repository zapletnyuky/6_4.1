#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(double*& a, const int size, const double Min, const double Max)
{
  for (int i = 0; i < size; i++)
    a[i] = Min + rand() * (Max - Min) / RAND_MAX;
}
void Print(double*& a, const int size)
{
  for (int i = 0; i < size; i++)
    cout << setw(10) << a[i];
  cout << endl;
}

int Max(double*& a, const int size)
{
    int max = a[0];
    for (int i=1; i<size; i++)
        if (a[i]>max)
            max=a[i];
return max;
}

void Nul(double*& a, const int size)
{
    int mul=1,i=0;
    for (; i < size; i++)
        if(a[i]==0)
            break;
    for (++i; i < size; i++)
    {
        if (a[i] == 0 )
            break;
        mul*=a[i];
    }
}
    int main()
    {
        srand((unsigned)time(NULL));
        int Low = 7;
        int High = 65;
        int n;
        cout << "n = "; cin >> n;
        double* a;
        a = new double[n];
        //int i;
        //int **a = new int*[n];
        Create(a, n, Low, High);
        Print(a, n);
        cout << "MaxEl = " << Max(a, n) << endl;
        //int b[n];
        cout<< "Nul = " << Nul(a, n)<< endl;
        Print(a, n);
        cout << "Sort :" << endl;
        //Sort(a, n);
        Print(a, n);
        delete []a;
    }
