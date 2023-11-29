#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

// Tableau ADFGVX
const std::map<char, std::string> adfgvxTable = {
    {'A', "AA"}, {'D', "AD"}, {'F', "AF"}, {'G', "AG"}, {'V', "AV"}, {'X', "AX"},
    {'B', "DA"}, {'C', "DD"}, {'E', "DF"}, {'H', "DG"}, {'I', "DV"}, {'K', "DX"},
    {'L', "FA"}, {'M', "FD"}, {'N', "FF"}, {'O', "FG"}, {'P', "FV"}, {'Q', "FX"},
    {'R', "GA"}, {'S', "GD"}, {'T', "GF"}, {'U', "GG"}, {'W', "GV"}, {'Y', "GX"},
    {'Z', "VA"}
};

// Fonction pour chiffrement ADFGVX
std::string chiffrementADFGVX(const std::string& message, const std::string& key) {
    std::string cipherText;

    // Création d'un vecteur pour stocker les paires ADFGVX
    std::vector<std::pair<char, std::string>> adfgvxPairs;

    // Remplissage du vecteur avec les valeurs de la table
    for (char c : message) {
        auto it = adfgvxTable.find(std::toupper(c));
        if (it != adfgvxTable.end()) {
            adfgvxPairs.push_back(std::make_pair(c, it->second));
        }
    }

    // Tri du vecteur par rapport à la clé
    std::sort(adfgvxPairs.begin(), adfgvxPairs.end(), [&key](const std::pair<char, std::string>& a, const std::pair<char, std::string>& b) {
        return key.find(a.second[0]) < key.find(b.second[0]);
    });

    // Construction du texte chiffré en fonction des paires triées
    for (const auto& pair : adfgvxPairs) {
        cipherText += pair.second;
    }

    return cipherText;
}

int main() {
    std::string message = "LE TRAVAIL ET LA PERSEVERANCE "; // Message à chiffrer
    std::string key = "1918"; // Clé de chiffrement

    std::string cipherText = chiffrementADFGVX(message, key);

    std::cout << "Message clair : " << message << std::endl;
    std::cout << "Clé de chiffrement : " << key << std::endl;
    std::cout << "Message chiffré en ADFGVX : " << cipherText << std::endl;

    return 0;
}
