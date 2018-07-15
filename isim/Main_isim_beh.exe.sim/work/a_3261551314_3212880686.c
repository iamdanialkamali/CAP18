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
static const char *ng0 = "D:/cpu9/dataMemory.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);


static void work_a_3261551314_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    unsigned char t4;
    char *t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;
    char *t28;
    int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 3472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t6 = (0 - 15);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t2 = (t5 + t9);
    t10 = *((unsigned char *)t2);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB11;

LAB12:    t12 = (t0 + 1032U);
    t13 = *((char **)t12);
    t14 = (0 - 15);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t12 = (t13 + t17);
    t18 = *((unsigned char *)t12);
    t19 = (t18 == (unsigned char)3);
    t4 = t19;

LAB13:    if (t4 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(30, ng0);
    t21 = (t0 + 1512U);
    t22 = *((char **)t21);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    if (t24 == 1)
        goto LAB17;

LAB18:    t20 = (unsigned char)0;

LAB19:    if (t20 != 0)
        goto LAB14;

LAB16:    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB22;

LAB23:    t4 = (unsigned char)0;

LAB24:    if (t4 != 0)
        goto LAB20;

LAB21:
LAB15:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB28;

LAB29:    t4 = (unsigned char)0;

LAB30:    if (t4 != 0)
        goto LAB25;

LAB27:    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB33;

LAB34:    t4 = (unsigned char)0;

LAB35:    if (t4 != 0)
        goto LAB31;

LAB32:
LAB26:    goto LAB9;

LAB11:    t4 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(31, ng0);
    t21 = (t0 + 1032U);
    t28 = *((char **)t21);
    t21 = (t0 + 6084U);
    t29 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t28, t21);
    t30 = (t0 + 3856);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    *((int *)t34) = t29;
    xsi_driver_first_trans_fast(t30);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t2 = (t0 + 2312U);
    t12 = *((char **)t2);
    t6 = *((int *)t12);
    t14 = (t6 - 0);
    t7 = (t14 * 1);
    t8 = (16U * t7);
    t9 = (0U + t8);
    t2 = (t0 + 3920);
    t13 = (t2 + 56U);
    t21 = *((char **)t13);
    t22 = (t21 + 56U);
    t25 = *((char **)t22);
    memcpy(t25, t5, 16U);
    xsi_driver_first_trans_delta(t2, t9, 16U, 0LL);
    goto LAB15;

LAB17:    t21 = (t0 + 1832U);
    t25 = *((char **)t21);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)2);
    t20 = t27;
    goto LAB19;

LAB20:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1032U);
    t13 = *((char **)t2);
    t2 = (t0 + 6084U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t13, t2);
    t21 = (t0 + 3856);
    t22 = (t21 + 56U);
    t25 = *((char **)t22);
    t28 = (t25 + 56U);
    t30 = *((char **)t28);
    *((int *)t30) = t6;
    xsi_driver_first_trans_fast(t21);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t2 = (t0 + 2312U);
    t12 = *((char **)t2);
    t6 = *((int *)t12);
    t14 = (t6 - 0);
    t7 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 1535, 1, t6);
    t8 = (16U * t7);
    t9 = (0 + t8);
    t2 = (t5 + t9);
    t13 = (t0 + 3984);
    t21 = (t13 + 56U);
    t22 = *((char **)t21);
    t25 = (t22 + 56U);
    t28 = *((char **)t25);
    memcpy(t28, t2, 16U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB15;

LAB22:    t2 = (t0 + 1832U);
    t12 = *((char **)t2);
    t18 = *((unsigned char *)t12);
    t19 = (t18 == (unsigned char)2);
    t4 = t19;
    goto LAB24;

LAB25:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1992U);
    t13 = *((char **)t2);
    t2 = (t0 + 1032U);
    t21 = *((char **)t2);
    t2 = (t0 + 6084U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t21, t2);
    t14 = (t6 - 0);
    t7 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 1535, 1, t6);
    t8 = (16U * t7);
    t9 = (0 + t8);
    t22 = (t13 + t9);
    t25 = (t0 + 4048);
    t28 = (t25 + 56U);
    t30 = *((char **)t28);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t22, 16U);
    xsi_driver_first_trans_fast(t25);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t2 = (t0 + 2152U);
    t12 = *((char **)t2);
    t2 = (t0 + 6164U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t12, t2);
    t14 = (t6 - 0);
    t7 = (t14 * 1);
    t8 = (16U * t7);
    t9 = (0U + t8);
    t13 = (t0 + 3920);
    t21 = (t13 + 56U);
    t22 = *((char **)t21);
    t25 = (t22 + 56U);
    t28 = *((char **)t25);
    memcpy(t28, t5, 16U);
    xsi_driver_first_trans_delta(t13, t9, 16U, 0LL);
    goto LAB26;

LAB28:    t2 = (t0 + 1832U);
    t12 = *((char **)t2);
    t18 = *((unsigned char *)t12);
    t19 = (t18 == (unsigned char)3);
    t4 = t19;
    goto LAB30;

LAB31:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1992U);
    t13 = *((char **)t2);
    t2 = (t0 + 1032U);
    t21 = *((char **)t2);
    t2 = (t0 + 6084U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t21, t2);
    t14 = (t6 - 0);
    t7 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 1535, 1, t6);
    t8 = (16U * t7);
    t9 = (0 + t8);
    t22 = (t13 + t9);
    t25 = (t0 + 4048);
    t28 = (t25 + 56U);
    t30 = *((char **)t28);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t22, 16U);
    xsi_driver_first_trans_fast(t25);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t2 = (t0 + 2152U);
    t12 = *((char **)t2);
    t2 = (t0 + 6164U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t12, t2);
    t14 = (t6 - 0);
    t7 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 1535, 1, t6);
    t8 = (16U * t7);
    t9 = (0 + t8);
    t13 = (t5 + t9);
    t21 = (t0 + 3984);
    t22 = (t21 + 56U);
    t25 = *((char **)t22);
    t28 = (t25 + 56U);
    t30 = *((char **)t28);
    memcpy(t30, t13, 16U);
    xsi_driver_first_trans_fast_port(t21);
    goto LAB26;

LAB33:    t2 = (t0 + 1832U);
    t12 = *((char **)t2);
    t18 = *((unsigned char *)t12);
    t19 = (t18 == (unsigned char)3);
    t4 = t19;
    goto LAB35;

}


extern void work_a_3261551314_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3261551314_3212880686_p_0};
	xsi_register_didat("work_a_3261551314_3212880686", "isim/Main_isim_beh.exe.sim/work/a_3261551314_3212880686.didat");
	xsi_register_executes(pe);
}
