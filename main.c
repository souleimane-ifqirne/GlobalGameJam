/*
** EPITECH PROJECT, 2019
** GLOBAL_GAME_JAM
** File description:
** main.c
*/

#include "header.h"

void reset_variable(var *var)
{
    var->map_rect.top = 0;
    var->map_rect.width = 1920;
    var->map_rect.height = 1080;
    var->map_rect.left = 0;
    var->map_pose.x = 0;
    var->map_pose.y = 0;
    var->crate_pose.x = 1000;
    var->crate_pose.y = 894;
    var->player_rect.width = LARGEUR_PERSO;
    var->player_rect.height = HAUTEUR_PERSO;
    var->player_rect.left = 0;
    var->player_pose.x = 600;
    var->player_pose.y = 815;
    var->player_repair_rect.top = 0;
    var->player_repair_rect.width = LARGEUR_PERSO;
    var->player_repair_rect.height = HAUTEUR_PERSO;
    var->player_repair_rect.left = 0;
    var->rect_elec.left = 1400;
    var->rect_elec.top = 0;
    var->rect_elec.height = 200;
    var->rect_elec.width = 200;
    var->pos_elec.x = 150;
    var->pos_elec.y = 350;
    var->move = 0;
    var->room = 1;
    var->crate_room = 1;
    var->speed = 9;
    var->jump = 0;
    var->jump_nbr = 0;
    var->repair_stat = 0;
    var->event_stat = 0;
    var->pause = 0;
    var->live = 100;
}

void variable(var *var)
{
    sfVideoMode video_mode = {1920, 1080, 32};
    sfVector2f player_scale = {0.4, 0.4};
    sfVector2f crate_scale = {0.2, 0.2};
    sfVector2f mouse_scale = {0.1, 0.1};
    sfVector2f elec_scale = {0.7, 0.7};
    sfVector2f table_scale = {0.2, 0.2};

    srand(time(NULL));
    var->live = 100;
    var->txt_pose.x = 950;
    var->txt_pose.y = 100;
    var->live_clock = sfClock_create();
    var->live_txt = sfText_create();
    var->font = sfFont_createFromFile("Pixeled.ttf");
    var->window = sfRenderWindow_create(video_mode, "SubMarine-ZeroDown", sfFullscreen, NULL);
    var->die_texture = sfTexture_createFromFile("endscreen.png", NULL);
    var->die_sprite = sfSprite_create();
    var->texture_menu = sfTexture_createFromFile("menu_screen.png", NULL);
    var->sprite_menu = sfSprite_create();
    var->texture_menu_pause = sfTexture_createFromFile("pause_screen.png", NULL);
    var->sprite_menu_pause = sfSprite_create();
    var->table_texture = sfTexture_createFromFile("table.png", NULL);
    var->table_sprite = sfSprite_create();
    var->texture_mouse = sfTexture_createFromFile("mouse.png", NULL);
    var->texture_play1 = sfTexture_createFromFile("play.png", NULL);
    var->texture_play2 = sfTexture_createFromFile("playpressed.png", NULL);
    var->texture_settings1 = sfTexture_createFromFile("settings.png", NULL);
    var->texture_settings = sfTexture_createFromFile("settingsscreen.png", NULL);
    var->texture_settings2 = sfTexture_createFromFile("settingspressed.png", NULL);
    var->texture_quit1 = sfTexture_createFromFile("quit.png", NULL);
    var->texture_back = sfTexture_createFromFile("back.png", NULL);
    var->texture_back2 = sfTexture_createFromFile("backpressed.png", NULL);
    var->texture_quit2 = sfTexture_createFromFile("quitpressed.png", NULL);
    var->sprite_quit1 = sfSprite_create();
    var->sprite_back = sfSprite_create();
    var->sprite_back2 = sfSprite_create();
    var->sprite_setting = sfSprite_create();
    var->sprite_quit2 = sfSprite_create();
    var->sprite_settings1 = sfSprite_create();
    var->sprite_settings2 = sfSprite_create();
    var->sprite_mouse = sfSprite_create();
    var->sprite_play1 = sfSprite_create();
    var->sprite_play2 = sfSprite_create();
    var->map_texture = sfTexture_createFromFile("map_test.png", NULL);
    var->map_sprite = sfSprite_create();
    var->map_clock = sfClock_create();
    var->repair_clock = sfClock_create();
    var->revent_clock = sfClock_create();
    var->map_rect.top = 0;
    var->map_rect.width = 1920;
    var->map_rect.height = 1080;
    var->map_rect.left = 0;
    var->map_pose.x = 0;
    var->map_pose.y = 0;
    var->crate_texture = sfTexture_createFromFile("box.png", NULL);
    var->crate_sprite = sfSprite_create();
    var->crate_pose.x = 1000;
    var->crate_pose.y = 894;
    var->player_repair_texture = sfTexture_createFromFile("perso_working.png", NULL);
    var->player_right_texture = sfTexture_createFromFile("move_right.png", NULL);
    var->player_left_texture = sfTexture_createFromFile("move_left.png", NULL);
    var->player_clock = sfClock_create();
    var->player_repair_clock = sfClock_create();
    var->player_sprite = sfSprite_create();
    var->player_rect.top = 0;
    var->player_rect.width = LARGEUR_PERSO;
    var->player_rect.height = HAUTEUR_PERSO;
    var->player_rect.left = 0;
    var->player_pose.x = 600;
    var->player_pose.y = 815;
    var->player_repair_rect.top = 0;
    var->player_repair_rect.width = LARGEUR_PERSO;
    var->player_repair_rect.height = HAUTEUR_PERSO;
    var->player_repair_rect.left = 0;
    var->texture_elec = sfTexture_createFromFile("electricity.png", NULL);
    var->sprite_elec = sfSprite_create();
    var->rect_elec.left = 1400;
    var->rect_elec.top = 0;
    var->rect_elec.height = 200;
    var->rect_elec.width = 200;
    var->clock_elec = sfClock_create();
    var->pos_elec.x = 150;
    var->pos_elec.y = 350;
    var->move = 0;
    var->room = 1;
    var->crate_room = 1;
    var->status = 0;
    var->speed = 9;
    var->jump = 0;
    var->jump_nbr = 0;
    var->repair_stat = 0;
    var->event_stat = 0;
    var->pause = 0;
    var->music_rafale = sfMusic_createFromFile("la_rafale.ogg");
    var->music_menu = sfMusic_createFromFile("menu-song.ogg");
    var->music_click = sfMusic_createFromFile("click_song.ogg");
    var->music_sonar = sfMusic_createFromFile("game-song.ogg");
    var->music_repair = sfMusic_createFromFile("repare-song.ogg");
    sfSprite_setScale(var->table_sprite, table_scale);
    sfSprite_setScale(var->player_sprite, player_scale);
    sfSprite_setScale(var->crate_sprite, crate_scale);
    sfSprite_setScale(var->sprite_mouse, mouse_scale);
    sfSprite_setScale(var->sprite_elec, elec_scale);
}


void setup(var *var)
{
    sfVector2f player_pose = {850, 793};

    sfText_setFont(var->live_txt, var->font);
    sfText_setCharacterSize(var->live_txt, 40);
    sfText_setColor(var->live_txt, sfWhite);
    sfText_setPosition(var->live_txt, var->txt_pose);
    sfRenderWindow_setMouseCursorVisible(var->window, sfFalse);
    sfRenderWindow_setFramerateLimit(var->window, 60);
    sfSprite_setTexture(var->die_sprite, var->die_texture, sfFalse);
    sfSprite_setTexture(var->table_sprite, var->table_texture, sfFalse);
    sfSprite_setPosition(var->table_sprite, player_pose);
    sfSprite_setTexture(var->sprite_mouse, var->texture_mouse, sfFalse);
    sfSprite_setTexture(var->player_sprite, var->player_right_texture, sfFalse);
    sfSprite_setTexture(var->map_sprite, var->map_texture, sfFalse);
    sfSprite_setTexture(var->sprite_menu, var->texture_menu, sfFalse);
    sfSprite_setTexture(var->sprite_menu_pause, var->texture_menu_pause, sfFalse);
    sfSprite_setTexture(var->sprite_play1, var->texture_play1, sfFalse);
    sfSprite_setTexture(var->sprite_play2, var->texture_play2, sfFalse);
    sfSprite_setTexture(var->sprite_quit1, var->texture_quit1, sfFalse);
    sfSprite_setTexture(var->sprite_quit2, var->texture_quit2, sfFalse);
    sfSprite_setTexture(var->sprite_back, var->texture_back, sfFalse);
    sfSprite_setTexture(var->sprite_back2, var->texture_back2, sfFalse);
    sfSprite_setTexture(var->sprite_settings1, var->texture_settings1, sfFalse);
    sfSprite_setTexture(var->sprite_setting, var->texture_settings, sfFalse);
    sfSprite_setTexture(var->sprite_settings2, var->texture_settings2, sfFalse);
    sfSprite_setTexture(var->crate_sprite, var->crate_texture, sfFalse);
    sfSprite_setTexture(var->sprite_elec, var->texture_elec, sfFalse);
    sfSprite_setTextureRect(var->player_sprite, var->player_rect);
    sfSprite_setTextureRect(var->sprite_elec, var->rect_elec);
    sfSprite_setPosition(var->map_sprite, var->map_pose);
    sfSprite_setPosition(var->crate_sprite, var->crate_pose);
    sfSprite_setPosition(var->sprite_elec, var->pos_elec);
    sfMusic_setVolume(var->music_sonar, 40);
    var->rose_sprite = sfSprite_create();
    var->rose_texture = sfTexture_createFromFile("water_long.png", NULL);
    var->rose_rect.top = 0;
    var->rose_rect.height = 352;
    var->rose_rect.width = 352;
    var->rose_rect.left = 0;
    var->rose_clock = sfClock_create();
    sfSprite_setTexture(var->rose_sprite, var->rose_texture, sfFalse);
    sfSprite_setTextureRect(var->rose_sprite, var->rose_rect);
    sfMusic_setLoop(var->music_menu, sfTrue);
    sfMusic_stop(var->music_menu);
    sfMusic_play(var->music_menu);
}

void menu_screen(var *var)
{
    sfVector2i temp = sfMouse_getPositionRenderWindow(var->window);
    var->mouse_pose.x = temp.x;
    var->mouse_pose.y = temp.y;
    sfSprite_setPosition(var->sprite_mouse, var->mouse_pose);
    sfRenderWindow_drawSprite(var->window, var->sprite_menu, NULL);
    sfRenderWindow_drawSprite(var->window, var->sprite_settings1, NULL);
    sfRenderWindow_drawSprite(var->window, var->sprite_quit1, NULL);
    sfRenderWindow_drawSprite(var->window, var->sprite_play1, NULL);
}

void menu_screen2(var *var)
{
    if (var->mouse_stat == 1)
        sfRenderWindow_drawSprite(var->window, var->sprite_play2, NULL);
    if (var->mouse_stat3 == 1)
            sfRenderWindow_drawSprite(var->window, var->sprite_quit2, NULL);
    if (var->mouse_stat2 == 1)
        sfRenderWindow_drawSprite(var->window, var->sprite_settings2, NULL);
    sfRenderWindow_drawSprite(var->window, var->sprite_mouse, NULL);
}

void setting_screen(var *var)
{
    sfVector2i temp = sfMouse_getPositionRenderWindow(var->window);
    var->mouse_pose.x = temp.x;
    var->mouse_pose.y = temp.y;
    sfSprite_setPosition(var->sprite_mouse, var->mouse_pose);
    sfRenderWindow_drawSprite(var->window, var->sprite_setting, NULL);
    sfRenderWindow_drawSprite(var->window, var->sprite_back, NULL);
    if (var->mouse_stat4 == 1)
        sfRenderWindow_drawSprite(var->window, var->sprite_back2, NULL);
    sfRenderWindow_drawSprite(var->window, var->sprite_mouse, NULL);
}

void setting_screen2(var *var)
{
    sfVector2i temp = sfMouse_getPositionRenderWindow(var->window);
    var->mouse_pose.x = temp.x;
    var->mouse_pose.y = temp.y;
    sfSprite_setPosition(var->sprite_mouse, var->mouse_pose);
    sfRenderWindow_drawSprite(var->window, var->sprite_setting, NULL);
    sfRenderWindow_drawSprite(var->window, var->sprite_back, NULL);
    if (var->mouse_stat4 == 1)
        sfRenderWindow_drawSprite(var->window, var->sprite_back2, NULL);
    sfRenderWindow_drawSprite(var->window, var->sprite_mouse, NULL);
    if (var->event.type == sfEvtMouseButtonPressed && var->event.mouseButton.button == sfMouseLeft && var->mouse_pose.x >= 661
        && var->mouse_pose.x <= 767 && var->mouse_pose.y <= 410 && var->mouse_pose.y >= 356 && var->pause != 1) {
            sfMusic_setVolume(var->music_menu, 0);
            sfMusic_setVolume(var->music_sonar, 0);
            sfMusic_setVolume(var->music_repair, 0);
            sfMusic_setVolume(var->music_click, 0);
        }
    if (var->event.type == sfEvtMouseButtonPressed && var->event.mouseButton.button == sfMouseLeft && var->mouse_pose.x >= 848
        && var->mouse_pose.x <= 908 && var->mouse_pose.y <= 410 && var->mouse_pose.y >= 356 && var->pause != 1) {
            sfMusic_setVolume(var->music_menu, 20);
            sfMusic_setVolume(var->music_sonar, 20);
            sfMusic_setVolume(var->music_repair, 20);
            sfMusic_setVolume(var->music_click, 20);
        }
    if (var->event.type == sfEvtMouseButtonPressed && var->event.mouseButton.button == sfMouseLeft && var->mouse_pose.x >= 1067
        && var->mouse_pose.x <= 1137 && var->mouse_pose.y <= 410 && var->mouse_pose.y >= 356 && var->pause != 1) {
            sfMusic_setVolume(var->music_menu, 70);
            sfMusic_setVolume(var->music_sonar, 70);
            sfMusic_setVolume(var->music_repair, 70);
            sfMusic_setVolume(var->music_click, 70);
        }
    if (var->event.type == sfEvtMouseButtonPressed && var->event.mouseButton.button == sfMouseLeft && var->mouse_pose.x >= 1279
        && var->mouse_pose.x <= 1353 && var->mouse_pose.y <= 410 && var->mouse_pose.y >= 356 && var->pause != 1) {
            sfMusic_setVolume(var->music_menu, 100);
            sfMusic_setVolume(var->music_sonar, 100);
            sfMusic_setVolume(var->music_repair, 100);
            sfMusic_setVolume(var->music_click, 100);
        }
    if (var->event.type == sfEvtMouseButtonPressed && var->event.mouseButton.button == sfMouseLeft && var->mouse_pose.x >= 43
        && var->mouse_pose.x <= 213 && var->mouse_pose.y <= 1000 && var->mouse_pose.y >= 948) {
        var->pause = 1;
        sfMusic_stop(var->music_click);
        sfMusic_play(var->music_click);
    }
}

void destroy_function(var *var)
{
    sfRenderWindow_destroy(var->window);
    sfSprite_destroy(var->table_sprite);
    sfSprite_destroy(var->player_sprite);
    sfSprite_destroy(var->map_sprite);
    sfSprite_destroy(var->sprite_mouse);
    sfSprite_destroy(var->sprite_menu);
    sfSprite_destroy(var->sprite_menu_pause);
    sfSprite_destroy(var->sprite_play1);
    sfSprite_destroy(var->sprite_play2);
    sfSprite_destroy(var->sprite_quit1);
    sfSprite_destroy(var->sprite_quit2);
    sfSprite_destroy(var->sprite_setting);
    sfSprite_destroy(var->sprite_back);
    sfSprite_destroy(var->sprite_back2);
    sfSprite_destroy(var->sprite_settings1);
    sfSprite_destroy(var->sprite_settings2);
    sfSprite_destroy(var->crate_sprite);
    sfSprite_destroy(var->sprite_elec);
    sfSprite_destroy(var->die_sprite);
    sfTexture_destroy(var->die_texture);
    sfTexture_destroy(var->table_texture);
    sfTexture_destroy(var->player_repair_texture);
    sfTexture_destroy(var->player_right_texture);
    sfTexture_destroy(var->player_left_texture);
    sfTexture_destroy(var->texture_mouse);
    sfTexture_destroy(var->texture_menu);
    sfTexture_destroy(var->texture_menu_pause);
    sfTexture_destroy(var->texture_settings);
    sfTexture_destroy(var->texture_play1);
    sfTexture_destroy(var->texture_play2);
    sfTexture_destroy(var->texture_quit1);
    sfTexture_destroy(var->texture_quit2);
    sfTexture_destroy(var->texture_settings1);
    sfTexture_destroy(var->texture_back);
    sfTexture_destroy(var->texture_back2);
    sfTexture_destroy(var->texture_settings2);
    sfTexture_destroy(var->map_texture);
    sfTexture_destroy(var->crate_texture);
    sfTexture_destroy(var->texture_elec);
    sfClock_destroy(var->rose_clock);
    sfClock_destroy(var->player_clock);
    sfClock_destroy(var->player_repair_clock);
    sfClock_destroy(var->map_clock);
    sfClock_destroy(var->clock_elec);
    sfClock_destroy(var->repair_clock);
    sfClock_destroy(var->revent_clock);
    sfClock_destroy(var->live_clock);
    sfMusic_destroy(var->music_rafale);
    sfMusic_destroy(var->music_menu);
    sfMusic_destroy(var->music_repair);
    sfMusic_destroy(var->music_click);
    sfMusic_destroy(var->music_sonar);
    sfSprite_destroy(var->rose_sprite);
    sfTexture_destroy(var->rose_texture);
    sfText_destroy(var->live_txt);
}

void mouse_setting(var *var)
{
    if (var->event.type == sfEvtMouseButtonPressed && var->event.mouseButton.button == sfMouseLeft && var->mouse_pose.x >= 57
        && var->mouse_pose.x <= 223 && var->mouse_pose.y >= 430 && var->mouse_pose.y <= 516 && var->status == 0) {
        var->status = 1;
        sfMusic_setLoop(var->music_sonar, sfTrue);
        sfMusic_play(var->music_sonar);
        sfMusic_stop(var->music_click);
        sfMusic_play(var->music_click);
        }
    if (var->mouse_pose.x >= 57
        && var->mouse_pose.x <= 223 && var->mouse_pose.y >= 430 && var->mouse_pose.y <= 516 && var->status == 0)
        var->mouse_stat = 1;
    else
        var->mouse_stat = 0;
    if (var->event.type == sfEvtMouseButtonPressed && var->event.mouseButton.button == sfMouseLeft && var->mouse_pose.x >= 57
        && var->mouse_pose.x <= 398 && var->mouse_pose.y >= 560 && var->mouse_pose.y <= 636 && var->status == 0) {
        var->status = 2;
        sfMusic_stop(var->music_click);
        sfMusic_play(var->music_click);
        }
    if (var->mouse_pose.x >= 57
        && var->mouse_pose.x <= 398 && var->mouse_pose.y >= 560 && var->mouse_pose.y <= 636 && var->status == 0)
        var->mouse_stat2 = 1;
    else
        var->mouse_stat2 = 0;
    if (var->event.type == sfEvtMouseButtonPressed && var->event.mouseButton.button == sfMouseLeft && var->mouse_pose.x >= 57
        && var->mouse_pose.x <= 227 && var->mouse_pose.y >= 690 && var->mouse_pose.y <= 770 && var->status == 0)
        sfRenderWindow_close(var->window);
    if (var->mouse_pose.x >= 57
        && var->mouse_pose.x <= 227 && var->mouse_pose.y >= 690 && var->mouse_pose.y <= 770 && var->status == 0)
        var->mouse_stat3 = 1;
    else
        var->mouse_stat3 = 0;
    if (var->event.type == sfEvtMouseButtonPressed && var->event.mouseButton.button == sfMouseLeft && var->mouse_pose.x >= 43
        && var->mouse_pose.x <= 213 && var->mouse_pose.y <= 1000 && var->mouse_pose.y >= 948 && var->status == 2) {
        var->status = 0;
        sfMusic_stop(var->music_click);
        sfMusic_play(var->music_click);
    }
    if (var->mouse_pose.x >= 43 && var->mouse_pose.x <= 213 &&
    var->mouse_pose.y <= 1000 && var->mouse_pose.y >= 948)
        var->mouse_stat4 = 1;
    else
        var->mouse_stat4 = 0;
    if (var->status == 2) {
        if (var->event.type == sfEvtMouseButtonPressed && var->event.mouseButton.button == sfMouseLeft && var->mouse_pose.x >= 661
            && var->mouse_pose.x <= 767 && var->mouse_pose.y <= 410 && var->mouse_pose.y >= 356) {
                sfMusic_setVolume(var->music_menu, 0);
                sfMusic_setVolume(var->music_sonar, 0);
                sfMusic_setVolume(var->music_repair, 0);
                sfMusic_setVolume(var->music_click, 0);
            }
        if (var->event.type == sfEvtMouseButtonPressed && var->event.mouseButton.button == sfMouseLeft && var->mouse_pose.x >= 848
            && var->mouse_pose.x <= 908 && var->mouse_pose.y <= 410 && var->mouse_pose.y >= 356) {
                sfMusic_setVolume(var->music_menu, 20);
                sfMusic_setVolume(var->music_sonar, 20);
                sfMusic_setVolume(var->music_repair, 20);
                sfMusic_setVolume(var->music_click, 20);
            }
        if (var->event.type == sfEvtMouseButtonPressed && var->event.mouseButton.button == sfMouseLeft && var->mouse_pose.x >= 1067
            && var->mouse_pose.x <= 1137 && var->mouse_pose.y <= 410 && var->mouse_pose.y >= 356) {
                sfMusic_setVolume(var->music_menu, 70);
                sfMusic_setVolume(var->music_sonar, 70);
                sfMusic_setVolume(var->music_repair, 70);
                sfMusic_setVolume(var->music_click, 70);
            }
        if (var->event.type == sfEvtMouseButtonPressed && var->event.mouseButton.button == sfMouseLeft && var->mouse_pose.x >= 1279
            && var->mouse_pose.x <= 1353 && var->mouse_pose.y <= 410 && var->mouse_pose.y >= 356) {
                sfMusic_setVolume(var->music_menu, 100);
                sfMusic_setVolume(var->music_sonar, 100);
                sfMusic_setVolume(var->music_repair, 100);
                sfMusic_setVolume(var->music_click, 100);
            }
    }
}

int main(int ac, char **av)
{
    var variables, *var = &variables;
    int test;

    variable(var);
    setup(var);
    while (sfRenderWindow_isOpen(var->window)) {
        while (sfRenderWindow_pollEvent(var->window, &var->event)) {
            mouse_setting(var);
            if (sfKeyboard_isKeyPressed(sfKeyEscape) && var->status == 1 && var->pause == 0)
                var->pause = 1;
            if (var->event.type == sfEvtKeyPressed && (sfKeyboard_isKeyPressed(sfKeySpace) || sfKeyboard_isKeyPressed(sfKeyZ) || sfKeyboard_isKeyPressed(sfKeyUp))
                && (var->player_pose.y >= 820 || (CAISSE && var->player_pose.y >= 716)) && var->repair_stat == 0)
                var->jump = 1;
            if (var->status == 1) {
                if (var->event.type == sfEvtKeyPressed && (sfKeyboard_isKeyPressed(sfKeyLShift)) && var->speed == 9)
                    var->speed += 8;
                if (var->event.type == sfEvtKeyReleased && (!sfKeyboard_isKeyPressed(sfKeyLShift)) && var->speed == 17)
                    var->speed = 9;
                if (sfKeyboard_isKeyPressed(sfKeyLeft) || sfKeyboard_isKeyPressed(sfKeyQ))
                    var->move = -1;
                if (sfKeyboard_isKeyPressed(sfKeyD) || sfKeyboard_isKeyPressed(sfKeyRight))
                    var->move = 1;
                if (var->jump == 0 && var->jump_down == 0 && sfKeyboard_isKeyPressed(sfKeyE) && (var->player_pose.x >= var->rose_pose.x - 100
                    && var->player_pose.x + 140 <= var->rose_pose.x + 200) && var->player_pose.y <= var->rose_pose.y + 90) {
                    var->repair_stat = 1;
                    sfMusic_stop(var->music_repair);
                    sfMusic_play(var->music_repair);
                    sfSprite_setTexture(var->player_sprite, var->player_repair_texture, sfFalse);
                    sfClock_restart(var->repair_clock);
                }
            }

        }
        sfRenderWindow_clear(var->window, sfBlack);
        //---------------------------------------------------//
        while (var->pause == 1) {
            sfVector2i temp = sfMouse_getPositionRenderWindow(var->window);
            var->mouse_pose.x = temp.x;
            var->mouse_pose.y = temp.y;
            sfSprite_setPosition(var->sprite_mouse, var->mouse_pose);
            if (var->event.type == sfEvtMouseButtonPressed && var->event.mouseButton.button == sfMouseLeft &&
            var->mouse_pose.x >= 707 && var->mouse_pose.x <= 1186 &&
            var->mouse_pose.y >= 331 && var->mouse_pose.y <= 401) {
                var->status = 1;
                var->pause = 0;
            }
            if (var->event.type == sfEvtMouseButtonPressed && var->event.mouseButton.button == sfMouseLeft &&
            var->mouse_pose.x >= 763 && var->mouse_pose.x <= 1085 &&
            var->mouse_pose.y >= 506 && var->mouse_pose.y <= 571) {
                reset_variable(var);
                sfMusic_stop(var->music_sonar);
                sfMusic_play(var->music_menu);
                var->status = 0;
                var->pause = 0;
            }
            if (var->event.type == sfEvtMouseButtonPressed && var->event.mouseButton.button == sfMouseLeft &&
            var->mouse_pose.x >= 624 && var->mouse_pose.x <= 1224 &&
            var->mouse_pose.y >= 678 && var->mouse_pose.y <= 742) {
                var->status = 3;
                var->pause = 0;
            }
            if (var->event.type == sfEvtMouseButtonPressed && var->event.mouseButton.button == sfMouseLeft &&
            var->mouse_pose.x >= 786 && var->mouse_pose.x <= 1086 &&
            var->mouse_pose.y >= 831 && var->mouse_pose.y <= 896) {
                destroy_function(var);
                exit (0);
            }
            sfRenderWindow_clear(var->window, sfBlack);
            sfRenderWindow_drawSprite(var->window, var->map_sprite, NULL);
            sfRenderWindow_drawSprite(var->window, var->player_sprite, NULL);
            sfRenderWindow_drawSprite(var->window, var->sprite_menu_pause, NULL);
            sfRenderWindow_drawSprite(var->window, var->sprite_mouse, NULL);
            sfRenderWindow_display(var->window);
            while (sfRenderWindow_pollEvent(var->window, &var->event)) {
                if (var->event.type == sfEvtKeyPressed && sfKeyboard_isKeyPressed(sfKeyEscape) && var->pause == 1)
                    var->pause = 0;
            }
        }
        if (var->status == 4) {
            sfVector2i temp = sfMouse_getPositionRenderWindow(var->window);
            var->mouse_pose.x = temp.x;
            var->mouse_pose.y = temp.y;
            if (var->event.type == sfEvtMouseButtonPressed && var->event.mouseButton.button == sfMouseLeft &&
            var->mouse_pose.x >= 42 && var->mouse_pose.x <= 261 &&
            var->mouse_pose.y >= 942 && var->mouse_pose.y <= 1012) {
                destroy_function(var);
                exit (0);
            }
            sfSprite_setPosition(var->sprite_mouse, var->mouse_pose);
            sfRenderWindow_drawSprite(var->window, var->die_sprite, NULL);
            sfRenderWindow_drawSprite(var->window, var->sprite_mouse, NULL);
        }
        if (var->status == 3)
            setting_screen2(var);
        if (var->status == 0) {
            menu_screen(var);
            menu_screen2(var);
            sfClock_restart(var->revent_clock);
        }
        if (var->status == 1) {
            sfMusic_stop(var->music_menu);
            test = 820;
            if (var->event_stat == 0 && (sfTime_asSeconds(sfClock_getElapsedTime(var->revent_clock)) >= 10 + rand() % 10)) {
                var->event_stat = 1;
                var->rose_pose.x = 300 + rand() % 1200;
                var->rose_pose.y = 800 + (((rand() % 2) - 1) * 140);
                var->spawn_in_room = rand() % 3;
                if (var->spawn_in_room <= 1)
                    var->spawn_in_room = 2;
                else if (var->spawn_in_room >= 2)
                    var->spawn_in_room = 3;
                sfClock_restart(var->revent_clock);
            }
            if (var->event_stat == 1 && var->repair_stat == 1) {
                var->move = 0;
                if (sfTime_asSeconds(sfClock_getElapsedTime(var->repair_clock)) >= 5) {
                    var->event_stat = 0;
                    var->repair_stat = 0;
                    var->rose_pose.y = 2000;
                    var->live += 10;
                    sfClock_restart(var->repair_clock);
                    sfClock_restart(var->revent_clock);
                    sfMusic_stop(var->music_rafale);
                    sfMusic_play(var->music_rafale);
                }
                if (sfTime_asMilliseconds(sfClock_getElapsedTime(var->player_repair_clock)) >= 100) {
                    if (var->player_repair_rect.left >= LARGEUR_PERSO * 15)
                        var->player_repair_rect.left = LARGEUR_PERSO * 6;
                    else
                        var->player_repair_rect.left += LARGEUR_PERSO;
                    sfSprite_setTextureRect(var->player_sprite, var->player_repair_rect);
                    sfClock_restart(var->player_repair_clock);
                }
            }
            if (var->event_stat == 1) {
                if (sfTime_asSeconds(sfClock_getElapsedTime(var->live_clock)) >= 1) {
                    var->live -= 2;
                    if (var->live <= 0) {
                        sfMusic_stop(var->music_sonar);
                        var->status = 4;
                    }
                    sfClock_restart(var->live_clock);
                }
                sfSprite_setPosition(var->rose_sprite, var->rose_pose);
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(var->player_clock)) >= 2) {
                if (var->jump == 1) {
                    var->player_pose.y -= 13;
                    var->jump_nbr += 1;
                }
                if (var->jump_nbr == 17) {
                    var->jump = 0;
                    var->jump_down = 1;
                    var->jump_nbr = 0;
                }
                if (CAISSE && var->crate_room == var->room)
                    test = 716;
                if (var->jump == 0 && var->player_pose.y <= test)
                    var->player_pose.y += 13;
                else
                    var->jump_down = 0;
                if (!sfKeyboard_isKeyPressed(sfKeyQ) && !sfKeyboard_isKeyPressed(sfKeyLeft) &&
                !sfKeyboard_isKeyPressed(sfKeyD) && !sfKeyboard_isKeyPressed(sfKeyRight)) {
                    var->player_rect.left = 0;
                    var->move = 0;
                }
                if (var->move != 0) {
                    if (var->move == -1) {
                        sfSprite_setTexture(var->player_sprite, var->player_left_texture, sfFalse);
                        if (var->room == 1) {
                            if (var->player_pose.x >= 200)
                                var->player_pose.x += SPEED * var->move;
                        }
                        else
                            var->player_pose.x += SPEED * var->move;
                    }
                    if (var->move == 1) {
                        sfSprite_setTexture(var->player_sprite, var->player_right_texture, sfFalse);
                        if (var->room == 3) {
                            if (var->player_pose.x <= 1350)
                                var->player_pose.x += SPEED * var->move;
                        } else
                            var->player_pose.x += SPEED * var->move;
                    }
                    if (var->player_rect.left >= LARGEUR_PERSO * 15)
                        var->player_rect.left = 0;
                    else
                        var->player_rect.left += LARGEUR_PERSO;
                }
                sfClock_restart(var->player_clock);
            }
            if (var->player_pose.x >= 1845 && var->map_rect.left < 3840) {
                var->player_pose.x = -70;
                var->map_rect.left += 1920;
                var->room += 1;
                if (var->crate_pose.x >= 1900) {
                    var->crate_pose.x = var->player_pose.x + 150;
                    var->crate_room++;
                }
            }
            if (var->player_pose.x <= -75 && var->map_rect.left > 0) {
                var->player_pose.x = 1840;
                var->map_rect.left -= 1920;
                var->room -= 1;
                if (var->crate_pose.x <= 0) {
                    var->crate_pose.x = var->player_pose.x - 80;
                    var->crate_room--;
                }
            }
            if (sfTime_asMilliseconds(sfClock_getElapsedTime(var->clock_elec)) > 80) {
                if (var->rect_elec.left <= 0)
                    var->rect_elec.left = 1400;
                else
                    var->rect_elec.left -= 200;
                sfClock_restart(var->clock_elec);
            }
            if (CAISSE && var->player_pose.y >= 750 && var->crate_room == var->room) {
                if (var->room == 1 && var->crate_pose.x >= 250)
                    var->crate_pose.x += var->speed * var->move;
                else if (var->room == 3 && var->crate_pose.x <= 1400)
                    var->crate_pose.x += var->speed * var->move;
                else if (var->room == 2)
                    var->crate_pose.x += var->speed * var->move;
            }
            sfRenderWindow_drawSprite(var->window, var->map_sprite, NULL);
            if (var->crate_room == var->room)
                sfRenderWindow_drawSprite(var->window, var->crate_sprite, NULL);
            if ((var->room == var->spawn_in_room && var->event_stat == 1)) {
                if (sfTime_asMilliseconds(sfClock_getElapsedTime(var->rose_clock)) >= 100) {
                    var->rose_rect.left += 352;
                    if (var->rose_rect.left >= 5984)
                        var->rose_rect.left = 0;
                    sfSprite_setTextureRect(var->rose_sprite, var->rose_rect);
                    sfClock_restart(var->rose_clock);
                }
                sfRenderWindow_drawSprite(var->window, var->rose_sprite, NULL);
            }
            sfRenderWindow_drawSprite(var->window, var->player_sprite, NULL);
            if (var->room == 1)
                sfRenderWindow_drawSprite(var->window, var->sprite_elec, NULL);
            sfSprite_setTextureRect(var->map_sprite, var->map_rect);
            sfSprite_setTextureRect(var->sprite_elec, var->rect_elec);
            if (!(var->event_stat == 1 && var->repair_stat == 1))
                sfSprite_setTextureRect(var->player_sprite, var->player_rect);
            sfSprite_setPosition(var->player_sprite, var->player_pose);
            sfSprite_setPosition(var->crate_sprite, var->crate_pose);
            if (var->room == 2)
                sfRenderWindow_drawSprite(var->window, var->table_sprite, NULL);
            sfText_setString(var->live_txt, my_rev_putnbr(var->live));
            sfRenderWindow_drawText(var->window, var->live_txt, NULL);
        }
        if (var->status == 2)
            setting_screen(var);
        //---------------------------------------------------//
        sfRenderWindow_display(var->window);
    }
    destroy_function(var);
    return (0);
}