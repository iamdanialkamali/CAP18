/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *IEEE_P_1242562249;
static const char *ng1 = "D:/cpu9/regFile.vhd";
extern char *IEEE_P_2592010699;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


void work_a_1111616105_3212880686_sub_2618942646_3057020925(char *t0, char *t1, char *t2, unsigned int t3, unsigned int t4, char *t5, char *t6, unsigned int t7, unsigned int t8, char *t9, char *t10, char *t11, unsigned int t12, unsigned int t13)
{
    char t16[32];
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned char t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;

LAB0:    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 0;
    t18 = (t17 + 4U);
    *((int *)t18) = 11;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t19 = (11 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t16 + 16U);
    t21 = (t18 + 0U);
    *((int *)t21) = 15;
    t21 = (t18 + 4U);
    *((int *)t21) = 0;
    t21 = (t18 + 8U);
    *((int *)t21) = -1;
    t22 = (0 - 15);
    t20 = (t22 * -1);
    t20 = (t20 + 1);
    t21 = (t18 + 12U);
    *((unsigned int *)t21) = t20;
    t21 = (t11 + 40U);
    t23 = *((char **)t21);
    t21 = (t23 + t13);
    t23 = (t2 + 40U);
    t24 = *((char **)t23);
    t23 = (t24 + t4);
    t25 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t23, t5);
    t26 = (t25 - 0);
    t20 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 11, 1, t25);
    t27 = (16U * t20);
    t28 = (0 + t27);
    t24 = (t21 + t28);
    t29 = (t10 + 12U);
    t30 = *((unsigned int *)t29);
    t30 = (t30 * 1U);
    t31 = (t30 != 16U);
    if (t31 == 1)
        goto LAB2;

LAB3:    t32 = (0 + t7);
    t33 = (t9 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t10 + 12U);
    t38 = *((unsigned int *)t37);
    t38 = (t38 * 1U);
    memcpy(t36, t24, t38);
    t39 = (t10 + 12U);
    t40 = *((unsigned int *)t39);
    t41 = (1U * t40);
    xsi_driver_first_trans_delta(t9, t32, t41, 0LL);

LAB1:    return;
LAB2:    xsi_size_not_matching(t30, 16U, 0);
    goto LAB3;

}

static void work_a_1111616105_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(39, ng1);
    t2 = (t0 + 1952U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4288);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(40, ng1);
    t4 = (t0 + 2152U);
    t8 = *((char **)t4);
    t4 = (t0 + 1352U);
    t9 = *((char **)t4);
    t4 = (t0 + 6596U);
    t10 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t9, t4);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    t13 = (16U * t12);
    t14 = (0U + t13);
    t15 = (t0 + 4400);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t8, 16U);
    xsi_driver_first_trans_delta(t15, t14, 16U, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 1832U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void work_a_1111616105_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(44, ng1);
    t1 = (t0 + 3528);
    t2 = (t0 + 992U);
    t3 = (t0 + 6564U);
    t4 = (t0 + 1472U);
    t5 = (t0 + 4464);
    t6 = (t0 + 6612U);
    t7 = (t0 + 2272U);
    work_a_1111616105_3212880686_sub_2618942646_3057020925(t0, t1, t2, 0U, 0U, t3, t4, 0U, 0U, t5, t6, t7, 0U, 0U);
    t8 = (t0 + 4304);
    *((int *)t8) = 1;

LAB1:    return;
}

static void work_a_1111616105_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(45, ng1);
    t1 = (t0 + 3776);
    t2 = (t0 + 1152U);
    t3 = (t0 + 6580U);
    t4 = (t0 + 1632U);
    t5 = (t0 + 4528);
    t6 = (t0 + 6628U);
    t7 = (t0 + 2272U);
    work_a_1111616105_3212880686_sub_2618942646_3057020925(t0, t1, t2, 0U, 0U, t3, t4, 0U, 0U, t5, t6, t7, 0U, 0U);
    t8 = (t0 + 4320);
    *((int *)t8) = 1;

LAB1:    return;
}


extern void work_a_1111616105_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1111616105_3212880686_p_0,(void *)work_a_1111616105_3212880686_p_1,(void *)work_a_1111616105_3212880686_p_2};
	static char *se[] = {(void *)work_a_1111616105_3212880686_sub_2618942646_3057020925};
	xsi_register_didat("work_a_1111616105_3212880686", "isim/Main_isim_beh.exe.sim/work/a_1111616105_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
