#ifndef FT_PERSO_H
#define FT_PERSO_H

enum    e_profession
{
    SAVE_THE_WORLD
};

typedef struct s_perso
{
    char *name;
    double life;
    int age;
    enum e_profession profession;

}   t_perso;

#endif

// done