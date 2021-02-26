# LearnLinkedList

**Avant de commencer, veuillez fork le repo, chaque repos sera vérifié**

## Objectif :

- Créer une liste, avec un pointeur sur l'élément suivant et un pointeur sur le premier élément.

- Chaque node contient un nombre, sa valeur vaut le nombre de la node précédente + 1

Pour se faire à la racine, "`mkdir src`", puis vous pouvez créer un fichier avec un nom explicite.

Dans ce fichier se trouveront, trois fonctions :

- void free_list(list_s *list);

- void add_new_node(list_s *list);

- list_s *initialise_first_node(void);

Le but étant de passer tout les tests, puis chaque repos sera validé.

(Cette exercice, a pour but de vous montrer une utilisation de liste chainée, le but étant de pratiquer pour apprendre)

## Comment tester :

**`./start_unit_test.sh`**

Si vous souhaitez, faire un main pour essayer de votre côté : 

- `touch src/main.c`

- pour l'utiliser **`make re`** puis **`./linked`**
