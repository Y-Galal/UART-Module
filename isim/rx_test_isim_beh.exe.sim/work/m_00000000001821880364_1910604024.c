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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/Working/Projects/UART-Module/rx.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {216U, 0U};
static unsigned int ng5[] = {7U, 0U};
static unsigned int ng6[] = {2U, 0U};



static void Always_32_0(char *t0)
{
    char t11[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;

LAB0:    t1 = (t0 + 2144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2340);
    *((int *)t2) = 1;
    t3 = (t0 + 2172);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1344);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(90, ng0);

LAB78:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(36, ng0);

LAB16:    xsi_set_current_line(37, ng0);
    t9 = (t0 + 932U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB20;

LAB17:    if (t23 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t11) = 1;

LAB20:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB23:    goto LAB15;

LAB9:    xsi_set_current_line(51, ng0);

LAB33:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1620);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 8, t5, 8, t7, 8);
    t9 = (t0 + 1620);
    xsi_vlogvar_wait_assign_value(t9, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1620);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t9);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t9);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB37;

LAB34:    if (t23 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t11) = 1;

LAB37:    t12 = (t11 + 4);
    t28 = *((unsigned int *)t12);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(64, ng0);

LAB50:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 932U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528);
    t4 = (t0 + 1528);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t9 = (t0 + 1436);
    t10 = (t9 + 36U);
    t12 = *((char **)t10);
    xsi_vlog_generic_convert_bit_index(t11, t7, 2, t12, 3, 2);
    t13 = (t11 + 4);
    t14 = *((unsigned int *)t13);
    t8 = (!(t14));
    if (t8 == 1)
        goto LAB51;

LAB52:
LAB40:    goto LAB15;

LAB11:    xsi_set_current_line(71, ng0);

LAB53:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 1620);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 8, t5, 8, t7, 8);
    t9 = (t0 + 1620);
    xsi_vlogvar_wait_assign_value(t9, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1620);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t9);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t9);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB57;

LAB54:    if (t23 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t11) = 1;

LAB57:    t12 = (t11 + 4);
    t28 = *((unsigned int *)t12);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB58;

LAB59:
LAB60:    goto LAB15;

LAB19:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(38, ng0);

LAB24:    xsi_set_current_line(39, ng0);
    t33 = (t0 + 1620);
    t34 = (t33 + 36U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng2)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_minus(t37, 8, t35, 8, t36, 8);
    t38 = (t0 + 1620);
    xsi_vlogvar_wait_assign_value(t38, t37, 0, 0, 8, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1620);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t9);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t9);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB28;

LAB25:    if (t23 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t11) = 1;

LAB28:    t12 = (t11 + 4);
    t28 = *((unsigned int *)t12);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB29;

LAB30:
LAB31:    goto LAB23;

LAB27:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(41, ng0);

LAB32:    xsi_set_current_line(42, ng0);
    t13 = ((char*)((ng4)));
    t26 = (t0 + 1620);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 8, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB31;

LAB36:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(54, ng0);

LAB41:    xsi_set_current_line(55, ng0);
    t13 = ((char*)((ng4)));
    t26 = (t0 + 1620);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 8, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1436);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 3, t4, 3, t5, 3);
    t7 = (t0 + 1436);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1436);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t9);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t9);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB45;

LAB42:    if (t23 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t11) = 1;

LAB45:    t12 = (t11 + 4);
    t28 = *((unsigned int *)t12);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB46;

LAB47:
LAB48:    goto LAB40;

LAB44:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(58, ng0);

LAB49:    xsi_set_current_line(59, ng0);
    t13 = ((char*)((ng6)));
    t26 = (t0 + 1344);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 2, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1436);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB48;

LAB51:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB52;

LAB56:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(74, ng0);

LAB61:    xsi_set_current_line(75, ng0);
    t13 = ((char*)((ng4)));
    t26 = (t0 + 1620);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 8, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 932U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t11, 0, 8);
    t7 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t5);
    t15 = (t15 & 1);
    if (*((unsigned int *)t7) != 0)
        goto LAB62;

LAB63:    t16 = 1;

LAB65:    t17 = (t16 <= 7);
    if (t17 == 1)
        goto LAB66;

LAB67:    *((unsigned int *)t11) = t15;

LAB64:    memset(t37, 0, 8);
    t10 = (t3 + 4);
    t12 = (t11 + 4);
    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t11);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t12);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t12);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t25 & t31);
    if (t32 != 0)
        goto LAB72;

LAB69:    if (t30 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t37) = 1;

LAB72:    t26 = (t37 + 4);
    t39 = *((unsigned int *)t26);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(82, ng0);

LAB77:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB75:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB60;

LAB62:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB64;

LAB66:    t14 = (t14 >> 1);
    t18 = (t14 & 1);
    t15 = (t15 ^ t18);

LAB68:    t16 = (t16 + 1);
    goto LAB65;

LAB71:    t13 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB72;

LAB73:    xsi_set_current_line(77, ng0);

LAB76:    xsi_set_current_line(78, ng0);
    t27 = ((char*)((ng1)));
    t33 = (t0 + 1160);
    xsi_vlogvar_wait_assign_value(t33, t27, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1528);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1252);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    goto LAB75;

}


extern void work_m_00000000001821880364_1910604024_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000001821880364_1910604024", "isim/rx_test_isim_beh.exe.sim/work/m_00000000001821880364_1910604024.didat");
	xsi_register_executes(pe);
}
