# Tic Tac Noes

Jeu de morpion en ligne de commande développé en langage C permettant d'affronter l'ordinateur (**N0N0**) à travers 4 niveaux de difficulté ou de jouer à deux en local.

## Modes de jeu et difficultés

Au lancement, le programme propose 5 modes au choix :

* **1 — Abosulement débile :** L'ordinateur joue systématiquement sur la première case libre disponible en parcourant la grille de `0` à `8`.
* **2 — De l'intéligence de Maximilien (très con) :** L'ordinateur choisit une case libre au hasard à l'aide de `rand() % 9`.
* **3 — De l'intéligence de Maxim (très smart) :** Mode hybride qui tire au sort (1 chance sur 2) entre un coup aléatoire (niveau 2) et un coup optimal (niveau 4).
* **4 — L'intéligence du dev (tu ne gagneras pas) :** IA imbattable reposant sur l'algorithme récursif **Minimax**, qui simule l'ensemble des coups possibles jusqu'à la fin de la partie pour choisir le meilleur placement.
* **5 — 1V1 :** Mode deux joueurs sur le même clavier (Joueur 1 contre Joueur 2).

## Règles et déroulement d'une partie

La grille est composée de 9 cases numérotées de `0` à `8` :

```text
┏━━━┳━━━┳━━━┓
┃ 0 ┃ 1 ┃ 2 ┃
┣━━━╋━━━╋━━━┫
┃ 3 ┃ 4 ┃ 5 ┃
┣━━━╋━━━╋━━━┫
┃ 6 ┃ 7 ┃ 8 ┃
┗━━━┻━━━┻━━━┛
```

* **Pions :** Le **Joueur 1** commence toujours la partie avec les **`X`**, tandis que **N0N0** ou le **Joueur 2** joue avec les **`O`**.
* **Tour de jeu :** À chaque tour, entrez le numéro d'une case libre comprise entre `0` et `8`. Le programme refuse automatiquement les numéros hors grille ainsi que les cases déjà occupées.
* **Fin de partie :** Le premier joueur à aligner 3 symboles identiques (ligne, colonne ou diagonale) remporte la partie. Si les 9 cases sont remplies sans vainqueur, la partie se termine sur une égalité.

## Structure du projet

* `main.c` : Point d'entrée du programme, allocation mémoire des grilles, menu de sélection de la difficulté et boucle principale des tours.
* `fonction.c` : Logique du jeu (affichage de la grille, gestion des saisies joueurs, vérification de victoire, algorithme Minimax et comportements des 4 bots).
* `fonction.h` : Fichier d'en-tête regroupant les prototypes de toutes les fonctions.

## Compilation et exécution

Le jeu est conçu pour un terminal Linux ou macOS (utilisation de la commande `clear` pour rafraîchir l'affichage à chaque tour).

```bash
gcc main.c fonction.c -o tic_tac_noes
./tic_tac_noes
```
