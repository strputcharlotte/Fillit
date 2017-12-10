# Fillit

# FICHIERS

- parser.c
- read.c
- resolve.c
- print_map.c
- algo.c
- prealgo.c
- solver.c
- Makefile -> sources


# FONCTIONS

open, read, write, malloc/free, exit, close


# PARSING

- lecture du fichier avec open et read sans les recoder, patate
- gestion cas d'erreur
    - '+' de 26 tetriminos ou '-' de 1;
    - autre chose que des .;
    - autre chose que des #;
    - '#' != 4;
    - 4 # mais pas collés;
    - mauvais nombre de points;
- structures reconnaissance de formes + stockage
- '#' == A

Au final c'est plus simple de faire juste le stockage des coordonnees de chaque
tetri puis de les deplacer le plus en haut a gauche possible. Sans faire ce
truc de stockage d'un seul cube qui rappelle toute la forme de tetri. 

# ALGO

- fonction qui change les # en lettres
- fonction qui compte le nombre de tetri
- fonction qui compte le nombre de cubes au total et trouve le plus petit
carre possible a malloc

# AFFICHAGE

à voir ensemble
