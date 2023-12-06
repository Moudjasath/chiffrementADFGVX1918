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

# Chiffrement AFFINE

Ce projet contient un code de chiffrement affine en C++. Le chiffrement affine est un chiffrement symétrique simple qui utilise deux clés, a et b. La clé a est un nombre entier qui représente le nombre de positions que la lettre est décalée dans l'alphabet. La clé b est un nombre entier qui représente l'addition ou la soustraction effectuée sur la lettre après le décalage. Comment utiliser le code Le programme vous demandera de saisir les clés a et b. Une fois que vous avez saisi les clés, le programme vous demandera de saisir le message à chiffrer. Le message chiffré sera alors affiché.

Exemple

Supposons que vous souhaitiez chiffrer le message "Hello, world!" avec les clés a=3 et b=2. Pour ce faire, vous exécuteriez le programme avec les commandes suivantes :

Le programme vous demandera de saisir les clés suivantes : Le programme vous demandera de saisir le message à chiffrer : Entrez le message à chiffrer: Hello, world! Entrez la clé a: 3 Entrez la clé b: 2 Le message chiffré sera alors affiché : Le message chiffré est: Khoor, zruog! Explication du code Le code commence par déclarer les constantes suivantes :

const int ALPHABET_SIZE = 26; Cette constante représente la taille de l'alphabet. Dans ce cas, l'alphabet est de 26 lettres.

Le programme demande ensuite à l'utilisateur de saisir le message à chiffré; Le programme demande ensuite à l'utilisateur de saisir les clés a et b ; Le programme utilise une boucle for pour parcourir chaque lettre du message. Pour chaque lettre, le programme convertit la lettre en son code numérique en soustrayant 'a' de la lettre. Le programme utilise ensuite la formule suivante pour chiffrer la lettre :

code = (a * code + b) % ALPHABET_SIZE; Cette formule décale la lettre de a positions dans l'alphabet, puis ajoute b à la lettre. Enfin, le programme convertit le code numérique de la lettre en lettre en ajoutant 'a' au code.

Enfin, le programme affiche le message chiffré :

cout << "Le message chiffré est: " << message << endl
![Capture d’écran (2)](https://github.com/Moudjasath/chiffrementADFGVX1918/assets/140810316/9bd83e28-1de3-4ed2-b8de-0192daa5fd1b)

# Chiffrement DE LORD GARNET
Chiffrement de Lord Garnet
Ce programme en C++ implémente une méthode de chiffrement de Lord Garnet.

Description
Le chiffrement de Lord Garnet , également appelé chiffrement de César, est une méthode de cryptographie où chaque lettre du texte est déplacée d'un certain nombre de positions dans l'alphabet. Dans cette implémentation spécifique, la méthode attribuée à Lord Garnet utilise un décalage pour chiffrer le texte en fonction de la clé donnée par l'utilisateur.

Utilisation
Prérequis
Pour exécuter ce code, assurez-vous d'avoir un compilateur C++ compatible.

Instructions
Téléchargement du code : Clonez ou téléchargez le fichier source chiffrement_garnet.cpp.

Compilation : Compilez le code à l'aide de votre compilateur C++ préféré. Par exemple :

g++ chiffrement_garnet.cpp -o chiffrement_garnet
Exécution : Exécutez le programme compilé :

./chiffrement_garnet
Entrées
Lors de l'exécution du programme, l'utilisateur est invité à entrer un texte à chiffrer. Ce texte peut contenir des lettres en minuscules. Ensuite, l'utilisateur est invité à entrer une clé, qui représente le décalage à appliquer au texte.

Fonctionnement du Code
Le code utilise un décalage pour chiffrer le texte en fonction de la clé entrée par l'utilisateur. Voici comment il fonctionne :

Chiffrement : Chaque lettre du texte est déplacée vers la droite dans l'alphabet selon la valeur de la clé. Par exemple, avec une clé de 3, 'a' devient 'd', 'b' devient 'e', et ainsi de suite.
Exemple
L'utilisateur est invité à entrer un texte (par exemple, "hello") et une clé (par exemple, 3). Le programme chiffre le texte en utilisant le décalage de 3 positions dans l'alphabet selon la méthode attribuée à Lord Garnet et affiche le texte chiffré.
![GARNET](https://github.com/Moudjasath/ChiffrementLORDGARNET/assets/140810316/67e081af-02ff-49c2-89d4-4575a1205d82)


