#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
class Array {
private:

public:  void Input(int *A, int n) {
  for (int i = 1; i <= n; i++)
  {
   cout << i << " Element ";
   cin >> A[i];
  }
 }
 void Output(int *A, int n) {
  for (int i = 1; i <= n; i++)
  {
   if (i % 5 == 0)

   {
    cout << A[i] << "\n";
   }
   else { cout << A[i] << " "; }
  }
  cout << "\n";
 };
 void Merge(int *A, int first, int last)
 {
  int middle, start, final, j;
  int *mas = new int[100];
  middle = (first + last) / 2; 
  start = first; 
  final = middle + 1; 
  for (j = first; j <= last; j++)
   if ((start <= middle) && ((final > last) || (A[start] > A[final])))
   {
    mas[j] = A[start];
    start++;
   }
   else
   {
    mas[j] = A[final];
    final++;
   }

  for (j = first; j <= last; j++) A[j] = mas[j];
  delete[]mas;
 };

 void MergeSort(int *A, int first, int last)
 {
  {
   if (first < last)
   {
    MergeSort(A, first, (first + last) / 2); 
    MergeSort(A, (first + last) / 2 + 1, last); 
    Merge(A, first, last); 
   }
  }
 };
 void function(int *A)
 {
  double dob1, dob2, dob3, dob4,sum;
 dob1=(A[6]*A[11]*A[16]*A[21]);
 dob2=(A[12]*A[17]*A[22]);
 dob3=(A[18]*A[23]);
 dob4=(A[24]);
 sum=(dob1+dob2+dob3+dob4);

 cout << "Dobytok 1 column = " <<(dob1) << "\n";
 cout << "Dobytok 2 column = " << (dob2) << "\n";
 cout << "Dobytok 3 column = " << (dob3) << "\n";
 cout << "Dobytok 4 column = " << (dob4) << "\n";
 cout<<"Sum = "<<(sum)<<"\n"; 
  }
};
int main()
{
 Array matrix;
 int n,sum;
 int *A = new int[100];
 cout << "Size "; cin >> n;
 cout << endl;
 matrix.Input(A, n );
 cout << endl << "Entered matrix: \n";
 matrix.Output(A, n);
 matrix.MergeSort(A, 1, 5); 
 matrix.MergeSort(A, 6, 10); 
 matrix.MergeSort(A, 11, 15); 
 matrix.MergeSort(A, 16, 20); 
 matrix.MergeSort(A, 21, 25); 
 cout << "Sorted matrix: \n"; 
 matrix.Output(A, n);
 matrix.function(A);
}