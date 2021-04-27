#include <stdio.h>
#include <stdlib.h>

#include "functions.h"
#include "validate.h"

static void option_1();
static void option_2();
static void option_3();
static void option_4();
static void option_5();
static void option_6();
static void option_7();
static void option_8();
static void option_9();

int f_init() {

    f_showMenu();

    return 0;
}


int f_showMenu() {

    // char buffer[5];
    int option = 11;

    printf(TITLE);
    printf(MENU);
    while(option != 0) {
        switch(option) {
            case 1:
                option_1();
                break;
            case 2:
                option_2();
                break;
            case 3:
                option_3();
                break;
            case 4:
                option_4();
                break;
            case 5:
                option_5();
                break;
                 case 6:
                option_6();
                break;
            case 7:
                option_7();
                break;
            case 8:
                option_8();
                break;
            case 9:
                option_9();
                break;
        }
    }
    return 0;
}


static void option_1() {
    f_option_1();
}

static void option_2() {
    f_option_2();
}

static void option_3() {
    f_option_3();
}

static void option_4() {
    f_option_4();
}

static void option_5() {
    f_option_5();
}

static void option_6() {
    f_option_6();
}

static void option_7() {
    f_option_7();
}

static void option_8() {
    f_option_8();
}

static void option_9() {
    f_option_9();
}

int f_option_1() {
    printf("Opción 1");
    return 0;
}

int f_option_2() {
    printf("Opción 2");
    return 0;
}

int f_option_3() {
    printf("Opción 3");
    return 0;
}

int f_option_4() {
    return 0;
}

int f_option_5() {
    return 0;
}

int f_option_6() {
    return 0;
}

int f_option_7() {
    return 0;
}

int f_option_8() {
    return 0;
}

int f_option_9() {
    return 0;
}
