//
//  main.c
//  c_project
//
//  Created by pro on 2020/1/22.
//  Copyright © 2020 pro. All rights reserved.
//

#include <stdio.h>
#define MONTHS 12
#define YEARS   5
int main(void)
{
    //定义一个rain数组存放降雨量数据，行为年，列为月
    float rain[YEARS][MONTHS]=
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
    int year,month;
    float subtot,total;
    float (*p)[MONTHS]=rain;
    //输出表头
    printf(" YEAR       RAINFALL (inches)\n");
    //计算每年的各月降水量之和，输出年份和年降水量，并计算总降水量
    for(year=0,total=0;year<YEARS;year++)
    {
        for(month=0,subtot=0;month<MONTHS;month++)
            subtot+=p[year][month];
        printf("%5d  %15.lf\n",2010+year,subtot);
    }
    //输出年平均降水量
    printf("\nThe yearly aveage is %.lf inches.\n\n",total/YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf("  Jan Feb Mar Apr May Jun Jul Aug Sep Oct");
    printf(" Nov Dec\n");
    //输出相同月份的降水量之和及p其平均数
    for(month=0;month<MONTHS;month++)
    {
        for(year=0,subtot=0;year<YEARS;year++)
            subtot+=p[year][month];
        printf("%4.lf",subtot/YEARS);
    }
    printf("\n");
    return 0;
}

