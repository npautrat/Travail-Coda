#ifndef __FONCTION_H__
#define __FONCTION_H__

void copy_numbers(char *source, char *numbers, int length);
int is_victory(int *grille_played_current);
void player_one_round_to_play(char **grille_actually_played, int *grille_played_current);
void player_two_round_to_play(char **grille_actually_played, int *grille_played_current);
void show_current_grille(char **grille_actually_played);
void poser_pion_bot(char **grille_actually_played, int *grille_played_current, int index);
void bot_niveau_1(char **grille_actually_played, int *grille_played_current);
void bot_niveau_2(char **grille_actually_played, int *grille_played_current);
int minimax(int *grille, int profondeur, int tour_du_bot);
void bot_niveau_4(char **grille_actually_played, int *grille_played_current);
void bot_niveau_3(char **grille_actually_played, int *grille_played_current);

#endif