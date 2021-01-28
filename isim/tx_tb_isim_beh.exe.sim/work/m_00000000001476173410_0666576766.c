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
static const char *ng0 = "E:/Working/Projects/UART-Module/tx.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {216U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {7U, 0U};
static unsigned int ng6[] = {3U, 0U};



static void Always_33_0(char *t0)
{
    char t11[8];
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
    unsigned int t12;
    unsigned int t13;
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
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 2224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2420);
    *((int *)t2) = 1;
    t3 = (t0 + 2252);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1516);
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

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(86, ng0);

LAB69:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1516);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(37, ng0);

LAB18:    xsi_set_current_line(38, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 1332);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1012U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB22;

LAB19:    if (t21 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t11) = 1;

LAB22:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB23;

LAB24:
LAB25:    goto LAB17;

LAB9:    xsi_set_current_line(46, ng0);

LAB27:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1332);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1700);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 8, t4, 8, t5, 8);
    t7 = (t0 + 1700);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1700);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t9);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB31;

LAB28:    if (t21 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t11) = 1;

LAB31:    t29 = (t11 + 4);
    t24 = *((unsigned int *)t29);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB32;

LAB33:
LAB34:    goto LAB17;

LAB11:    xsi_set_current_line(58, ng0);

LAB36:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 920U);
    t4 = *((char **)t3);
    t3 = (t0 + 896U);
    t5 = (t3 + 44U);
    t7 = *((char **)t5);
    t9 = (t0 + 1608);
    t10 = (t9 + 36U);
    t29 = *((char **)t10);
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t7, 2, t29, 3, 2);
    t30 = (t0 + 1332);
    xsi_vlogvar_wait_assign_value(t30, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1700);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 8, t4, 8, t5, 8);
    t7 = (t0 + 1700);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1700);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t9);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB40;

LAB37:    if (t21 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t11) = 1;

LAB40:    t29 = (t11 + 4);
    t24 = *((unsigned int *)t29);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB41;

LAB42:
LAB43:    goto LAB17;

LAB13:    xsi_set_current_line(74, ng0);

LAB53:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 920U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t4);
    t13 = (t13 & 1);
    if (*((unsigned int *)t3) != 0)
        goto LAB54;

LAB55:    t14 = 1;

LAB57:    t15 = (t14 <= 7);
    if (t15 == 1)
        goto LAB58;

LAB59:    *((unsigned int *)t11) = t13;

LAB56:    t7 = (t0 + 1332);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1700);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 8, t4, 8, t5, 8);
    t7 = (t0 + 1700);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1700);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t9);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB64;

LAB61:    if (t21 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t11) = 1;

LAB64:    t29 = (t11 + 4);
    t24 = *((unsigned int *)t29);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB65;

LAB66:
LAB67:    goto LAB17;

LAB21:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(40, ng0);

LAB26:    xsi_set_current_line(41, ng0);
    t10 = ((char*)((ng2)));
    t29 = (t0 + 1516);
    xsi_vlogvar_wait_assign_value(t29, t10, 0, 0, 2, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB25;

LAB30:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(50, ng0);

LAB35:    xsi_set_current_line(51, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 1700);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 8, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1516);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB34;

LAB39:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(62, ng0);

LAB44:    xsi_set_current_line(63, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 1700);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 8, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 3, t4, 3, t5, 3);
    t7 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t9);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB48;

LAB45:    if (t21 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t11) = 1;

LAB48:    t29 = (t11 + 4);
    t24 = *((unsigned int *)t29);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB49;

LAB50:
LAB51:    goto LAB43;

LAB47:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(66, ng0);

LAB52:    xsi_set_current_line(67, ng0);
    t30 = ((char*)((ng6)));
    t31 = (t0 + 1516);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 2, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB51;

LAB54:    t5 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB56;

LAB58:    t12 = (t12 >> 1);
    t16 = (t12 & 1);
    t13 = (t13 ^ t16);

LAB60:    t14 = (t14 + 1);
    goto LAB57;

LAB63:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(78, ng0);

LAB68:    xsi_set_current_line(79, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 1700);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 8, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1516);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB67;

}


extern void work_m_00000000001476173410_0666576766_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_00000000001476173410_0666576766", "isim/tx_tb_isim_beh.exe.sim/work/m_00000000001476173410_0666576766.didat");
	xsi_register_executes(pe);
}
