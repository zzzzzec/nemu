#include "cpu/exec/template-start.h"

#define instr movsx

static void do_execute() {
	DATA_TYPE_S result = op_dest->val;
	printf ("src.size = %d,dest.size = %d\n",(int)op_src->size,(int)op_dest->size);
	if (op_dest->size == 1)result &= 0xff;
	printf ("%d : %x -> %x\n",DATA_BYTE,op_dest->val,result);
	OPERAND_W(op_src, result);
	print_asm_template2();
}


make_instr_helper(rm2r)

#include "cpu/exec/template-end.h"
