// exercice1 : Quel âge avez vous?

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
 int age;
 int annee;
 cout << "Quel âge avez vous ?" << endl;
 cout << "Entrez votre âge: " << endl;
 cin >> age;
 annee = 2023 - age;

 cout << "Vous avez " << age << " ans et vous êtes né vers  " << annee << endl;
 return 0;
}
