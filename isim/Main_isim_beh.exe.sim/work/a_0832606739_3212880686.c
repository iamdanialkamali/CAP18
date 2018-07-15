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
static const char *ng0 = "D:/cpu9/ALU.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
int ieee_p_1242562249_sub_2271993008_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_2563015576_1035706684(char *, char *, int , int );
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t28[16];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    int t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    int t21;
    char *t22;
    int t24;
    char *t25;
    int t27;
    char *t29;
    char *t30;
    int t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned char t44;

LAB0:    t1 = (t0 + 2992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t3 = (3 * 1000LL);
    t2 = (t0 + 2800);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5140);
    t6 = xsi_mem_cmp(t2, t4, 3U);
    if (t6 == 1)
        goto LAB9;

LAB18:    t7 = (t0 + 5143);
    t9 = xsi_mem_cmp(t7, t4, 3U);
    if (t9 == 1)
        goto LAB10;

LAB19:    t10 = (t0 + 5146);
    t12 = xsi_mem_cmp(t10, t4, 3U);
    if (t12 == 1)
        goto LAB11;

LAB20:    t13 = (t0 + 5149);
    t15 = xsi_mem_cmp(t13, t4, 3U);
    if (t15 == 1)
        goto LAB12;

LAB21:    t16 = (t0 + 5152);
    t18 = xsi_mem_cmp(t16, t4, 3U);
    if (t18 == 1)
        goto LAB13;

LAB22:    t19 = (t0 + 5155);
    t21 = xsi_mem_cmp(t19, t4, 3U);
    if (t21 == 1)
        goto LAB14;

LAB23:    t22 = (t0 + 5158);
    t24 = xsi_mem_cmp(t22, t4, 3U);
    if (t24 == 1)
        goto LAB15;

LAB24:    t25 = (t0 + 5161);
    t27 = xsi_mem_cmp(t25, t4, 3U);
    if (t27 == 1)
        goto LAB16;

LAB25:
LAB17:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5228);
    t5 = (t0 + 3376);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 16U);
    xsi_driver_first_trans_fast_port(t5);

LAB8:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(26, ng0);
    t29 = (t0 + 1032U);
    t30 = *((char **)t29);
    t29 = (t0 + 5012U);
    t31 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t30, t29);
    t32 = (t0 + 1192U);
    t33 = *((char **)t32);
    t32 = (t0 + 5028U);
    t34 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t33, t32);
    t35 = (t31 + t34);
    t36 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t28, t35, 16);
    t37 = (t0 + 3376);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memcpy(t41, t36, 16U);
    xsi_driver_first_trans_fast_port(t37);
    goto LAB8;

LAB10:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t2 = (t0 + 5012U);
    t6 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t4, t2);
    t5 = (t0 + 1192U);
    t7 = *((char **)t5);
    t5 = (t0 + 5028U);
    t9 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t7, t5);
    t12 = (t6 - t9);
    t8 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t28, t12, 16);
    t10 = (t0 + 3376);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t8, 16U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB8;

LAB11:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t2 = (t0 + 5012U);
    t6 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t4, t2);
    t5 = (t0 + 1192U);
    t7 = *((char **)t5);
    t5 = (t0 + 5028U);
    t9 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t7, t5);
    t12 = (t6 * t9);
    t8 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t28, t12, 16);
    t10 = (t0 + 3376);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t8, 16U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB8;

LAB12:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t2 = (t0 + 5012U);
    t5 = (t0 + 1192U);
    t7 = *((char **)t5);
    t5 = (t0 + 5028U);
    t8 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t28, t4, t2, t7, t5);
    t10 = (t28 + 12U);
    t42 = *((unsigned int *)t10);
    t43 = (1U * t42);
    t44 = (16U != t43);
    if (t44 == 1)
        goto LAB27;

LAB28:    t11 = (t0 + 3376);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 16U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB8;

LAB13:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t2 = (t0 + 5012U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t2);
    t5 = (t0 + 1192U);
    t7 = *((char **)t5);
    t5 = (t0 + 5028U);
    t9 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t5);
    t12 = xsi_vhdl_pow(2, t9);
    t15 = (t6 * t12);
    t8 = (t0 + 3440);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = t15;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t6 = *((int *)t4);
    t2 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t28, t6, 16);
    t5 = (t0 + 3376);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 16U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB14:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t2 = (t0 + 5012U);
    t6 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t4, t2);
    t5 = (t0 + 1192U);
    t7 = *((char **)t5);
    t5 = (t0 + 5028U);
    t9 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t7, t5);
    t12 = (t6 - t9);
    t8 = (t0 + 3440);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = t12;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t6 = *((int *)t4);
    t44 = (t6 == 0);
    if (t44 != 0)
        goto LAB29;

LAB31:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t6 = *((int *)t4);
    t44 = (t6 < 0);
    if (t44 != 0)
        goto LAB32;

LAB33:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 5196);
    t5 = (t0 + 3504);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 16U);
    xsi_driver_first_trans_fast_port(t5);

LAB30:    goto LAB8;

LAB15:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t2 = (t0 + 3376);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    memcpy(t10, t4, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB8;

LAB16:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5212);
    t5 = (t0 + 3376);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 16U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB26:;
LAB27:    xsi_size_not_matching(16U, t43, 0);
    goto LAB28;

LAB29:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 5164);
    t7 = (t0 + 3504);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t2, 16U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB30;

LAB32:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 5180);
    t7 = (t0 + 3504);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t2, 16U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB30;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/Main_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
