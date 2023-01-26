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
static const char *ng0 = "E:/CE-7/Digital System Design - DSD/Lab/Xilinx Projects/FIR10thOrder/fir_10th_Order.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};



static void Always_34_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 6048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 6864);
    *((int *)t2) = 1;
    t3 = (t0 + 6080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    goto LAB2;

}

static void Always_49_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 6296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 6880);
    *((int *)t2) = 1;
    t3 = (t0 + 6328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(65, ng0);

LAB10:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(52, ng0);

LAB9:    xsi_set_current_line(53, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 16, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB8;

}

static void Always_80_2(char *t0)
{
    char t10[8];
    char t17[8];
    char t18[8];
    char t25[8];
    char t26[8];
    char t33[8];
    char t34[8];
    char t41[8];
    char t42[8];
    char t49[8];
    char t50[8];
    char t57[8];
    char t58[8];
    char t65[8];
    char t66[8];
    char t73[8];
    char t74[8];
    char t81[8];
    char t82[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t83;

LAB0:    t1 = (t0 + 6544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 6896);
    *((int *)t2) = 1;
    t3 = (t0 + 6576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3688);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_multiply(t10, 16, t6, 16, t9, 16);
    t11 = (t0 + 2088);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 3848);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_multiply(t17, 16, t13, 16, t16, 16);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 16, t10, 16, t17, 16);
    t19 = (t0 + 2248);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 4008);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    xsi_vlog_unsigned_multiply(t25, 16, t21, 16, t24, 16);
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 16, t18, 16, t25, 16);
    t27 = (t0 + 2408);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 4168);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    xsi_vlog_unsigned_multiply(t33, 16, t29, 16, t32, 16);
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 16, t26, 16, t33, 16);
    t35 = (t0 + 2568);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t0 + 4328);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memset(t41, 0, 8);
    xsi_vlog_unsigned_multiply(t41, 16, t37, 16, t40, 16);
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 16, t34, 16, t41, 16);
    t43 = (t0 + 2728);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t0 + 4488);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t49, 0, 8);
    xsi_vlog_unsigned_multiply(t49, 16, t45, 16, t48, 16);
    memset(t50, 0, 8);
    xsi_vlog_unsigned_add(t50, 16, t42, 16, t49, 16);
    t51 = (t0 + 2888);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = (t0 + 4648);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memset(t57, 0, 8);
    xsi_vlog_unsigned_multiply(t57, 16, t53, 16, t56, 16);
    memset(t58, 0, 8);
    xsi_vlog_unsigned_add(t58, 16, t50, 16, t57, 16);
    t59 = (t0 + 3048);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = (t0 + 4808);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    memset(t65, 0, 8);
    xsi_vlog_unsigned_multiply(t65, 16, t61, 16, t64, 16);
    memset(t66, 0, 8);
    xsi_vlog_unsigned_add(t66, 16, t58, 16, t65, 16);
    t67 = (t0 + 3208);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t70 = (t0 + 4968);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    memset(t73, 0, 8);
    xsi_vlog_unsigned_multiply(t73, 16, t69, 16, t72, 16);
    memset(t74, 0, 8);
    xsi_vlog_unsigned_add(t74, 16, t66, 16, t73, 16);
    t75 = (t0 + 3368);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    t78 = (t0 + 5128);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memset(t81, 0, 8);
    xsi_vlog_unsigned_multiply(t81, 16, t77, 16, t80, 16);
    memset(t82, 0, 8);
    xsi_vlog_unsigned_add(t82, 16, t74, 16, t81, 16);
    t83 = (t0 + 1768);
    xsi_vlogvar_assign_value(t83, t82, 0, 0, 16);
    goto LAB2;

}


extern void work_m_00000000004206251634_0595866303_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Always_49_1,(void *)Always_80_2};
	xsi_register_didat("work_m_00000000004206251634_0595866303", "isim/fir_10th_Order_tb_isim_beh.exe.sim/work/m_00000000004206251634_0595866303.didat");
	xsi_register_executes(pe);
}
