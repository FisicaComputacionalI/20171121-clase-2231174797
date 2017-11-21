#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  cout << "Introduce un ángulo:";
  double angulo;
  cin >> angulo;
  double coseno = cos((angulo*3.1416)/180);
  cout << "El coseno de " << angulo << " es "  << coseno << endl;
  return 0;
}
