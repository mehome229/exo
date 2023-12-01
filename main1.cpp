<<<<<<< HEAD
#include<iostream>
using namespace std;

// Fonction pour le chiffrement affine
string chiffrementAffine(string message, int coefficientA, int coefficientB)
{
    string messageChiffre = "";
    for (int i = 0; i < message.length(); i++)
    {
        if(message[i]!=' ')
            /* Chiffrement affine c = (a*x + b) % 26 */
            messageChiffre = messageChiffre + (char) ((((coefficientA * (message[i]-'A') ) + coefficientB) % 26) + 'A');
        else
            // Ajouter l'espace
            messageChiffre += message[i];
    }
    return messageChiffre;
}

int main(void)
{
    string message;
    int coefficientA, coefficientB;
    cout << "Entrez le message à chiffrer: ";
    getline(cin, message);
    cout << "Entrez la valeur du coefficient A: ";
    cin >> coefficientA;
    cout << "Entrez la valeur du coefficient B: ";
    cin >> coefficientB;
    string texteChiffre = chiffrementAffine(message, coefficientA, coefficientB);
    cout << "Texte chiffré: " << texteChiffre << endl;
=======
#include <iostream>
#include <string>

std::string chiffrementCesar(const std::string& texte, int decalage) {
    std::string resultat = "";

    for (char caractere : texte) {
        if (caractere == ' ') {
            // Ne pas chiffrer les espaces, les conserver inchangés
            resultat += ' ';
        } else {
            // Chiffrer les caractères alphabétiques en tenant compte du décalage
            char nouveauCaractere = 'A' + (caractere - 'A' + decalage) % 26;
            resultat += nouveauCaractere;
        }
    }

    return resultat;
}

int main() {
    int decalage;
    std::string texte;


    std::cout << "Entrez la clé de chiffrement (entier) : ";
    std::cin >> decalage;


    std::cin.ignore();


    std::cout << "Entrez le texte à chiffrer : ";
    std::getline(std::cin, texte);


    std::string texteChiffre = chiffrementCesar(texte, decalage);


    std::cout << "Texte chiffré : " << texteChiffre << std::endl;

>>>>>>> 4d5d09c4277e325950a94e0507579714e65d924a
    return 0;
}
