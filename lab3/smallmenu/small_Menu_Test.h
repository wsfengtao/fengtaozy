//
//  small_Menu_Test.h
//  smallmenu
//
//  Created by 冯涛 on 2017/9/20.
//  Copyright © 2017年 冯涛. All rights reserved.
//

#ifndef small_Menu_Test_h
#define small_Menu_Test_h


#endif /* small_Menu_Test_h */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Help();
int MathSth();
int QuitSmall();

typedef struct DataNode
{
    char* cmd;
    char* desc;
    int (*handler)();
    struct DataNode *next;
}tDataNode;

static tDataNode head[] = {
    {"help", "this is help", Help, &head[1]},
    {"quit", "quit smallmenu", QuitSmall, &head[2]},
    {"math", "cal something", MathSth, &head[3]},
    {"teacher", "choose teacher", NULL, &head[4]},
    {"bingo", "bingo!", NULL, &head[5]},
    {"version", "small_menu@0.0.2", NULL, NULL}
};

// 菜单小程序
void small_menu()
{
    // 定义一个128长度的字符串
    char cmd[128];
    while(1)
    {
        // 接收键盘输入的字符串
        printf("\nInput a cmd number > \n");
        // 接收键盘输入的字符串
        scanf("%s", cmd);
        tDataNode *p = head;
        while(p != NULL)
        {
            if(strcmp(p->cmd, cmd) == 0)
            {
                printf("%s -  %s\n", p->cmd, p->desc);
                if(p->handler != NULL)
                {
                    p->handler();
                }
                break;
            }
            p = p->next;
        }
    }
}

//help指令对应函数
int Help()
{
    printf("\nUsage: <command>\n\n");
    printf("where <command> is one of:\n\n");
    printf("      ");
    tDataNode *p = head;
    while(p != NULL)
    {
        printf("%s - %s", p->cmd, p->desc);
        p = p->next;
        if(p != NULL)
        {
            printf(",");
        }
    }
    printf("\n\n\n");
    printf("small_menu@0.0.2\n\n");
    return 0;
}

//math指令对应函数
int MathSth()
{
    printf("3 + 5 = 8\n");
    printf("5 * 6 = 30\n");
    return 0;
}

//quit指令对应函数
int QuitSmall()
{
    printf("success to quit small_menu!\n");
    exit(0);
}
