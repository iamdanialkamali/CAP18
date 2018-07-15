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
static const char *ng1 = "D:/cpu9/instructionMemory.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
void ieee_p_3564397177_sub_2889341154_91900896(char *, char *, char *, char *, char *);


void work_a_0123541133_3212880686_sub_1740346474_3057020925(char *t0, char *t1, char *t2, char *t3)
{
    char t5[40];
    char t6[16];
    char t11[16];
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t12;
    int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 11;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 11);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t11 + 0U);
    t12 = (t8 + 0U);
    *((int *)t12) = 15;
    t12 = (t8 + 4U);
    *((int *)t12) = 0;
    t12 = (t8 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 15);
    t10 = (t13 * -1);
    t10 = (t10 + 1);
    t12 = (t8 + 12U);
    *((unsigned int *)t12) = t10;
    t12 = (t5 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t5 + 12U);
    *((char **)t15) = t6;
    t16 = (t5 + 20U);
    *((char **)t16) = t3;
    t17 = (t5 + 28U);
    *((char **)t17) = t11;
    t18 = (t0 + 1352U);
    t19 = *((char **)t18);
    t20 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t2, t6);
    t21 = (t20 - 0);
    t10 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 511, 1, t20);
    t22 = (16U * t10);
    t23 = (0 + t22);
    t18 = (t19 + t23);
    t24 = (t3 + 0);
    memcpy(t24, t18, 16U);

LAB1:    return;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

}

static void work_a_0123541133_3212880686_p_0(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    int64 t17;

LAB0:    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng1);
    t2 = (t0 + 2216U);
    t3 = (t0 + 14336);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 9;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (9 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)0);
    xsi_set_current_line(36, ng1);

LAB4:    t2 = (t0 + 2216U);
    t10 = std_textio_endfile(t2);
    t11 = (!(t10));
    if (t11 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(44, ng1);
    t2 = (t0 + 2216U);
    std_textio_file_close(t2);
    xsi_set_current_line(45, ng1);

LAB14:    *((char **)t1) = &&LAB15;

LAB1:    return;
LAB5:    xsi_set_current_line(38, ng1);
    t3 = (t0 + 2856);
    t4 = (t0 + 2216U);
    t6 = (t0 + 2392U);
    std_textio_readline(STD_TEXTIO, t3, t4, t6);
    xsi_set_current_line(39, ng1);
    t2 = (t0 + 2856);
    t3 = (t0 + 2392U);
    t4 = (t0 + 1648U);
    t6 = *((char **)t4);
    t4 = (t0 + 5980U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(40, ng1);
    t2 = (t0 + 1648U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768U);
    t4 = *((char **)t2);
    t8 = *((int *)t4);
    t12 = (t8 - 0);
    t9 = (t12 * 1);
    t13 = (16U * t9);
    t14 = (0U + t13);
    t2 = (t0 + 3696);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t15 = (t7 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 16U);
    xsi_driver_first_trans_delta(t2, t14, 16U, 0LL);
    xsi_set_current_line(41, ng1);
    t2 = (t0 + 1768U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t12 = (t8 + 1);
    t2 = (t0 + 1768U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = t12;
    xsi_set_current_line(42, ng1);
    t17 = (1 * 1000LL);
    t2 = (t0 + 2856);
    xsi_process_wait(t2, t17);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    goto LAB4;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB2;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}

static void work_a_0123541133_3212880686_p_1(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;

LAB0:    t1 = (t0 + 3296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng1);
    t2 = (t0 + 3104);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 12U);
    t3 = (t0 + 1888U);
    t6 = *((char **)t3);
    work_a_0123541133_3212880686_sub_1740346474_3057020925(t0, t2, t5, t6);
    xsi_set_current_line(53, ng1);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t2 = (t0 + 3760);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(54, ng1);
    t9 = (1 * 1000LL);
    t2 = (t0 + 3104);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

}


extern void work_a_0123541133_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0123541133_3212880686_p_0,(void *)work_a_0123541133_3212880686_p_1};
	static char *se[] = {(void *)work_a_0123541133_3212880686_sub_1740346474_3057020925};
	xsi_register_didat("work_a_0123541133_3212880686", "isim/Main_isim_beh.exe.sim/work/a_0123541133_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
