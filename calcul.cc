#include <iostream>

using namespace std;

int somme(int x, int y)
{
 return x + y;
}
int difference(int x, int y)
{
 return x - y;
}
int multiplication(int x, int y)
{
 return x * y;
}
int division(int x, int y)
{
 return x / y;
}
double NouvelleSomme(double w, double z)
{
 return w + z;
}
double NouvelleDifference(double w, double z)
{
 return w - z;
}
double NouvelleMultiplication(double w, double z)
{
 return w * z;
}
double NouvelleDivision(double w, double z)
{
 return w / z;
}
int main(int argc, char const *argv[])
{
 int x = 2;
 int y = 4;
 double a;
 double b;
 double c;
 double d;
 int resultat1 = somme(x, y);
 int resultat2 = difference(x, y);
 int resultat3 = multiplication(x, y);
 int resultat4 = division(x, y);
 cout << "Voici les opérations: " << endl;
 cout << "La somme de x et y est : " << resultat1 << endl;
 cout << "La difference de x et y est : " << resultat2 << endl;
 cout << "La multiplication de x et y est : " << resultat3 << endl;
 cout << "La division de x et y est : " << resultat4 << endl;
 a = resultat1;
 b = resultat2;
 c = resultat3;
 d = resultat4;
 double z;
 double w;
 // cout << endl;
 cout << "Les valeurs de a, b ,c et d sont respectivement égales à: " << resultat1 << " " << resultat2 << " " << resultat3 << " " << resultat4 << " " << endl;
 cout << "Les mêmes opérations avec double w et double z:" << endl;

 w = 2;
 z = 4;
 double resultatS = NouvelleSomme(x, y);
 double resultatD = NouvelleDifference(x, y);
 double resultatM = NouvelleMultiplication(x, y);
 double resultatDi = NouvelleDivision(x, y);

 cout << "La somme de w et z est égale à: " << resultatS << endl;
 cout << "La différence de w et z est égale à: " << resultatD << endl;
 cout << "La multiplication de w et z est égale à: " << resultatM << endl;
 cout << "La multiplication de w et z est égale à: " << resultatDi << endl;

 return 0;
}
