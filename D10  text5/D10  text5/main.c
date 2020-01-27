//
//  main.c
//  D10  text5
//
//  Created by pro on 2020/1/27.
//  Copyright © 2020 pro. All rights reserved.
//

#include <stdio.h>
#define NUMBER 3
int main()
{
    double highs[NUMBER];
    int i,x;
    printf("输入三个人的身高cm:");
    for(i=0;i<NUMBER;i++)
    {
        printf("输入第%d个人的身高:",i);
        scanf("%d",&x);
        highs[i]=x;
    }
    x=tall(highs);
    return 0;
}
int tall(double highs[])
{
    
}
