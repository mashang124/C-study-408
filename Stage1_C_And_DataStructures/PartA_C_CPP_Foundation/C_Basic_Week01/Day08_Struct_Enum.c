#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
struct Hero
{
	char heroName[20];
	double life;
	double magic;
	double attack;
	double attackSpeed;
	struct weapon w;
};

void initHero(struct Hero *h)
{
	strcpy(h->heroName, "ta");
	(*h).life = 5000;
	(*h).magic = 0;
	(*h).attack = 2000;
	(*h).attackSpeed = 100;
}

int main()
{
	struct Hero h;
	initHero(&h);
	printf("%s %lf %lf %lf %lf\n", h.heroName, h.life, h.magic, h.attack, h.attackSpeed);
	return 0;
}
*/

/*
struct weapon
{
    char weaponName[20];
    double attack;
    double attackSpeed;
};

struct Hero
{
    char heroName[20];
    double life;
    double magic;
    double attack;
    double attackSpeed;
    struct weapon* w;
};

void setWeapon(struct Hero* h, struct weapon* w)
{
    h->w = w;
    h->attack += h->w->attack;
    h->attackSpeed += h->w->attackSpeed;
}

int main(int argc, char const* argv[])
{
    // 创建一个英雄
    struct Hero* h = (struct Hero*)malloc(sizeof(struct Hero));
    strcpy(h->heroName, "亚瑟");
    h->life = 5000;
    h->magic = 0;
    h->attack = 2000;
    h->attackSpeed = 500;

    // 创建一件装备
    struct weapon* w = (struct weapon*)malloc(sizeof(struct weapon));
    strcpy(w->weaponName, "泣血之刃");
    w->attack = 2000;
    w->attackSpeed = 100;

    setWeapon(h, w);
    printf("%s, %lf, %lf, %lf, %lf\n", h->heroName, h->life, h->magic, h->attack, h->attackSpeed);
    free(w);
    free(h);
    w = NULL;
    h = NULL;
    return 0;
}
*/

typedef enum 
{
    mon,tue,wed
}weekday;

int main()
{
   weekday a;
   a = tue;
   printf("%d", a);
   return 0;
}