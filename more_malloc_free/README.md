# Projet : Allocation dynamique en C

## Introduction
Ce projet a pour objectif d'explorer l'utilisation de **malloc**, **calloc**, et d'autres fonctions d'allocation dynamique en C. Chaque fonction implémentée permet de manipuler la mémoire dynamiquement et de mieux comprendre la gestion des ressources dans un programme.

---

## 0. Trust no one

### Description
Fonction qui alloue de la mémoire en utilisant **malloc**.

### Prototype
```c
void *malloc_checked(unsigned int b);
```

### Comportement attendu
- Alloue **b** octets de mémoire.
- Retourne un pointeur vers la mémoire allouée.
- Si `malloc` échoue, la fonction provoque la **terminaison du programme avec le statut 98**.

---

## 1. string_nconcat

### Description
Fonction qui concatène deux chaînes de caractères en allouant dynamiquement la mémoire.

### Prototype
```c
char *string_nconcat(char *s1, char *s2, unsigned int n);
```

### Comportement attendu
- Concatène `s1` avec les **n premiers** caractères de `s2`.
- La chaîne résultante est **null-terminated**.
- Si `n` est **supérieur ou égal** à la longueur de `s2`, toute la chaîne `s2` est utilisée.
- Si `NULL` est passé en argument, il est traité comme une chaîne vide (`""`).
- Retourne `NULL` en cas d'échec d'allocation.

---

## 2. _calloc

### Description
Fonction qui alloue de la mémoire pour un tableau en utilisant **malloc**, tout en initialisant les valeurs à **0**.

### Prototype
```c
void *_calloc(unsigned int nmemb, unsigned int size);
```

### Comportement attendu
- Alloue la mémoire pour un tableau de **nmemb** éléments de **size** octets chacun.
- Initialise la mémoire allouée à **0**.
- Retourne un pointeur vers la mémoire allouée.
- Retourne `NULL` si `nmemb` ou `size` vaut **0**, ou si l'allocation échoue.

**Note :** Cette fonction fonctionne comme `calloc` de la bibliothèque standard.

---

## 3. array_range

### Description
Fonction qui crée un **tableau d'entiers** contenant toutes les valeurs entre `min` et `max` (incluses).

### Prototype
```c
int *array_range(int min, int max);
```

### Comportement attendu
- Le tableau est **ordonné** de `min` à `max`.
- Retourne un pointeur vers le tableau nouvellement créé.
- Retourne `NULL` si `min > max`.
- Retourne `NULL` en cas d'échec d'allocation mémoire.

---

## Conclusion
Ces fonctions sont essentielles pour comprendre et manipuler efficacement la mémoire en C. Elles permettent de mettre en pratique les concepts d'allocation dynamique, de gestion des erreurs et de manipulation de chaînes de caractères.

**Bonne programmation ! 🚀**


