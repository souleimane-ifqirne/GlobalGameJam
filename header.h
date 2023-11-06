/*
** EPITECH PROJECT, 2019
** header
** File description:
** Header for libmy.
*/

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <dirent.h>
#include <stdbool.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Graphics.h>

#define CAISSE (var->player_pose.x + 140 >= var->crate_pose.x && var->player_pose.x <= var->crate_pose.x + 40)
#define LARGEUR_PERSO (512)
#define HAUTEUR_PERSO (512)
#define SPEED (var->speed)

char *my_rev_putnbr(int nb);

typedef struct var_s
{
    int jump;
    int live;
    int move;
    int room;
    int speed;
    int pause;
    int status;
    int jump_nbr;
    int jump_down;
    int crate_room;
    int event_stat;
    int mouse_stat;
    int mouse_stat2;
    int mouse_stat3;
    int mouse_stat4;
    int event_stat1;
    int repair_stat;
    int spawn_in_room;
    int setting_status;
    sfRenderWindow *window;
    sfEvent event;
    sfSprite *table_sprite;
    sfSprite *player_sprite;
    sfSprite *map_sprite;
    sfSprite *sprite_mouse;
    sfSprite *sprite_menu;
    sfSprite *sprite_menu_pause;
    sfSprite *sprite_play1;
    sfSprite *sprite_play2;
    sfSprite *sprite_quit1;
    sfSprite *sprite_quit2;
    sfSprite *sprite_setting;
    sfSprite *sprite_back;
    sfSprite *sprite_back2;
    sfSprite *sprite_settings1;
    sfSprite *sprite_settings2;
    sfSprite *crate_sprite;
    sfSprite *sprite_elec;
    sfSprite *die_sprite;
    sfTexture *die_texture;
    sfTexture *table_texture;
    sfTexture *player_repair_texture;
    sfTexture *player_right_texture;
    sfTexture *player_left_texture;
    sfTexture *texture_mouse;
    sfTexture *texture_menu;
    sfTexture *texture_menu_pause;
    sfTexture *texture_settings;
    sfTexture *texture_play1;
    sfTexture *texture_play2;
    sfTexture *texture_quit1;
    sfTexture *texture_quit2;
    sfTexture *texture_settings1;
    sfTexture *texture_back;
    sfTexture *texture_back2;
    sfTexture *texture_settings2;
    sfTexture *map_texture;
    sfTexture *crate_texture;
    sfTexture *texture_elec;
    sfIntRect map_rect;
    sfIntRect rose_rect;
    sfIntRect player_rect;
    sfIntRect player_repair_rect;
    sfIntRect rect_elec;
    sfVector2f map_pose;
    sfVector2f play1_pose;
    sfVector2f player_pose;
    sfVector2f pos_elec;
    sfVector2f mouse_pose;
    sfVector2f crate_pose;
    sfClock *rose_clock;
    sfClock *player_clock;
    sfClock *player_repair_clock;
    sfClock *map_clock;
    sfClock *clock_elec;
    sfClock *repair_clock;
    sfClock *revent_clock;
    sfClock *live_clock;
    sfMusic *music_rafale;
    sfMusic *music_menu;
    sfMusic *music_repair;
    sfMusic *music_click;
    sfMusic *music_sonar;
    sfSprite *rose_sprite;
    sfTexture *rose_texture;
    sfVector2f rose_pose;
    sfText *live_txt;
    sfFont *font;
    sfVector2f txt_pose;
} var;

void my_putchar(char c);
void my_put_nbr(int nb);
void my_nb(va_list list);
void my_bin(va_list list);
void my_ptr(va_list list);
void my_str(va_list list);
char *my_revstr(char *str);
void my_char(va_list list);
void my_octal(va_list list);
void my_uphexa(va_list list);
void my_modulo(va_list list);
void my_lowhexa(va_list list);
int my_getnbr(char const *str);
int my_putstr(char const *str);
int my_strlen(char const *str);
void my_printf(char *str, ...);
void my_unsigned(va_list list);
void my_capital_s(va_list list);
void my_put_unsigned_nbr(unsigned int nb);
void destroy_function(var *var);
char *my_strcat(char *dest, char const *src);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strncat(char *dest, char const *src, int nb);