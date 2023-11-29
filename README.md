# chiffrementADFGVX1918
Chiffrement ADFGVX
Ce programme en C++ implémente un chiffrement ADFGVX.
Description
Le chiffrement ADFGVX est une technique de chiffrement par substitution polyalphabétique utilisant une grille de chiffrement constituée des lettres A, D, F, G, V et X. Chaque lettre de l'alphabet est représentée par une combinaison unique de ces symboles.

Ce code prend en charge le chiffrement d'un message en clair à l'aide d'une clé donnée.

Utilisation
Prérequis
Pour exécuter ce code, assurez-vous d'avoir un compilateur C++ compatible.

Instructions
Téléchargement du code : Clonez ou téléchargez le fichier source chiffrement_adfgvx.cpp.

Compilation : Compilez le code à l'aide de votre compilateur C++ préféré. Par exemple :

bash
Copy code
g++ chiffrement_adfgvx.cpp -o chiffrement_adfgvx
Exécution : Exécutez le programme compilé :

bash
Copy code
./chiffrement_adfgvx
Entrées
Le message à chiffrer est défini dans la variable message dans la fonction main(). De même, la clé de chiffrement est définie dans la variable key.

Fonctionnement du Code
Le code utilise une table de correspondance ADFGVX pour associer chaque lettre de l'alphabet à sa représentation ADFGVX. La fonction chiffrementADFGVX prend en entrée le message et la clé, puis chiffre le message en suivant les étapes suivantes :

Création de paires de lettres ADFGVX pour chaque caractère du message.
Tri des paires en fonction de la clé donnée.
Construction du texte chiffré à partir des paires triées.
Exemple
Dans l'exemple fourni, le message "LE TRAVAIL ET LA PERSEVERANCE " est chiffré avec la clé "1918".
![Capture d’écran (6)](https://github.com/Moudjasath/chiffrementADFGVX1918/assets/140810316/7a55920c-ab6a-4c43-aa76-b9de62180b48)
