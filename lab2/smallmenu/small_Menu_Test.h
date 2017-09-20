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


// 菜单小程序
void small_menu()
{
    // 定义一个128长度的字符串
    char cmd[128];
    while(1)
    {
        // 接收键盘输入的字符串
        scanf("%s", cmd);
        // 将输入的字符串与预先设置的指令进行匹配, 如果匹配合格则输出对应内容，否则报错
        if(strcmp(cmd, "help") == 0)
        {
            printf("\nUsage: <command>\n\n");
            printf("where <command> is one of:\n\n");
            printf("      quit, others, teacher, bingo, fate, size, length\n\n\n");
            printf("small_menu@0.0.1\n\n");
        }
        else if(strcmp(cmd, "quit") == 0)
        {
            printf("success to quit small_menu!\n");
            return;
        }
        else if(strcmp(cmd, "others") == 0)
        {
            printf("choose the cmd of others!\n");
        }
        else if(strcmp(cmd, "teacher") == 0)
        {
            printf("choose the cmd of teacher!\n");
        }
        else if(strcmp(cmd, "bingo") == 0)
        {
            printf("choose the cmd of bingo!\n");
        }
        else if(strcmp(cmd, "fate") == 0)
        {
            printf("choose the cmd of fate!\n");
        }
        else if(strcmp(cmd, "size") == 0)
        {
            printf("choose the cmd of size!\n");
        }
        else if(strcmp(cmd, "length") == 0)
        {
            printf("choose the cmd of length!\n");
        }
        else
        {
            printf("wrong cmd!\n");
        }
    }
}
