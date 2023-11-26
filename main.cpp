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

    return 0;
}
