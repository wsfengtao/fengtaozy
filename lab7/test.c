#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "linktable.h"
#include "menu.h"

int Add(int argc, char *argv[])
{
    int a,b;
    printf("Please input two integer numbers:\n");
    scanf("%d %d", &a, &b);
    int c = a + b;
    printf("The result is:\n");
    printf("%d", c);
    return 0;
}
int ShowCmd (int argc,char *argv[]){
    char  myCmd;
    printf("输入命令展示");
    scanf("%c",&myCmd);
    switch (myCmd) {
        case 'a':
             printf("Apple\n");
            break;
        case 'b':
             printf("banan\n");
            break;
        default:
            break;
    }
    return 0;
}
int Quit(int argc, char *argv[])
{  
    exit(0);
}

int main(int argc, char *argv[])
{
    MenuConfig("version", "menu program v3.0", NULL);
    MenuConfig("show", "this is show cmd!", ShowCmd);

    MenuConfig("quit", "this is quit cmd!", Quit);

    ExecuteMenu();
    return 0;
}
