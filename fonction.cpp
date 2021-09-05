#include<iostream>
#include<string>

using namespace std;

void bonjour() {
    cout<<"Entrez votre prenom :";
    string prenom;
    cin>>prenom;
    cout<<"Bonjour "<<prenom<<"\n";
}

int main() {
    bonjour();
    return 0;
}
