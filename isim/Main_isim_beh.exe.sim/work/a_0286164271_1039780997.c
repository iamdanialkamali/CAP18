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
static const char *ng0 = "D:/cpu9/Main.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_2271993008_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0286164271_1039780997_p_0(char *t0)
{
    char t19[16];
    char t25[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    unsigned char t17;
    unsigned char t18;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t26;
    unsigned int t27;
    int t28;
    int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 4512U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7824);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(108, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = (unsigned char)0;

LAB12:    if (t2 != 0)
        goto LAB8;

LAB9:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 11284U);
    t16 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t1);
    t20 = (t16 + 1);
    t4 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t19, t20, 12);
    t7 = (t0 + 7904);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t4, 12U);
    xsi_driver_first_trans_fast(t7);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(109, ng0);
    t3 = (t0 + 1192U);
    t7 = *((char **)t3);
    t8 = (15 - 11);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t3 = (t7 + t10);
    t11 = (t0 + 7904);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t3, 12U);
    xsi_driver_first_trans_fast(t11);
    goto LAB6;

LAB8:    xsi_set_current_line(111, ng0);
    t7 = (t0 + 1032U);
    t11 = *((char **)t7);
    t7 = (t0 + 11284U);
    t20 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t11, t7);
    t21 = (t20 + 1);
    t12 = (t0 + 1192U);
    t13 = *((char **)t12);
    t22 = (15 - 11);
    t23 = (t22 * 1U);
    t24 = (0 + t23);
    t12 = (t13 + t24);
    t14 = (t25 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 11;
    t15 = (t14 + 4U);
    *((int *)t15) = 0;
    t15 = (t14 + 8U);
    *((int *)t15) = -1;
    t26 = (0 - 11);
    t27 = (t26 * -1);
    t27 = (t27 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t27;
    t28 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t12, t25);
    t29 = (t21 + t28);
    t15 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t19, t29, 12);
    t30 = (t0 + 7904);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memcpy(t34, t15, 12U);
    xsi_driver_first_trans_fast(t30);
    goto LAB6;

LAB10:    t1 = (t0 + 4712U);
    t4 = *((char **)t1);
    t16 = (15 - 15);
    t8 = (t16 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t4 + t10);
    t17 = *((unsigned char *)t1);
    t18 = (t17 == (unsigned char)3);
    t2 = t18;
    goto LAB12;

}

static void work_a_0286164271_1039780997_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(122, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 6568);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4552U);
    t4 = *((char **)t2);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t2 = (t0 + 7968);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

}

static void work_a_0286164271_1039780997_p_2(char *t0)
{
    char t23[16];
    char t33[16];
    char t43[16];
    char t53[16];
    char t63[16];
    char t73[16];
    char t83[16];
    char t93[16];
    char t103[16];
    char t111[16];
    char t113[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned char t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned char t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned char t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned char t61;
    char *t62;
    char *t64;
    char *t65;
    char *t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned char t71;
    char *t72;
    char *t74;
    char *t75;
    char *t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned char t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned char t91;
    char *t92;
    char *t94;
    char *t95;
    char *t96;
    int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned char t101;
    char *t102;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t112;
    char *t114;
    char *t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned char t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    int64 t132;

LAB0:    t1 = (t0 + 7008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 != 0)
        goto LAB4;

LAB6:    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB7;

LAB8:
LAB5:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 != 0)
        goto LAB18;

LAB20:    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB21;

LAB22:
LAB19:    xsi_set_current_line(149, ng0);
    t132 = (1 * 1000LL);
    t2 = (t0 + 6816);
    xsi_process_wait(t2, t132);

LAB25:    *((char **)t1) = &&LAB26;

LAB1:    return;
LAB4:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4232U);
    t6 = *((char **)t2);
    t2 = (t0 + 8032);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB5;

LAB7:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3272U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)2);
    if (t12 != 0)
        goto LAB9;

LAB11:    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB14;

LAB15:
LAB10:    goto LAB5;

LAB9:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 1192U);
    t7 = *((char **)t2);
    t13 = (5 - 15);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t7 + t16);
    t17 = *((unsigned char *)t2);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t18 = (5 - 15);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t8 = (t9 + t21);
    t22 = *((unsigned char *)t8);
    t24 = ((IEEE_P_2592010699) + 4024);
    t10 = xsi_base_array_concat(t10, t23, t24, (char)99, t17, (char)99, t22, (char)101);
    t25 = (t0 + 1192U);
    t26 = *((char **)t25);
    t27 = (5 - 15);
    t28 = (t27 * -1);
    t29 = (1U * t28);
    t30 = (0 + t29);
    t25 = (t26 + t30);
    t31 = *((unsigned char *)t25);
    t34 = ((IEEE_P_2592010699) + 4024);
    t32 = xsi_base_array_concat(t32, t33, t34, (char)97, t10, t23, (char)99, t31, (char)101);
    t35 = (t0 + 1192U);
    t36 = *((char **)t35);
    t37 = (5 - 15);
    t38 = (t37 * -1);
    t39 = (1U * t38);
    t40 = (0 + t39);
    t35 = (t36 + t40);
    t41 = *((unsigned char *)t35);
    t44 = ((IEEE_P_2592010699) + 4024);
    t42 = xsi_base_array_concat(t42, t43, t44, (char)97, t32, t33, (char)99, t41, (char)101);
    t45 = (t0 + 1192U);
    t46 = *((char **)t45);
    t47 = (5 - 15);
    t48 = (t47 * -1);
    t49 = (1U * t48);
    t50 = (0 + t49);
    t45 = (t46 + t50);
    t51 = *((unsigned char *)t45);
    t54 = ((IEEE_P_2592010699) + 4024);
    t52 = xsi_base_array_concat(t52, t53, t54, (char)97, t42, t43, (char)99, t51, (char)101);
    t55 = (t0 + 1192U);
    t56 = *((char **)t55);
    t57 = (5 - 15);
    t58 = (t57 * -1);
    t59 = (1U * t58);
    t60 = (0 + t59);
    t55 = (t56 + t60);
    t61 = *((unsigned char *)t55);
    t64 = ((IEEE_P_2592010699) + 4024);
    t62 = xsi_base_array_concat(t62, t63, t64, (char)97, t52, t53, (char)99, t61, (char)101);
    t65 = (t0 + 1192U);
    t66 = *((char **)t65);
    t67 = (5 - 15);
    t68 = (t67 * -1);
    t69 = (1U * t68);
    t70 = (0 + t69);
    t65 = (t66 + t70);
    t71 = *((unsigned char *)t65);
    t74 = ((IEEE_P_2592010699) + 4024);
    t72 = xsi_base_array_concat(t72, t73, t74, (char)97, t62, t63, (char)99, t71, (char)101);
    t75 = (t0 + 1192U);
    t76 = *((char **)t75);
    t77 = (5 - 15);
    t78 = (t77 * -1);
    t79 = (1U * t78);
    t80 = (0 + t79);
    t75 = (t76 + t80);
    t81 = *((unsigned char *)t75);
    t84 = ((IEEE_P_2592010699) + 4024);
    t82 = xsi_base_array_concat(t82, t83, t84, (char)97, t72, t73, (char)99, t81, (char)101);
    t85 = (t0 + 1192U);
    t86 = *((char **)t85);
    t87 = (5 - 15);
    t88 = (t87 * -1);
    t89 = (1U * t88);
    t90 = (0 + t89);
    t85 = (t86 + t90);
    t91 = *((unsigned char *)t85);
    t94 = ((IEEE_P_2592010699) + 4024);
    t92 = xsi_base_array_concat(t92, t93, t94, (char)97, t82, t83, (char)99, t91, (char)101);
    t95 = (t0 + 1192U);
    t96 = *((char **)t95);
    t97 = (5 - 15);
    t98 = (t97 * -1);
    t99 = (1U * t98);
    t100 = (0 + t99);
    t95 = (t96 + t100);
    t101 = *((unsigned char *)t95);
    t104 = ((IEEE_P_2592010699) + 4024);
    t102 = xsi_base_array_concat(t102, t103, t104, (char)97, t92, t93, (char)99, t101, (char)101);
    t105 = (t0 + 1192U);
    t106 = *((char **)t105);
    t107 = (15 - 5);
    t108 = (t107 * 1U);
    t109 = (0 + t108);
    t105 = (t106 + t109);
    t112 = ((IEEE_P_2592010699) + 4024);
    t114 = (t113 + 0U);
    t115 = (t114 + 0U);
    *((int *)t115) = 5;
    t115 = (t114 + 4U);
    *((int *)t115) = 0;
    t115 = (t114 + 8U);
    *((int *)t115) = -1;
    t116 = (0 - 5);
    t117 = (t116 * -1);
    t117 = (t117 + 1);
    t115 = (t114 + 12U);
    *((unsigned int *)t115) = t117;
    t110 = xsi_base_array_concat(t110, t111, t112, (char)97, t102, t103, (char)97, t105, t113, (char)101);
    t117 = (1U + 1U);
    t118 = (t117 + 1U);
    t119 = (t118 + 1U);
    t120 = (t119 + 1U);
    t121 = (t120 + 1U);
    t122 = (t121 + 1U);
    t123 = (t122 + 1U);
    t124 = (t123 + 1U);
    t125 = (t124 + 1U);
    t126 = (t125 + 6U);
    t127 = (16U != t126);
    if (t127 == 1)
        goto LAB12;

LAB13:    t115 = (t0 + 8032);
    t128 = (t115 + 56U);
    t129 = *((char **)t128);
    t130 = (t129 + 56U);
    t131 = *((char **)t130);
    memcpy(t131, t110, 16U);
    xsi_driver_first_trans_fast(t115);
    goto LAB10;

LAB12:    xsi_size_not_matching(16U, t126, 0);
    goto LAB13;

LAB14:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t13 = (8 - 15);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t6 + t16);
    t11 = *((unsigned char *)t2);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t18 = (8 - 15);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t7 = (t8 + t21);
    t12 = *((unsigned char *)t7);
    t10 = ((IEEE_P_2592010699) + 4024);
    t9 = xsi_base_array_concat(t9, t23, t10, (char)99, t11, (char)99, t12, (char)101);
    t24 = (t0 + 1192U);
    t25 = *((char **)t24);
    t27 = (8 - 15);
    t28 = (t27 * -1);
    t29 = (1U * t28);
    t30 = (0 + t29);
    t24 = (t25 + t30);
    t17 = *((unsigned char *)t24);
    t32 = ((IEEE_P_2592010699) + 4024);
    t26 = xsi_base_array_concat(t26, t33, t32, (char)97, t9, t23, (char)99, t17, (char)101);
    t34 = (t0 + 1192U);
    t35 = *((char **)t34);
    t37 = (8 - 15);
    t38 = (t37 * -1);
    t39 = (1U * t38);
    t40 = (0 + t39);
    t34 = (t35 + t40);
    t22 = *((unsigned char *)t34);
    t42 = ((IEEE_P_2592010699) + 4024);
    t36 = xsi_base_array_concat(t36, t43, t42, (char)97, t26, t33, (char)99, t22, (char)101);
    t44 = (t0 + 1192U);
    t45 = *((char **)t44);
    t47 = (8 - 15);
    t48 = (t47 * -1);
    t49 = (1U * t48);
    t50 = (0 + t49);
    t44 = (t45 + t50);
    t31 = *((unsigned char *)t44);
    t52 = ((IEEE_P_2592010699) + 4024);
    t46 = xsi_base_array_concat(t46, t53, t52, (char)97, t36, t43, (char)99, t31, (char)101);
    t54 = (t0 + 1192U);
    t55 = *((char **)t54);
    t57 = (8 - 15);
    t58 = (t57 * -1);
    t59 = (1U * t58);
    t60 = (0 + t59);
    t54 = (t55 + t60);
    t41 = *((unsigned char *)t54);
    t62 = ((IEEE_P_2592010699) + 4024);
    t56 = xsi_base_array_concat(t56, t63, t62, (char)97, t46, t53, (char)99, t41, (char)101);
    t64 = (t0 + 1192U);
    t65 = *((char **)t64);
    t67 = (8 - 15);
    t68 = (t67 * -1);
    t69 = (1U * t68);
    t70 = (0 + t69);
    t64 = (t65 + t70);
    t51 = *((unsigned char *)t64);
    t72 = ((IEEE_P_2592010699) + 4024);
    t66 = xsi_base_array_concat(t66, t73, t72, (char)97, t56, t63, (char)99, t51, (char)101);
    t74 = (t0 + 1192U);
    t75 = *((char **)t74);
    t78 = (15 - 8);
    t79 = (t78 * 1U);
    t80 = (0 + t79);
    t74 = (t75 + t80);
    t82 = ((IEEE_P_2592010699) + 4024);
    t84 = (t93 + 0U);
    t85 = (t84 + 0U);
    *((int *)t85) = 8;
    t85 = (t84 + 4U);
    *((int *)t85) = 0;
    t85 = (t84 + 8U);
    *((int *)t85) = -1;
    t77 = (0 - 8);
    t88 = (t77 * -1);
    t88 = (t88 + 1);
    t85 = (t84 + 12U);
    *((unsigned int *)t85) = t88;
    t76 = xsi_base_array_concat(t76, t83, t82, (char)97, t66, t73, (char)97, t74, t93, (char)101);
    t88 = (1U + 1U);
    t89 = (t88 + 1U);
    t90 = (t89 + 1U);
    t98 = (t90 + 1U);
    t99 = (t98 + 1U);
    t100 = (t99 + 1U);
    t107 = (t100 + 9U);
    t61 = (16U != t107);
    if (t61 == 1)
        goto LAB16;

LAB17:    t85 = (t0 + 8032);
    t86 = (t85 + 56U);
    t92 = *((char **)t86);
    t94 = (t92 + 56U);
    t95 = *((char **)t94);
    memcpy(t95, t76, 16U);
    xsi_driver_first_trans_fast(t85);
    goto LAB10;

LAB16:    xsi_size_not_matching(16U, t107, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 4072U);
    t6 = *((char **)t2);
    t2 = (t0 + 8096);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB19;

LAB21:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 4232U);
    t6 = *((char **)t2);
    t2 = (t0 + 8096);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB19;

LAB23:    goto LAB2;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

}

static void work_a_0286164271_1039780997_p_3(char *t0)
{
    char t12[16];
    char t14[16];
    char t24[16];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t13;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 7256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(154, ng0);
    t3 = (1 * 1000LL);
    t2 = (t0 + 7064);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 2952U);
    t4 = *((char **)t2);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(161, ng0);
    t4 = ((IEEE_P_2592010699) + 4024);
    t2 = xsi_base_array_concat(t2, t12, t4, (char)99, (unsigned char)3, (char)99, (unsigned char)2, (char)101);
    t11 = ((IEEE_P_2592010699) + 4024);
    t7 = xsi_base_array_concat(t7, t14, t11, (char)97, t2, t12, (char)99, (unsigned char)3, (char)101);
    t15 = ((IEEE_P_2592010699) + 4024);
    t13 = xsi_base_array_concat(t13, t24, t15, (char)97, t7, t14, (char)99, (unsigned char)2, (char)101);
    t8 = (1U + 1U);
    t9 = (t8 + 1U);
    t10 = (t9 + 1U);
    t5 = (4U != t10);
    if (t5 == 1)
        goto LAB13;

LAB14:    t16 = (t0 + 8160);
    t20 = (t16 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t13, 4U);
    xsi_driver_first_trans_fast(t16);

LAB9:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t8 = (15 - 11);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t2 = (t4 + t10);
    t11 = ((IEEE_P_2592010699) + 4024);
    t13 = (t14 + 0U);
    t15 = (t13 + 0U);
    *((int *)t15) = 11;
    t15 = (t13 + 4U);
    *((int *)t15) = 9;
    t15 = (t13 + 8U);
    *((int *)t15) = -1;
    t17 = (9 - 11);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t15 = (t13 + 12U);
    *((unsigned int *)t15) = t18;
    t7 = xsi_base_array_concat(t7, t12, t11, (char)99, (unsigned char)2, (char)97, t2, t14, (char)101);
    t18 = (1U + 3U);
    t5 = (4U != t18);
    if (t5 == 1)
        goto LAB20;

LAB21:    t15 = (t0 + 8224);
    t16 = (t15 + 56U);
    t20 = *((char **)t16);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t7, 4U);
    xsi_driver_first_trans_fast(t15);

LAB16:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(177, ng0);
    t4 = ((IEEE_P_2592010699) + 4024);
    t2 = xsi_base_array_concat(t2, t12, t4, (char)99, (unsigned char)3, (char)99, (unsigned char)2, (char)101);
    t11 = ((IEEE_P_2592010699) + 4024);
    t7 = xsi_base_array_concat(t7, t14, t11, (char)97, t2, t12, (char)99, (unsigned char)3, (char)101);
    t15 = ((IEEE_P_2592010699) + 4024);
    t13 = xsi_base_array_concat(t13, t24, t15, (char)97, t7, t14, (char)99, (unsigned char)2, (char)101);
    t8 = (1U + 1U);
    t9 = (t8 + 1U);
    t10 = (t9 + 1U);
    t5 = (4U != t10);
    if (t5 == 1)
        goto LAB27;

LAB28:    t16 = (t0 + 8288);
    t20 = (t16 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t13, 4U);
    xsi_driver_first_trans_fast(t16);

LAB23:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 1192U);
    t7 = *((char **)t2);
    t8 = (15 - 11);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t2 = (t7 + t10);
    t13 = ((IEEE_P_2592010699) + 4024);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 11;
    t16 = (t15 + 4U);
    *((int *)t16) = 9;
    t16 = (t15 + 8U);
    *((int *)t16) = -1;
    t17 = (9 - 11);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t11 = xsi_base_array_concat(t11, t12, t13, (char)99, (unsigned char)2, (char)97, t2, t14, (char)101);
    t18 = (1U + 3U);
    t19 = (4U != t18);
    if (t19 == 1)
        goto LAB11;

LAB12:    t16 = (t0 + 8160);
    t20 = (t16 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t11, 4U);
    xsi_driver_first_trans_fast(t16);
    goto LAB9;

LAB11:    xsi_size_not_matching(4U, t18, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(4U, t10, 0);
    goto LAB14;

LAB15:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 1192U);
    t7 = *((char **)t2);
    t8 = (15 - 8);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t2 = (t7 + t10);
    t13 = ((IEEE_P_2592010699) + 4024);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 8;
    t16 = (t15 + 4U);
    *((int *)t16) = 6;
    t16 = (t15 + 8U);
    *((int *)t16) = -1;
    t17 = (6 - 8);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t11 = xsi_base_array_concat(t11, t12, t13, (char)99, (unsigned char)2, (char)97, t2, t14, (char)101);
    t18 = (1U + 3U);
    t19 = (4U != t18);
    if (t19 == 1)
        goto LAB18;

LAB19:    t16 = (t0 + 8224);
    t20 = (t16 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t11, 4U);
    xsi_driver_first_trans_fast(t16);
    goto LAB16;

LAB18:    xsi_size_not_matching(4U, t18, 0);
    goto LAB19;

LAB20:    xsi_size_not_matching(4U, t18, 0);
    goto LAB21;

LAB22:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 1192U);
    t7 = *((char **)t2);
    t8 = (15 - 5);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t2 = (t7 + t10);
    t13 = ((IEEE_P_2592010699) + 4024);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 5;
    t16 = (t15 + 4U);
    *((int *)t16) = 3;
    t16 = (t15 + 8U);
    *((int *)t16) = -1;
    t17 = (3 - 5);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t11 = xsi_base_array_concat(t11, t12, t13, (char)99, (unsigned char)2, (char)97, t2, t14, (char)101);
    t18 = (1U + 3U);
    t19 = (4U != t18);
    if (t19 == 1)
        goto LAB25;

LAB26:    t16 = (t0 + 8288);
    t20 = (t16 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t11, 4U);
    xsi_driver_first_trans_fast(t16);
    goto LAB23;

LAB25:    xsi_size_not_matching(4U, t18, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(4U, t10, 0);
    goto LAB28;

}

static void work_a_0286164271_1039780997_p_4(char *t0)
{
    char t13[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    int64 t28;

LAB0:    t1 = (t0 + 7504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = (15 - 15);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t2 = (t3 + t6);
    t7 = (t0 + 11701);
    t9 = 1;
    if (4U == 4U)
        goto LAB7;

LAB8:    t9 = 0;

LAB9:    if (t9 != 0)
        goto LAB4;

LAB6:    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t9 = *((unsigned char *)t3);
    t27 = (t9 == (unsigned char)3);
    if (t27 != 0)
        goto LAB13;

LAB14:    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t9 = *((unsigned char *)t3);
    t27 = (t9 == (unsigned char)2);
    if (t27 != 0)
        goto LAB15;

LAB16:
LAB5:    xsi_set_current_line(192, ng0);
    t28 = (1 * 1000LL);
    t2 = (t0 + 7312);
    xsi_process_wait(t2, t28);

LAB19:    *((char **)t1) = &&LAB20;

LAB1:    return;
LAB4:    xsi_set_current_line(185, ng0);
    t14 = (t0 + 5352U);
    t15 = *((char **)t14);
    t14 = (t0 + 11492U);
    t16 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t15, t14);
    t17 = (t0 + 4072U);
    t18 = *((char **)t17);
    t17 = (t0 + 11380U);
    t19 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t18, t17);
    t20 = (t16 + t19);
    t21 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t13, t20, 16);
    t22 = (t0 + 8352);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t21, 16U);
    xsi_driver_first_trans_fast(t22);
    goto LAB5;

LAB7:    t10 = 0;

LAB10:    if (t10 < 4U)
        goto LAB11;
    else
        goto LAB9;

LAB11:    t11 = (t2 + t10);
    t12 = (t7 + t10);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB8;

LAB12:    t10 = (t10 + 1);
    goto LAB10;

LAB13:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 5352U);
    t7 = *((char **)t2);
    t2 = (t0 + 8352);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t7, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB5;

LAB15:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 4872U);
    t7 = *((char **)t2);
    t2 = (t0 + 8352);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t7, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB5;

LAB17:    goto LAB2;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

}


extern void work_a_0286164271_1039780997_init()
{
	static char *pe[] = {(void *)work_a_0286164271_1039780997_p_0,(void *)work_a_0286164271_1039780997_p_1,(void *)work_a_0286164271_1039780997_p_2,(void *)work_a_0286164271_1039780997_p_3,(void *)work_a_0286164271_1039780997_p_4};
	xsi_register_didat("work_a_0286164271_1039780997", "isim/Main_isim_beh.exe.sim/work/a_0286164271_1039780997.didat");
	xsi_register_executes(pe);
}
