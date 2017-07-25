//Licensed under the MIT license.
#include "config.h"
#include "OpCodes.h"

using namespace Cil;


OpCode* OpCodes::OneByteOpCode = new OpCode[0xe0 + 1];

OpCode* OpCodes::TwoBytesOpCode = new OpCode[0x1e + 1];
const OpCode OpCodes::Nop(
        0xff << 0 | 0x00 << 8 | (int8) Code::Nop << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Break(
        0xff << 0 | 0x01 << 8 | (int8) Code::Break << 16 | (int8) FlowControl::Break << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Ldarg_0(
        0xff << 0 | 0x02 << 8 | (int8) Code::Ldarg_0 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Ldarg_1(
        0xff << 0 | 0x03 << 8 | (int8) Code::Ldarg_1 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Ldarg_2(
        0xff << 0 | 0x04 << 8 | (int8) Code::Ldarg_2 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Ldarg_3(
        0xff << 0 | 0x05 << 8 | (int8) Code::Ldarg_3 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Ldloc_0(
        0xff << 0 | 0x06 << 8 | (int8) Code::Ldloc_0 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Ldloc_1(
        0xff << 0 | 0x07 << 8 | (int8) Code::Ldloc_1 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Ldloc_2(
        0xff << 0 | 0x08 << 8 | (int8) Code::Ldloc_2 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Ldloc_3(
        0xff << 0 | 0x09 << 8 | (int8) Code::Ldloc_3 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Stloc_0(
        0xff << 0 | 0x0a << 8 | (int8) Code::Stloc_0 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Stloc_1(
        0xff << 0 | 0x0b << 8 | (int8) Code::Stloc_1 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Stloc_2(
        0xff << 0 | 0x0c << 8 | (int8) Code::Stloc_2 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Stloc_3(
        0xff << 0 | 0x0d << 8 | (int8) Code::Stloc_3 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Ldarg_S(
        0xff << 0 | 0x0e << 8 | (int8) Code::Ldarg_S << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineArg << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Ldarga_S(
        0xff << 0 | 0x0f << 8 | (int8) Code::Ldarga_S << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineArg << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Starg_S(
        0xff << 0 | 0x10 << 8 | (int8) Code::Starg_S << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineArg << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Ldloc_S(
        0xff << 0 | 0x11 << 8 | (int8) Code::Ldloc_S << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineVar << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Ldloca_S(
        0xff << 0 | 0x12 << 8 | (int8) Code::Ldloca_S << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineVar << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Stloc_S(
        0xff << 0 | 0x13 << 8 | (int8) Code::Stloc_S << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineVar << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Ldnull(
        0xff << 0 | 0x14 << 8 | (int8) Code::Ldnull << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushref << 24);

const OpCode OpCodes::Ldc_I4_M1(
        0xff << 0 | 0x15 << 8 | (int8) Code::Ldc_I4_M1 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldc_I4_0(
        0xff << 0 | 0x16 << 8 | (int8) Code::Ldc_I4_0 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldc_I4_1(
        0xff << 0 | 0x17 << 8 | (int8) Code::Ldc_I4_1 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldc_I4_2(
        0xff << 0 | 0x18 << 8 | (int8) Code::Ldc_I4_2 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldc_I4_3(
        0xff << 0 | 0x19 << 8 | (int8) Code::Ldc_I4_3 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldc_I4_4(
        0xff << 0 | 0x1a << 8 | (int8) Code::Ldc_I4_4 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldc_I4_5(
        0xff << 0 | 0x1b << 8 | (int8) Code::Ldc_I4_5 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldc_I4_6(
        0xff << 0 | 0x1c << 8 | (int8) Code::Ldc_I4_6 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldc_I4_7(
        0xff << 0 | 0x1d << 8 | (int8) Code::Ldc_I4_7 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldc_I4_8(
        0xff << 0 | 0x1e << 8 | (int8) Code::Ldc_I4_8 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldc_I4_S(
        0xff << 0 | 0x1f << 8 | (int8) Code::Ldc_I4_S << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineI << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldc_I4(
        0xff << 0 | 0x20 << 8 | (int8) Code::Ldc_I4 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineI << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldc_I8(
        0xff << 0 | 0x21 << 8 | (int8) Code::Ldc_I8 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineI8 << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi8 << 24);

const OpCode OpCodes::Ldc_R4(
        0xff << 0 | 0x22 << 8 | (int8) Code::Ldc_R4 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::ShortInlineR << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushr4 << 24);

const OpCode OpCodes::Ldc_R8(
        0xff << 0 | 0x23 << 8 | (int8) Code::Ldc_R8 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineR << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushr8 << 24);

const OpCode OpCodes::Dup(
        0xff << 0 | 0x25 << 8 | (int8) Code::Dup << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Push1_push1 << 24);

const OpCode OpCodes::Pop(
        0xff << 0 | 0x26 << 8 | (int8) Code::Pop << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Jmp(
        0xff << 0 | 0x27 << 8 | (int8) Code::Jmp << 16 | (int8) FlowControl::Call << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineMethod << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Call(
        0xff << 0 | 0x28 << 8 | (int8) Code::Call << 16 | (int8) FlowControl::Call << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineMethod << 8 | (int8) StackBehaviour::Varpop << 16 | (int8) StackBehaviour::Varpush << 24);

const OpCode OpCodes::Calli(
        0xff << 0 | 0x29 << 8 | (int8) Code::Calli << 16 | (int8) FlowControl::Call << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineSig << 8 | (int8) StackBehaviour::Varpop << 16 | (int8) StackBehaviour::Varpush << 24);

const OpCode OpCodes::Ret(
        0xff << 0 | 0x2a << 8 | (int8) Code::Ret << 16 | (int8) FlowControl::Return << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Varpop << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Br_S(
        0xff << 0 | 0x2b << 8 | (int8) Code::Br_S << 16 | (int8) FlowControl::Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineBrTarget << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Brfalse_S(
        0xff << 0 | 0x2c << 8 | (int8) Code::Brfalse_S << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineBrTarget << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Brtrue_S(
        0xff << 0 | 0x2d << 8 | (int8) Code::Brtrue_S << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineBrTarget << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Beq_S(
        0xff << 0 | 0x2e << 8 | (int8) Code::Beq_S << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Bge_S(
        0xff << 0 | 0x2f << 8 | (int8) Code::Bge_S << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Bgt_S(
        0xff << 0 | 0x30 << 8 | (int8) Code::Bgt_S << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Ble_S(
        0xff << 0 | 0x31 << 8 | (int8) Code::Ble_S << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Blt_S(
        0xff << 0 | 0x32 << 8 | (int8) Code::Blt_S << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Bne_Un_S(
        0xff << 0 | 0x33 << 8 | (int8) Code::Bne_Un_S << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Bge_Un_S(
        0xff << 0 | 0x34 << 8 | (int8) Code::Bge_Un_S << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Bgt_Un_S(
        0xff << 0 | 0x35 << 8 | (int8) Code::Bgt_Un_S << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Ble_Un_S(
        0xff << 0 | 0x36 << 8 | (int8) Code::Ble_Un_S << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Blt_Un_S(
        0xff << 0 | 0x37 << 8 | (int8) Code::Blt_Un_S << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Br(
        0xff << 0 | 0x38 << 8 | (int8) Code::Br << 16 | (int8) FlowControl::Branch << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineBrTarget << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Brfalse(
        0xff << 0 | 0x39 << 8 | (int8) Code::Brfalse << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineBrTarget << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Brtrue(
        0xff << 0 | 0x3a << 8 | (int8) Code::Brtrue << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineBrTarget << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Beq(
        0xff << 0 | 0x3b << 8 | (int8) Code::Beq << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Bge(
        0xff << 0 | 0x3c << 8 | (int8) Code::Bge << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Bgt(
        0xff << 0 | 0x3d << 8 | (int8) Code::Bgt << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Ble(
        0xff << 0 | 0x3e << 8 | (int8) Code::Ble << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Blt(
        0xff << 0 | 0x3f << 8 | (int8) Code::Blt << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Bne_Un(
        0xff << 0 | 0x40 << 8 | (int8) Code::Bne_Un << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Bge_Un(
        0xff << 0 | 0x41 << 8 | (int8) Code::Bge_Un << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Bgt_Un(
        0xff << 0 | 0x42 << 8 | (int8) Code::Bgt_Un << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Ble_Un(
        0xff << 0 | 0x43 << 8 | (int8) Code::Ble_Un << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Blt_Un(
        0xff << 0 | 0x44 << 8 | (int8) Code::Blt_Un << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::InlineBrTarget << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Switch(
        0xff << 0 | 0x45 << 8 | (int8) Code::Switch << 16 | (int8) FlowControl::Cond_Branch << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineSwitch << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Ldind_I1(
        0xff << 0 | 0x46 << 8 | (int8) Code::Ldind_I1 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldind_U1(
        0xff << 0 | 0x47 << 8 | (int8) Code::Ldind_U1 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldind_I2(
        0xff << 0 | 0x48 << 8 | (int8) Code::Ldind_I2 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldind_U2(
        0xff << 0 | 0x49 << 8 | (int8) Code::Ldind_U2 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldind_I4(
        0xff << 0 | 0x4a << 8 | (int8) Code::Ldind_I4 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldind_U4(
        0xff << 0 | 0x4b << 8 | (int8) Code::Ldind_U4 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldind_I8(
        0xff << 0 | 0x4c << 8 | (int8) Code::Ldind_I8 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Pushi8 << 24);

const OpCode OpCodes::Ldind_I(
        0xff << 0 | 0x4d << 8 | (int8) Code::Ldind_I << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldind_R4(
        0xff << 0 | 0x4e << 8 | (int8) Code::Ldind_R4 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Pushr4 << 24);

const OpCode OpCodes::Ldind_R8(
        0xff << 0 | 0x4f << 8 | (int8) Code::Ldind_R8 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Pushr8 << 24);

const OpCode OpCodes::Ldind_Ref(
        0xff << 0 | 0x50 << 8 | (int8) Code::Ldind_Ref << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Pushref << 24);

const OpCode OpCodes::Stind_Ref(
        0xff << 0 | 0x51 << 8 | (int8) Code::Stind_Ref << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi_popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Stind_I1(
        0xff << 0 | 0x52 << 8 | (int8) Code::Stind_I1 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi_popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Stind_I2(
        0xff << 0 | 0x53 << 8 | (int8) Code::Stind_I2 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi_popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Stind_I4(
        0xff << 0 | 0x54 << 8 | (int8) Code::Stind_I4 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi_popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Stind_I8(
        0xff << 0 | 0x55 << 8 | (int8) Code::Stind_I8 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi_popi8 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Stind_R4(
        0xff << 0 | 0x56 << 8 | (int8) Code::Stind_R4 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi_popr4 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Stind_R8(
        0xff << 0 | 0x57 << 8 | (int8) Code::Stind_R8 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi_popr8 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Add(
        0xff << 0 | 0x58 << 8 | (int8) Code::Add << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Sub(
        0xff << 0 | 0x59 << 8 | (int8) Code::Sub << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Mul(
        0xff << 0 | 0x5a << 8 | (int8) Code::Mul << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Div(
        0xff << 0 | 0x5b << 8 | (int8) Code::Div << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Div_Un(
        0xff << 0 | 0x5c << 8 | (int8) Code::Div_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Rem(
        0xff << 0 | 0x5d << 8 | (int8) Code::Rem << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Rem_Un(
        0xff << 0 | 0x5e << 8 | (int8) Code::Rem_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::And(
        0xff << 0 | 0x5f << 8 | (int8) Code::And << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Or(
        0xff << 0 | 0x60 << 8 | (int8) Code::Or << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Xor(
        0xff << 0 | 0x61 << 8 | (int8) Code::Xor << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Shl(
        0xff << 0 | 0x62 << 8 | (int8) Code::Shl << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Shr(
        0xff << 0 | 0x63 << 8 | (int8) Code::Shr << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Shr_Un(
        0xff << 0 | 0x64 << 8 | (int8) Code::Shr_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Neg(
        0xff << 0 | 0x65 << 8 | (int8) Code::Neg << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Not(
        0xff << 0 | 0x66 << 8 | (int8) Code::Not << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Conv_I1(
        0xff << 0 | 0x67 << 8 | (int8) Code::Conv_I1 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_I2(
        0xff << 0 | 0x68 << 8 | (int8) Code::Conv_I2 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_I4(
        0xff << 0 | 0x69 << 8 | (int8) Code::Conv_I4 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_I8(
        0xff << 0 | 0x6a << 8 | (int8) Code::Conv_I8 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi8 << 24);

const OpCode OpCodes::Conv_R4(
        0xff << 0 | 0x6b << 8 | (int8) Code::Conv_R4 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushr4 << 24);

const OpCode OpCodes::Conv_R8(
        0xff << 0 | 0x6c << 8 | (int8) Code::Conv_R8 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushr8 << 24);

const OpCode OpCodes::Conv_U4(
        0xff << 0 | 0x6d << 8 | (int8) Code::Conv_U4 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_U8(
        0xff << 0 | 0x6e << 8 | (int8) Code::Conv_U8 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi8 << 24);

const OpCode OpCodes::Callvirt(
        0xff << 0 | 0x6f << 8 | (int8) Code::Callvirt << 16 | (int8) FlowControl::Call << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineMethod << 8 | (int8) StackBehaviour::Varpop << 16 | (int8) StackBehaviour::Varpush << 24);

const OpCode OpCodes::Cpobj(
        0xff << 0 | 0x70 << 8 | (int8) Code::Cpobj << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineType << 8 | (int8) StackBehaviour::Popi_popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Ldobj(
        0xff << 0 | 0x71 << 8 | (int8) Code::Ldobj << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineType << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Ldstr(
        0xff << 0 | 0x72 << 8 | (int8) Code::Ldstr << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineString << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushref << 24);

const OpCode OpCodes::Newobj(
        0xff << 0 | 0x73 << 8 | (int8) Code::Newobj << 16 | (int8) FlowControl::Call << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineMethod << 8 | (int8) StackBehaviour::Varpop << 16 | (int8) StackBehaviour::Pushref << 24);

const OpCode OpCodes::Castclass(
        0xff << 0 | 0x74 << 8 | (int8) Code::Castclass << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineType << 8 | (int8) StackBehaviour::Popref << 16 | (int8) StackBehaviour::Pushref << 24);

const OpCode OpCodes::Isinst(
        0xff << 0 | 0x75 << 8 | (int8) Code::Isinst << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineType << 8 | (int8) StackBehaviour::Popref << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_R_Un(
        0xff << 0 | 0x76 << 8 | (int8) Code::Conv_R_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushr8 << 24);

const OpCode OpCodes::Unbox(
        0xff << 0 | 0x79 << 8 | (int8) Code::Unbox << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineType << 8 | (int8) StackBehaviour::Popref << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Throw(
        0xff << 0 | 0x7a << 8 | (int8) Code::Throw << 16 | (int8) FlowControl::Throw << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Ldfld(
        0xff << 0 | 0x7b << 8 | (int8) Code::Ldfld << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineField << 8 | (int8) StackBehaviour::Popref << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Ldflda(
        0xff << 0 | 0x7c << 8 | (int8) Code::Ldflda << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineField << 8 | (int8) StackBehaviour::Popref << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Stfld(
        0xff << 0 | 0x7d << 8 | (int8) Code::Stfld << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineField << 8 | (int8) StackBehaviour::Popref_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Ldsfld(
        0xff << 0 | 0x7e << 8 | (int8) Code::Ldsfld << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineField << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Ldsflda(
        0xff << 0 | 0x7f << 8 | (int8) Code::Ldsflda << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineField << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Stsfld(
        0xff << 0 | 0x80 << 8 | (int8) Code::Stsfld << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineField << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Stobj(
        0xff << 0 | 0x81 << 8 | (int8) Code::Stobj << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineType << 8 | (int8) StackBehaviour::Popi_pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Conv_Ovf_I1_Un(
        0xff << 0 | 0x82 << 8 | (int8) Code::Conv_Ovf_I1_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_Ovf_I2_Un(
        0xff << 0 | 0x83 << 8 | (int8) Code::Conv_Ovf_I2_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_Ovf_I4_Un(
        0xff << 0 | 0x84 << 8 | (int8) Code::Conv_Ovf_I4_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_Ovf_I8_Un(
        0xff << 0 | 0x85 << 8 | (int8) Code::Conv_Ovf_I8_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi8 << 24);

const OpCode OpCodes::Conv_Ovf_U1_Un(
        0xff << 0 | 0x86 << 8 | (int8) Code::Conv_Ovf_U1_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_Ovf_U2_Un(
        0xff << 0 | 0x87 << 8 | (int8) Code::Conv_Ovf_U2_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_Ovf_U4_Un(
        0xff << 0 | 0x88 << 8 | (int8) Code::Conv_Ovf_U4_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_Ovf_U8_Un(
        0xff << 0 | 0x89 << 8 | (int8) Code::Conv_Ovf_U8_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi8 << 24);

const OpCode OpCodes::Conv_Ovf_I_Un(
        0xff << 0 | 0x8a << 8 | (int8) Code::Conv_Ovf_I_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_Ovf_U_Un(
        0xff << 0 | 0x8b << 8 | (int8) Code::Conv_Ovf_U_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Box(
        0xff << 0 | 0x8c << 8 | (int8) Code::Box << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineType << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushref << 24);

const OpCode OpCodes::Newarr(
        0xff << 0 | 0x8d << 8 | (int8) Code::Newarr << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineType << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Pushref << 24);

const OpCode OpCodes::Ldlen(
        0xff << 0 | 0x8e << 8 | (int8) Code::Ldlen << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldelema(
        0xff << 0 | 0x8f << 8 | (int8) Code::Ldelema << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineType << 8 | (int8) StackBehaviour::Popref_popi << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldelem_I1(
        0xff << 0 | 0x90 << 8 | (int8) Code::Ldelem_I1 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldelem_U1(
        0xff << 0 | 0x91 << 8 | (int8) Code::Ldelem_U1 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldelem_I2(
        0xff << 0 | 0x92 << 8 | (int8) Code::Ldelem_I2 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldelem_U2(
        0xff << 0 | 0x93 << 8 | (int8) Code::Ldelem_U2 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldelem_I4(
        0xff << 0 | 0x94 << 8 | (int8) Code::Ldelem_I4 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldelem_U4(
        0xff << 0 | 0x95 << 8 | (int8) Code::Ldelem_U4 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldelem_I8(
        0xff << 0 | 0x96 << 8 | (int8) Code::Ldelem_I8 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi << 16 | (int8) StackBehaviour::Pushi8 << 24);

const OpCode OpCodes::Ldelem_I(
        0xff << 0 | 0x97 << 8 | (int8) Code::Ldelem_I << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldelem_R4(
        0xff << 0 | 0x98 << 8 | (int8) Code::Ldelem_R4 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi << 16 | (int8) StackBehaviour::Pushr4 << 24);

const OpCode OpCodes::Ldelem_R8(
        0xff << 0 | 0x99 << 8 | (int8) Code::Ldelem_R8 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi << 16 | (int8) StackBehaviour::Pushr8 << 24);

const OpCode OpCodes::Ldelem_Ref(
        0xff << 0 | 0x9a << 8 | (int8) Code::Ldelem_Ref << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi << 16 | (int8) StackBehaviour::Pushref << 24);

const OpCode OpCodes::Stelem_I(
        0xff << 0 | 0x9b << 8 | (int8) Code::Stelem_I << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi_popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Stelem_I1(
        0xff << 0 | 0x9c << 8 | (int8) Code::Stelem_I1 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi_popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Stelem_I2(
        0xff << 0 | 0x9d << 8 | (int8) Code::Stelem_I2 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi_popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Stelem_I4(
        0xff << 0 | 0x9e << 8 | (int8) Code::Stelem_I4 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi_popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Stelem_I8(
        0xff << 0 | 0x9f << 8 | (int8) Code::Stelem_I8 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi_popi8 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Stelem_R4(
        0xff << 0 | 0xa0 << 8 | (int8) Code::Stelem_R4 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi_popr4 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Stelem_R8(
        0xff << 0 | 0xa1 << 8 | (int8) Code::Stelem_R8 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi_popr8 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Stelem_Ref(
        0xff << 0 | 0xa2 << 8 | (int8) Code::Stelem_Ref << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popref_popi_popref << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Ldelem_Any(
        0xff << 0 | 0xa3 << 8 | (int8) Code::Ldelem_Any << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineType << 8 | (int8) StackBehaviour::Popref_popi << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Stelem_Any(
        0xff << 0 | 0xa4 << 8 | (int8) Code::Stelem_Any << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineType << 8 | (int8) StackBehaviour::Popref_popi_popref << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Unbox_Any(
        0xff << 0 | 0xa5 << 8 | (int8) Code::Unbox_Any << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineType << 8 | (int8) StackBehaviour::Popref << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Conv_Ovf_I1(
        0xff << 0 | 0xb3 << 8 | (int8) Code::Conv_Ovf_I1 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_Ovf_U1(
        0xff << 0 | 0xb4 << 8 | (int8) Code::Conv_Ovf_U1 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_Ovf_I2(
        0xff << 0 | 0xb5 << 8 | (int8) Code::Conv_Ovf_I2 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_Ovf_U2(
        0xff << 0 | 0xb6 << 8 | (int8) Code::Conv_Ovf_U2 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_Ovf_I4(
        0xff << 0 | 0xb7 << 8 | (int8) Code::Conv_Ovf_I4 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_Ovf_U4(
        0xff << 0 | 0xb8 << 8 | (int8) Code::Conv_Ovf_U4 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_Ovf_I8(
        0xff << 0 | 0xb9 << 8 | (int8) Code::Conv_Ovf_I8 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi8 << 24);

const OpCode OpCodes::Conv_Ovf_U8(
        0xff << 0 | 0xba << 8 | (int8) Code::Conv_Ovf_U8 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi8 << 24);

const OpCode OpCodes::Refanyval(
        0xff << 0 | 0xc2 << 8 | (int8) Code::Refanyval << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineType << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ckfinite(
        0xff << 0 | 0xc3 << 8 | (int8) Code::Ckfinite << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushr8 << 24);

const OpCode OpCodes::Mkrefany(
        0xff << 0 | 0xc6 << 8 | (int8) Code::Mkrefany << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineType << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Ldtoken(
        0xff << 0 | 0xd0 << 8 | (int8) Code::Ldtoken << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineTok << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_U2(
        0xff << 0 | 0xd1 << 8 | (int8) Code::Conv_U2 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_U1(
        0xff << 0 | 0xd2 << 8 | (int8) Code::Conv_U1 << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_I(
        0xff << 0 | 0xd3 << 8 | (int8) Code::Conv_I << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_Ovf_I(
        0xff << 0 | 0xd4 << 8 | (int8) Code::Conv_Ovf_I << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Conv_Ovf_U(
        0xff << 0 | 0xd5 << 8 | (int8) Code::Conv_Ovf_U << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Add_Ovf(
        0xff << 0 | 0xd6 << 8 | (int8) Code::Add_Ovf << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Add_Ovf_Un(
        0xff << 0 | 0xd7 << 8 | (int8) Code::Add_Ovf_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Mul_Ovf(
        0xff << 0 | 0xd8 << 8 | (int8) Code::Mul_Ovf << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Mul_Ovf_Un(
        0xff << 0 | 0xd9 << 8 | (int8) Code::Mul_Ovf_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Sub_Ovf(
        0xff << 0 | 0xda << 8 | (int8) Code::Sub_Ovf << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Sub_Ovf_Un(
        0xff << 0 | 0xdb << 8 | (int8) Code::Sub_Ovf_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Endfinally(
        0xff << 0 | 0xdc << 8 | (int8) Code::Endfinally << 16 | (int8) FlowControl::Return << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Leave(
        0xff << 0 | 0xdd << 8 | (int8) Code::Leave << 16 | (int8) FlowControl::Branch << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineBrTarget << 8 | (int8) StackBehaviour::PopAll << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Leave_S(
        0xff << 0 | 0xde << 8 | (int8) Code::Leave_S << 16 | (int8) FlowControl::Branch << 24,
        (int8) OpCodeType::Macro << 0 | (int8) OperandType::ShortInlineBrTarget << 8 | (int8) StackBehaviour::PopAll << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Stind_I(
        0xff << 0 | 0xdf << 8 | (int8) Code::Stind_I << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi_popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Conv_U(
        0xff << 0 | 0xe0 << 8 | (int8) Code::Conv_U << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Arglist(
        0xfe << 0 | 0x00 << 8 | (int8) Code::Arglist << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ceq(
        0xfe << 0 | 0x01 << 8 | (int8) Code::Ceq << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Cgt(
        0xfe << 0 | 0x02 << 8 | (int8) Code::Cgt << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Cgt_Un(
        0xfe << 0 | 0x03 << 8 | (int8) Code::Cgt_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Clt(
        0xfe << 0 | 0x04 << 8 | (int8) Code::Clt << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Clt_Un(
        0xfe << 0 | 0x05 << 8 | (int8) Code::Clt_Un << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1_pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldftn(
        0xfe << 0 | 0x06 << 8 | (int8) Code::Ldftn << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineMethod << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldvirtftn(
        0xfe << 0 | 0x07 << 8 | (int8) Code::Ldvirtftn << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineMethod << 8 | (int8) StackBehaviour::Popref << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Ldarg(
        0xfe << 0 | 0x09 << 8 | (int8) Code::Ldarg << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineArg << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Ldarga(
        0xfe << 0 | 0x0a << 8 | (int8) Code::Ldarga << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineArg << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Starg(
        0xfe << 0 | 0x0b << 8 | (int8) Code::Starg << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineArg << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Ldloc(
        0xfe << 0 | 0x0c << 8 | (int8) Code::Ldloc << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineVar << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push1 << 24);

const OpCode OpCodes::Ldloca(
        0xfe << 0 | 0x0d << 8 | (int8) Code::Ldloca << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineVar << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Stloc(
        0xfe << 0 | 0x0e << 8 | (int8) Code::Stloc << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineVar << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Localloc(
        0xfe << 0 | 0x0f << 8 | (int8) Code::Localloc << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Endfilter(
        0xfe << 0 | 0x11 << 8 | (int8) Code::Endfilter << 16 | (int8) FlowControl::Return << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Unaligned(
        0xfe << 0 | 0x12 << 8 | (int8) Code::Unaligned << 16 | (int8) FlowControl::Meta << 24,
        (int8) OpCodeType::Prefix << 0 | (int8) OperandType::ShortInlineI << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Volatile(
        0xfe << 0 | 0x13 << 8 | (int8) Code::Volatile << 16 | (int8) FlowControl::Meta << 24,
        (int8) OpCodeType::Prefix << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Tail(
        0xfe << 0 | 0x14 << 8 | (int8) Code::Tail << 16 | (int8) FlowControl::Meta << 24,
        (int8) OpCodeType::Prefix << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Initobj(
        0xfe << 0 | 0x15 << 8 | (int8) Code::Initobj << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineType << 8 | (int8) StackBehaviour::Popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Constrained(
        0xfe << 0 | 0x16 << 8 | (int8) Code::Constrained << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Prefix << 0 | (int8) OperandType::InlineType << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Cpblk(
        0xfe << 0 | 0x17 << 8 | (int8) Code::Cpblk << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi_popi_popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Initblk(
        0xfe << 0 | 0x18 << 8 | (int8) Code::Initblk << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Popi_popi_popi << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::No(
        0xfe << 0 | 0x19 << 8 | (int8) Code::No << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Prefix << 0 | (int8) OperandType::ShortInlineI << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Rethrow(
        0xfe << 0 | 0x1a << 8 | (int8) Code::Rethrow << 16 | (int8) FlowControl::Throw << 24,
        (int8) OpCodeType::Objmodel << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push0 << 24);

const OpCode OpCodes::Sizeof(
        0xfe << 0 | 0x1c << 8 | (int8) Code::Sizeof << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineType << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Refanytype(
        0xfe << 0 | 0x1d << 8 | (int8) Code::Refanytype << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Primitive << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop1 << 16 | (int8) StackBehaviour::Pushi << 24);

const OpCode OpCodes::Readonly(
        0xfe << 0 | 0x1e << 8 | (int8) Code::Readonly << 16 | (int8) FlowControl::Next << 24,
        (int8) OpCodeType::Prefix << 0 | (int8) OperandType::InlineNone << 8 | (int8) StackBehaviour::Pop0 << 16 | (int8) StackBehaviour::Push0 << 24);

OpCode::OpCode(int x, int y) {
    this->op1 = (int8) ((x >> 0) & 0xff);
    this->op2 = (int8) ((x >> 8) & 0xff);
    this->code = (int8) ((x >> 16) & 0xff);
    this->flow_control = (int8) ((x >> 24) & 0xff);

    this->opcode_type = (int8) ((y >> 0) & 0xff);
    this->operand_type = (int8) ((y >> 8) & 0xff);
    this->stack_behavior_pop = (int8) ((y >> 16) & 0xff);
    this->stack_behavior_push = (int8) ((y >> 24) & 0xff);

    if (op1 == 0xff)
        OpCodes::OneByteOpCode [op2] = *this;
    else
        OpCodes::TwoBytesOpCode [op2] = *this;
}