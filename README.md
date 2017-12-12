modif nulle

# Fillit

# FICHIERS

- parser.c
- read.c
- print_map.c
- algo.c
- prealgo.c -> modif car question
- solver.c
- Makefile -> modif car does not compile


# FONCTIONS

open, read, write, malloc/free, exit, close


# PARSING

- lecture du fichier avec open et read sans les recoder, patate
- parsing cas d'erreur
    - '+' de 26 tetriminos ou '-' de 1;
    - autre chose que des .;
    - autre chose que des #;
    - '#' != 4;
    - 4 # mais pas collés;
    - mauvais nombre de points;
- structures stockage des coordonnées de chaque tetri
- déplacement en haut à gauche des tetri


# ALGO

- fonction qui change les # en lettres
- fonction qui compte le nombre de tetri
- fonction qui compte le nombre de cubes au total et trouve le plus petit
carre possible a malloc

# AFFICHAGE

à voir ensemble
