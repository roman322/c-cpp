#include <iostream>
#include "math.h"
#include"iomanip"
#include"conio.h"
#define R 5

using namespace std;



class Matrix
{
private:
 double M[R][R];
public:
 void InputMatrix();
 void OutputMatrix();
 void Sort();
 void AverageArihmetic();
 void MuitiplicationOfAvAr(double *);
};
void Matrix::InputMatrix()
{

 for (int i = 0; i <R; i++)
 {
  for (int j = 0; j < R; j++)
  {
   std::cout<< "[" << i + 1 << "][" <<j + 1 << "]=";
   cin >> M[i][j];
  }
 }
}
void Matrix::OutputMatrix()
{

 for (int i = 0; i < R; i++)
 {
  for (int j = 0; j < R; j++)
   std::cout « setw(1) « M[i][j] « "" «" \t"
   ;
  std::cout « endl;
 }
 Sort();
}
void Matrix::Sort()
{

 int a = 5;
 int b = 5;
 int value, memory;
 for (int k = 0; k < a; k++)
  for (int i = 1; i < b; i++)
  {
   value = M[k][i]; memory = i;
   for (int j = 0; j < i; j++)
    if (value > M[k][j])
    {
     memory = j; break;
    }
   for (int j = i; j >= memory + 1; j--)
    M[k][j] = M[k][j - 1];
   M[k][memory] = value;
  }
}
void Matrix::AverageArihmetic()
{


 double sum[R];
 int i, j;
 for (i = 0; i < R; i++)
  sum[i] = 0;

 std::cout << endl;
 for (int i = 0; i < R; i++)
 {
  for (int j = 0; j < (R - i); j++)
  {
   sum[j] = sum[j] + M[i][j];
  }
 }
 for (int i = 0; i < R; i++)
 {
  std::cout << "Sum of column " <<i + 1 << " = ";
  std::cout << sum[i] << endl;
 }
 MuitiplicationOfAvAr(sum);
}

void Matrix::MuitiplicationOfAvAr(double*ptr)
{
 double Multiplication = 1;
 for (int i = 0; i < R - 1; i++)
 {
  Multiplication = Multiplication*ptr[i];
 }
 std::cout << "MuitiplicationOfAverageArihmetic= " << Multiplication« endl;
}



void main(void)
{

 Matrix A;
 std::cout << "Input elements of matrix A" << endl;
 A.InputMatrix();
 std::cout << "\nnewInput Matrix A" << endl;
 A.OutputMatrix();
 A.Sort();
 std::cout << "\nnewSorted Matrix A" << endl;
 A.OutputMatrix();
 std::cout << "\nAverageArihmetic = "<<endl;
 A.AverageArihmetic();
 getchar;
 system("pause");
}