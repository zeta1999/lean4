// Lean compiler output
// Module: init.lean.ir.parser
// Imports: init.lean.ir.ir init.lean.parser.parsec init.lean.parser.identifier init.lean.parser.string_literal init.lean.ir.reserved
#include "runtime/object.h"
#include "runtime/apply.h"
#include "runtime/io.h"
#include "kernel/builtin.h"
typedef lean::object obj;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#endif
obj* l___private_2142412293__mk__string__result___rarg(obj*, obj*);
obj* l_lean_ir_parse__untyped__assignment___closed__4;
obj* l_lean_ir_parse__instr___lambda__1___boxed(obj*, obj*);
obj* l_lean_ir_parse__assign__binop(obj*);
obj* l_lean_ir_parse__typed__assignment___closed__6;
obj* l_lean_ir_parse__literal___closed__1;
obj* l_lean_ir_parse__untyped__assignment___closed__6;
obj* l_lean_parser_monad__parsec_many___at_lean_ir_parse__untyped__assignment___spec__1(obj*);
obj* l_function_comp___rarg(obj*, obj*, obj*);
obj* l_lean_ir_parse__untyped__assignment___closed__7;
obj* l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1(obj*);
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__block___spec__2(obj*);
obj* l_lean_ir_parse__var___closed__1;
obj* l_lean_ir_parse__arg(obj*);
obj* l_lean_parser_monad__parsec_many___at_lean_ir_parse__defconst___spec__1(obj*);
obj* l_lean_ir_parse__fnid___closed__1;
obj* l_string_to__nat(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__29___boxed(obj*, obj*);
unsigned char l_lean_is__id__first(unsigned);
obj* l_lean_ir_parse__untyped__assignment(obj*, obj*);
obj* l_lean_parser_monad__parsec_unexpected__at___at_lean_ir_parse__literal___spec__8(obj*);
obj* l_lean_ir_parse__untyped__assignment___closed__5;
obj* l_lean_parser_monad__parsec_foldl__aux___main___at_lean_ir_identifier___spec__40(obj*, obj*, obj*);
obj* l_lean_ir_parse__untyped__assignment___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__defconst___spec__3(obj*, obj*);
obj* l_lean_ir_parse__untyped__assignment___lambda__5(obj*, obj*, unsigned short);
obj* l_lean_ir_parse__header___boxed(obj*, obj*);
obj* l_lean_parser_parsec__t_bind__mk__res___rarg(obj*, obj*);
obj* l_lean_ir_parse__blockid(obj*);
obj* l_lean_parser_parse__string__literal__aux___main___at_lean_ir_parse__literal___spec__3(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2(unsigned, obj*);
obj* l_lean_ir_parse__type(obj*);
obj* l_lean_parser_monad__parsec_foldl___at_lean_ir_identifier___spec__37(obj*, obj*);
obj* l_lean_ir_parse__untyped__assignment___closed__3;
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__31___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2___boxed(obj*, obj*);
obj* l_lean_ir_parse__unop(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__27(obj*, obj*);
obj* l_lean_ir_parse__instr___lambda__3(obj*, unsigned short, obj*);
obj* l___private_1695453085__take__while__aux_x_27___main___at_lean_ir_symbol___spec__4___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__untyped__assignment___spec__3(obj*, obj*);
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__defconst___spec__2(obj*);
obj* l_lean_parser_monad__parsec_foldl__aux___main___at_lean_ir_identifier___spec__36(obj*, obj*, obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__18(obj*, obj*, obj*);
obj* l_lean_parser_identifier___at_lean_ir_identifier___spec__1(obj*);
obj* l_lean_ir_parse__untyped__assignment___closed__1;
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__terminator___spec__3(obj*);
obj* l_lean_parser_monad__parsec_foldl___at_lean_ir_identifier___spec__35(obj*, obj*);
obj* l___private_580269747__str__aux___main(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__9(unsigned, obj*);
obj* l_lean_ir_keyword___closed__1;
obj* l___private_1695453085__take__while__aux_x_27___main___at_lean_ir_symbol___spec__4(obj*, unsigned char, obj*);
obj* l_lean_parser_id__part__escaped___at_lean_ir_identifier___spec__19(obj*);
obj* l_lean_ir_parse__instr___lambda__4(obj*, obj*, obj*);
obj* l_lean_ir_parse__terminator___closed__1;
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__terminator___spec__4(obj*, obj*);
obj* l_lean_ir_parse__untyped__assignment___lambda__3___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__31(unsigned, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__13___boxed(obj*, obj*);
obj* l_lean_ir_parse__terminator___closed__3;
obj* l_lean_ir_parse__fnid(obj*);
unsigned char l_lean_is__id__begin__escape(unsigned);
obj* l_lean_parser_monad__parsec_many___at_lean_ir_parse__untyped__assignment___spec__6(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__25(unsigned, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__13___boxed(obj*, obj*);
obj* l_lean_parser_id__part___at_lean_ir_identifier___spec__2(obj*);
obj* l_lean_parser_monad__parsec_sep__by1___rarg___lambda__1(obj*, obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__6(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_curr___at_lean_ir_identifier___spec__3(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__9___boxed(obj*, obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__10(obj*, obj*, obj*);
extern obj* l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
obj* l_lean_ir_parse__typed__assignment___closed__4;
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__23(obj*, obj*);
obj* l_lean_ir_parse__uint16(obj*);
obj* l_lean_ir_parse__typed__assignment___lambda__2(obj*, unsigned char, unsigned char, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__21___boxed(obj*, obj*);
extern obj* l_list_repr___main___rarg___closed__2;
obj* l_char_quote__core(unsigned);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__30(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__5(unsigned, obj*);
extern obj* l_true_decidable;
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__8(obj*, obj*, obj*);
obj* l_lean_ir_parse__typed__assignment___closed__5;
obj* l_lean_parser_monad__parsec_many___at_lean_ir_parse__def___spec__1(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__5___boxed(obj*, obj*);
obj* l_lean_ir_parse__untyped__assignment___lambda__2(obj*, obj*, obj*);
obj* l_lean_ir_parse__untyped__assignment___closed__2;
obj* l_lean_ir_parse__terminator(obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__24(obj*, obj*, obj*);
obj* l_lean_ir_parse__typed__assignment___lambda__2___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_ir_parse__key2val___main(obj*);
extern obj* l_mjoin___rarg___closed__1;
obj* l_lean_ir_parse__header(unsigned char, obj*);
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__terminator___spec__4___closed__1;
obj* l_lean_ir_parse__typed__assignment___closed__3;
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__untyped__assignment___spec__7(obj*);
obj* l_lean_parser_parsec__t_orelse__mk__res___rarg(obj*, obj*);
obj* l_lean_ir_parse__terminator___lambda__1(obj*, obj*);
obj* l_lean_ir_parse__typed__assignment___lambda__3(obj*, unsigned char, obj*, size_t);
obj* l_id___rarg(obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__20(obj*, obj*, obj*);
obj* l_lean_ir_parse__block___closed__1;
unsigned char l_char_is__digit(unsigned);
unsigned char l_lean_is__id__rest(unsigned);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__25___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__11(unsigned, obj*);
obj* l_lean_ir_parse__typed__assignment___lambda__1(obj*, unsigned char, unsigned char, obj*, obj*);
obj* l_lean_ir_parse__external(obj*);
obj* l_lean_ir_parse__literal___closed__2;
obj* l_lean_ir_parse__instr___lambda__2___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__block___spec__6(obj*, obj*);
obj* l_lean_ir_parse__defconst(obj*);
obj* l_lean_ir_parse__terminator___closed__2;
obj* l_lean_parser_monad__parsec_foldl___at_lean_ir_identifier___spec__41(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__19___boxed(obj*, obj*);
obj* l_lean_ir_keyword(obj*, obj*);
obj* l_lean_ir_parse__untyped__assignment___lambda__4(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl__aux___main___at_lean_ir_identifier___spec__42(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__untyped__assignment___spec__4(obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__32(obj*, obj*, obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__12(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__21___boxed(obj*, obj*);
obj* l_option_get__or__else___main___rarg(obj*, obj*);
obj* l_lean_ir_parse__assignment(obj*);
extern obj* l_lean_parser_parse__quoted__char___rarg___lambda__7___closed__1;
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__11___boxed(obj*, obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__22(obj*, obj*, obj*);
unsigned char l_lean_is__id__end__escape(unsigned);
obj* l_lean_parser_parsec__t_try__mk__res___rarg(obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__34(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_unexpected__at___at_lean_ir_parse__literal___spec__8___rarg(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_num___at_lean_ir_parse__literal___spec__9(obj*);
obj* l_lean_parser_monad__parsec_str__core___at_lean_ir_symbol___spec__1(obj*, obj*, obj*);
obj* l_lean_ir_str2abinop;
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__21(unsigned, obj*);
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__def___spec__2(obj*);
extern obj* l_char_has__repr___closed__1;
extern obj* l_lean_id__begin__escape;
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__29(unsigned, obj*);
obj* l_lean_ir_parse__instr___lambda__1(unsigned char, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__23___boxed(obj*, obj*);
obj* l_lean_ir_parse__defconst___closed__1;
obj* l_lean_parser_monad__parsec_many___at_lean_ir_parse__block___spec__4(obj*);
obj* l_lean_ir_parse__usize___closed__1;
obj* l_lean_ir_parse__blockid___closed__1;
obj* l_lean_ir_parse__external___closed__1;
obj* l_lean_ir_parse__phi(obj*);
obj* l_lean_ir_parse__key2val___main___rarg(obj*, obj*, obj*);
obj* l_lean_ir_parse__instr(obj*);
obj* l_lean_ir_parse__literal___closed__3;
obj* l_lean_ir_str2aunop;
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__15___boxed(obj*, obj*);
obj* l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6(obj*);
obj* l_lean_ir_parse__phi___closed__1;
extern obj* l_option_has__repr___rarg___closed__3;
obj* l_lean_parser_monad__parsec_take__while_x_27___at_lean_ir_symbol___spec__3(obj*);
unsigned char l_string_is__empty(obj*);
obj* l_lean_parser_id__part__default___at_lean_ir_identifier___spec__4(obj*);
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__block___spec__5(obj*);
obj* l_lean_ir_parse__typed__assignment___closed__1;
obj* l_lean_parser_monad__parsec_any___at_lean_ir_parse__literal___spec__4(obj*);
obj* l_lean_ir_symbol(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__11___boxed(obj*, obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__24(obj*, obj*, obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__16(obj*, obj*, obj*);
obj* l_lean_ir_parse__instr___closed__3;
extern obj* l_bool_has__repr___closed__1;
obj* l_lean_parser_monad__parsec_many___at_lean_ir_parse__block___spec__1(obj*);
obj* l_lean_ir_str2unop;
obj* l_lean_parser_monad__parsec_many___at_lean_ir_parse__terminator___spec__2(obj*);
obj* l_lean_parser_monad__parsec_take__while1___at_lean_ir_identifier___spec__20(obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__26(obj*, obj*, obj*);
extern obj* l_string_join___closed__1;
unsigned char l_lean_ir_is__reserved__name___main(obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__14(obj*, obj*, obj*);
obj* l_lean_ir_identifier___closed__1;
obj* l_lean_parser_monad__parsec_foldl___at_lean_ir_identifier___spec__39(obj*, obj*);
obj* l_lean_ir_parse__var(obj*);
obj* l_lean_ir_parse__def___closed__1;
obj* l_lean_ir_parse__block(obj*);
obj* l_lean_ir_parse__typed__assignment___closed__2;
obj* l_lean_ir_parse__untyped__assignment___lambda__1(obj*, unsigned char, obj*, obj*);
extern obj* l_uint16__sz;
obj* l_lean_ir_parse__untyped__assignment___lambda__6(obj*, obj*, obj*);
obj* l_lean_ir_identifier(obj*);
obj* l_lean_parser_monad__parsec_foldl__aux___main___at_lean_ir_identifier___spec__38(obj*, obj*, obj*);
obj* l_lean_ir_parse__usize(obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__18(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__15(unsigned, obj*);
obj* l_lean_parser_monad__parsec_take__while1___at_lean_ir_parse__literal___spec__10(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__15___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__33(unsigned, obj*);
obj* l_lean_ir_parse__untyped__assignment___lambda__5___boxed(obj*, obj*, obj*);
extern obj* l_lean_id__end__escape;
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__13(unsigned, obj*);
extern obj* l_list_repr___main___rarg___closed__3;
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__7___boxed(obj*, obj*);
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__header___spec__2(obj*);
extern obj* l_bool_has__repr___closed__2;
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__33___boxed(obj*, obj*);
obj* l_lean_parser_parse__quoted__char___at_lean_ir_parse__literal___spec__5(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__15(unsigned, obj*);
obj* l___private_2038417741__mk__consumed__result___rarg(unsigned char, obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__14(obj*, obj*, obj*);
obj* l_lean_ir_parse__def___lambda__1(obj*, obj*);
obj* l_lean_ir_str2type;
unsigned char l_char_is__whitespace(unsigned);
obj* l_lean_parser_monad__parsec_sep__by1___at_lean_ir_parse__terminator___spec__1(obj*);
obj* l_lean_ir_parse__literal(obj*);
extern obj* l_usize__sz;
obj* l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1;
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__untyped__assignment___spec__2(obj*);
obj* l_lean_ir_parse__typed__assignment(obj*, obj*);
obj* l_lean_parser_monad__parsec_many___at_lean_ir_parse__header___spec__1(obj*);
obj* l_lean_ir_parse__assign__unop(obj*);
obj* l_lean_ir_parse__instr___lambda__2(obj*, size_t, obj*);
obj* l_lean_ir_parse__key2val___rarg(obj*, obj*, obj*);
obj* l_lean_ir_parse__uint16___closed__2;
extern obj* l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__7(unsigned, obj*);
obj* l_lean_ir_parse__key2val(obj*);
obj* l_lean_ir_parse__def(obj*);
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__def___spec__3(obj*, obj*);
obj* l_lean_parser_monad__parsec_digit___at_lean_ir_parse__literal___spec__7(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__17(obj*, obj*);
obj* l_lean_ir_parse__instr___closed__1;
obj* l_lean_parser_monad__parsec_whitespace___at_lean_ir_symbol___spec__2(obj*);
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__phi___spec__1(obj*);
obj* l_lean_ir_parse__decl(obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__22(obj*, obj*, obj*);
obj* l_lean_ir_parse__usize___closed__2;
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__19(unsigned, obj*);
obj* l_lean_ir_parse__typed__assignment___lambda__3___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__17(unsigned, obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__12(obj*, obj*, obj*);
obj* l_lean_ir_parse__untyped__assignment___lambda__3(obj*, unsigned short, unsigned short, size_t);
obj* l_lean_ir_parse__typed__assignment___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__17___boxed(obj*, obj*);
obj* l_lean_ir_parse__uint16___closed__1;
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__21(unsigned, obj*);
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__untyped__assignment___spec__5(obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__block___spec__3(obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__header___spec__3(obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__phi___spec__2(obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__untyped__assignment___spec__8(obj*, obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__28(obj*, obj*, obj*);
obj* l_lean_ir_parse__instr___closed__2;
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__11(unsigned, obj*);
obj* l_lean_parser_parsec__t_labels__mk__res___rarg(obj*, obj*);
obj* l_lean_parser_parse__string__literal___at_lean_ir_parse__literal___spec__1(obj*);
obj* l_lean_ir_parse__instr___lambda__3___boxed(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__13(unsigned, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__23(unsigned, obj*);
obj* l_string_quote(obj*);
obj* l_lean_ir_identifier___closed__2;
obj* l_dlist_singleton___rarg(obj*, obj*);
obj* l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__16(obj*, obj*, obj*);
extern obj* l_prod_has__repr___rarg___closed__1;
obj* l_lean_ir_symbol(obj* x_0, obj* x_1) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::inc(x_0);
x_3 = l_string_quote(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_3);
x_5 = l_char_has__repr___closed__1;
lean::inc(x_5);
x_7 = lean::string_append(x_5, x_0);
x_8 = lean::string_append(x_7, x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = l_lean_parser_monad__parsec_str__core___at_lean_ir_symbol___spec__1(x_0, x_4, x_1);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_13; obj* x_16; obj* x_17; obj* x_18; 
x_11 = lean::cnstr_get(x_10, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_10, 2);
lean::inc(x_13);
lean::dec(x_10);
x_16 = l_lean_parser_monad__parsec_whitespace___at_lean_ir_symbol___spec__2(x_11);
x_17 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_16);
x_18 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_17, x_9);
return x_18;
}
else
{
obj* x_19; unsigned char x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
x_19 = lean::cnstr_get(x_10, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get_scalar<unsigned char>(x_10, sizeof(void*)*1);
if (lean::is_shared(x_10)) {
 lean::dec(x_10);
 x_22 = lean::box(0);
} else {
 lean::cnstr_release(x_10, 0);
 x_22 = x_10;
}
if (lean::is_scalar(x_22)) {
 x_23 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_23 = x_22;
}
lean::cnstr_set(x_23, 0, x_19);
lean::cnstr_set_scalar(x_23, sizeof(void*)*1, x_21);
x_24 = x_23;
x_25 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_24, x_9);
return x_25;
}
}
}
obj* l_lean_parser_monad__parsec_str__core___at_lean_ir_symbol___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
unsigned char x_4; 
lean::inc(x_0);
x_4 = l_string_is__empty(x_0);
if (x_4 == 0)
{
obj* x_5; obj* x_7; obj* x_9; 
x_5 = lean::string_length(x_0);
lean::inc(x_0);
x_7 = lean::string_mk_iterator(x_0);
lean::inc(x_2);
x_9 = l___private_580269747__str__aux___main(x_5, x_7, x_2);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; obj* x_13; obj* x_15; unsigned char x_16; obj* x_17; obj* x_18; 
lean::dec(x_9);
lean::dec(x_0);
x_12 = lean::box(0);
x_13 = l_string_join___closed__1;
lean::inc(x_13);
x_15 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_15, 0, x_2);
lean::cnstr_set(x_15, 1, x_13);
lean::cnstr_set(x_15, 2, x_1);
lean::cnstr_set(x_15, 3, x_12);
x_16 = 0;
x_17 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set_scalar(x_17, sizeof(void*)*1, x_16);
x_18 = x_17;
return x_18;
}
else
{
obj* x_21; obj* x_24; obj* x_25; 
lean::dec(x_1);
lean::dec(x_2);
x_21 = lean::cnstr_get(x_9, 0);
lean::inc(x_21);
lean::dec(x_9);
x_24 = lean::box(0);
x_25 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_25, 0, x_0);
lean::cnstr_set(x_25, 1, x_21);
lean::cnstr_set(x_25, 2, x_24);
return x_25;
}
}
else
{
obj* x_28; obj* x_29; obj* x_32; 
lean::dec(x_0);
lean::dec(x_1);
x_28 = l_string_join___closed__1;
x_29 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_29);
lean::inc(x_28);
x_32 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_32, 0, x_28);
lean::cnstr_set(x_32, 1, x_2);
lean::cnstr_set(x_32, 2, x_29);
return x_32;
}
}
}
obj* l___private_1695453085__take__while__aux_x_27___main___at_lean_ir_symbol___spec__4(obj* x_0, unsigned char x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2038417741__mk__consumed__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_char_is__whitespace(x_10);
if (x_11 == 0)
{
obj* x_13; 
lean::dec(x_0);
x_13 = l___private_2038417741__mk__consumed__result___rarg(x_1, x_2);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_18; unsigned char x_19; 
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
x_18 = lean::string_iterator_next(x_2);
x_19 = 1;
x_0 = x_15;
x_1 = x_19;
x_2 = x_18;
goto _start;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2038417741__mk__consumed__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while_x_27___at_lean_ir_symbol___spec__3(obj* x_0) {
_start:
{
obj* x_1; unsigned char x_2; obj* x_3; 
x_1 = lean::string_iterator_remaining(x_0);
x_2 = 0;
x_3 = l___private_1695453085__take__while__aux_x_27___main___at_lean_ir_symbol___spec__4(x_1, x_2, x_0);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_whitespace___at_lean_ir_symbol___spec__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_monad__parsec_take__while_x_27___at_lean_ir_symbol___spec__3(x_0);
return x_1;
}
}
obj* l___private_1695453085__take__while__aux_x_27___main___at_lean_ir_symbol___spec__4___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
unsigned char x_3; obj* x_4; 
x_3 = lean::unbox(x_1);
x_4 = l___private_1695453085__take__while__aux_x_27___main___at_lean_ir_symbol___spec__4(x_0, x_3, x_2);
return x_4;
}
}
obj* l_lean_ir_keyword(obj* x_0, obj* x_1) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::inc(x_0);
x_3 = l_string_quote(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_4, 0, x_3);
x_5 = l_char_has__repr___closed__1;
lean::inc(x_5);
x_7 = lean::string_append(x_5, x_0);
x_8 = lean::string_append(x_7, x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = l_lean_parser_monad__parsec_str__core___at_lean_ir_symbol___spec__1(x_0, x_4, x_1);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_13; obj* x_15; unsigned char x_16; 
x_11 = lean::cnstr_get(x_10, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_10, 2);
lean::inc(x_13);
if (lean::is_shared(x_10)) {
 lean::dec(x_10);
 x_15 = lean::box(0);
} else {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_release(x_10, 1);
 lean::cnstr_release(x_10, 2);
 x_15 = x_10;
}
x_16 = lean::string_iterator_has_next(x_11);
if (x_16 == 0)
{
obj* x_17; obj* x_18; obj* x_20; obj* x_21; 
x_17 = lean::box(0);
x_18 = l_lean_ir_keyword___closed__1;
lean::inc(x_18);
if (lean::is_scalar(x_15)) {
 x_20 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_20 = x_15;
}
lean::cnstr_set(x_20, 0, x_17);
lean::cnstr_set(x_20, 1, x_11);
lean::cnstr_set(x_20, 2, x_18);
x_21 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_20);
if (lean::obj_tag(x_21) == 0)
{
obj* x_22; obj* x_24; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_22 = lean::cnstr_get(x_21, 1);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_21, 2);
lean::inc(x_24);
lean::dec(x_21);
x_27 = l_lean_parser_monad__parsec_whitespace___at_lean_ir_symbol___spec__2(x_22);
x_28 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_24, x_27);
x_29 = l_lean_parser_parsec__t_try__mk__res___rarg(x_28);
x_30 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_29, x_9);
return x_30;
}
else
{
obj* x_31; obj* x_33; obj* x_34; obj* x_36; obj* x_38; obj* x_41; unsigned char x_42; obj* x_43; obj* x_44; 
x_31 = lean::cnstr_get(x_21, 0);
lean::inc(x_31);
if (lean::is_shared(x_21)) {
 lean::dec(x_21);
 x_33 = lean::box(0);
} else {
 lean::cnstr_release(x_21, 0);
 x_33 = x_21;
}
x_34 = lean::cnstr_get(x_31, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_31, 1);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_31, 3);
lean::inc(x_38);
lean::dec(x_31);
x_41 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_41, 0, x_34);
lean::cnstr_set(x_41, 1, x_36);
lean::cnstr_set(x_41, 2, x_9);
lean::cnstr_set(x_41, 3, x_38);
x_42 = 0;
if (lean::is_scalar(x_33)) {
 x_43 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_43 = x_33;
}
lean::cnstr_set(x_43, 0, x_41);
lean::cnstr_set_scalar(x_43, sizeof(void*)*1, x_42);
x_44 = x_43;
return x_44;
}
}
else
{
unsigned x_45; unsigned char x_46; 
x_45 = lean::string_iterator_curr(x_11);
x_46 = l_lean_is__id__rest(x_45);
if (x_46 == 0)
{
obj* x_47; obj* x_48; obj* x_50; obj* x_51; 
x_47 = lean::box(0);
x_48 = l_lean_ir_keyword___closed__1;
lean::inc(x_48);
if (lean::is_scalar(x_15)) {
 x_50 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_50 = x_15;
}
lean::cnstr_set(x_50, 0, x_47);
lean::cnstr_set(x_50, 1, x_11);
lean::cnstr_set(x_50, 2, x_48);
x_51 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_50);
if (lean::obj_tag(x_51) == 0)
{
obj* x_52; obj* x_54; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_52 = lean::cnstr_get(x_51, 1);
lean::inc(x_52);
x_54 = lean::cnstr_get(x_51, 2);
lean::inc(x_54);
lean::dec(x_51);
x_57 = l_lean_parser_monad__parsec_whitespace___at_lean_ir_symbol___spec__2(x_52);
x_58 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_54, x_57);
x_59 = l_lean_parser_parsec__t_try__mk__res___rarg(x_58);
x_60 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_59, x_9);
return x_60;
}
else
{
obj* x_61; obj* x_63; obj* x_64; obj* x_66; obj* x_68; obj* x_71; unsigned char x_72; obj* x_73; obj* x_74; 
x_61 = lean::cnstr_get(x_51, 0);
lean::inc(x_61);
if (lean::is_shared(x_51)) {
 lean::dec(x_51);
 x_63 = lean::box(0);
} else {
 lean::cnstr_release(x_51, 0);
 x_63 = x_51;
}
x_64 = lean::cnstr_get(x_61, 0);
lean::inc(x_64);
x_66 = lean::cnstr_get(x_61, 1);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_61, 3);
lean::inc(x_68);
lean::dec(x_61);
x_71 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_71, 0, x_64);
lean::cnstr_set(x_71, 1, x_66);
lean::cnstr_set(x_71, 2, x_9);
lean::cnstr_set(x_71, 3, x_68);
x_72 = 0;
if (lean::is_scalar(x_63)) {
 x_73 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_73 = x_63;
}
lean::cnstr_set(x_73, 0, x_71);
lean::cnstr_set_scalar(x_73, sizeof(void*)*1, x_72);
x_74 = x_73;
return x_74;
}
}
else
{
obj* x_75; obj* x_77; obj* x_79; obj* x_80; obj* x_81; obj* x_84; 
x_75 = l_char_quote__core(x_45);
lean::inc(x_5);
x_77 = lean::string_append(x_5, x_75);
lean::dec(x_75);
x_79 = lean::string_append(x_77, x_5);
x_80 = lean::box(0);
x_81 = l_mjoin___rarg___closed__1;
lean::inc(x_80);
lean::inc(x_81);
x_84 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_79, x_81, x_80, x_80, x_11);
if (lean::obj_tag(x_84) == 0)
{
obj* x_85; obj* x_87; obj* x_89; 
x_85 = lean::cnstr_get(x_84, 0);
lean::inc(x_85);
x_87 = lean::cnstr_get(x_84, 1);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_84, 2);
lean::inc(x_89);
if (lean::obj_tag(x_89) == 0)
{
obj* x_95; 
lean::dec(x_89);
lean::dec(x_15);
lean::dec(x_85);
lean::dec(x_87);
x_95 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_84);
if (lean::obj_tag(x_95) == 0)
{
obj* x_96; obj* x_98; obj* x_101; obj* x_102; obj* x_103; obj* x_104; 
x_96 = lean::cnstr_get(x_95, 1);
lean::inc(x_96);
x_98 = lean::cnstr_get(x_95, 2);
lean::inc(x_98);
lean::dec(x_95);
x_101 = l_lean_parser_monad__parsec_whitespace___at_lean_ir_symbol___spec__2(x_96);
x_102 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_98, x_101);
x_103 = l_lean_parser_parsec__t_try__mk__res___rarg(x_102);
x_104 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_103, x_9);
return x_104;
}
else
{
obj* x_105; obj* x_107; obj* x_108; obj* x_110; obj* x_112; obj* x_115; unsigned char x_116; obj* x_117; obj* x_118; 
x_105 = lean::cnstr_get(x_95, 0);
lean::inc(x_105);
if (lean::is_shared(x_95)) {
 lean::dec(x_95);
 x_107 = lean::box(0);
} else {
 lean::cnstr_release(x_95, 0);
 x_107 = x_95;
}
x_108 = lean::cnstr_get(x_105, 0);
lean::inc(x_108);
x_110 = lean::cnstr_get(x_105, 1);
lean::inc(x_110);
x_112 = lean::cnstr_get(x_105, 3);
lean::inc(x_112);
lean::dec(x_105);
x_115 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_115, 0, x_108);
lean::cnstr_set(x_115, 1, x_110);
lean::cnstr_set(x_115, 2, x_9);
lean::cnstr_set(x_115, 3, x_112);
x_116 = 0;
if (lean::is_scalar(x_107)) {
 x_117 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_117 = x_107;
}
lean::cnstr_set(x_117, 0, x_115);
lean::cnstr_set_scalar(x_117, sizeof(void*)*1, x_116);
x_118 = x_117;
return x_118;
}
}
else
{
obj* x_120; obj* x_122; obj* x_124; obj* x_125; obj* x_126; obj* x_127; 
lean::dec(x_84);
x_120 = lean::cnstr_get(x_89, 0);
lean::inc(x_120);
if (lean::is_shared(x_89)) {
 lean::dec(x_89);
 x_122 = lean::box(0);
} else {
 lean::cnstr_release(x_89, 0);
 x_122 = x_89;
}
lean::inc(x_81);
x_124 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_124, 0, x_81);
lean::closure_set(x_124, 1, x_120);
if (lean::is_scalar(x_122)) {
 x_125 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_125 = x_122;
}
lean::cnstr_set(x_125, 0, x_124);
if (lean::is_scalar(x_15)) {
 x_126 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_126 = x_15;
}
lean::cnstr_set(x_126, 0, x_85);
lean::cnstr_set(x_126, 1, x_87);
lean::cnstr_set(x_126, 2, x_125);
x_127 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_126);
if (lean::obj_tag(x_127) == 0)
{
obj* x_128; obj* x_130; obj* x_133; obj* x_134; obj* x_135; obj* x_136; 
x_128 = lean::cnstr_get(x_127, 1);
lean::inc(x_128);
x_130 = lean::cnstr_get(x_127, 2);
lean::inc(x_130);
lean::dec(x_127);
x_133 = l_lean_parser_monad__parsec_whitespace___at_lean_ir_symbol___spec__2(x_128);
x_134 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_130, x_133);
x_135 = l_lean_parser_parsec__t_try__mk__res___rarg(x_134);
x_136 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_135, x_9);
return x_136;
}
else
{
obj* x_137; obj* x_139; obj* x_140; obj* x_142; obj* x_144; obj* x_147; unsigned char x_148; obj* x_149; obj* x_150; 
x_137 = lean::cnstr_get(x_127, 0);
lean::inc(x_137);
if (lean::is_shared(x_127)) {
 lean::dec(x_127);
 x_139 = lean::box(0);
} else {
 lean::cnstr_release(x_127, 0);
 x_139 = x_127;
}
x_140 = lean::cnstr_get(x_137, 0);
lean::inc(x_140);
x_142 = lean::cnstr_get(x_137, 1);
lean::inc(x_142);
x_144 = lean::cnstr_get(x_137, 3);
lean::inc(x_144);
lean::dec(x_137);
x_147 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_147, 0, x_140);
lean::cnstr_set(x_147, 1, x_142);
lean::cnstr_set(x_147, 2, x_9);
lean::cnstr_set(x_147, 3, x_144);
x_148 = 0;
if (lean::is_scalar(x_139)) {
 x_149 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_149 = x_139;
}
lean::cnstr_set(x_149, 0, x_147);
lean::cnstr_set_scalar(x_149, sizeof(void*)*1, x_148);
x_150 = x_149;
return x_150;
}
}
}
else
{
obj* x_152; unsigned char x_154; 
lean::dec(x_15);
x_152 = lean::cnstr_get(x_84, 0);
lean::inc(x_152);
x_154 = lean::cnstr_get_scalar<unsigned char>(x_84, sizeof(void*)*1);
if (x_154 == 0)
{
obj* x_156; obj* x_158; obj* x_160; obj* x_163; obj* x_164; obj* x_167; obj* x_168; obj* x_169; obj* x_170; 
lean::dec(x_84);
x_156 = lean::cnstr_get(x_152, 0);
lean::inc(x_156);
x_158 = lean::cnstr_get(x_152, 1);
lean::inc(x_158);
x_160 = lean::cnstr_get(x_152, 2);
lean::inc(x_160);
lean::inc(x_81);
x_163 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_163, 0, x_81);
lean::closure_set(x_163, 1, x_160);
x_164 = lean::cnstr_get(x_152, 3);
lean::inc(x_164);
lean::dec(x_152);
x_167 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_167, 0, x_156);
lean::cnstr_set(x_167, 1, x_158);
lean::cnstr_set(x_167, 2, x_163);
lean::cnstr_set(x_167, 3, x_164);
x_168 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_168, 0, x_167);
lean::cnstr_set_scalar(x_168, sizeof(void*)*1, x_154);
x_169 = x_168;
x_170 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_169);
if (lean::obj_tag(x_170) == 0)
{
obj* x_171; obj* x_173; obj* x_176; obj* x_177; obj* x_178; obj* x_179; 
x_171 = lean::cnstr_get(x_170, 1);
lean::inc(x_171);
x_173 = lean::cnstr_get(x_170, 2);
lean::inc(x_173);
lean::dec(x_170);
x_176 = l_lean_parser_monad__parsec_whitespace___at_lean_ir_symbol___spec__2(x_171);
x_177 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_173, x_176);
x_178 = l_lean_parser_parsec__t_try__mk__res___rarg(x_177);
x_179 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_178, x_9);
return x_179;
}
else
{
obj* x_180; obj* x_182; obj* x_183; obj* x_185; obj* x_187; obj* x_190; unsigned char x_191; obj* x_192; obj* x_193; 
x_180 = lean::cnstr_get(x_170, 0);
lean::inc(x_180);
if (lean::is_shared(x_170)) {
 lean::dec(x_170);
 x_182 = lean::box(0);
} else {
 lean::cnstr_release(x_170, 0);
 x_182 = x_170;
}
x_183 = lean::cnstr_get(x_180, 0);
lean::inc(x_183);
x_185 = lean::cnstr_get(x_180, 1);
lean::inc(x_185);
x_187 = lean::cnstr_get(x_180, 3);
lean::inc(x_187);
lean::dec(x_180);
x_190 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_190, 0, x_183);
lean::cnstr_set(x_190, 1, x_185);
lean::cnstr_set(x_190, 2, x_9);
lean::cnstr_set(x_190, 3, x_187);
x_191 = 0;
if (lean::is_scalar(x_182)) {
 x_192 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_192 = x_182;
}
lean::cnstr_set(x_192, 0, x_190);
lean::cnstr_set_scalar(x_192, sizeof(void*)*1, x_191);
x_193 = x_192;
return x_193;
}
}
else
{
obj* x_195; 
lean::dec(x_152);
x_195 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_84);
if (lean::obj_tag(x_195) == 0)
{
obj* x_196; obj* x_198; obj* x_201; obj* x_202; obj* x_203; obj* x_204; 
x_196 = lean::cnstr_get(x_195, 1);
lean::inc(x_196);
x_198 = lean::cnstr_get(x_195, 2);
lean::inc(x_198);
lean::dec(x_195);
x_201 = l_lean_parser_monad__parsec_whitespace___at_lean_ir_symbol___spec__2(x_196);
x_202 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_198, x_201);
x_203 = l_lean_parser_parsec__t_try__mk__res___rarg(x_202);
x_204 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_203, x_9);
return x_204;
}
else
{
obj* x_205; obj* x_207; obj* x_208; obj* x_210; obj* x_212; obj* x_215; unsigned char x_216; obj* x_217; obj* x_218; 
x_205 = lean::cnstr_get(x_195, 0);
lean::inc(x_205);
if (lean::is_shared(x_195)) {
 lean::dec(x_195);
 x_207 = lean::box(0);
} else {
 lean::cnstr_release(x_195, 0);
 x_207 = x_195;
}
x_208 = lean::cnstr_get(x_205, 0);
lean::inc(x_208);
x_210 = lean::cnstr_get(x_205, 1);
lean::inc(x_210);
x_212 = lean::cnstr_get(x_205, 3);
lean::inc(x_212);
lean::dec(x_205);
x_215 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_215, 0, x_208);
lean::cnstr_set(x_215, 1, x_210);
lean::cnstr_set(x_215, 2, x_9);
lean::cnstr_set(x_215, 3, x_212);
x_216 = 0;
if (lean::is_scalar(x_207)) {
 x_217 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_217 = x_207;
}
lean::cnstr_set(x_217, 0, x_215);
lean::cnstr_set_scalar(x_217, sizeof(void*)*1, x_216);
x_218 = x_217;
return x_218;
}
}
}
}
}
}
else
{
obj* x_219; obj* x_221; obj* x_222; obj* x_224; obj* x_226; obj* x_229; unsigned char x_230; obj* x_231; obj* x_232; 
x_219 = lean::cnstr_get(x_10, 0);
lean::inc(x_219);
if (lean::is_shared(x_10)) {
 lean::dec(x_10);
 x_221 = lean::box(0);
} else {
 lean::cnstr_release(x_10, 0);
 x_221 = x_10;
}
x_222 = lean::cnstr_get(x_219, 0);
lean::inc(x_222);
x_224 = lean::cnstr_get(x_219, 1);
lean::inc(x_224);
x_226 = lean::cnstr_get(x_219, 3);
lean::inc(x_226);
lean::dec(x_219);
x_229 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_229, 0, x_222);
lean::cnstr_set(x_229, 1, x_224);
lean::cnstr_set(x_229, 2, x_9);
lean::cnstr_set(x_229, 3, x_226);
x_230 = 0;
if (lean::is_scalar(x_221)) {
 x_231 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_231 = x_221;
}
lean::cnstr_set(x_231, 0, x_229);
lean::cnstr_set_scalar(x_231, sizeof(void*)*1, x_230);
x_232 = x_231;
return x_232;
}
}
}
obj* _init_l_lean_ir_keyword___closed__1() {
_start:
{
obj* x_0; obj* x_2; obj* x_3; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_id___rarg), 1, 0);
lean::inc(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_2, 0, x_0);
lean::closure_set(x_2, 1, x_0);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; unsigned char x_7; obj* x_8; obj* x_9; 
x_5 = l_option_get__or__else___main___rarg(x_2, x_4);
x_6 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_0);
lean::cnstr_set(x_6, 2, x_1);
lean::cnstr_set(x_6, 3, x_3);
x_7 = 0;
x_8 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set_scalar(x_8, sizeof(void*)*1, x_7);
x_9 = x_8;
return x_9;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg), 5, 0);
return x_2;
}
}
obj* l_lean_ir_parse__key2val___main___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_4; obj* x_5; obj* x_8; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = l_mjoin___rarg___closed__1;
lean::inc(x_4);
lean::inc(x_5);
x_8 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_0, x_5, x_4, x_4, x_2);
return x_8;
}
else
{
obj* x_9; obj* x_11; obj* x_14; obj* x_16; obj* x_20; 
x_9 = lean::cnstr_get(x_1, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_1, 1);
lean::inc(x_11);
lean::dec(x_1);
x_14 = lean::cnstr_get(x_9, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_9, 1);
lean::inc(x_16);
lean::dec(x_9);
lean::inc(x_2);
x_20 = l_lean_ir_keyword(x_14, x_2);
if (lean::obj_tag(x_20) == 0)
{
obj* x_21; obj* x_23; obj* x_25; obj* x_26; obj* x_28; obj* x_29; 
x_21 = lean::cnstr_get(x_20, 1);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_20, 2);
lean::inc(x_23);
if (lean::is_shared(x_20)) {
 lean::dec(x_20);
 x_25 = lean::box(0);
} else {
 lean::cnstr_release(x_20, 0);
 lean::cnstr_release(x_20, 1);
 lean::cnstr_release(x_20, 2);
 x_25 = x_20;
}
x_26 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_26);
if (lean::is_scalar(x_25)) {
 x_28 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_28 = x_25;
}
lean::cnstr_set(x_28, 0, x_16);
lean::cnstr_set(x_28, 1, x_21);
lean::cnstr_set(x_28, 2, x_26);
x_29 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_23, x_28);
if (lean::obj_tag(x_29) == 0)
{
lean::dec(x_11);
lean::dec(x_0);
lean::dec(x_2);
return x_29;
}
else
{
obj* x_33; unsigned char x_35; 
x_33 = lean::cnstr_get(x_29, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get_scalar<unsigned char>(x_29, sizeof(void*)*1);
if (x_35 == 0)
{
obj* x_37; obj* x_38; 
lean::dec(x_29);
x_37 = l_lean_ir_parse__key2val___main___rarg(x_0, x_11, x_2);
x_38 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_33, x_37);
return x_38;
}
else
{
lean::dec(x_11);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_33);
return x_29;
}
}
}
else
{
obj* x_44; unsigned char x_46; obj* x_47; 
lean::dec(x_16);
x_44 = lean::cnstr_get(x_20, 0);
lean::inc(x_44);
x_46 = lean::cnstr_get_scalar<unsigned char>(x_20, sizeof(void*)*1);
if (lean::is_shared(x_20)) {
 lean::dec(x_20);
 x_47 = lean::box(0);
} else {
 lean::cnstr_release(x_20, 0);
 x_47 = x_20;
}
if (x_46 == 0)
{
obj* x_49; obj* x_50; 
lean::dec(x_47);
x_49 = l_lean_ir_parse__key2val___main___rarg(x_0, x_11, x_2);
x_50 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_44, x_49);
return x_50;
}
else
{
obj* x_54; obj* x_55; 
lean::dec(x_11);
lean::dec(x_0);
lean::dec(x_2);
if (lean::is_scalar(x_47)) {
 x_54 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_54 = x_47;
}
lean::cnstr_set(x_54, 0, x_44);
lean::cnstr_set_scalar(x_54, sizeof(void*)*1, x_46);
x_55 = x_54;
return x_55;
}
}
}
}
}
obj* l_lean_ir_parse__key2val___main(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_parse__key2val___main___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_ir_parse__key2val___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_ir_parse__key2val___main___rarg(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_ir_parse__key2val(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_parse__key2val___rarg), 3, 0);
return x_2;
}
}
obj* _init_l_lean_ir_str2type() {
_start:
{
obj* x_0; unsigned char x_1; obj* x_2; obj* x_3; obj* x_4; unsigned char x_5; obj* x_6; obj* x_7; obj* x_8; unsigned char x_9; obj* x_10; obj* x_11; obj* x_12; unsigned char x_13; obj* x_14; obj* x_15; obj* x_16; unsigned char x_17; obj* x_18; obj* x_19; obj* x_20; unsigned char x_21; obj* x_22; obj* x_23; obj* x_24; unsigned char x_25; obj* x_26; obj* x_27; obj* x_28; unsigned char x_29; obj* x_30; obj* x_31; obj* x_32; unsigned char x_33; obj* x_34; obj* x_35; obj* x_36; unsigned char x_37; obj* x_38; obj* x_39; obj* x_40; unsigned char x_41; obj* x_42; obj* x_43; obj* x_44; unsigned char x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_0 = lean::mk_string("object");
x_1 = 11;
x_2 = lean::box(x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
x_4 = lean::mk_string("bool");
x_5 = 0;
x_6 = lean::box(x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_4);
lean::cnstr_set(x_7, 1, x_6);
x_8 = lean::mk_string("byte");
x_9 = 1;
x_10 = lean::box(x_9);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_10);
x_12 = lean::mk_string("uint16");
x_13 = 2;
x_14 = lean::box(x_13);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_12);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::mk_string("uint32");
x_17 = 3;
x_18 = lean::box(x_17);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_16);
lean::cnstr_set(x_19, 1, x_18);
x_20 = lean::mk_string("uint64");
x_21 = 4;
x_22 = lean::box(x_21);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_20);
lean::cnstr_set(x_23, 1, x_22);
x_24 = lean::mk_string("usize");
x_25 = 5;
x_26 = lean::box(x_25);
x_27 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_27, 0, x_24);
lean::cnstr_set(x_27, 1, x_26);
x_28 = lean::mk_string("int16");
x_29 = 6;
x_30 = lean::box(x_29);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_28);
lean::cnstr_set(x_31, 1, x_30);
x_32 = lean::mk_string("int32");
x_33 = 7;
x_34 = lean::box(x_33);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_32);
lean::cnstr_set(x_35, 1, x_34);
x_36 = lean::mk_string("int64");
x_37 = 8;
x_38 = lean::box(x_37);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_36);
lean::cnstr_set(x_39, 1, x_38);
x_40 = lean::mk_string("float");
x_41 = 9;
x_42 = lean::box(x_41);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_40);
lean::cnstr_set(x_43, 1, x_42);
x_44 = lean::mk_string("double");
x_45 = 10;
x_46 = lean::box(x_45);
x_47 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_47, 0, x_44);
lean::cnstr_set(x_47, 1, x_46);
x_48 = lean::box(0);
x_49 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_49, 0, x_47);
lean::cnstr_set(x_49, 1, x_48);
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_43);
lean::cnstr_set(x_50, 1, x_49);
x_51 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_51, 0, x_39);
lean::cnstr_set(x_51, 1, x_50);
x_52 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_52, 0, x_35);
lean::cnstr_set(x_52, 1, x_51);
x_53 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_53, 0, x_31);
lean::cnstr_set(x_53, 1, x_52);
x_54 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_54, 0, x_27);
lean::cnstr_set(x_54, 1, x_53);
x_55 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_55, 0, x_23);
lean::cnstr_set(x_55, 1, x_54);
x_56 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_56, 0, x_19);
lean::cnstr_set(x_56, 1, x_55);
x_57 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_57, 0, x_15);
lean::cnstr_set(x_57, 1, x_56);
x_58 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_58, 0, x_11);
lean::cnstr_set(x_58, 1, x_57);
x_59 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_59, 0, x_7);
lean::cnstr_set(x_59, 1, x_58);
x_60 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_60, 0, x_3);
lean::cnstr_set(x_60, 1, x_59);
return x_60;
}
}
obj* l_lean_ir_parse__type(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_1 = lean::mk_string("type");
x_2 = l_lean_ir_str2type;
lean::inc(x_2);
x_4 = l_lean_ir_parse__key2val___main___rarg(x_1, x_2, x_0);
return x_4;
}
}
obj* _init_l_lean_ir_str2aunop() {
_start:
{
obj* x_0; unsigned char x_1; obj* x_2; obj* x_3; obj* x_4; unsigned char x_5; obj* x_6; obj* x_7; obj* x_8; unsigned char x_9; obj* x_10; obj* x_11; obj* x_12; unsigned char x_13; obj* x_14; obj* x_15; obj* x_16; unsigned char x_17; obj* x_18; obj* x_19; obj* x_20; unsigned char x_21; obj* x_22; obj* x_23; obj* x_24; unsigned char x_25; obj* x_26; obj* x_27; obj* x_28; unsigned char x_29; obj* x_30; obj* x_31; obj* x_32; unsigned char x_33; obj* x_34; obj* x_35; obj* x_36; unsigned char x_37; obj* x_38; obj* x_39; obj* x_40; unsigned char x_41; obj* x_42; obj* x_43; obj* x_44; unsigned char x_45; obj* x_46; obj* x_47; obj* x_48; unsigned char x_49; obj* x_50; obj* x_51; obj* x_52; unsigned char x_53; obj* x_54; obj* x_55; obj* x_56; unsigned char x_57; obj* x_58; obj* x_59; obj* x_60; unsigned char x_61; obj* x_62; obj* x_63; obj* x_64; unsigned char x_65; obj* x_66; obj* x_67; obj* x_68; unsigned char x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; 
x_0 = lean::mk_string("not");
x_1 = 0;
x_2 = lean::box(x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
x_4 = lean::mk_string("neg");
x_5 = 1;
x_6 = lean::box(x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_4);
lean::cnstr_set(x_7, 1, x_6);
x_8 = lean::mk_string("ineg");
x_9 = 2;
x_10 = lean::box(x_9);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_10);
x_12 = lean::mk_string("nat2int");
x_13 = 3;
x_14 = lean::box(x_13);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_12);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::mk_string("is_scalar");
x_17 = 4;
x_18 = lean::box(x_17);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_16);
lean::cnstr_set(x_19, 1, x_18);
x_20 = lean::mk_string("is_shared");
x_21 = 5;
x_22 = lean::box(x_21);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_20);
lean::cnstr_set(x_23, 1, x_22);
x_24 = lean::mk_string("is_null");
x_25 = 6;
x_26 = lean::box(x_25);
x_27 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_27, 0, x_24);
lean::cnstr_set(x_27, 1, x_26);
x_28 = lean::mk_string("array_copy");
x_29 = 10;
x_30 = lean::box(x_29);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_28);
lean::cnstr_set(x_31, 1, x_30);
x_32 = lean::mk_string("sarray_copy");
x_33 = 11;
x_34 = lean::box(x_33);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_32);
lean::cnstr_set(x_35, 1, x_34);
x_36 = lean::mk_string("box");
x_37 = 8;
x_38 = lean::box(x_37);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_36);
lean::cnstr_set(x_39, 1, x_38);
x_40 = lean::mk_string("unbox");
x_41 = 9;
x_42 = lean::box(x_41);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_40);
lean::cnstr_set(x_43, 1, x_42);
x_44 = lean::mk_string("cast");
x_45 = 7;
x_46 = lean::box(x_45);
x_47 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_47, 0, x_44);
lean::cnstr_set(x_47, 1, x_46);
x_48 = lean::mk_string("array_size");
x_49 = 12;
x_50 = lean::box(x_49);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_48);
lean::cnstr_set(x_51, 1, x_50);
x_52 = lean::mk_string("sarray_size");
x_53 = 13;
x_54 = lean::box(x_53);
x_55 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_55, 0, x_52);
lean::cnstr_set(x_55, 1, x_54);
x_56 = lean::mk_string("string_len");
x_57 = 14;
x_58 = lean::box(x_57);
x_59 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_59, 0, x_56);
lean::cnstr_set(x_59, 1, x_58);
x_60 = lean::mk_string("succ");
x_61 = 15;
x_62 = lean::box(x_61);
x_63 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_63, 0, x_60);
lean::cnstr_set(x_63, 1, x_62);
x_64 = lean::mk_string("tag");
x_65 = 16;
x_66 = lean::box(x_65);
x_67 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_67, 0, x_64);
lean::cnstr_set(x_67, 1, x_66);
x_68 = lean::mk_string("tag_ref");
x_69 = 17;
x_70 = lean::box(x_69);
x_71 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_71, 0, x_68);
lean::cnstr_set(x_71, 1, x_70);
x_72 = lean::box(0);
x_73 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_73, 0, x_71);
lean::cnstr_set(x_73, 1, x_72);
x_74 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_74, 0, x_67);
lean::cnstr_set(x_74, 1, x_73);
x_75 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_75, 0, x_63);
lean::cnstr_set(x_75, 1, x_74);
x_76 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_76, 0, x_59);
lean::cnstr_set(x_76, 1, x_75);
x_77 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_77, 0, x_55);
lean::cnstr_set(x_77, 1, x_76);
x_78 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_78, 0, x_51);
lean::cnstr_set(x_78, 1, x_77);
x_79 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_79, 0, x_47);
lean::cnstr_set(x_79, 1, x_78);
x_80 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_80, 0, x_43);
lean::cnstr_set(x_80, 1, x_79);
x_81 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_81, 0, x_39);
lean::cnstr_set(x_81, 1, x_80);
x_82 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_82, 0, x_35);
lean::cnstr_set(x_82, 1, x_81);
x_83 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_83, 0, x_31);
lean::cnstr_set(x_83, 1, x_82);
x_84 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_84, 0, x_27);
lean::cnstr_set(x_84, 1, x_83);
x_85 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_85, 0, x_23);
lean::cnstr_set(x_85, 1, x_84);
x_86 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_86, 0, x_19);
lean::cnstr_set(x_86, 1, x_85);
x_87 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_87, 0, x_15);
lean::cnstr_set(x_87, 1, x_86);
x_88 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_88, 0, x_11);
lean::cnstr_set(x_88, 1, x_87);
x_89 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_89, 0, x_7);
lean::cnstr_set(x_89, 1, x_88);
x_90 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_90, 0, x_3);
lean::cnstr_set(x_90, 1, x_89);
return x_90;
}
}
obj* l_lean_ir_parse__assign__unop(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_1 = lean::mk_string("unary operator");
x_2 = l_lean_ir_str2aunop;
lean::inc(x_2);
x_4 = l_lean_ir_parse__key2val___main___rarg(x_1, x_2, x_0);
return x_4;
}
}
obj* _init_l_lean_ir_str2abinop() {
_start:
{
obj* x_0; unsigned char x_1; obj* x_2; obj* x_3; obj* x_4; unsigned char x_5; obj* x_6; obj* x_7; obj* x_8; unsigned char x_9; obj* x_10; obj* x_11; obj* x_12; unsigned char x_13; obj* x_14; obj* x_15; obj* x_16; unsigned char x_17; obj* x_18; obj* x_19; obj* x_20; unsigned char x_21; obj* x_22; obj* x_23; obj* x_24; unsigned char x_25; obj* x_26; obj* x_27; obj* x_28; unsigned char x_29; obj* x_30; obj* x_31; obj* x_32; unsigned char x_33; obj* x_34; obj* x_35; obj* x_36; unsigned char x_37; obj* x_38; obj* x_39; obj* x_40; unsigned char x_41; obj* x_42; obj* x_43; obj* x_44; unsigned char x_45; obj* x_46; obj* x_47; obj* x_48; unsigned char x_49; obj* x_50; obj* x_51; obj* x_52; unsigned char x_53; obj* x_54; obj* x_55; obj* x_56; unsigned char x_57; obj* x_58; obj* x_59; obj* x_60; unsigned char x_61; obj* x_62; obj* x_63; obj* x_64; unsigned char x_65; obj* x_66; obj* x_67; obj* x_68; unsigned char x_69; obj* x_70; obj* x_71; obj* x_72; unsigned char x_73; obj* x_74; obj* x_75; obj* x_76; unsigned char x_77; obj* x_78; obj* x_79; obj* x_80; unsigned char x_81; obj* x_82; obj* x_83; obj* x_84; unsigned char x_85; obj* x_86; obj* x_87; obj* x_88; unsigned char x_89; obj* x_90; obj* x_91; obj* x_92; unsigned char x_93; obj* x_94; obj* x_95; obj* x_96; unsigned char x_97; obj* x_98; obj* x_99; obj* x_100; unsigned char x_101; obj* x_102; obj* x_103; obj* x_104; unsigned char x_105; obj* x_106; obj* x_107; obj* x_108; obj* x_109; obj* x_110; obj* x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; obj* x_120; obj* x_121; obj* x_122; obj* x_123; obj* x_124; obj* x_125; obj* x_126; obj* x_127; obj* x_128; obj* x_129; obj* x_130; obj* x_131; obj* x_132; obj* x_133; obj* x_134; obj* x_135; 
x_0 = lean::mk_string("add");
x_1 = 0;
x_2 = lean::box(x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
x_4 = lean::mk_string("sub");
x_5 = 1;
x_6 = lean::box(x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_4);
lean::cnstr_set(x_7, 1, x_6);
x_8 = lean::mk_string("mul");
x_9 = 2;
x_10 = lean::box(x_9);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_10);
x_12 = lean::mk_string("div");
x_13 = 3;
x_14 = lean::box(x_13);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_12);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::mk_string("mod");
x_17 = 4;
x_18 = lean::box(x_17);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_16);
lean::cnstr_set(x_19, 1, x_18);
x_20 = lean::mk_string("iadd");
x_21 = 5;
x_22 = lean::box(x_21);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_20);
lean::cnstr_set(x_23, 1, x_22);
x_24 = lean::mk_string("isub");
x_25 = 6;
x_26 = lean::box(x_25);
x_27 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_27, 0, x_24);
lean::cnstr_set(x_27, 1, x_26);
x_28 = lean::mk_string("imul");
x_29 = 7;
x_30 = lean::box(x_29);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_28);
lean::cnstr_set(x_31, 1, x_30);
x_32 = lean::mk_string("idiv");
x_33 = 8;
x_34 = lean::box(x_33);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_32);
lean::cnstr_set(x_35, 1, x_34);
x_36 = lean::mk_string("imod");
x_37 = 9;
x_38 = lean::box(x_37);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_36);
lean::cnstr_set(x_39, 1, x_38);
x_40 = lean::mk_string("shl");
x_41 = 10;
x_42 = lean::box(x_41);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_40);
lean::cnstr_set(x_43, 1, x_42);
x_44 = lean::mk_string("shr");
x_45 = 11;
x_46 = lean::box(x_45);
x_47 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_47, 0, x_44);
lean::cnstr_set(x_47, 1, x_46);
x_48 = lean::mk_string("and");
x_49 = 12;
x_50 = lean::box(x_49);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_48);
lean::cnstr_set(x_51, 1, x_50);
x_52 = lean::mk_string("or");
x_53 = 13;
x_54 = lean::box(x_53);
x_55 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_55, 0, x_52);
lean::cnstr_set(x_55, 1, x_54);
x_56 = lean::mk_string("xor");
x_57 = 14;
x_58 = lean::box(x_57);
x_59 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_59, 0, x_56);
lean::cnstr_set(x_59, 1, x_58);
x_60 = lean::mk_string("le");
x_61 = 15;
x_62 = lean::box(x_61);
x_63 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_63, 0, x_60);
lean::cnstr_set(x_63, 1, x_62);
x_64 = lean::mk_string("lt");
x_65 = 16;
x_66 = lean::box(x_65);
x_67 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_67, 0, x_64);
lean::cnstr_set(x_67, 1, x_66);
x_68 = lean::mk_string("eq");
x_69 = 17;
x_70 = lean::box(x_69);
x_71 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_71, 0, x_68);
lean::cnstr_set(x_71, 1, x_70);
x_72 = lean::mk_string("ne");
x_73 = 18;
x_74 = lean::box(x_73);
x_75 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_75, 0, x_72);
lean::cnstr_set(x_75, 1, x_74);
x_76 = lean::mk_string("ile");
x_77 = 19;
x_78 = lean::box(x_77);
x_79 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_79, 0, x_76);
lean::cnstr_set(x_79, 1, x_78);
x_80 = lean::mk_string("ilt");
x_81 = 20;
x_82 = lean::box(x_81);
x_83 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_83, 0, x_80);
lean::cnstr_set(x_83, 1, x_82);
x_84 = lean::mk_string("ieq");
x_85 = 21;
x_86 = lean::box(x_85);
x_87 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_87, 0, x_84);
lean::cnstr_set(x_87, 1, x_86);
x_88 = lean::mk_string("ine");
x_89 = 22;
x_90 = lean::box(x_89);
x_91 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_91, 0, x_88);
lean::cnstr_set(x_91, 1, x_90);
x_92 = lean::mk_string("array_read");
x_93 = 23;
x_94 = lean::box(x_93);
x_95 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_95, 0, x_92);
lean::cnstr_set(x_95, 1, x_94);
x_96 = lean::mk_string("array_push");
x_97 = 24;
x_98 = lean::box(x_97);
x_99 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_99, 0, x_96);
lean::cnstr_set(x_99, 1, x_98);
x_100 = lean::mk_string("string_push");
x_101 = 25;
x_102 = lean::box(x_101);
x_103 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_103, 0, x_100);
lean::cnstr_set(x_103, 1, x_102);
x_104 = lean::mk_string("string_append");
x_105 = 26;
x_106 = lean::box(x_105);
x_107 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_107, 0, x_104);
lean::cnstr_set(x_107, 1, x_106);
x_108 = lean::box(0);
x_109 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_109, 0, x_107);
lean::cnstr_set(x_109, 1, x_108);
x_110 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_110, 0, x_103);
lean::cnstr_set(x_110, 1, x_109);
x_111 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_111, 0, x_99);
lean::cnstr_set(x_111, 1, x_110);
x_112 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_112, 0, x_95);
lean::cnstr_set(x_112, 1, x_111);
x_113 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_113, 0, x_91);
lean::cnstr_set(x_113, 1, x_112);
x_114 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_114, 0, x_87);
lean::cnstr_set(x_114, 1, x_113);
x_115 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_115, 0, x_83);
lean::cnstr_set(x_115, 1, x_114);
x_116 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_116, 0, x_79);
lean::cnstr_set(x_116, 1, x_115);
x_117 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_117, 0, x_75);
lean::cnstr_set(x_117, 1, x_116);
x_118 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_118, 0, x_71);
lean::cnstr_set(x_118, 1, x_117);
x_119 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_119, 0, x_67);
lean::cnstr_set(x_119, 1, x_118);
x_120 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_120, 0, x_63);
lean::cnstr_set(x_120, 1, x_119);
x_121 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_121, 0, x_59);
lean::cnstr_set(x_121, 1, x_120);
x_122 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_122, 0, x_55);
lean::cnstr_set(x_122, 1, x_121);
x_123 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_123, 0, x_51);
lean::cnstr_set(x_123, 1, x_122);
x_124 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_124, 0, x_47);
lean::cnstr_set(x_124, 1, x_123);
x_125 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_125, 0, x_43);
lean::cnstr_set(x_125, 1, x_124);
x_126 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_126, 0, x_39);
lean::cnstr_set(x_126, 1, x_125);
x_127 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_127, 0, x_35);
lean::cnstr_set(x_127, 1, x_126);
x_128 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_128, 0, x_31);
lean::cnstr_set(x_128, 1, x_127);
x_129 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_129, 0, x_27);
lean::cnstr_set(x_129, 1, x_128);
x_130 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_130, 0, x_23);
lean::cnstr_set(x_130, 1, x_129);
x_131 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_131, 0, x_19);
lean::cnstr_set(x_131, 1, x_130);
x_132 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_132, 0, x_15);
lean::cnstr_set(x_132, 1, x_131);
x_133 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_133, 0, x_11);
lean::cnstr_set(x_133, 1, x_132);
x_134 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_134, 0, x_7);
lean::cnstr_set(x_134, 1, x_133);
x_135 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_135, 0, x_3);
lean::cnstr_set(x_135, 1, x_134);
return x_135;
}
}
obj* l_lean_ir_parse__assign__binop(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_1 = lean::mk_string("binary operator");
x_2 = l_lean_ir_str2abinop;
lean::inc(x_2);
x_4 = l_lean_ir_parse__key2val___main___rarg(x_1, x_2, x_0);
return x_4;
}
}
obj* _init_l_lean_ir_str2unop() {
_start:
{
obj* x_0; unsigned char x_1; obj* x_2; obj* x_3; obj* x_4; unsigned char x_5; obj* x_6; obj* x_7; obj* x_8; unsigned char x_9; obj* x_10; obj* x_11; obj* x_12; unsigned char x_13; obj* x_14; obj* x_15; obj* x_16; unsigned char x_17; obj* x_18; obj* x_19; obj* x_20; unsigned char x_21; obj* x_22; obj* x_23; obj* x_24; unsigned char x_25; obj* x_26; obj* x_27; obj* x_28; unsigned char x_29; obj* x_30; obj* x_31; obj* x_32; unsigned char x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; 
x_0 = lean::mk_string("inc_ref");
x_1 = 0;
x_2 = lean::box(x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
x_4 = lean::mk_string("dec_ref");
x_5 = 1;
x_6 = lean::box(x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_4);
lean::cnstr_set(x_7, 1, x_6);
x_8 = lean::mk_string("inc");
x_9 = 3;
x_10 = lean::box(x_9);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_10);
x_12 = lean::mk_string("dec");
x_13 = 4;
x_14 = lean::box(x_13);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_12);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::mk_string("dec_sref");
x_17 = 2;
x_18 = lean::box(x_17);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_16);
lean::cnstr_set(x_19, 1, x_18);
x_20 = lean::mk_string("free");
x_21 = 5;
x_22 = lean::box(x_21);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_20);
lean::cnstr_set(x_23, 1, x_22);
x_24 = lean::mk_string("dealloc");
x_25 = 6;
x_26 = lean::box(x_25);
x_27 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_27, 0, x_24);
lean::cnstr_set(x_27, 1, x_26);
x_28 = lean::mk_string("array_pop");
x_29 = 7;
x_30 = lean::box(x_29);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_28);
lean::cnstr_set(x_31, 1, x_30);
x_32 = lean::mk_string("sarray_pop");
x_33 = 8;
x_34 = lean::box(x_33);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_32);
lean::cnstr_set(x_35, 1, x_34);
x_36 = lean::box(0);
x_37 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_37, 0, x_35);
lean::cnstr_set(x_37, 1, x_36);
x_38 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_38, 0, x_31);
lean::cnstr_set(x_38, 1, x_37);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_27);
lean::cnstr_set(x_39, 1, x_38);
x_40 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_40, 0, x_23);
lean::cnstr_set(x_40, 1, x_39);
x_41 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_41, 0, x_19);
lean::cnstr_set(x_41, 1, x_40);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_15);
lean::cnstr_set(x_42, 1, x_41);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_11);
lean::cnstr_set(x_43, 1, x_42);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_7);
lean::cnstr_set(x_44, 1, x_43);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_3);
lean::cnstr_set(x_45, 1, x_44);
return x_45;
}
}
obj* l_lean_ir_parse__unop(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_1 = lean::mk_string("unary operator");
x_2 = l_lean_ir_str2unop;
lean::inc(x_2);
x_4 = l_lean_ir_parse__key2val___main___rarg(x_1, x_2, x_0);
return x_4;
}
}
obj* l_lean_ir_parse__literal(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; obj* x_8; unsigned x_9; 
x_1 = lean::mk_nat_obj(45u);
x_2 = lean::mk_nat_obj(55296u);
x_3 = lean::nat_dec_lt(x_1, x_2);
lean::dec(x_2);
x_5 = l_bool_has__repr___closed__2;
lean::inc(x_0);
lean::inc(x_5);
x_8 = l_lean_ir_keyword(x_5, x_0);
if (lean::obj_tag(x_3) == 0)
{
obj* x_12; obj* x_13; 
lean::dec(x_3);
x_12 = lean::mk_nat_obj(57343u);
x_13 = lean::nat_dec_lt(x_12, x_1);
lean::dec(x_12);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; unsigned x_18; 
lean::dec(x_13);
lean::dec(x_1);
x_17 = lean::mk_nat_obj(0u);
x_18 = lean::unbox_uint32(x_17);
lean::dec(x_17);
x_9 = x_18;
goto lbl_10;
}
else
{
obj* x_21; obj* x_22; 
lean::dec(x_13);
x_21 = lean::mk_nat_obj(1114112u);
x_22 = lean::nat_dec_lt(x_1, x_21);
lean::dec(x_21);
if (lean::obj_tag(x_22) == 0)
{
obj* x_26; unsigned x_27; 
lean::dec(x_1);
lean::dec(x_22);
x_26 = lean::mk_nat_obj(0u);
x_27 = lean::unbox_uint32(x_26);
lean::dec(x_26);
x_9 = x_27;
goto lbl_10;
}
else
{
unsigned x_30; 
lean::dec(x_22);
x_30 = lean::unbox_uint32(x_1);
lean::dec(x_1);
x_9 = x_30;
goto lbl_10;
}
}
}
else
{
unsigned x_33; 
lean::dec(x_3);
x_33 = lean::unbox_uint32(x_1);
lean::dec(x_1);
x_9 = x_33;
goto lbl_10;
}
lbl_10:
{
obj* x_35; 
if (lean::obj_tag(x_8) == 0)
{
obj* x_37; obj* x_39; obj* x_41; obj* x_42; obj* x_43; obj* x_46; obj* x_47; 
x_37 = lean::cnstr_get(x_8, 1);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_8, 2);
lean::inc(x_39);
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_41 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 lean::cnstr_release(x_8, 2);
 x_41 = x_8;
}
x_42 = l_lean_ir_parse__literal___closed__3;
x_43 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_43);
lean::inc(x_42);
if (lean::is_scalar(x_41)) {
 x_46 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_46 = x_41;
}
lean::cnstr_set(x_46, 0, x_42);
lean::cnstr_set(x_46, 1, x_37);
lean::cnstr_set(x_46, 2, x_43);
x_47 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_39, x_46);
x_35 = x_47;
goto lbl_36;
}
else
{
obj* x_48; unsigned char x_50; obj* x_51; obj* x_52; obj* x_53; 
x_48 = lean::cnstr_get(x_8, 0);
lean::inc(x_48);
x_50 = lean::cnstr_get_scalar<unsigned char>(x_8, sizeof(void*)*1);
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_51 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 x_51 = x_8;
}
if (lean::is_scalar(x_51)) {
 x_52 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_52 = x_51;
}
lean::cnstr_set(x_52, 0, x_48);
lean::cnstr_set_scalar(x_52, sizeof(void*)*1, x_50);
x_53 = x_52;
x_35 = x_53;
goto lbl_36;
}
lbl_36:
{
if (lean::obj_tag(x_35) == 0)
{
lean::dec(x_0);
return x_35;
}
else
{
obj* x_55; unsigned char x_57; obj* x_58; obj* x_59; unsigned char x_60; 
x_55 = lean::cnstr_get(x_35, 0);
lean::inc(x_55);
x_57 = lean::cnstr_get_scalar<unsigned char>(x_35, sizeof(void*)*1);
if (x_57 == 0)
{
obj* x_63; obj* x_66; 
lean::dec(x_35);
x_63 = l_bool_has__repr___closed__1;
lean::inc(x_0);
lean::inc(x_63);
x_66 = l_lean_ir_keyword(x_63, x_0);
if (lean::obj_tag(x_66) == 0)
{
obj* x_67; obj* x_69; obj* x_71; obj* x_72; obj* x_73; obj* x_76; obj* x_77; 
x_67 = lean::cnstr_get(x_66, 1);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_66, 2);
lean::inc(x_69);
if (lean::is_shared(x_66)) {
 lean::dec(x_66);
 x_71 = lean::box(0);
} else {
 lean::cnstr_release(x_66, 0);
 lean::cnstr_release(x_66, 1);
 lean::cnstr_release(x_66, 2);
 x_71 = x_66;
}
x_72 = l_lean_ir_parse__literal___closed__2;
x_73 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_73);
lean::inc(x_72);
if (lean::is_scalar(x_71)) {
 x_76 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_76 = x_71;
}
lean::cnstr_set(x_76, 0, x_72);
lean::cnstr_set(x_76, 1, x_67);
lean::cnstr_set(x_76, 2, x_73);
x_77 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_69, x_76);
if (lean::obj_tag(x_77) == 0)
{
obj* x_79; 
lean::dec(x_0);
x_79 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_55, x_77);
return x_79;
}
else
{
obj* x_80; unsigned char x_82; 
x_80 = lean::cnstr_get(x_77, 0);
lean::inc(x_80);
x_82 = lean::cnstr_get_scalar<unsigned char>(x_77, sizeof(void*)*1);
x_58 = x_77;
x_59 = x_80;
x_60 = x_82;
goto lbl_61;
}
}
else
{
obj* x_83; unsigned char x_85; obj* x_86; obj* x_88; obj* x_89; 
x_83 = lean::cnstr_get(x_66, 0);
lean::inc(x_83);
x_85 = lean::cnstr_get_scalar<unsigned char>(x_66, sizeof(void*)*1);
if (lean::is_shared(x_66)) {
 lean::dec(x_66);
 x_86 = lean::box(0);
} else {
 lean::cnstr_release(x_66, 0);
 x_86 = x_66;
}
lean::inc(x_83);
if (lean::is_scalar(x_86)) {
 x_88 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_88 = x_86;
}
lean::cnstr_set(x_88, 0, x_83);
lean::cnstr_set_scalar(x_88, sizeof(void*)*1, x_85);
x_89 = x_88;
x_58 = x_89;
x_59 = x_83;
x_60 = x_85;
goto lbl_61;
}
}
else
{
lean::dec(x_0);
lean::dec(x_55);
return x_35;
}
lbl_61:
{
obj* x_92; obj* x_93; unsigned char x_94; 
if (x_60 == 0)
{
obj* x_98; 
lean::dec(x_58);
lean::inc(x_0);
x_98 = l_lean_parser_monad__parsec_num___at_lean_ir_parse__literal___spec__9(x_0);
if (lean::obj_tag(x_98) == 0)
{
obj* x_99; obj* x_101; obj* x_103; obj* x_105; obj* x_106; 
x_99 = lean::cnstr_get(x_98, 0);
lean::inc(x_99);
x_101 = lean::cnstr_get(x_98, 1);
lean::inc(x_101);
x_103 = lean::cnstr_get(x_98, 2);
lean::inc(x_103);
if (lean::is_shared(x_98)) {
 lean::dec(x_98);
 x_105 = lean::box(0);
} else {
 lean::cnstr_release(x_98, 0);
 lean::cnstr_release(x_98, 1);
 lean::cnstr_release(x_98, 2);
 x_105 = x_98;
}
x_106 = l_lean_parser_monad__parsec_whitespace___at_lean_ir_symbol___spec__2(x_101);
if (lean::obj_tag(x_106) == 0)
{
obj* x_107; obj* x_109; obj* x_111; obj* x_112; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_119; 
x_107 = lean::cnstr_get(x_106, 1);
lean::inc(x_107);
x_109 = lean::cnstr_get(x_106, 2);
lean::inc(x_109);
if (lean::is_shared(x_106)) {
 lean::dec(x_106);
 x_111 = lean::box(0);
} else {
 lean::cnstr_release(x_106, 0);
 lean::cnstr_release(x_106, 1);
 lean::cnstr_release(x_106, 2);
 x_111 = x_106;
}
x_112 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_112);
if (lean::is_scalar(x_105)) {
 x_114 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_114 = x_105;
}
lean::cnstr_set(x_114, 0, x_99);
lean::cnstr_set(x_114, 1, x_107);
lean::cnstr_set(x_114, 2, x_112);
x_115 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_109, x_114);
x_116 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_103, x_115);
x_117 = l_lean_ir_parse__literal___closed__1;
lean::inc(x_117);
x_119 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_116, x_117);
if (lean::obj_tag(x_119) == 0)
{
obj* x_120; obj* x_122; obj* x_124; obj* x_127; obj* x_129; obj* x_131; obj* x_132; 
x_120 = lean::cnstr_get(x_119, 0);
lean::inc(x_120);
x_122 = lean::cnstr_get(x_119, 1);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_119, 2);
lean::inc(x_124);
lean::dec(x_119);
x_127 = lean::nat2int(x_120);
lean::dec(x_120);
x_129 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_129, 0, x_127);
lean::inc(x_112);
if (lean::is_scalar(x_111)) {
 x_131 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_131 = x_111;
}
lean::cnstr_set(x_131, 0, x_129);
lean::cnstr_set(x_131, 1, x_122);
lean::cnstr_set(x_131, 2, x_112);
x_132 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_124, x_131);
if (lean::obj_tag(x_132) == 0)
{
obj* x_134; obj* x_135; 
lean::dec(x_0);
x_134 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_59, x_132);
x_135 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_55, x_134);
return x_135;
}
else
{
obj* x_136; unsigned char x_138; 
x_136 = lean::cnstr_get(x_132, 0);
lean::inc(x_136);
x_138 = lean::cnstr_get_scalar<unsigned char>(x_132, sizeof(void*)*1);
x_92 = x_132;
x_93 = x_136;
x_94 = x_138;
goto lbl_95;
}
}
else
{
obj* x_140; unsigned char x_142; obj* x_143; obj* x_145; obj* x_146; 
lean::dec(x_111);
x_140 = lean::cnstr_get(x_119, 0);
lean::inc(x_140);
x_142 = lean::cnstr_get_scalar<unsigned char>(x_119, sizeof(void*)*1);
if (lean::is_shared(x_119)) {
 lean::dec(x_119);
 x_143 = lean::box(0);
} else {
 lean::cnstr_release(x_119, 0);
 x_143 = x_119;
}
lean::inc(x_140);
if (lean::is_scalar(x_143)) {
 x_145 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_145 = x_143;
}
lean::cnstr_set(x_145, 0, x_140);
lean::cnstr_set_scalar(x_145, sizeof(void*)*1, x_142);
x_146 = x_145;
x_92 = x_146;
x_93 = x_140;
x_94 = x_142;
goto lbl_95;
}
}
else
{
obj* x_148; unsigned char x_150; obj* x_151; obj* x_152; obj* x_153; obj* x_154; obj* x_155; obj* x_157; 
lean::dec(x_99);
x_148 = lean::cnstr_get(x_106, 0);
lean::inc(x_148);
x_150 = lean::cnstr_get_scalar<unsigned char>(x_106, sizeof(void*)*1);
if (lean::is_shared(x_106)) {
 lean::dec(x_106);
 x_151 = lean::box(0);
} else {
 lean::cnstr_release(x_106, 0);
 x_151 = x_106;
}
if (lean::is_scalar(x_151)) {
 x_152 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_152 = x_151;
}
lean::cnstr_set(x_152, 0, x_148);
lean::cnstr_set_scalar(x_152, sizeof(void*)*1, x_150);
x_153 = x_152;
x_154 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_103, x_153);
x_155 = l_lean_ir_parse__literal___closed__1;
lean::inc(x_155);
x_157 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_154, x_155);
if (lean::obj_tag(x_157) == 0)
{
obj* x_158; obj* x_160; obj* x_162; obj* x_165; obj* x_167; obj* x_168; obj* x_170; obj* x_171; 
x_158 = lean::cnstr_get(x_157, 0);
lean::inc(x_158);
x_160 = lean::cnstr_get(x_157, 1);
lean::inc(x_160);
x_162 = lean::cnstr_get(x_157, 2);
lean::inc(x_162);
lean::dec(x_157);
x_165 = lean::nat2int(x_158);
lean::dec(x_158);
x_167 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_167, 0, x_165);
x_168 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_168);
if (lean::is_scalar(x_105)) {
 x_170 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_170 = x_105;
}
lean::cnstr_set(x_170, 0, x_167);
lean::cnstr_set(x_170, 1, x_160);
lean::cnstr_set(x_170, 2, x_168);
x_171 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_162, x_170);
if (lean::obj_tag(x_171) == 0)
{
obj* x_173; obj* x_174; 
lean::dec(x_0);
x_173 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_59, x_171);
x_174 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_55, x_173);
return x_174;
}
else
{
obj* x_175; unsigned char x_177; 
x_175 = lean::cnstr_get(x_171, 0);
lean::inc(x_175);
x_177 = lean::cnstr_get_scalar<unsigned char>(x_171, sizeof(void*)*1);
x_92 = x_171;
x_93 = x_175;
x_94 = x_177;
goto lbl_95;
}
}
else
{
obj* x_179; unsigned char x_181; obj* x_182; obj* x_184; obj* x_185; 
lean::dec(x_105);
x_179 = lean::cnstr_get(x_157, 0);
lean::inc(x_179);
x_181 = lean::cnstr_get_scalar<unsigned char>(x_157, sizeof(void*)*1);
if (lean::is_shared(x_157)) {
 lean::dec(x_157);
 x_182 = lean::box(0);
} else {
 lean::cnstr_release(x_157, 0);
 x_182 = x_157;
}
lean::inc(x_179);
if (lean::is_scalar(x_182)) {
 x_184 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_184 = x_182;
}
lean::cnstr_set(x_184, 0, x_179);
lean::cnstr_set_scalar(x_184, sizeof(void*)*1, x_181);
x_185 = x_184;
x_92 = x_185;
x_93 = x_179;
x_94 = x_181;
goto lbl_95;
}
}
}
else
{
obj* x_186; unsigned char x_188; obj* x_189; obj* x_190; obj* x_191; obj* x_192; obj* x_194; 
x_186 = lean::cnstr_get(x_98, 0);
lean::inc(x_186);
x_188 = lean::cnstr_get_scalar<unsigned char>(x_98, sizeof(void*)*1);
if (lean::is_shared(x_98)) {
 lean::dec(x_98);
 x_189 = lean::box(0);
} else {
 lean::cnstr_release(x_98, 0);
 x_189 = x_98;
}
if (lean::is_scalar(x_189)) {
 x_190 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_190 = x_189;
}
lean::cnstr_set(x_190, 0, x_186);
lean::cnstr_set_scalar(x_190, sizeof(void*)*1, x_188);
x_191 = x_190;
x_192 = l_lean_ir_parse__literal___closed__1;
lean::inc(x_192);
x_194 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_191, x_192);
if (lean::obj_tag(x_194) == 0)
{
obj* x_195; obj* x_197; obj* x_199; obj* x_201; obj* x_202; obj* x_204; obj* x_205; obj* x_207; obj* x_208; 
x_195 = lean::cnstr_get(x_194, 0);
lean::inc(x_195);
x_197 = lean::cnstr_get(x_194, 1);
lean::inc(x_197);
x_199 = lean::cnstr_get(x_194, 2);
lean::inc(x_199);
if (lean::is_shared(x_194)) {
 lean::dec(x_194);
 x_201 = lean::box(0);
} else {
 lean::cnstr_release(x_194, 0);
 lean::cnstr_release(x_194, 1);
 lean::cnstr_release(x_194, 2);
 x_201 = x_194;
}
x_202 = lean::nat2int(x_195);
lean::dec(x_195);
x_204 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_204, 0, x_202);
x_205 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_205);
if (lean::is_scalar(x_201)) {
 x_207 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_207 = x_201;
}
lean::cnstr_set(x_207, 0, x_204);
lean::cnstr_set(x_207, 1, x_197);
lean::cnstr_set(x_207, 2, x_205);
x_208 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_199, x_207);
if (lean::obj_tag(x_208) == 0)
{
obj* x_210; obj* x_211; 
lean::dec(x_0);
x_210 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_59, x_208);
x_211 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_55, x_210);
return x_211;
}
else
{
obj* x_212; unsigned char x_214; 
x_212 = lean::cnstr_get(x_208, 0);
lean::inc(x_212);
x_214 = lean::cnstr_get_scalar<unsigned char>(x_208, sizeof(void*)*1);
x_92 = x_208;
x_93 = x_212;
x_94 = x_214;
goto lbl_95;
}
}
else
{
obj* x_215; unsigned char x_217; obj* x_218; obj* x_220; obj* x_221; 
x_215 = lean::cnstr_get(x_194, 0);
lean::inc(x_215);
x_217 = lean::cnstr_get_scalar<unsigned char>(x_194, sizeof(void*)*1);
if (lean::is_shared(x_194)) {
 lean::dec(x_194);
 x_218 = lean::box(0);
} else {
 lean::cnstr_release(x_194, 0);
 x_218 = x_194;
}
lean::inc(x_215);
if (lean::is_scalar(x_218)) {
 x_220 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_220 = x_218;
}
lean::cnstr_set(x_220, 0, x_215);
lean::cnstr_set_scalar(x_220, sizeof(void*)*1, x_217);
x_221 = x_220;
x_92 = x_221;
x_93 = x_215;
x_94 = x_217;
goto lbl_95;
}
}
}
else
{
obj* x_224; 
lean::dec(x_59);
lean::dec(x_0);
x_224 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_55, x_58);
return x_224;
}
lbl_95:
{
obj* x_225; obj* x_226; obj* x_227; obj* x_229; unsigned char x_230; 
if (x_94 == 0)
{
obj* x_234; 
lean::dec(x_92);
lean::inc(x_0);
x_234 = l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2(x_9, x_0);
if (lean::obj_tag(x_234) == 0)
{
obj* x_235; obj* x_237; obj* x_239; obj* x_240; 
x_235 = lean::cnstr_get(x_234, 1);
lean::inc(x_235);
x_237 = lean::cnstr_get(x_234, 2);
lean::inc(x_237);
if (lean::is_shared(x_234)) {
 lean::dec(x_234);
 x_239 = lean::box(0);
} else {
 lean::cnstr_release(x_234, 0);
 lean::cnstr_release(x_234, 1);
 lean::cnstr_release(x_234, 2);
 x_239 = x_234;
}
x_240 = l_lean_parser_monad__parsec_num___at_lean_ir_parse__literal___spec__9(x_235);
if (lean::obj_tag(x_240) == 0)
{
obj* x_241; obj* x_243; obj* x_245; obj* x_248; 
x_241 = lean::cnstr_get(x_240, 0);
lean::inc(x_241);
x_243 = lean::cnstr_get(x_240, 1);
lean::inc(x_243);
x_245 = lean::cnstr_get(x_240, 2);
lean::inc(x_245);
lean::dec(x_240);
x_248 = l_lean_parser_monad__parsec_whitespace___at_lean_ir_symbol___spec__2(x_243);
if (lean::obj_tag(x_248) == 0)
{
obj* x_249; obj* x_251; obj* x_254; obj* x_256; obj* x_257; obj* x_258; obj* x_259; 
x_249 = lean::cnstr_get(x_248, 1);
lean::inc(x_249);
x_251 = lean::cnstr_get(x_248, 2);
lean::inc(x_251);
lean::dec(x_248);
x_254 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_254);
if (lean::is_scalar(x_239)) {
 x_256 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_256 = x_239;
}
lean::cnstr_set(x_256, 0, x_241);
lean::cnstr_set(x_256, 1, x_249);
lean::cnstr_set(x_256, 2, x_254);
x_257 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_251, x_256);
x_258 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_245, x_257);
x_259 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_237, x_258);
if (lean::obj_tag(x_259) == 0)
{
obj* x_260; obj* x_262; obj* x_264; 
x_260 = lean::cnstr_get(x_259, 0);
lean::inc(x_260);
x_262 = lean::cnstr_get(x_259, 1);
lean::inc(x_262);
x_264 = lean::cnstr_get(x_259, 2);
lean::inc(x_264);
lean::dec(x_259);
x_225 = x_260;
x_226 = x_262;
x_227 = x_264;
goto lbl_228;
}
else
{
obj* x_267; unsigned char x_269; 
x_267 = lean::cnstr_get(x_259, 0);
lean::inc(x_267);
x_269 = lean::cnstr_get_scalar<unsigned char>(x_259, sizeof(void*)*1);
lean::dec(x_259);
x_229 = x_267;
x_230 = x_269;
goto lbl_231;
}
}
else
{
obj* x_273; unsigned char x_275; obj* x_276; obj* x_277; obj* x_278; obj* x_279; obj* x_280; 
lean::dec(x_239);
lean::dec(x_241);
x_273 = lean::cnstr_get(x_248, 0);
lean::inc(x_273);
x_275 = lean::cnstr_get_scalar<unsigned char>(x_248, sizeof(void*)*1);
if (lean::is_shared(x_248)) {
 lean::dec(x_248);
 x_276 = lean::box(0);
} else {
 lean::cnstr_release(x_248, 0);
 x_276 = x_248;
}
if (lean::is_scalar(x_276)) {
 x_277 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_277 = x_276;
}
lean::cnstr_set(x_277, 0, x_273);
lean::cnstr_set_scalar(x_277, sizeof(void*)*1, x_275);
x_278 = x_277;
x_279 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_245, x_278);
x_280 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_237, x_279);
if (lean::obj_tag(x_280) == 0)
{
obj* x_281; obj* x_283; obj* x_285; 
x_281 = lean::cnstr_get(x_280, 0);
lean::inc(x_281);
x_283 = lean::cnstr_get(x_280, 1);
lean::inc(x_283);
x_285 = lean::cnstr_get(x_280, 2);
lean::inc(x_285);
lean::dec(x_280);
x_225 = x_281;
x_226 = x_283;
x_227 = x_285;
goto lbl_228;
}
else
{
obj* x_288; unsigned char x_290; 
x_288 = lean::cnstr_get(x_280, 0);
lean::inc(x_288);
x_290 = lean::cnstr_get_scalar<unsigned char>(x_280, sizeof(void*)*1);
lean::dec(x_280);
x_229 = x_288;
x_230 = x_290;
goto lbl_231;
}
}
}
else
{
obj* x_293; unsigned char x_295; obj* x_296; obj* x_297; obj* x_298; obj* x_299; 
lean::dec(x_239);
x_293 = lean::cnstr_get(x_240, 0);
lean::inc(x_293);
x_295 = lean::cnstr_get_scalar<unsigned char>(x_240, sizeof(void*)*1);
if (lean::is_shared(x_240)) {
 lean::dec(x_240);
 x_296 = lean::box(0);
} else {
 lean::cnstr_release(x_240, 0);
 x_296 = x_240;
}
if (lean::is_scalar(x_296)) {
 x_297 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_297 = x_296;
}
lean::cnstr_set(x_297, 0, x_293);
lean::cnstr_set_scalar(x_297, sizeof(void*)*1, x_295);
x_298 = x_297;
x_299 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_237, x_298);
if (lean::obj_tag(x_299) == 0)
{
obj* x_300; obj* x_302; obj* x_304; 
x_300 = lean::cnstr_get(x_299, 0);
lean::inc(x_300);
x_302 = lean::cnstr_get(x_299, 1);
lean::inc(x_302);
x_304 = lean::cnstr_get(x_299, 2);
lean::inc(x_304);
lean::dec(x_299);
x_225 = x_300;
x_226 = x_302;
x_227 = x_304;
goto lbl_228;
}
else
{
obj* x_307; unsigned char x_309; 
x_307 = lean::cnstr_get(x_299, 0);
lean::inc(x_307);
x_309 = lean::cnstr_get_scalar<unsigned char>(x_299, sizeof(void*)*1);
lean::dec(x_299);
x_229 = x_307;
x_230 = x_309;
goto lbl_231;
}
}
}
else
{
obj* x_311; unsigned char x_313; 
x_311 = lean::cnstr_get(x_234, 0);
lean::inc(x_311);
x_313 = lean::cnstr_get_scalar<unsigned char>(x_234, sizeof(void*)*1);
lean::dec(x_234);
x_229 = x_311;
x_230 = x_313;
goto lbl_231;
}
}
else
{
obj* x_317; obj* x_318; 
lean::dec(x_0);
lean::dec(x_93);
x_317 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_59, x_92);
x_318 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_55, x_317);
return x_318;
}
lbl_228:
{
obj* x_319; obj* x_321; obj* x_323; obj* x_324; obj* x_326; obj* x_327; 
x_319 = lean::nat2int(x_225);
lean::dec(x_225);
x_321 = lean::int_neg(x_319);
lean::dec(x_319);
x_323 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_323, 0, x_321);
x_324 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_324);
x_326 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_326, 0, x_323);
lean::cnstr_set(x_326, 1, x_226);
lean::cnstr_set(x_326, 2, x_324);
x_327 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_227, x_326);
if (lean::obj_tag(x_327) == 0)
{
obj* x_329; obj* x_330; obj* x_331; 
lean::dec(x_0);
x_329 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_93, x_327);
x_330 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_59, x_329);
x_331 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_55, x_330);
return x_331;
}
else
{
obj* x_332; unsigned char x_334; 
x_332 = lean::cnstr_get(x_327, 0);
lean::inc(x_332);
x_334 = lean::cnstr_get_scalar<unsigned char>(x_327, sizeof(void*)*1);
if (x_334 == 0)
{
obj* x_336; 
lean::dec(x_327);
x_336 = l_lean_parser_parse__string__literal___at_lean_ir_parse__literal___spec__1(x_0);
if (lean::obj_tag(x_336) == 0)
{
obj* x_337; obj* x_339; obj* x_341; obj* x_343; obj* x_344; obj* x_346; obj* x_347; obj* x_348; obj* x_349; obj* x_350; obj* x_351; 
x_337 = lean::cnstr_get(x_336, 0);
lean::inc(x_337);
x_339 = lean::cnstr_get(x_336, 1);
lean::inc(x_339);
x_341 = lean::cnstr_get(x_336, 2);
lean::inc(x_341);
if (lean::is_shared(x_336)) {
 lean::dec(x_336);
 x_343 = lean::box(0);
} else {
 lean::cnstr_release(x_336, 0);
 lean::cnstr_release(x_336, 1);
 lean::cnstr_release(x_336, 2);
 x_343 = x_336;
}
x_344 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_344, 0, x_337);
lean::inc(x_324);
if (lean::is_scalar(x_343)) {
 x_346 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_346 = x_343;
}
lean::cnstr_set(x_346, 0, x_344);
lean::cnstr_set(x_346, 1, x_339);
lean::cnstr_set(x_346, 2, x_324);
x_347 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_341, x_346);
x_348 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_332, x_347);
x_349 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_93, x_348);
x_350 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_59, x_349);
x_351 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_55, x_350);
return x_351;
}
else
{
obj* x_352; unsigned char x_354; obj* x_355; obj* x_356; obj* x_357; obj* x_358; obj* x_359; obj* x_360; obj* x_361; 
x_352 = lean::cnstr_get(x_336, 0);
lean::inc(x_352);
x_354 = lean::cnstr_get_scalar<unsigned char>(x_336, sizeof(void*)*1);
if (lean::is_shared(x_336)) {
 lean::dec(x_336);
 x_355 = lean::box(0);
} else {
 lean::cnstr_release(x_336, 0);
 x_355 = x_336;
}
if (lean::is_scalar(x_355)) {
 x_356 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_356 = x_355;
}
lean::cnstr_set(x_356, 0, x_352);
lean::cnstr_set_scalar(x_356, sizeof(void*)*1, x_354);
x_357 = x_356;
x_358 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_332, x_357);
x_359 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_93, x_358);
x_360 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_59, x_359);
x_361 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_55, x_360);
return x_361;
}
}
else
{
obj* x_364; obj* x_365; obj* x_366; 
lean::dec(x_332);
lean::dec(x_0);
x_364 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_93, x_327);
x_365 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_59, x_364);
x_366 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_55, x_365);
return x_366;
}
}
}
lbl_231:
{
if (x_230 == 0)
{
obj* x_367; 
x_367 = l_lean_parser_parse__string__literal___at_lean_ir_parse__literal___spec__1(x_0);
if (lean::obj_tag(x_367) == 0)
{
obj* x_368; obj* x_370; obj* x_372; obj* x_374; obj* x_375; obj* x_376; obj* x_378; obj* x_379; obj* x_380; obj* x_381; obj* x_382; obj* x_383; 
x_368 = lean::cnstr_get(x_367, 0);
lean::inc(x_368);
x_370 = lean::cnstr_get(x_367, 1);
lean::inc(x_370);
x_372 = lean::cnstr_get(x_367, 2);
lean::inc(x_372);
if (lean::is_shared(x_367)) {
 lean::dec(x_367);
 x_374 = lean::box(0);
} else {
 lean::cnstr_release(x_367, 0);
 lean::cnstr_release(x_367, 1);
 lean::cnstr_release(x_367, 2);
 x_374 = x_367;
}
x_375 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_375, 0, x_368);
x_376 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_376);
if (lean::is_scalar(x_374)) {
 x_378 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_378 = x_374;
}
lean::cnstr_set(x_378, 0, x_375);
lean::cnstr_set(x_378, 1, x_370);
lean::cnstr_set(x_378, 2, x_376);
x_379 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_372, x_378);
x_380 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_229, x_379);
x_381 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_93, x_380);
x_382 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_59, x_381);
x_383 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_55, x_382);
return x_383;
}
else
{
obj* x_384; unsigned char x_386; obj* x_387; obj* x_388; obj* x_389; obj* x_390; obj* x_391; obj* x_392; obj* x_393; 
x_384 = lean::cnstr_get(x_367, 0);
lean::inc(x_384);
x_386 = lean::cnstr_get_scalar<unsigned char>(x_367, sizeof(void*)*1);
if (lean::is_shared(x_367)) {
 lean::dec(x_367);
 x_387 = lean::box(0);
} else {
 lean::cnstr_release(x_367, 0);
 x_387 = x_367;
}
if (lean::is_scalar(x_387)) {
 x_388 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_388 = x_387;
}
lean::cnstr_set(x_388, 0, x_384);
lean::cnstr_set_scalar(x_388, sizeof(void*)*1, x_386);
x_389 = x_388;
x_390 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_229, x_389);
x_391 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_93, x_390);
x_392 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_59, x_391);
x_393 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_55, x_392);
return x_393;
}
}
else
{
obj* x_395; obj* x_396; obj* x_397; obj* x_398; obj* x_399; 
lean::dec(x_0);
x_395 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_395, 0, x_229);
lean::cnstr_set_scalar(x_395, sizeof(void*)*1, x_230);
x_396 = x_395;
x_397 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_93, x_396);
x_398 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_59, x_397);
x_399 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_55, x_398);
return x_399;
}
}
}
}
}
}
}
}
}
obj* _init_l_lean_ir_parse__literal___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("numeral");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_ir_parse__literal___closed__2() {
_start:
{
unsigned char x_0; obj* x_1; obj* x_2; 
x_0 = 0;
x_1 = lean::alloc_cnstr(0, 0, 1);
lean::cnstr_set_scalar(x_1, 0, x_0);
x_2 = x_1;
return x_2;
}
}
obj* _init_l_lean_ir_parse__literal___closed__3() {
_start:
{
unsigned char x_0; obj* x_1; obj* x_2; 
x_0 = 1;
x_1 = lean::alloc_cnstr(0, 0, 1);
lean::cnstr_set_scalar(x_1, 0, x_0);
x_2 = x_1;
return x_2;
}
}
obj* l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2(unsigned x_0, obj* x_1) {
_start:
{
unsigned char x_2; 
x_2 = lean::string_iterator_has_next(x_1);
if (x_2 == 0)
{
obj* x_3; obj* x_4; obj* x_5; obj* x_9; 
x_3 = lean::box(0);
x_4 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_5 = l_mjoin___rarg___closed__1;
lean::inc(x_3);
lean::inc(x_5);
lean::inc(x_4);
x_9 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_4, x_5, x_3, x_3, x_1);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; obj* x_12; obj* x_14; 
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_9, 2);
lean::inc(x_14);
if (lean::obj_tag(x_14) == 0)
{
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_10);
return x_9;
}
else
{
obj* x_20; obj* x_22; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_9);
x_20 = lean::cnstr_get(x_14, 0);
lean::inc(x_20);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_22 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_22 = x_14;
}
lean::inc(x_5);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_24, 0, x_5);
lean::closure_set(x_24, 1, x_20);
if (lean::is_scalar(x_22)) {
 x_25 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_25 = x_22;
}
lean::cnstr_set(x_25, 0, x_24);
x_26 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_26, 0, x_10);
lean::cnstr_set(x_26, 1, x_12);
lean::cnstr_set(x_26, 2, x_25);
return x_26;
}
}
else
{
obj* x_27; unsigned char x_29; 
x_27 = lean::cnstr_get(x_9, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get_scalar<unsigned char>(x_9, sizeof(void*)*1);
if (x_29 == 0)
{
obj* x_31; obj* x_33; obj* x_35; obj* x_38; obj* x_39; obj* x_42; obj* x_43; obj* x_44; 
lean::dec(x_9);
x_31 = lean::cnstr_get(x_27, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_27, 1);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_27, 2);
lean::inc(x_35);
lean::inc(x_5);
x_38 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_38, 0, x_5);
lean::closure_set(x_38, 1, x_35);
x_39 = lean::cnstr_get(x_27, 3);
lean::inc(x_39);
lean::dec(x_27);
x_42 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_42, 0, x_31);
lean::cnstr_set(x_42, 1, x_33);
lean::cnstr_set(x_42, 2, x_38);
lean::cnstr_set(x_42, 3, x_39);
x_43 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_43, 0, x_42);
lean::cnstr_set_scalar(x_43, sizeof(void*)*1, x_29);
x_44 = x_43;
return x_44;
}
else
{
lean::dec(x_27);
return x_9;
}
}
}
else
{
unsigned x_46; obj* x_47; obj* x_48; obj* x_49; 
x_46 = lean::string_iterator_curr(x_1);
x_47 = lean::box_uint32(x_46);
x_48 = lean::box_uint32(x_0);
x_49 = lean::nat_dec_eq(x_47, x_48);
lean::dec(x_48);
if (lean::obj_tag(x_49) == 0)
{
obj* x_53; obj* x_54; obj* x_56; obj* x_58; obj* x_59; obj* x_60; obj* x_63; 
lean::dec(x_47);
lean::dec(x_49);
x_53 = l_char_quote__core(x_46);
x_54 = l_char_has__repr___closed__1;
lean::inc(x_54);
x_56 = lean::string_append(x_54, x_53);
lean::dec(x_53);
x_58 = lean::string_append(x_56, x_54);
x_59 = lean::box(0);
x_60 = l_mjoin___rarg___closed__1;
lean::inc(x_59);
lean::inc(x_60);
x_63 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_58, x_60, x_59, x_59, x_1);
if (lean::obj_tag(x_63) == 0)
{
obj* x_64; obj* x_66; obj* x_68; 
x_64 = lean::cnstr_get(x_63, 0);
lean::inc(x_64);
x_66 = lean::cnstr_get(x_63, 1);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_63, 2);
lean::inc(x_68);
if (lean::obj_tag(x_68) == 0)
{
lean::dec(x_66);
lean::dec(x_68);
lean::dec(x_64);
return x_63;
}
else
{
obj* x_74; obj* x_76; obj* x_78; obj* x_79; obj* x_80; 
lean::dec(x_63);
x_74 = lean::cnstr_get(x_68, 0);
lean::inc(x_74);
if (lean::is_shared(x_68)) {
 lean::dec(x_68);
 x_76 = lean::box(0);
} else {
 lean::cnstr_release(x_68, 0);
 x_76 = x_68;
}
lean::inc(x_60);
x_78 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_78, 0, x_60);
lean::closure_set(x_78, 1, x_74);
if (lean::is_scalar(x_76)) {
 x_79 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_79 = x_76;
}
lean::cnstr_set(x_79, 0, x_78);
x_80 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_80, 0, x_64);
lean::cnstr_set(x_80, 1, x_66);
lean::cnstr_set(x_80, 2, x_79);
return x_80;
}
}
else
{
obj* x_81; unsigned char x_83; 
x_81 = lean::cnstr_get(x_63, 0);
lean::inc(x_81);
x_83 = lean::cnstr_get_scalar<unsigned char>(x_63, sizeof(void*)*1);
if (x_83 == 0)
{
obj* x_85; obj* x_87; obj* x_89; obj* x_92; obj* x_93; obj* x_96; obj* x_97; obj* x_98; 
lean::dec(x_63);
x_85 = lean::cnstr_get(x_81, 0);
lean::inc(x_85);
x_87 = lean::cnstr_get(x_81, 1);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_81, 2);
lean::inc(x_89);
lean::inc(x_60);
x_92 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_92, 0, x_60);
lean::closure_set(x_92, 1, x_89);
x_93 = lean::cnstr_get(x_81, 3);
lean::inc(x_93);
lean::dec(x_81);
x_96 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_96, 0, x_85);
lean::cnstr_set(x_96, 1, x_87);
lean::cnstr_set(x_96, 2, x_92);
lean::cnstr_set(x_96, 3, x_93);
x_97 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_97, 0, x_96);
lean::cnstr_set_scalar(x_97, sizeof(void*)*1, x_83);
x_98 = x_97;
return x_98;
}
else
{
lean::dec(x_81);
return x_63;
}
}
}
else
{
obj* x_101; obj* x_102; obj* x_103; 
lean::dec(x_49);
x_101 = lean::string_iterator_next(x_1);
x_102 = lean::box(0);
x_103 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_103, 0, x_47);
lean::cnstr_set(x_103, 1, x_101);
lean::cnstr_set(x_103, 2, x_102);
return x_103;
}
}
}
}
obj* l_lean_parser_monad__parsec_any___at_lean_ir_parse__literal___spec__4(obj* x_0) {
_start:
{
unsigned char x_1; 
x_1 = lean::string_iterator_has_next(x_0);
if (x_1 == 0)
{
obj* x_2; obj* x_3; obj* x_4; obj* x_8; 
x_2 = lean::box(0);
x_3 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_4 = l_mjoin___rarg___closed__1;
lean::inc(x_2);
lean::inc(x_4);
lean::inc(x_3);
x_8 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_3, x_4, x_2, x_2, x_0);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; obj* x_11; obj* x_13; 
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_8, 2);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
lean::dec(x_13);
lean::dec(x_9);
lean::dec(x_11);
return x_8;
}
else
{
obj* x_19; obj* x_21; obj* x_23; obj* x_24; obj* x_25; 
lean::dec(x_8);
x_19 = lean::cnstr_get(x_13, 0);
lean::inc(x_19);
if (lean::is_shared(x_13)) {
 lean::dec(x_13);
 x_21 = lean::box(0);
} else {
 lean::cnstr_release(x_13, 0);
 x_21 = x_13;
}
lean::inc(x_4);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_23, 0, x_4);
lean::closure_set(x_23, 1, x_19);
if (lean::is_scalar(x_21)) {
 x_24 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_24 = x_21;
}
lean::cnstr_set(x_24, 0, x_23);
x_25 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_25, 0, x_9);
lean::cnstr_set(x_25, 1, x_11);
lean::cnstr_set(x_25, 2, x_24);
return x_25;
}
}
else
{
obj* x_26; unsigned char x_28; 
x_26 = lean::cnstr_get(x_8, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get_scalar<unsigned char>(x_8, sizeof(void*)*1);
if (x_28 == 0)
{
obj* x_30; obj* x_32; obj* x_34; obj* x_37; obj* x_38; obj* x_41; obj* x_42; obj* x_43; 
lean::dec(x_8);
x_30 = lean::cnstr_get(x_26, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_26, 1);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_26, 2);
lean::inc(x_34);
lean::inc(x_4);
x_37 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_37, 0, x_4);
lean::closure_set(x_37, 1, x_34);
x_38 = lean::cnstr_get(x_26, 3);
lean::inc(x_38);
lean::dec(x_26);
x_41 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_41, 0, x_30);
lean::cnstr_set(x_41, 1, x_32);
lean::cnstr_set(x_41, 2, x_37);
lean::cnstr_set(x_41, 3, x_38);
x_42 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_42, 0, x_41);
lean::cnstr_set_scalar(x_42, sizeof(void*)*1, x_28);
x_43 = x_42;
return x_43;
}
else
{
lean::dec(x_26);
return x_8;
}
}
}
else
{
unsigned x_45; obj* x_46; 
x_45 = lean::string_iterator_curr(x_0);
x_46 = l_true_decidable;
if (lean::obj_tag(x_46) == 0)
{
obj* x_47; obj* x_48; obj* x_50; obj* x_52; obj* x_53; obj* x_54; obj* x_57; 
x_47 = l_char_quote__core(x_45);
x_48 = l_char_has__repr___closed__1;
lean::inc(x_48);
x_50 = lean::string_append(x_48, x_47);
lean::dec(x_47);
x_52 = lean::string_append(x_50, x_48);
x_53 = lean::box(0);
x_54 = l_mjoin___rarg___closed__1;
lean::inc(x_53);
lean::inc(x_54);
x_57 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_52, x_54, x_53, x_53, x_0);
if (lean::obj_tag(x_57) == 0)
{
obj* x_58; obj* x_60; obj* x_62; 
x_58 = lean::cnstr_get(x_57, 0);
lean::inc(x_58);
x_60 = lean::cnstr_get(x_57, 1);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_57, 2);
lean::inc(x_62);
if (lean::obj_tag(x_62) == 0)
{
lean::dec(x_58);
lean::dec(x_60);
lean::dec(x_62);
return x_57;
}
else
{
obj* x_68; obj* x_70; obj* x_72; obj* x_73; obj* x_74; 
lean::dec(x_57);
x_68 = lean::cnstr_get(x_62, 0);
lean::inc(x_68);
if (lean::is_shared(x_62)) {
 lean::dec(x_62);
 x_70 = lean::box(0);
} else {
 lean::cnstr_release(x_62, 0);
 x_70 = x_62;
}
lean::inc(x_54);
x_72 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_72, 0, x_54);
lean::closure_set(x_72, 1, x_68);
if (lean::is_scalar(x_70)) {
 x_73 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_73 = x_70;
}
lean::cnstr_set(x_73, 0, x_72);
x_74 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_74, 0, x_58);
lean::cnstr_set(x_74, 1, x_60);
lean::cnstr_set(x_74, 2, x_73);
return x_74;
}
}
else
{
obj* x_75; unsigned char x_77; 
x_75 = lean::cnstr_get(x_57, 0);
lean::inc(x_75);
x_77 = lean::cnstr_get_scalar<unsigned char>(x_57, sizeof(void*)*1);
if (x_77 == 0)
{
obj* x_79; obj* x_81; obj* x_83; obj* x_86; obj* x_87; obj* x_90; obj* x_91; obj* x_92; 
lean::dec(x_57);
x_79 = lean::cnstr_get(x_75, 0);
lean::inc(x_79);
x_81 = lean::cnstr_get(x_75, 1);
lean::inc(x_81);
x_83 = lean::cnstr_get(x_75, 2);
lean::inc(x_83);
lean::inc(x_54);
x_86 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_86, 0, x_54);
lean::closure_set(x_86, 1, x_83);
x_87 = lean::cnstr_get(x_75, 3);
lean::inc(x_87);
lean::dec(x_75);
x_90 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_90, 0, x_79);
lean::cnstr_set(x_90, 1, x_81);
lean::cnstr_set(x_90, 2, x_86);
lean::cnstr_set(x_90, 3, x_87);
x_91 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_91, 0, x_90);
lean::cnstr_set_scalar(x_91, sizeof(void*)*1, x_77);
x_92 = x_91;
return x_92;
}
else
{
lean::dec(x_75);
return x_57;
}
}
}
else
{
obj* x_94; obj* x_95; obj* x_96; obj* x_97; 
x_94 = lean::string_iterator_next(x_0);
x_95 = lean::box(0);
x_96 = lean::box_uint32(x_45);
x_97 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_97, 0, x_96);
lean::cnstr_set(x_97, 1, x_94);
lean::cnstr_set(x_97, 2, x_95);
return x_97;
}
}
}
}
obj* l_lean_parser_monad__parsec_digit___at_lean_ir_parse__literal___spec__7(obj* x_0) {
_start:
{
unsigned char x_1; 
x_1 = lean::string_iterator_has_next(x_0);
if (x_1 == 0)
{
obj* x_2; obj* x_3; obj* x_4; obj* x_8; 
x_2 = lean::box(0);
x_3 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_4 = l_mjoin___rarg___closed__1;
lean::inc(x_2);
lean::inc(x_4);
lean::inc(x_3);
x_8 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_3, x_4, x_2, x_2, x_0);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; obj* x_11; obj* x_13; 
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_8, 2);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
lean::dec(x_13);
lean::dec(x_9);
lean::dec(x_11);
return x_8;
}
else
{
obj* x_19; obj* x_21; obj* x_23; obj* x_24; obj* x_25; 
lean::dec(x_8);
x_19 = lean::cnstr_get(x_13, 0);
lean::inc(x_19);
if (lean::is_shared(x_13)) {
 lean::dec(x_13);
 x_21 = lean::box(0);
} else {
 lean::cnstr_release(x_13, 0);
 x_21 = x_13;
}
lean::inc(x_4);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_23, 0, x_4);
lean::closure_set(x_23, 1, x_19);
if (lean::is_scalar(x_21)) {
 x_24 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_24 = x_21;
}
lean::cnstr_set(x_24, 0, x_23);
x_25 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_25, 0, x_9);
lean::cnstr_set(x_25, 1, x_11);
lean::cnstr_set(x_25, 2, x_24);
return x_25;
}
}
else
{
obj* x_26; unsigned char x_28; 
x_26 = lean::cnstr_get(x_8, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get_scalar<unsigned char>(x_8, sizeof(void*)*1);
if (x_28 == 0)
{
obj* x_30; obj* x_32; obj* x_34; obj* x_37; obj* x_38; obj* x_41; obj* x_42; obj* x_43; 
lean::dec(x_8);
x_30 = lean::cnstr_get(x_26, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_26, 1);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_26, 2);
lean::inc(x_34);
lean::inc(x_4);
x_37 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_37, 0, x_4);
lean::closure_set(x_37, 1, x_34);
x_38 = lean::cnstr_get(x_26, 3);
lean::inc(x_38);
lean::dec(x_26);
x_41 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_41, 0, x_30);
lean::cnstr_set(x_41, 1, x_32);
lean::cnstr_set(x_41, 2, x_37);
lean::cnstr_set(x_41, 3, x_38);
x_42 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_42, 0, x_41);
lean::cnstr_set_scalar(x_42, sizeof(void*)*1, x_28);
x_43 = x_42;
return x_43;
}
else
{
lean::dec(x_26);
return x_8;
}
}
}
else
{
unsigned x_45; unsigned char x_46; 
x_45 = lean::string_iterator_curr(x_0);
x_46 = l_char_is__digit(x_45);
if (x_46 == 0)
{
obj* x_47; obj* x_48; obj* x_50; obj* x_52; obj* x_53; obj* x_54; obj* x_57; 
x_47 = l_char_quote__core(x_45);
x_48 = l_char_has__repr___closed__1;
lean::inc(x_48);
x_50 = lean::string_append(x_48, x_47);
lean::dec(x_47);
x_52 = lean::string_append(x_50, x_48);
x_53 = lean::box(0);
x_54 = l_mjoin___rarg___closed__1;
lean::inc(x_53);
lean::inc(x_54);
x_57 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_52, x_54, x_53, x_53, x_0);
if (lean::obj_tag(x_57) == 0)
{
obj* x_58; obj* x_60; obj* x_62; 
x_58 = lean::cnstr_get(x_57, 0);
lean::inc(x_58);
x_60 = lean::cnstr_get(x_57, 1);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_57, 2);
lean::inc(x_62);
if (lean::obj_tag(x_62) == 0)
{
lean::dec(x_58);
lean::dec(x_60);
lean::dec(x_62);
return x_57;
}
else
{
obj* x_68; obj* x_70; obj* x_72; obj* x_73; obj* x_74; 
lean::dec(x_57);
x_68 = lean::cnstr_get(x_62, 0);
lean::inc(x_68);
if (lean::is_shared(x_62)) {
 lean::dec(x_62);
 x_70 = lean::box(0);
} else {
 lean::cnstr_release(x_62, 0);
 x_70 = x_62;
}
lean::inc(x_54);
x_72 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_72, 0, x_54);
lean::closure_set(x_72, 1, x_68);
if (lean::is_scalar(x_70)) {
 x_73 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_73 = x_70;
}
lean::cnstr_set(x_73, 0, x_72);
x_74 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_74, 0, x_58);
lean::cnstr_set(x_74, 1, x_60);
lean::cnstr_set(x_74, 2, x_73);
return x_74;
}
}
else
{
obj* x_75; unsigned char x_77; 
x_75 = lean::cnstr_get(x_57, 0);
lean::inc(x_75);
x_77 = lean::cnstr_get_scalar<unsigned char>(x_57, sizeof(void*)*1);
if (x_77 == 0)
{
obj* x_79; obj* x_81; obj* x_83; obj* x_86; obj* x_87; obj* x_90; obj* x_91; obj* x_92; 
lean::dec(x_57);
x_79 = lean::cnstr_get(x_75, 0);
lean::inc(x_79);
x_81 = lean::cnstr_get(x_75, 1);
lean::inc(x_81);
x_83 = lean::cnstr_get(x_75, 2);
lean::inc(x_83);
lean::inc(x_54);
x_86 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_86, 0, x_54);
lean::closure_set(x_86, 1, x_83);
x_87 = lean::cnstr_get(x_75, 3);
lean::inc(x_87);
lean::dec(x_75);
x_90 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_90, 0, x_79);
lean::cnstr_set(x_90, 1, x_81);
lean::cnstr_set(x_90, 2, x_86);
lean::cnstr_set(x_90, 3, x_87);
x_91 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_91, 0, x_90);
lean::cnstr_set_scalar(x_91, sizeof(void*)*1, x_77);
x_92 = x_91;
return x_92;
}
else
{
lean::dec(x_75);
return x_57;
}
}
}
else
{
obj* x_94; obj* x_95; obj* x_96; obj* x_97; 
x_94 = lean::string_iterator_next(x_0);
x_95 = lean::box(0);
x_96 = lean::box_uint32(x_45);
x_97 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_97, 0, x_96);
lean::cnstr_set(x_97, 1, x_94);
lean::cnstr_set(x_97, 2, x_95);
return x_97;
}
}
}
}
obj* l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; unsigned char x_3; obj* x_6; 
lean::inc(x_0);
x_6 = l_lean_parser_monad__parsec_digit___at_lean_ir_parse__literal___spec__7(x_0);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 2);
lean::inc(x_11);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_13 = x_6;
}
x_14 = lean::mk_nat_obj(48u);
x_15 = lean::mk_nat_obj(55296u);
x_16 = lean::nat_dec_lt(x_14, x_15);
lean::dec(x_15);
if (lean::obj_tag(x_16) == 0)
{
obj* x_19; obj* x_20; 
lean::dec(x_16);
x_19 = lean::mk_nat_obj(57343u);
x_20 = lean::nat_dec_lt(x_19, x_14);
lean::dec(x_19);
if (lean::obj_tag(x_20) == 0)
{
obj* x_24; obj* x_25; obj* x_28; obj* x_30; obj* x_31; 
lean::dec(x_20);
lean::dec(x_14);
x_24 = lean::mk_nat_obj(0u);
x_25 = lean::nat_sub(x_7, x_24);
lean::dec(x_24);
lean::dec(x_7);
x_28 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_28);
if (lean::is_scalar(x_13)) {
 x_30 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_30 = x_13;
}
lean::cnstr_set(x_30, 0, x_25);
lean::cnstr_set(x_30, 1, x_9);
lean::cnstr_set(x_30, 2, x_28);
x_31 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_30);
if (lean::obj_tag(x_31) == 0)
{
obj* x_33; obj* x_35; 
lean::dec(x_0);
x_33 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1;
lean::inc(x_33);
x_35 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_31, x_33);
return x_35;
}
else
{
obj* x_36; unsigned char x_38; 
x_36 = lean::cnstr_get(x_31, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get_scalar<unsigned char>(x_31, sizeof(void*)*1);
x_1 = x_31;
x_2 = x_36;
x_3 = x_38;
goto lbl_4;
}
}
else
{
obj* x_40; obj* x_41; 
lean::dec(x_20);
x_40 = lean::mk_nat_obj(1114112u);
x_41 = lean::nat_dec_lt(x_14, x_40);
lean::dec(x_40);
if (lean::obj_tag(x_41) == 0)
{
obj* x_45; obj* x_46; obj* x_49; obj* x_51; obj* x_52; 
lean::dec(x_41);
lean::dec(x_14);
x_45 = lean::mk_nat_obj(0u);
x_46 = lean::nat_sub(x_7, x_45);
lean::dec(x_45);
lean::dec(x_7);
x_49 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_49);
if (lean::is_scalar(x_13)) {
 x_51 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_51 = x_13;
}
lean::cnstr_set(x_51, 0, x_46);
lean::cnstr_set(x_51, 1, x_9);
lean::cnstr_set(x_51, 2, x_49);
x_52 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_51);
if (lean::obj_tag(x_52) == 0)
{
obj* x_54; obj* x_56; 
lean::dec(x_0);
x_54 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1;
lean::inc(x_54);
x_56 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_52, x_54);
return x_56;
}
else
{
obj* x_57; unsigned char x_59; 
x_57 = lean::cnstr_get(x_52, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get_scalar<unsigned char>(x_52, sizeof(void*)*1);
x_1 = x_52;
x_2 = x_57;
x_3 = x_59;
goto lbl_4;
}
}
else
{
obj* x_61; obj* x_64; obj* x_66; obj* x_67; 
lean::dec(x_41);
x_61 = lean::nat_sub(x_7, x_14);
lean::dec(x_14);
lean::dec(x_7);
x_64 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_64);
if (lean::is_scalar(x_13)) {
 x_66 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_66 = x_13;
}
lean::cnstr_set(x_66, 0, x_61);
lean::cnstr_set(x_66, 1, x_9);
lean::cnstr_set(x_66, 2, x_64);
x_67 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_66);
if (lean::obj_tag(x_67) == 0)
{
obj* x_69; obj* x_71; 
lean::dec(x_0);
x_69 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1;
lean::inc(x_69);
x_71 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_67, x_69);
return x_71;
}
else
{
obj* x_72; unsigned char x_74; 
x_72 = lean::cnstr_get(x_67, 0);
lean::inc(x_72);
x_74 = lean::cnstr_get_scalar<unsigned char>(x_67, sizeof(void*)*1);
x_1 = x_67;
x_2 = x_72;
x_3 = x_74;
goto lbl_4;
}
}
}
}
else
{
obj* x_76; obj* x_79; obj* x_81; obj* x_82; 
lean::dec(x_16);
x_76 = lean::nat_sub(x_7, x_14);
lean::dec(x_14);
lean::dec(x_7);
x_79 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_79);
if (lean::is_scalar(x_13)) {
 x_81 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_81 = x_13;
}
lean::cnstr_set(x_81, 0, x_76);
lean::cnstr_set(x_81, 1, x_9);
lean::cnstr_set(x_81, 2, x_79);
x_82 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_81);
if (lean::obj_tag(x_82) == 0)
{
obj* x_84; obj* x_86; 
lean::dec(x_0);
x_84 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1;
lean::inc(x_84);
x_86 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_82, x_84);
return x_86;
}
else
{
obj* x_87; unsigned char x_89; 
x_87 = lean::cnstr_get(x_82, 0);
lean::inc(x_87);
x_89 = lean::cnstr_get_scalar<unsigned char>(x_82, sizeof(void*)*1);
x_1 = x_82;
x_2 = x_87;
x_3 = x_89;
goto lbl_4;
}
}
}
else
{
obj* x_90; unsigned char x_92; obj* x_93; obj* x_95; obj* x_96; 
x_90 = lean::cnstr_get(x_6, 0);
lean::inc(x_90);
x_92 = lean::cnstr_get_scalar<unsigned char>(x_6, sizeof(void*)*1);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_93 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 x_93 = x_6;
}
lean::inc(x_90);
if (lean::is_scalar(x_93)) {
 x_95 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_95 = x_93;
}
lean::cnstr_set(x_95, 0, x_90);
lean::cnstr_set_scalar(x_95, sizeof(void*)*1, x_92);
x_96 = x_95;
x_1 = x_96;
x_2 = x_90;
x_3 = x_92;
goto lbl_4;
}
lbl_4:
{
obj* x_97; obj* x_98; unsigned char x_99; 
if (x_3 == 0)
{
obj* x_102; unsigned char x_104; 
lean::dec(x_1);
x_104 = lean::string_iterator_has_next(x_0);
if (x_104 == 0)
{
obj* x_105; obj* x_106; obj* x_107; obj* x_112; 
x_105 = lean::box(0);
x_106 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_107 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
lean::inc(x_105);
lean::inc(x_107);
lean::inc(x_106);
x_112 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_106, x_107, x_105, x_105, x_0);
x_102 = x_112;
goto lbl_103;
}
else
{
unsigned x_113; obj* x_114; obj* x_116; obj* x_118; obj* x_119; obj* x_120; unsigned char x_121; 
x_113 = lean::string_iterator_curr(x_0);
x_118 = lean::mk_nat_obj(97u);
x_119 = lean::mk_nat_obj(55296u);
x_120 = lean::nat_dec_lt(x_118, x_119);
if (lean::obj_tag(x_120) == 0)
{
obj* x_124; obj* x_125; 
lean::dec(x_120);
x_124 = lean::mk_nat_obj(57343u);
x_125 = lean::nat_dec_lt(x_124, x_118);
lean::dec(x_124);
if (lean::obj_tag(x_125) == 0)
{
obj* x_129; obj* x_130; obj* x_131; 
lean::dec(x_118);
lean::dec(x_125);
x_129 = lean::mk_nat_obj(0u);
x_130 = lean::box_uint32(x_113);
x_131 = lean::nat_dec_le(x_129, x_130);
lean::dec(x_130);
lean::dec(x_129);
if (lean::obj_tag(x_131) == 0)
{
obj* x_136; 
lean::dec(x_119);
lean::dec(x_131);
x_136 = lean::box(0);
x_114 = x_136;
goto lbl_115;
}
else
{
unsigned char x_138; 
lean::dec(x_131);
x_138 = 1;
x_121 = x_138;
goto lbl_122;
}
}
else
{
obj* x_140; obj* x_141; 
lean::dec(x_125);
x_140 = lean::mk_nat_obj(1114112u);
x_141 = lean::nat_dec_lt(x_118, x_140);
lean::dec(x_140);
if (lean::obj_tag(x_141) == 0)
{
obj* x_145; obj* x_146; obj* x_147; 
lean::dec(x_118);
lean::dec(x_141);
x_145 = lean::mk_nat_obj(0u);
x_146 = lean::box_uint32(x_113);
x_147 = lean::nat_dec_le(x_145, x_146);
lean::dec(x_146);
lean::dec(x_145);
if (lean::obj_tag(x_147) == 0)
{
obj* x_152; 
lean::dec(x_119);
lean::dec(x_147);
x_152 = lean::box(0);
x_114 = x_152;
goto lbl_115;
}
else
{
unsigned char x_154; 
lean::dec(x_147);
x_154 = 1;
x_121 = x_154;
goto lbl_122;
}
}
else
{
obj* x_156; obj* x_157; 
lean::dec(x_141);
x_156 = lean::box_uint32(x_113);
x_157 = lean::nat_dec_le(x_118, x_156);
lean::dec(x_156);
lean::dec(x_118);
if (lean::obj_tag(x_157) == 0)
{
obj* x_162; 
lean::dec(x_119);
lean::dec(x_157);
x_162 = lean::box(0);
x_114 = x_162;
goto lbl_115;
}
else
{
unsigned char x_164; 
lean::dec(x_157);
x_164 = 1;
x_121 = x_164;
goto lbl_122;
}
}
}
}
else
{
obj* x_166; obj* x_167; 
lean::dec(x_120);
x_166 = lean::box_uint32(x_113);
x_167 = lean::nat_dec_le(x_118, x_166);
lean::dec(x_166);
lean::dec(x_118);
if (lean::obj_tag(x_167) == 0)
{
obj* x_172; 
lean::dec(x_167);
lean::dec(x_119);
x_172 = lean::box(0);
x_114 = x_172;
goto lbl_115;
}
else
{
unsigned char x_174; 
lean::dec(x_167);
x_174 = 1;
x_121 = x_174;
goto lbl_122;
}
}
lbl_115:
{
obj* x_176; obj* x_177; obj* x_179; obj* x_181; obj* x_182; obj* x_183; obj* x_187; 
lean::dec(x_114);
x_176 = l_char_quote__core(x_113);
x_177 = l_char_has__repr___closed__1;
lean::inc(x_177);
x_179 = lean::string_append(x_177, x_176);
lean::dec(x_176);
x_181 = lean::string_append(x_179, x_177);
x_182 = lean::box(0);
x_183 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
lean::inc(x_182);
lean::inc(x_183);
x_187 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_181, x_183, x_182, x_182, x_0);
x_102 = x_187;
goto lbl_103;
}
lbl_117:
{
obj* x_190; obj* x_191; obj* x_192; obj* x_193; 
lean::dec(x_116);
lean::inc(x_0);
x_190 = lean::string_iterator_next(x_0);
x_191 = lean::box(0);
x_192 = lean::box_uint32(x_113);
x_193 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_193, 0, x_192);
lean::cnstr_set(x_193, 1, x_190);
lean::cnstr_set(x_193, 2, x_191);
x_102 = x_193;
goto lbl_103;
}
lbl_122:
{
obj* x_194; obj* x_195; 
x_194 = lean::mk_nat_obj(102u);
x_195 = lean::nat_dec_lt(x_194, x_119);
lean::dec(x_119);
if (lean::obj_tag(x_195) == 0)
{
obj* x_198; obj* x_199; 
lean::dec(x_195);
x_198 = lean::mk_nat_obj(57343u);
x_199 = lean::nat_dec_lt(x_198, x_194);
lean::dec(x_198);
if (lean::obj_tag(x_199) == 0)
{
obj* x_203; obj* x_204; obj* x_205; 
lean::dec(x_199);
lean::dec(x_194);
x_203 = lean::mk_nat_obj(0u);
x_204 = lean::box_uint32(x_113);
x_205 = lean::nat_dec_le(x_204, x_203);
lean::dec(x_203);
lean::dec(x_204);
if (lean::obj_tag(x_205) == 0)
{
obj* x_209; 
lean::dec(x_205);
x_209 = lean::box(0);
x_114 = x_209;
goto lbl_115;
}
else
{
lean::dec(x_205);
if (x_121 == 0)
{
obj* x_211; 
x_211 = lean::box(0);
x_114 = x_211;
goto lbl_115;
}
else
{
obj* x_212; 
x_212 = lean::box(0);
x_116 = x_212;
goto lbl_117;
}
}
}
else
{
obj* x_214; obj* x_215; 
lean::dec(x_199);
x_214 = lean::mk_nat_obj(1114112u);
x_215 = lean::nat_dec_lt(x_194, x_214);
lean::dec(x_214);
if (lean::obj_tag(x_215) == 0)
{
obj* x_219; obj* x_220; obj* x_221; 
lean::dec(x_215);
lean::dec(x_194);
x_219 = lean::mk_nat_obj(0u);
x_220 = lean::box_uint32(x_113);
x_221 = lean::nat_dec_le(x_220, x_219);
lean::dec(x_219);
lean::dec(x_220);
if (lean::obj_tag(x_221) == 0)
{
obj* x_225; 
lean::dec(x_221);
x_225 = lean::box(0);
x_114 = x_225;
goto lbl_115;
}
else
{
lean::dec(x_221);
if (x_121 == 0)
{
obj* x_227; 
x_227 = lean::box(0);
x_114 = x_227;
goto lbl_115;
}
else
{
obj* x_228; 
x_228 = lean::box(0);
x_116 = x_228;
goto lbl_117;
}
}
}
else
{
obj* x_230; obj* x_231; 
lean::dec(x_215);
x_230 = lean::box_uint32(x_113);
x_231 = lean::nat_dec_le(x_230, x_194);
lean::dec(x_194);
lean::dec(x_230);
if (lean::obj_tag(x_231) == 0)
{
obj* x_235; 
lean::dec(x_231);
x_235 = lean::box(0);
x_114 = x_235;
goto lbl_115;
}
else
{
lean::dec(x_231);
if (x_121 == 0)
{
obj* x_237; 
x_237 = lean::box(0);
x_114 = x_237;
goto lbl_115;
}
else
{
obj* x_238; 
x_238 = lean::box(0);
x_116 = x_238;
goto lbl_117;
}
}
}
}
}
else
{
obj* x_240; obj* x_241; 
lean::dec(x_195);
x_240 = lean::box_uint32(x_113);
x_241 = lean::nat_dec_le(x_240, x_194);
lean::dec(x_194);
lean::dec(x_240);
if (lean::obj_tag(x_241) == 0)
{
obj* x_245; 
lean::dec(x_241);
x_245 = lean::box(0);
x_114 = x_245;
goto lbl_115;
}
else
{
lean::dec(x_241);
if (x_121 == 0)
{
obj* x_247; 
x_247 = lean::box(0);
x_114 = x_247;
goto lbl_115;
}
else
{
obj* x_248; 
x_248 = lean::box(0);
x_116 = x_248;
goto lbl_117;
}
}
}
}
}
lbl_103:
{
obj* x_249; obj* x_251; 
x_249 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_249);
x_251 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_249, x_102);
if (lean::obj_tag(x_251) == 0)
{
obj* x_252; obj* x_254; obj* x_256; obj* x_258; obj* x_259; obj* x_260; obj* x_261; 
x_252 = lean::cnstr_get(x_251, 0);
lean::inc(x_252);
x_254 = lean::cnstr_get(x_251, 1);
lean::inc(x_254);
x_256 = lean::cnstr_get(x_251, 2);
lean::inc(x_256);
if (lean::is_shared(x_251)) {
 lean::dec(x_251);
 x_258 = lean::box(0);
} else {
 lean::cnstr_release(x_251, 0);
 lean::cnstr_release(x_251, 1);
 lean::cnstr_release(x_251, 2);
 x_258 = x_251;
}
x_259 = lean::mk_nat_obj(97u);
x_260 = lean::mk_nat_obj(55296u);
x_261 = lean::nat_dec_lt(x_259, x_260);
lean::dec(x_260);
if (lean::obj_tag(x_261) == 0)
{
obj* x_264; obj* x_265; 
lean::dec(x_261);
x_264 = lean::mk_nat_obj(57343u);
x_265 = lean::nat_dec_lt(x_264, x_259);
lean::dec(x_264);
if (lean::obj_tag(x_265) == 0)
{
obj* x_269; obj* x_270; obj* x_273; obj* x_274; obj* x_278; obj* x_279; 
lean::dec(x_265);
lean::dec(x_259);
x_269 = lean::mk_nat_obj(0u);
x_270 = lean::nat_sub(x_252, x_269);
lean::dec(x_269);
lean::dec(x_252);
x_273 = lean::mk_nat_obj(10u);
x_274 = lean::nat_add(x_273, x_270);
lean::dec(x_270);
lean::dec(x_273);
lean::inc(x_249);
if (lean::is_scalar(x_258)) {
 x_278 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_278 = x_258;
}
lean::cnstr_set(x_278, 0, x_274);
lean::cnstr_set(x_278, 1, x_254);
lean::cnstr_set(x_278, 2, x_249);
x_279 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_256, x_278);
if (lean::obj_tag(x_279) == 0)
{
obj* x_281; obj* x_282; obj* x_284; 
lean::dec(x_0);
x_281 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_2, x_279);
x_282 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1;
lean::inc(x_282);
x_284 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_281, x_282);
return x_284;
}
else
{
obj* x_285; unsigned char x_287; 
x_285 = lean::cnstr_get(x_279, 0);
lean::inc(x_285);
x_287 = lean::cnstr_get_scalar<unsigned char>(x_279, sizeof(void*)*1);
x_97 = x_279;
x_98 = x_285;
x_99 = x_287;
goto lbl_100;
}
}
else
{
obj* x_289; obj* x_290; 
lean::dec(x_265);
x_289 = lean::mk_nat_obj(1114112u);
x_290 = lean::nat_dec_lt(x_259, x_289);
lean::dec(x_289);
if (lean::obj_tag(x_290) == 0)
{
obj* x_294; obj* x_295; obj* x_298; obj* x_299; obj* x_303; obj* x_304; 
lean::dec(x_259);
lean::dec(x_290);
x_294 = lean::mk_nat_obj(0u);
x_295 = lean::nat_sub(x_252, x_294);
lean::dec(x_294);
lean::dec(x_252);
x_298 = lean::mk_nat_obj(10u);
x_299 = lean::nat_add(x_298, x_295);
lean::dec(x_295);
lean::dec(x_298);
lean::inc(x_249);
if (lean::is_scalar(x_258)) {
 x_303 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_303 = x_258;
}
lean::cnstr_set(x_303, 0, x_299);
lean::cnstr_set(x_303, 1, x_254);
lean::cnstr_set(x_303, 2, x_249);
x_304 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_256, x_303);
if (lean::obj_tag(x_304) == 0)
{
obj* x_306; obj* x_307; obj* x_309; 
lean::dec(x_0);
x_306 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_2, x_304);
x_307 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1;
lean::inc(x_307);
x_309 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_306, x_307);
return x_309;
}
else
{
obj* x_310; unsigned char x_312; 
x_310 = lean::cnstr_get(x_304, 0);
lean::inc(x_310);
x_312 = lean::cnstr_get_scalar<unsigned char>(x_304, sizeof(void*)*1);
x_97 = x_304;
x_98 = x_310;
x_99 = x_312;
goto lbl_100;
}
}
else
{
obj* x_314; obj* x_317; obj* x_318; obj* x_322; obj* x_323; 
lean::dec(x_290);
x_314 = lean::nat_sub(x_252, x_259);
lean::dec(x_259);
lean::dec(x_252);
x_317 = lean::mk_nat_obj(10u);
x_318 = lean::nat_add(x_317, x_314);
lean::dec(x_314);
lean::dec(x_317);
lean::inc(x_249);
if (lean::is_scalar(x_258)) {
 x_322 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_322 = x_258;
}
lean::cnstr_set(x_322, 0, x_318);
lean::cnstr_set(x_322, 1, x_254);
lean::cnstr_set(x_322, 2, x_249);
x_323 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_256, x_322);
if (lean::obj_tag(x_323) == 0)
{
obj* x_325; obj* x_326; obj* x_328; 
lean::dec(x_0);
x_325 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_2, x_323);
x_326 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1;
lean::inc(x_326);
x_328 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_325, x_326);
return x_328;
}
else
{
obj* x_329; unsigned char x_331; 
x_329 = lean::cnstr_get(x_323, 0);
lean::inc(x_329);
x_331 = lean::cnstr_get_scalar<unsigned char>(x_323, sizeof(void*)*1);
x_97 = x_323;
x_98 = x_329;
x_99 = x_331;
goto lbl_100;
}
}
}
}
else
{
obj* x_333; obj* x_336; obj* x_337; obj* x_341; obj* x_342; 
lean::dec(x_261);
x_333 = lean::nat_sub(x_252, x_259);
lean::dec(x_259);
lean::dec(x_252);
x_336 = lean::mk_nat_obj(10u);
x_337 = lean::nat_add(x_336, x_333);
lean::dec(x_333);
lean::dec(x_336);
lean::inc(x_249);
if (lean::is_scalar(x_258)) {
 x_341 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_341 = x_258;
}
lean::cnstr_set(x_341, 0, x_337);
lean::cnstr_set(x_341, 1, x_254);
lean::cnstr_set(x_341, 2, x_249);
x_342 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_256, x_341);
if (lean::obj_tag(x_342) == 0)
{
obj* x_344; obj* x_345; obj* x_347; 
lean::dec(x_0);
x_344 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_2, x_342);
x_345 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1;
lean::inc(x_345);
x_347 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_344, x_345);
return x_347;
}
else
{
obj* x_348; unsigned char x_350; 
x_348 = lean::cnstr_get(x_342, 0);
lean::inc(x_348);
x_350 = lean::cnstr_get_scalar<unsigned char>(x_342, sizeof(void*)*1);
x_97 = x_342;
x_98 = x_348;
x_99 = x_350;
goto lbl_100;
}
}
}
else
{
obj* x_351; unsigned char x_353; obj* x_354; obj* x_356; obj* x_357; 
x_351 = lean::cnstr_get(x_251, 0);
lean::inc(x_351);
x_353 = lean::cnstr_get_scalar<unsigned char>(x_251, sizeof(void*)*1);
if (lean::is_shared(x_251)) {
 lean::dec(x_251);
 x_354 = lean::box(0);
} else {
 lean::cnstr_release(x_251, 0);
 x_354 = x_251;
}
lean::inc(x_351);
if (lean::is_scalar(x_354)) {
 x_356 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_356 = x_354;
}
lean::cnstr_set(x_356, 0, x_351);
lean::cnstr_set_scalar(x_356, sizeof(void*)*1, x_353);
x_357 = x_356;
x_97 = x_357;
x_98 = x_351;
x_99 = x_353;
goto lbl_100;
}
}
}
else
{
obj* x_360; obj* x_362; 
lean::dec(x_2);
lean::dec(x_0);
x_360 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1;
lean::inc(x_360);
x_362 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_1, x_360);
return x_362;
}
lbl_100:
{
if (x_99 == 0)
{
obj* x_364; unsigned char x_366; 
lean::dec(x_97);
x_366 = lean::string_iterator_has_next(x_0);
if (x_366 == 0)
{
obj* x_367; obj* x_368; obj* x_369; obj* x_373; 
x_367 = lean::box(0);
x_368 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_369 = l_mjoin___rarg___closed__1;
lean::inc(x_367);
lean::inc(x_369);
lean::inc(x_368);
x_373 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_368, x_369, x_367, x_367, x_0);
x_364 = x_373;
goto lbl_365;
}
else
{
unsigned x_374; obj* x_375; obj* x_377; obj* x_379; obj* x_380; obj* x_381; unsigned char x_382; 
x_374 = lean::string_iterator_curr(x_0);
x_379 = lean::mk_nat_obj(65u);
x_380 = lean::mk_nat_obj(55296u);
x_381 = lean::nat_dec_lt(x_379, x_380);
if (lean::obj_tag(x_381) == 0)
{
obj* x_385; obj* x_386; 
lean::dec(x_381);
x_385 = lean::mk_nat_obj(57343u);
x_386 = lean::nat_dec_lt(x_385, x_379);
lean::dec(x_385);
if (lean::obj_tag(x_386) == 0)
{
obj* x_390; obj* x_391; obj* x_392; 
lean::dec(x_379);
lean::dec(x_386);
x_390 = lean::mk_nat_obj(0u);
x_391 = lean::box_uint32(x_374);
x_392 = lean::nat_dec_le(x_390, x_391);
lean::dec(x_391);
lean::dec(x_390);
if (lean::obj_tag(x_392) == 0)
{
obj* x_397; 
lean::dec(x_392);
lean::dec(x_380);
x_397 = lean::box(0);
x_375 = x_397;
goto lbl_376;
}
else
{
unsigned char x_399; 
lean::dec(x_392);
x_399 = 1;
x_382 = x_399;
goto lbl_383;
}
}
else
{
obj* x_401; obj* x_402; 
lean::dec(x_386);
x_401 = lean::mk_nat_obj(1114112u);
x_402 = lean::nat_dec_lt(x_379, x_401);
lean::dec(x_401);
if (lean::obj_tag(x_402) == 0)
{
obj* x_406; obj* x_407; obj* x_408; 
lean::dec(x_402);
lean::dec(x_379);
x_406 = lean::mk_nat_obj(0u);
x_407 = lean::box_uint32(x_374);
x_408 = lean::nat_dec_le(x_406, x_407);
lean::dec(x_407);
lean::dec(x_406);
if (lean::obj_tag(x_408) == 0)
{
obj* x_413; 
lean::dec(x_408);
lean::dec(x_380);
x_413 = lean::box(0);
x_375 = x_413;
goto lbl_376;
}
else
{
unsigned char x_415; 
lean::dec(x_408);
x_415 = 1;
x_382 = x_415;
goto lbl_383;
}
}
else
{
obj* x_417; obj* x_418; 
lean::dec(x_402);
x_417 = lean::box_uint32(x_374);
x_418 = lean::nat_dec_le(x_379, x_417);
lean::dec(x_417);
lean::dec(x_379);
if (lean::obj_tag(x_418) == 0)
{
obj* x_423; 
lean::dec(x_418);
lean::dec(x_380);
x_423 = lean::box(0);
x_375 = x_423;
goto lbl_376;
}
else
{
unsigned char x_425; 
lean::dec(x_418);
x_425 = 1;
x_382 = x_425;
goto lbl_383;
}
}
}
}
else
{
obj* x_427; obj* x_428; 
lean::dec(x_381);
x_427 = lean::box_uint32(x_374);
x_428 = lean::nat_dec_le(x_379, x_427);
lean::dec(x_427);
lean::dec(x_379);
if (lean::obj_tag(x_428) == 0)
{
obj* x_433; 
lean::dec(x_428);
lean::dec(x_380);
x_433 = lean::box(0);
x_375 = x_433;
goto lbl_376;
}
else
{
unsigned char x_435; 
lean::dec(x_428);
x_435 = 1;
x_382 = x_435;
goto lbl_383;
}
}
lbl_376:
{
obj* x_437; obj* x_438; obj* x_440; obj* x_442; obj* x_443; obj* x_444; obj* x_447; 
lean::dec(x_375);
x_437 = l_char_quote__core(x_374);
x_438 = l_char_has__repr___closed__1;
lean::inc(x_438);
x_440 = lean::string_append(x_438, x_437);
lean::dec(x_437);
x_442 = lean::string_append(x_440, x_438);
x_443 = lean::box(0);
x_444 = l_mjoin___rarg___closed__1;
lean::inc(x_443);
lean::inc(x_444);
x_447 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_442, x_444, x_443, x_443, x_0);
x_364 = x_447;
goto lbl_365;
}
lbl_378:
{
obj* x_449; obj* x_450; obj* x_451; obj* x_452; 
lean::dec(x_377);
x_449 = lean::string_iterator_next(x_0);
x_450 = lean::box(0);
x_451 = lean::box_uint32(x_374);
x_452 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_452, 0, x_451);
lean::cnstr_set(x_452, 1, x_449);
lean::cnstr_set(x_452, 2, x_450);
x_364 = x_452;
goto lbl_365;
}
lbl_383:
{
obj* x_453; obj* x_454; 
x_453 = lean::mk_nat_obj(70u);
x_454 = lean::nat_dec_lt(x_453, x_380);
lean::dec(x_380);
if (lean::obj_tag(x_454) == 0)
{
obj* x_457; obj* x_458; 
lean::dec(x_454);
x_457 = lean::mk_nat_obj(57343u);
x_458 = lean::nat_dec_lt(x_457, x_453);
lean::dec(x_457);
if (lean::obj_tag(x_458) == 0)
{
obj* x_462; obj* x_463; obj* x_464; 
lean::dec(x_458);
lean::dec(x_453);
x_462 = lean::mk_nat_obj(0u);
x_463 = lean::box_uint32(x_374);
x_464 = lean::nat_dec_le(x_463, x_462);
lean::dec(x_462);
lean::dec(x_463);
if (lean::obj_tag(x_464) == 0)
{
obj* x_468; 
lean::dec(x_464);
x_468 = lean::box(0);
x_375 = x_468;
goto lbl_376;
}
else
{
lean::dec(x_464);
if (x_382 == 0)
{
obj* x_470; 
x_470 = lean::box(0);
x_375 = x_470;
goto lbl_376;
}
else
{
obj* x_471; 
x_471 = lean::box(0);
x_377 = x_471;
goto lbl_378;
}
}
}
else
{
obj* x_473; obj* x_474; 
lean::dec(x_458);
x_473 = lean::mk_nat_obj(1114112u);
x_474 = lean::nat_dec_lt(x_453, x_473);
lean::dec(x_473);
if (lean::obj_tag(x_474) == 0)
{
obj* x_478; obj* x_479; obj* x_480; 
lean::dec(x_453);
lean::dec(x_474);
x_478 = lean::mk_nat_obj(0u);
x_479 = lean::box_uint32(x_374);
x_480 = lean::nat_dec_le(x_479, x_478);
lean::dec(x_478);
lean::dec(x_479);
if (lean::obj_tag(x_480) == 0)
{
obj* x_484; 
lean::dec(x_480);
x_484 = lean::box(0);
x_375 = x_484;
goto lbl_376;
}
else
{
lean::dec(x_480);
if (x_382 == 0)
{
obj* x_486; 
x_486 = lean::box(0);
x_375 = x_486;
goto lbl_376;
}
else
{
obj* x_487; 
x_487 = lean::box(0);
x_377 = x_487;
goto lbl_378;
}
}
}
else
{
obj* x_489; obj* x_490; 
lean::dec(x_474);
x_489 = lean::box_uint32(x_374);
x_490 = lean::nat_dec_le(x_489, x_453);
lean::dec(x_453);
lean::dec(x_489);
if (lean::obj_tag(x_490) == 0)
{
obj* x_494; 
lean::dec(x_490);
x_494 = lean::box(0);
x_375 = x_494;
goto lbl_376;
}
else
{
lean::dec(x_490);
if (x_382 == 0)
{
obj* x_496; 
x_496 = lean::box(0);
x_375 = x_496;
goto lbl_376;
}
else
{
obj* x_497; 
x_497 = lean::box(0);
x_377 = x_497;
goto lbl_378;
}
}
}
}
}
else
{
obj* x_499; obj* x_500; 
lean::dec(x_454);
x_499 = lean::box_uint32(x_374);
x_500 = lean::nat_dec_le(x_499, x_453);
lean::dec(x_453);
lean::dec(x_499);
if (lean::obj_tag(x_500) == 0)
{
obj* x_504; 
lean::dec(x_500);
x_504 = lean::box(0);
x_375 = x_504;
goto lbl_376;
}
else
{
lean::dec(x_500);
if (x_382 == 0)
{
obj* x_506; 
x_506 = lean::box(0);
x_375 = x_506;
goto lbl_376;
}
else
{
obj* x_507; 
x_507 = lean::box(0);
x_377 = x_507;
goto lbl_378;
}
}
}
}
}
lbl_365:
{
obj* x_508; obj* x_510; 
x_508 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_508);
x_510 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_508, x_364);
if (lean::obj_tag(x_510) == 0)
{
obj* x_511; obj* x_513; obj* x_515; obj* x_517; obj* x_518; obj* x_519; obj* x_520; 
x_511 = lean::cnstr_get(x_510, 0);
lean::inc(x_511);
x_513 = lean::cnstr_get(x_510, 1);
lean::inc(x_513);
x_515 = lean::cnstr_get(x_510, 2);
lean::inc(x_515);
if (lean::is_shared(x_510)) {
 lean::dec(x_510);
 x_517 = lean::box(0);
} else {
 lean::cnstr_release(x_510, 0);
 lean::cnstr_release(x_510, 1);
 lean::cnstr_release(x_510, 2);
 x_517 = x_510;
}
x_518 = lean::mk_nat_obj(65u);
x_519 = lean::mk_nat_obj(55296u);
x_520 = lean::nat_dec_lt(x_518, x_519);
lean::dec(x_519);
if (lean::obj_tag(x_520) == 0)
{
obj* x_523; obj* x_524; 
lean::dec(x_520);
x_523 = lean::mk_nat_obj(57343u);
x_524 = lean::nat_dec_lt(x_523, x_518);
lean::dec(x_523);
if (lean::obj_tag(x_524) == 0)
{
obj* x_528; obj* x_529; obj* x_532; obj* x_533; obj* x_537; obj* x_538; obj* x_539; obj* x_540; obj* x_541; obj* x_543; 
lean::dec(x_524);
lean::dec(x_518);
x_528 = lean::mk_nat_obj(0u);
x_529 = lean::nat_sub(x_511, x_528);
lean::dec(x_528);
lean::dec(x_511);
x_532 = lean::mk_nat_obj(10u);
x_533 = lean::nat_add(x_532, x_529);
lean::dec(x_529);
lean::dec(x_532);
lean::inc(x_508);
if (lean::is_scalar(x_517)) {
 x_537 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_537 = x_517;
}
lean::cnstr_set(x_537, 0, x_533);
lean::cnstr_set(x_537, 1, x_513);
lean::cnstr_set(x_537, 2, x_508);
x_538 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_515, x_537);
x_539 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_98, x_538);
x_540 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_2, x_539);
x_541 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1;
lean::inc(x_541);
x_543 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_540, x_541);
return x_543;
}
else
{
obj* x_545; obj* x_546; 
lean::dec(x_524);
x_545 = lean::mk_nat_obj(1114112u);
x_546 = lean::nat_dec_lt(x_518, x_545);
lean::dec(x_545);
if (lean::obj_tag(x_546) == 0)
{
obj* x_550; obj* x_551; obj* x_554; obj* x_555; obj* x_559; obj* x_560; obj* x_561; obj* x_562; obj* x_563; obj* x_565; 
lean::dec(x_546);
lean::dec(x_518);
x_550 = lean::mk_nat_obj(0u);
x_551 = lean::nat_sub(x_511, x_550);
lean::dec(x_550);
lean::dec(x_511);
x_554 = lean::mk_nat_obj(10u);
x_555 = lean::nat_add(x_554, x_551);
lean::dec(x_551);
lean::dec(x_554);
lean::inc(x_508);
if (lean::is_scalar(x_517)) {
 x_559 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_559 = x_517;
}
lean::cnstr_set(x_559, 0, x_555);
lean::cnstr_set(x_559, 1, x_513);
lean::cnstr_set(x_559, 2, x_508);
x_560 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_515, x_559);
x_561 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_98, x_560);
x_562 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_2, x_561);
x_563 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1;
lean::inc(x_563);
x_565 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_562, x_563);
return x_565;
}
else
{
obj* x_567; obj* x_570; obj* x_571; obj* x_575; obj* x_576; obj* x_577; obj* x_578; obj* x_579; obj* x_581; 
lean::dec(x_546);
x_567 = lean::nat_sub(x_511, x_518);
lean::dec(x_518);
lean::dec(x_511);
x_570 = lean::mk_nat_obj(10u);
x_571 = lean::nat_add(x_570, x_567);
lean::dec(x_567);
lean::dec(x_570);
lean::inc(x_508);
if (lean::is_scalar(x_517)) {
 x_575 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_575 = x_517;
}
lean::cnstr_set(x_575, 0, x_571);
lean::cnstr_set(x_575, 1, x_513);
lean::cnstr_set(x_575, 2, x_508);
x_576 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_515, x_575);
x_577 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_98, x_576);
x_578 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_2, x_577);
x_579 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1;
lean::inc(x_579);
x_581 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_578, x_579);
return x_581;
}
}
}
else
{
obj* x_583; obj* x_586; obj* x_587; obj* x_591; obj* x_592; obj* x_593; obj* x_594; obj* x_595; obj* x_597; 
lean::dec(x_520);
x_583 = lean::nat_sub(x_511, x_518);
lean::dec(x_518);
lean::dec(x_511);
x_586 = lean::mk_nat_obj(10u);
x_587 = lean::nat_add(x_586, x_583);
lean::dec(x_583);
lean::dec(x_586);
lean::inc(x_508);
if (lean::is_scalar(x_517)) {
 x_591 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_591 = x_517;
}
lean::cnstr_set(x_591, 0, x_587);
lean::cnstr_set(x_591, 1, x_513);
lean::cnstr_set(x_591, 2, x_508);
x_592 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_515, x_591);
x_593 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_98, x_592);
x_594 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_2, x_593);
x_595 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1;
lean::inc(x_595);
x_597 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_594, x_595);
return x_597;
}
}
else
{
obj* x_598; unsigned char x_600; obj* x_601; obj* x_602; obj* x_603; obj* x_604; obj* x_605; obj* x_606; obj* x_608; 
x_598 = lean::cnstr_get(x_510, 0);
lean::inc(x_598);
x_600 = lean::cnstr_get_scalar<unsigned char>(x_510, sizeof(void*)*1);
if (lean::is_shared(x_510)) {
 lean::dec(x_510);
 x_601 = lean::box(0);
} else {
 lean::cnstr_release(x_510, 0);
 x_601 = x_510;
}
if (lean::is_scalar(x_601)) {
 x_602 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_602 = x_601;
}
lean::cnstr_set(x_602, 0, x_598);
lean::cnstr_set_scalar(x_602, sizeof(void*)*1, x_600);
x_603 = x_602;
x_604 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_98, x_603);
x_605 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_2, x_604);
x_606 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1;
lean::inc(x_606);
x_608 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_605, x_606);
return x_608;
}
}
}
else
{
obj* x_611; obj* x_612; obj* x_614; 
lean::dec(x_0);
lean::dec(x_98);
x_611 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_2, x_97);
x_612 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1;
lean::inc(x_612);
x_614 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_611, x_612);
return x_614;
}
}
}
}
}
obj* _init_l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("hexadecimal");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_parser_monad__parsec_unexpected__at___at_lean_ir_parse__literal___spec__8___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_7; 
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_1);
x_4 = lean::box(0);
x_5 = l_mjoin___rarg___closed__1;
lean::inc(x_5);
x_7 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_0, x_5, x_3, x_4, x_2);
return x_7;
}
}
obj* l_lean_parser_monad__parsec_unexpected__at___at_lean_ir_parse__literal___spec__8(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_unexpected__at___at_lean_ir_parse__literal___spec__8___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_parser_parse__quoted__char___at_lean_ir_parse__literal___spec__5(obj* x_0) {
_start:
{
obj* x_2; 
lean::inc(x_0);
x_2 = l_lean_parser_monad__parsec_any___at_lean_ir_parse__literal___spec__4(x_0);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_27; obj* x_28; unsigned x_30; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 2);
lean::inc(x_7);
if (lean::is_shared(x_2)) {
 lean::dec(x_2);
 x_9 = lean::box(0);
} else {
 lean::cnstr_release(x_2, 0);
 lean::cnstr_release(x_2, 1);
 lean::cnstr_release(x_2, 2);
 x_9 = x_2;
}
x_26 = lean::mk_nat_obj(92u);
x_27 = lean::mk_nat_obj(55296u);
x_28 = lean::nat_dec_lt(x_26, x_27);
lean::dec(x_27);
if (lean::obj_tag(x_28) == 0)
{
obj* x_33; obj* x_34; 
lean::dec(x_28);
x_33 = lean::mk_nat_obj(57343u);
x_34 = lean::nat_dec_lt(x_33, x_26);
lean::dec(x_33);
if (lean::obj_tag(x_34) == 0)
{
obj* x_38; unsigned x_39; 
lean::dec(x_26);
lean::dec(x_34);
x_38 = lean::mk_nat_obj(0u);
x_39 = lean::unbox_uint32(x_38);
lean::dec(x_38);
x_30 = x_39;
goto lbl_31;
}
else
{
obj* x_42; obj* x_43; 
lean::dec(x_34);
x_42 = lean::mk_nat_obj(1114112u);
x_43 = lean::nat_dec_lt(x_26, x_42);
lean::dec(x_42);
if (lean::obj_tag(x_43) == 0)
{
obj* x_47; unsigned x_48; 
lean::dec(x_43);
lean::dec(x_26);
x_47 = lean::mk_nat_obj(0u);
x_48 = lean::unbox_uint32(x_47);
lean::dec(x_47);
x_30 = x_48;
goto lbl_31;
}
else
{
unsigned x_51; 
lean::dec(x_43);
x_51 = lean::unbox_uint32(x_26);
lean::dec(x_26);
x_30 = x_51;
goto lbl_31;
}
}
}
else
{
unsigned x_54; 
lean::dec(x_28);
x_54 = lean::unbox_uint32(x_26);
lean::dec(x_26);
x_30 = x_54;
goto lbl_31;
}
lbl_11:
{
obj* x_57; 
lean::dec(x_10);
x_57 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6(x_5);
if (lean::obj_tag(x_57) == 0)
{
obj* x_58; obj* x_60; obj* x_62; obj* x_65; 
x_58 = lean::cnstr_get(x_57, 0);
lean::inc(x_58);
x_60 = lean::cnstr_get(x_57, 1);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_57, 2);
lean::inc(x_62);
lean::dec(x_57);
x_65 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6(x_60);
if (lean::obj_tag(x_65) == 0)
{
obj* x_66; obj* x_68; obj* x_70; obj* x_73; 
x_66 = lean::cnstr_get(x_65, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_65, 1);
lean::inc(x_68);
x_70 = lean::cnstr_get(x_65, 2);
lean::inc(x_70);
lean::dec(x_65);
x_73 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6(x_68);
if (lean::obj_tag(x_73) == 0)
{
obj* x_74; obj* x_76; obj* x_78; obj* x_81; 
x_74 = lean::cnstr_get(x_73, 0);
lean::inc(x_74);
x_76 = lean::cnstr_get(x_73, 1);
lean::inc(x_76);
x_78 = lean::cnstr_get(x_73, 2);
lean::inc(x_78);
lean::dec(x_73);
x_81 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6(x_76);
if (lean::obj_tag(x_81) == 0)
{
obj* x_82; obj* x_84; obj* x_86; obj* x_89; obj* x_90; obj* x_92; obj* x_95; obj* x_97; obj* x_100; obj* x_103; obj* x_106; obj* x_107; 
x_82 = lean::cnstr_get(x_81, 0);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_81, 1);
lean::inc(x_84);
x_86 = lean::cnstr_get(x_81, 2);
lean::inc(x_86);
lean::dec(x_81);
x_89 = lean::mk_nat_obj(16u);
x_90 = lean::nat_mul(x_89, x_58);
lean::dec(x_58);
x_92 = lean::nat_add(x_90, x_66);
lean::dec(x_66);
lean::dec(x_90);
x_95 = lean::nat_mul(x_89, x_92);
lean::dec(x_92);
x_97 = lean::nat_add(x_95, x_74);
lean::dec(x_74);
lean::dec(x_95);
x_100 = lean::nat_mul(x_89, x_97);
lean::dec(x_97);
lean::dec(x_89);
x_103 = lean::nat_add(x_100, x_82);
lean::dec(x_82);
lean::dec(x_100);
x_106 = lean::mk_nat_obj(55296u);
x_107 = lean::nat_dec_lt(x_103, x_106);
lean::dec(x_106);
if (lean::obj_tag(x_107) == 0)
{
obj* x_110; obj* x_111; 
lean::dec(x_107);
x_110 = lean::mk_nat_obj(57343u);
x_111 = lean::nat_dec_lt(x_110, x_103);
lean::dec(x_110);
if (lean::obj_tag(x_111) == 0)
{
obj* x_115; obj* x_116; obj* x_118; obj* x_119; obj* x_120; obj* x_121; obj* x_122; obj* x_123; obj* x_125; 
lean::dec(x_111);
lean::dec(x_103);
x_115 = lean::mk_nat_obj(0u);
x_116 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_116);
if (lean::is_scalar(x_9)) {
 x_118 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_118 = x_9;
}
lean::cnstr_set(x_118, 0, x_115);
lean::cnstr_set(x_118, 1, x_84);
lean::cnstr_set(x_118, 2, x_116);
x_119 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_86, x_118);
x_120 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_78, x_119);
x_121 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_70, x_120);
x_122 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_62, x_121);
x_123 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_122);
lean::inc(x_116);
x_125 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_116, x_123);
return x_125;
}
else
{
obj* x_127; obj* x_128; 
lean::dec(x_111);
x_127 = lean::mk_nat_obj(1114112u);
x_128 = lean::nat_dec_lt(x_103, x_127);
lean::dec(x_127);
if (lean::obj_tag(x_128) == 0)
{
obj* x_132; obj* x_133; obj* x_135; obj* x_136; obj* x_137; obj* x_138; obj* x_139; obj* x_140; obj* x_142; 
lean::dec(x_103);
lean::dec(x_128);
x_132 = lean::mk_nat_obj(0u);
x_133 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_133);
if (lean::is_scalar(x_9)) {
 x_135 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_135 = x_9;
}
lean::cnstr_set(x_135, 0, x_132);
lean::cnstr_set(x_135, 1, x_84);
lean::cnstr_set(x_135, 2, x_133);
x_136 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_86, x_135);
x_137 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_78, x_136);
x_138 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_70, x_137);
x_139 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_62, x_138);
x_140 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_139);
lean::inc(x_133);
x_142 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_133, x_140);
return x_142;
}
else
{
obj* x_144; obj* x_146; obj* x_147; obj* x_148; obj* x_149; obj* x_150; obj* x_151; obj* x_153; 
lean::dec(x_128);
x_144 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_144);
if (lean::is_scalar(x_9)) {
 x_146 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_146 = x_9;
}
lean::cnstr_set(x_146, 0, x_103);
lean::cnstr_set(x_146, 1, x_84);
lean::cnstr_set(x_146, 2, x_144);
x_147 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_86, x_146);
x_148 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_78, x_147);
x_149 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_70, x_148);
x_150 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_62, x_149);
x_151 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_150);
lean::inc(x_144);
x_153 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_144, x_151);
return x_153;
}
}
}
else
{
obj* x_155; obj* x_157; obj* x_158; obj* x_159; obj* x_160; obj* x_161; obj* x_162; obj* x_164; 
lean::dec(x_107);
x_155 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_155);
if (lean::is_scalar(x_9)) {
 x_157 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_157 = x_9;
}
lean::cnstr_set(x_157, 0, x_103);
lean::cnstr_set(x_157, 1, x_84);
lean::cnstr_set(x_157, 2, x_155);
x_158 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_86, x_157);
x_159 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_78, x_158);
x_160 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_70, x_159);
x_161 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_62, x_160);
x_162 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_161);
lean::inc(x_155);
x_164 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_155, x_162);
return x_164;
}
}
else
{
obj* x_169; unsigned char x_171; obj* x_172; obj* x_173; obj* x_174; obj* x_175; obj* x_176; obj* x_177; obj* x_178; obj* x_179; obj* x_181; 
lean::dec(x_66);
lean::dec(x_74);
lean::dec(x_58);
lean::dec(x_9);
x_169 = lean::cnstr_get(x_81, 0);
lean::inc(x_169);
x_171 = lean::cnstr_get_scalar<unsigned char>(x_81, sizeof(void*)*1);
if (lean::is_shared(x_81)) {
 lean::dec(x_81);
 x_172 = lean::box(0);
} else {
 lean::cnstr_release(x_81, 0);
 x_172 = x_81;
}
if (lean::is_scalar(x_172)) {
 x_173 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_173 = x_172;
}
lean::cnstr_set(x_173, 0, x_169);
lean::cnstr_set_scalar(x_173, sizeof(void*)*1, x_171);
x_174 = x_173;
x_175 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_78, x_174);
x_176 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_70, x_175);
x_177 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_62, x_176);
x_178 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_177);
x_179 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_179);
x_181 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_179, x_178);
return x_181;
}
}
else
{
obj* x_185; unsigned char x_187; obj* x_188; obj* x_189; obj* x_190; obj* x_191; obj* x_192; obj* x_193; obj* x_194; obj* x_196; 
lean::dec(x_66);
lean::dec(x_58);
lean::dec(x_9);
x_185 = lean::cnstr_get(x_73, 0);
lean::inc(x_185);
x_187 = lean::cnstr_get_scalar<unsigned char>(x_73, sizeof(void*)*1);
if (lean::is_shared(x_73)) {
 lean::dec(x_73);
 x_188 = lean::box(0);
} else {
 lean::cnstr_release(x_73, 0);
 x_188 = x_73;
}
if (lean::is_scalar(x_188)) {
 x_189 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_189 = x_188;
}
lean::cnstr_set(x_189, 0, x_185);
lean::cnstr_set_scalar(x_189, sizeof(void*)*1, x_187);
x_190 = x_189;
x_191 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_70, x_190);
x_192 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_62, x_191);
x_193 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_192);
x_194 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_194);
x_196 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_194, x_193);
return x_196;
}
}
else
{
obj* x_199; unsigned char x_201; obj* x_202; obj* x_203; obj* x_204; obj* x_205; obj* x_206; obj* x_207; obj* x_209; 
lean::dec(x_58);
lean::dec(x_9);
x_199 = lean::cnstr_get(x_65, 0);
lean::inc(x_199);
x_201 = lean::cnstr_get_scalar<unsigned char>(x_65, sizeof(void*)*1);
if (lean::is_shared(x_65)) {
 lean::dec(x_65);
 x_202 = lean::box(0);
} else {
 lean::cnstr_release(x_65, 0);
 x_202 = x_65;
}
if (lean::is_scalar(x_202)) {
 x_203 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_203 = x_202;
}
lean::cnstr_set(x_203, 0, x_199);
lean::cnstr_set_scalar(x_203, sizeof(void*)*1, x_201);
x_204 = x_203;
x_205 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_62, x_204);
x_206 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_205);
x_207 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_207);
x_209 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_207, x_206);
return x_209;
}
}
else
{
obj* x_211; unsigned char x_213; obj* x_214; obj* x_215; obj* x_216; obj* x_217; obj* x_218; obj* x_220; 
lean::dec(x_9);
x_211 = lean::cnstr_get(x_57, 0);
lean::inc(x_211);
x_213 = lean::cnstr_get_scalar<unsigned char>(x_57, sizeof(void*)*1);
if (lean::is_shared(x_57)) {
 lean::dec(x_57);
 x_214 = lean::box(0);
} else {
 lean::cnstr_release(x_57, 0);
 x_214 = x_57;
}
if (lean::is_scalar(x_214)) {
 x_215 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_215 = x_214;
}
lean::cnstr_set(x_215, 0, x_211);
lean::cnstr_set_scalar(x_215, sizeof(void*)*1, x_213);
x_216 = x_215;
x_217 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_216);
x_218 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_218);
x_220 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_218, x_217);
return x_220;
}
}
lbl_13:
{
obj* x_222; obj* x_223; obj* x_224; 
lean::dec(x_12);
x_222 = lean::mk_nat_obj(117u);
x_223 = lean::mk_nat_obj(55296u);
x_224 = lean::nat_dec_lt(x_222, x_223);
lean::dec(x_223);
if (lean::obj_tag(x_224) == 0)
{
obj* x_227; obj* x_228; 
lean::dec(x_224);
x_227 = lean::mk_nat_obj(57343u);
x_228 = lean::nat_dec_lt(x_227, x_222);
lean::dec(x_227);
if (lean::obj_tag(x_228) == 0)
{
obj* x_232; obj* x_233; 
lean::dec(x_222);
lean::dec(x_228);
x_232 = lean::mk_nat_obj(0u);
x_233 = lean::nat_dec_eq(x_3, x_232);
lean::dec(x_232);
lean::dec(x_3);
if (lean::obj_tag(x_233) == 0)
{
obj* x_238; obj* x_240; obj* x_241; obj* x_242; obj* x_244; 
lean::dec(x_233);
lean::dec(x_9);
x_238 = l_lean_parser_parse__quoted__char___rarg___lambda__7___closed__1;
lean::inc(x_238);
x_240 = l_lean_parser_monad__parsec_unexpected__at___at_lean_ir_parse__literal___spec__8___rarg(x_238, x_0, x_5);
x_241 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_240);
x_242 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_242);
x_244 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_242, x_241);
return x_244;
}
else
{
obj* x_247; 
lean::dec(x_233);
lean::dec(x_0);
x_247 = lean::box(0);
x_10 = x_247;
goto lbl_11;
}
}
else
{
obj* x_249; obj* x_250; 
lean::dec(x_228);
x_249 = lean::mk_nat_obj(1114112u);
x_250 = lean::nat_dec_lt(x_222, x_249);
lean::dec(x_249);
if (lean::obj_tag(x_250) == 0)
{
obj* x_254; obj* x_255; 
lean::dec(x_250);
lean::dec(x_222);
x_254 = lean::mk_nat_obj(0u);
x_255 = lean::nat_dec_eq(x_3, x_254);
lean::dec(x_254);
lean::dec(x_3);
if (lean::obj_tag(x_255) == 0)
{
obj* x_260; obj* x_262; obj* x_263; obj* x_264; obj* x_266; 
lean::dec(x_255);
lean::dec(x_9);
x_260 = l_lean_parser_parse__quoted__char___rarg___lambda__7___closed__1;
lean::inc(x_260);
x_262 = l_lean_parser_monad__parsec_unexpected__at___at_lean_ir_parse__literal___spec__8___rarg(x_260, x_0, x_5);
x_263 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_262);
x_264 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_264);
x_266 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_264, x_263);
return x_266;
}
else
{
obj* x_269; 
lean::dec(x_255);
lean::dec(x_0);
x_269 = lean::box(0);
x_10 = x_269;
goto lbl_11;
}
}
else
{
obj* x_271; 
lean::dec(x_250);
x_271 = lean::nat_dec_eq(x_3, x_222);
lean::dec(x_222);
lean::dec(x_3);
if (lean::obj_tag(x_271) == 0)
{
obj* x_276; obj* x_278; obj* x_279; obj* x_280; obj* x_282; 
lean::dec(x_271);
lean::dec(x_9);
x_276 = l_lean_parser_parse__quoted__char___rarg___lambda__7___closed__1;
lean::inc(x_276);
x_278 = l_lean_parser_monad__parsec_unexpected__at___at_lean_ir_parse__literal___spec__8___rarg(x_276, x_0, x_5);
x_279 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_278);
x_280 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_280);
x_282 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_280, x_279);
return x_282;
}
else
{
obj* x_285; 
lean::dec(x_271);
lean::dec(x_0);
x_285 = lean::box(0);
x_10 = x_285;
goto lbl_11;
}
}
}
}
else
{
obj* x_287; 
lean::dec(x_224);
x_287 = lean::nat_dec_eq(x_3, x_222);
lean::dec(x_222);
lean::dec(x_3);
if (lean::obj_tag(x_287) == 0)
{
obj* x_292; obj* x_294; obj* x_295; obj* x_296; obj* x_298; 
lean::dec(x_287);
lean::dec(x_9);
x_292 = l_lean_parser_parse__quoted__char___rarg___lambda__7___closed__1;
lean::inc(x_292);
x_294 = l_lean_parser_monad__parsec_unexpected__at___at_lean_ir_parse__literal___spec__8___rarg(x_292, x_0, x_5);
x_295 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_294);
x_296 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_296);
x_298 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_296, x_295);
return x_298;
}
else
{
obj* x_301; 
lean::dec(x_287);
lean::dec(x_0);
x_301 = lean::box(0);
x_10 = x_301;
goto lbl_11;
}
}
}
lbl_15:
{
obj* x_303; 
lean::dec(x_14);
x_303 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6(x_5);
if (lean::obj_tag(x_303) == 0)
{
obj* x_304; obj* x_306; obj* x_308; obj* x_310; obj* x_311; 
x_304 = lean::cnstr_get(x_303, 0);
lean::inc(x_304);
x_306 = lean::cnstr_get(x_303, 1);
lean::inc(x_306);
x_308 = lean::cnstr_get(x_303, 2);
lean::inc(x_308);
if (lean::is_shared(x_303)) {
 lean::dec(x_303);
 x_310 = lean::box(0);
} else {
 lean::cnstr_release(x_303, 0);
 lean::cnstr_release(x_303, 1);
 lean::cnstr_release(x_303, 2);
 x_310 = x_303;
}
x_311 = l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6(x_306);
if (lean::obj_tag(x_311) == 0)
{
obj* x_312; obj* x_314; obj* x_316; obj* x_319; obj* x_320; obj* x_323; obj* x_326; obj* x_327; 
x_312 = lean::cnstr_get(x_311, 0);
lean::inc(x_312);
x_314 = lean::cnstr_get(x_311, 1);
lean::inc(x_314);
x_316 = lean::cnstr_get(x_311, 2);
lean::inc(x_316);
lean::dec(x_311);
x_319 = lean::mk_nat_obj(16u);
x_320 = lean::nat_mul(x_319, x_304);
lean::dec(x_304);
lean::dec(x_319);
x_323 = lean::nat_add(x_320, x_312);
lean::dec(x_312);
lean::dec(x_320);
x_326 = lean::mk_nat_obj(55296u);
x_327 = lean::nat_dec_lt(x_323, x_326);
lean::dec(x_326);
if (lean::obj_tag(x_327) == 0)
{
obj* x_330; obj* x_331; 
lean::dec(x_327);
x_330 = lean::mk_nat_obj(57343u);
x_331 = lean::nat_dec_lt(x_330, x_323);
lean::dec(x_330);
if (lean::obj_tag(x_331) == 0)
{
obj* x_335; obj* x_336; obj* x_338; obj* x_339; obj* x_340; obj* x_341; obj* x_343; 
lean::dec(x_323);
lean::dec(x_331);
x_335 = lean::mk_nat_obj(0u);
x_336 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_336);
if (lean::is_scalar(x_310)) {
 x_338 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_338 = x_310;
}
lean::cnstr_set(x_338, 0, x_335);
lean::cnstr_set(x_338, 1, x_314);
lean::cnstr_set(x_338, 2, x_336);
x_339 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_316, x_338);
x_340 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_308, x_339);
x_341 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_340);
lean::inc(x_336);
x_343 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_336, x_341);
return x_343;
}
else
{
obj* x_345; obj* x_346; 
lean::dec(x_331);
x_345 = lean::mk_nat_obj(1114112u);
x_346 = lean::nat_dec_lt(x_323, x_345);
lean::dec(x_345);
if (lean::obj_tag(x_346) == 0)
{
obj* x_350; obj* x_351; obj* x_353; obj* x_354; obj* x_355; obj* x_356; obj* x_358; 
lean::dec(x_346);
lean::dec(x_323);
x_350 = lean::mk_nat_obj(0u);
x_351 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_351);
if (lean::is_scalar(x_310)) {
 x_353 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_353 = x_310;
}
lean::cnstr_set(x_353, 0, x_350);
lean::cnstr_set(x_353, 1, x_314);
lean::cnstr_set(x_353, 2, x_351);
x_354 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_316, x_353);
x_355 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_308, x_354);
x_356 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_355);
lean::inc(x_351);
x_358 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_351, x_356);
return x_358;
}
else
{
obj* x_360; obj* x_362; obj* x_363; obj* x_364; obj* x_365; obj* x_367; 
lean::dec(x_346);
x_360 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_360);
if (lean::is_scalar(x_310)) {
 x_362 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_362 = x_310;
}
lean::cnstr_set(x_362, 0, x_323);
lean::cnstr_set(x_362, 1, x_314);
lean::cnstr_set(x_362, 2, x_360);
x_363 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_316, x_362);
x_364 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_308, x_363);
x_365 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_364);
lean::inc(x_360);
x_367 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_360, x_365);
return x_367;
}
}
}
else
{
obj* x_369; obj* x_371; obj* x_372; obj* x_373; obj* x_374; obj* x_376; 
lean::dec(x_327);
x_369 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_369);
if (lean::is_scalar(x_310)) {
 x_371 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_371 = x_310;
}
lean::cnstr_set(x_371, 0, x_323);
lean::cnstr_set(x_371, 1, x_314);
lean::cnstr_set(x_371, 2, x_369);
x_372 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_316, x_371);
x_373 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_308, x_372);
x_374 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_373);
lean::inc(x_369);
x_376 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_369, x_374);
return x_376;
}
}
else
{
obj* x_379; unsigned char x_381; obj* x_382; obj* x_383; obj* x_384; obj* x_385; obj* x_386; obj* x_387; obj* x_389; 
lean::dec(x_304);
lean::dec(x_310);
x_379 = lean::cnstr_get(x_311, 0);
lean::inc(x_379);
x_381 = lean::cnstr_get_scalar<unsigned char>(x_311, sizeof(void*)*1);
if (lean::is_shared(x_311)) {
 lean::dec(x_311);
 x_382 = lean::box(0);
} else {
 lean::cnstr_release(x_311, 0);
 x_382 = x_311;
}
if (lean::is_scalar(x_382)) {
 x_383 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_383 = x_382;
}
lean::cnstr_set(x_383, 0, x_379);
lean::cnstr_set_scalar(x_383, sizeof(void*)*1, x_381);
x_384 = x_383;
x_385 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_308, x_384);
x_386 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_385);
x_387 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_387);
x_389 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_387, x_386);
return x_389;
}
}
else
{
obj* x_390; unsigned char x_392; obj* x_393; obj* x_394; obj* x_395; obj* x_396; obj* x_397; obj* x_399; 
x_390 = lean::cnstr_get(x_303, 0);
lean::inc(x_390);
x_392 = lean::cnstr_get_scalar<unsigned char>(x_303, sizeof(void*)*1);
if (lean::is_shared(x_303)) {
 lean::dec(x_303);
 x_393 = lean::box(0);
} else {
 lean::cnstr_release(x_303, 0);
 x_393 = x_303;
}
if (lean::is_scalar(x_393)) {
 x_394 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_394 = x_393;
}
lean::cnstr_set(x_394, 0, x_390);
lean::cnstr_set_scalar(x_394, sizeof(void*)*1, x_392);
x_395 = x_394;
x_396 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_395);
x_397 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_397);
x_399 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_397, x_396);
return x_399;
}
}
lbl_17:
{
obj* x_401; obj* x_402; obj* x_403; 
lean::dec(x_16);
x_401 = lean::mk_nat_obj(120u);
x_402 = lean::mk_nat_obj(55296u);
x_403 = lean::nat_dec_lt(x_401, x_402);
lean::dec(x_402);
if (lean::obj_tag(x_403) == 0)
{
obj* x_406; obj* x_407; 
lean::dec(x_403);
x_406 = lean::mk_nat_obj(57343u);
x_407 = lean::nat_dec_lt(x_406, x_401);
lean::dec(x_406);
if (lean::obj_tag(x_407) == 0)
{
obj* x_411; obj* x_412; 
lean::dec(x_407);
lean::dec(x_401);
x_411 = lean::mk_nat_obj(0u);
x_412 = lean::nat_dec_eq(x_3, x_411);
lean::dec(x_411);
if (lean::obj_tag(x_412) == 0)
{
obj* x_415; 
lean::dec(x_412);
x_415 = lean::box(0);
x_12 = x_415;
goto lbl_13;
}
else
{
obj* x_420; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_3);
lean::dec(x_412);
x_420 = lean::box(0);
x_14 = x_420;
goto lbl_15;
}
}
else
{
obj* x_422; obj* x_423; 
lean::dec(x_407);
x_422 = lean::mk_nat_obj(1114112u);
x_423 = lean::nat_dec_lt(x_401, x_422);
lean::dec(x_422);
if (lean::obj_tag(x_423) == 0)
{
obj* x_427; obj* x_428; 
lean::dec(x_423);
lean::dec(x_401);
x_427 = lean::mk_nat_obj(0u);
x_428 = lean::nat_dec_eq(x_3, x_427);
lean::dec(x_427);
if (lean::obj_tag(x_428) == 0)
{
obj* x_431; 
lean::dec(x_428);
x_431 = lean::box(0);
x_12 = x_431;
goto lbl_13;
}
else
{
obj* x_436; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_3);
lean::dec(x_428);
x_436 = lean::box(0);
x_14 = x_436;
goto lbl_15;
}
}
else
{
obj* x_438; 
lean::dec(x_423);
x_438 = lean::nat_dec_eq(x_3, x_401);
lean::dec(x_401);
if (lean::obj_tag(x_438) == 0)
{
obj* x_441; 
lean::dec(x_438);
x_441 = lean::box(0);
x_12 = x_441;
goto lbl_13;
}
else
{
obj* x_446; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_3);
lean::dec(x_438);
x_446 = lean::box(0);
x_14 = x_446;
goto lbl_15;
}
}
}
}
else
{
obj* x_448; 
lean::dec(x_403);
x_448 = lean::nat_dec_eq(x_3, x_401);
lean::dec(x_401);
if (lean::obj_tag(x_448) == 0)
{
obj* x_451; 
lean::dec(x_448);
x_451 = lean::box(0);
x_12 = x_451;
goto lbl_13;
}
else
{
obj* x_456; 
lean::dec(x_9);
lean::dec(x_448);
lean::dec(x_0);
lean::dec(x_3);
x_456 = lean::box(0);
x_14 = x_456;
goto lbl_15;
}
}
}
lbl_19:
{
obj* x_458; obj* x_459; obj* x_460; unsigned x_461; 
lean::dec(x_18);
x_458 = lean::mk_nat_obj(116u);
x_459 = lean::mk_nat_obj(55296u);
x_460 = lean::nat_dec_lt(x_458, x_459);
if (lean::obj_tag(x_460) == 0)
{
obj* x_464; obj* x_465; 
lean::dec(x_460);
x_464 = lean::mk_nat_obj(57343u);
x_465 = lean::nat_dec_lt(x_464, x_458);
lean::dec(x_464);
if (lean::obj_tag(x_465) == 0)
{
obj* x_469; unsigned x_470; 
lean::dec(x_458);
lean::dec(x_465);
x_469 = lean::mk_nat_obj(0u);
x_470 = lean::unbox_uint32(x_469);
lean::dec(x_469);
x_461 = x_470;
goto lbl_462;
}
else
{
obj* x_473; obj* x_474; 
lean::dec(x_465);
x_473 = lean::mk_nat_obj(1114112u);
x_474 = lean::nat_dec_lt(x_458, x_473);
lean::dec(x_473);
if (lean::obj_tag(x_474) == 0)
{
obj* x_478; unsigned x_479; 
lean::dec(x_474);
lean::dec(x_458);
x_478 = lean::mk_nat_obj(0u);
x_479 = lean::unbox_uint32(x_478);
lean::dec(x_478);
x_461 = x_479;
goto lbl_462;
}
else
{
unsigned x_482; 
lean::dec(x_474);
x_482 = lean::unbox_uint32(x_458);
lean::dec(x_458);
x_461 = x_482;
goto lbl_462;
}
}
}
else
{
unsigned x_485; 
lean::dec(x_460);
x_485 = lean::unbox_uint32(x_458);
lean::dec(x_458);
x_461 = x_485;
goto lbl_462;
}
lbl_462:
{
obj* x_487; obj* x_488; 
x_487 = lean::box_uint32(x_461);
x_488 = lean::nat_dec_eq(x_3, x_487);
lean::dec(x_487);
if (lean::obj_tag(x_488) == 0)
{
obj* x_492; 
lean::dec(x_459);
lean::dec(x_488);
x_492 = lean::box(0);
x_16 = x_492;
goto lbl_17;
}
else
{
obj* x_497; obj* x_498; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_3);
lean::dec(x_488);
x_497 = lean::mk_nat_obj(9u);
x_498 = lean::nat_dec_lt(x_497, x_459);
lean::dec(x_459);
if (lean::obj_tag(x_498) == 0)
{
obj* x_501; obj* x_502; 
lean::dec(x_498);
x_501 = lean::mk_nat_obj(57343u);
x_502 = lean::nat_dec_lt(x_501, x_497);
lean::dec(x_501);
if (lean::obj_tag(x_502) == 0)
{
obj* x_506; obj* x_507; obj* x_509; obj* x_510; obj* x_512; 
lean::dec(x_502);
lean::dec(x_497);
x_506 = lean::mk_nat_obj(0u);
x_507 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_507);
x_509 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_509, 0, x_506);
lean::cnstr_set(x_509, 1, x_5);
lean::cnstr_set(x_509, 2, x_507);
x_510 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_509);
lean::inc(x_507);
x_512 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_507, x_510);
return x_512;
}
else
{
obj* x_514; obj* x_515; 
lean::dec(x_502);
x_514 = lean::mk_nat_obj(1114112u);
x_515 = lean::nat_dec_lt(x_497, x_514);
lean::dec(x_514);
if (lean::obj_tag(x_515) == 0)
{
obj* x_519; obj* x_520; obj* x_522; obj* x_523; obj* x_525; 
lean::dec(x_497);
lean::dec(x_515);
x_519 = lean::mk_nat_obj(0u);
x_520 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_520);
x_522 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_522, 0, x_519);
lean::cnstr_set(x_522, 1, x_5);
lean::cnstr_set(x_522, 2, x_520);
x_523 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_522);
lean::inc(x_520);
x_525 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_520, x_523);
return x_525;
}
else
{
obj* x_527; obj* x_529; obj* x_530; obj* x_532; 
lean::dec(x_515);
x_527 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_527);
x_529 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_529, 0, x_497);
lean::cnstr_set(x_529, 1, x_5);
lean::cnstr_set(x_529, 2, x_527);
x_530 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_529);
lean::inc(x_527);
x_532 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_527, x_530);
return x_532;
}
}
}
else
{
obj* x_534; obj* x_536; obj* x_537; obj* x_539; 
lean::dec(x_498);
x_534 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_534);
x_536 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_536, 0, x_497);
lean::cnstr_set(x_536, 1, x_5);
lean::cnstr_set(x_536, 2, x_534);
x_537 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_536);
lean::inc(x_534);
x_539 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_534, x_537);
return x_539;
}
}
}
}
lbl_21:
{
obj* x_541; obj* x_542; obj* x_543; unsigned x_544; 
lean::dec(x_20);
x_541 = lean::mk_nat_obj(110u);
x_542 = lean::mk_nat_obj(55296u);
x_543 = lean::nat_dec_lt(x_541, x_542);
if (lean::obj_tag(x_543) == 0)
{
obj* x_547; obj* x_548; 
lean::dec(x_543);
x_547 = lean::mk_nat_obj(57343u);
x_548 = lean::nat_dec_lt(x_547, x_541);
lean::dec(x_547);
if (lean::obj_tag(x_548) == 0)
{
obj* x_552; unsigned x_553; 
lean::dec(x_548);
lean::dec(x_541);
x_552 = lean::mk_nat_obj(0u);
x_553 = lean::unbox_uint32(x_552);
lean::dec(x_552);
x_544 = x_553;
goto lbl_545;
}
else
{
obj* x_556; obj* x_557; 
lean::dec(x_548);
x_556 = lean::mk_nat_obj(1114112u);
x_557 = lean::nat_dec_lt(x_541, x_556);
lean::dec(x_556);
if (lean::obj_tag(x_557) == 0)
{
obj* x_561; unsigned x_562; 
lean::dec(x_541);
lean::dec(x_557);
x_561 = lean::mk_nat_obj(0u);
x_562 = lean::unbox_uint32(x_561);
lean::dec(x_561);
x_544 = x_562;
goto lbl_545;
}
else
{
unsigned x_565; 
lean::dec(x_557);
x_565 = lean::unbox_uint32(x_541);
lean::dec(x_541);
x_544 = x_565;
goto lbl_545;
}
}
}
else
{
unsigned x_568; 
lean::dec(x_543);
x_568 = lean::unbox_uint32(x_541);
lean::dec(x_541);
x_544 = x_568;
goto lbl_545;
}
lbl_545:
{
obj* x_570; obj* x_571; 
x_570 = lean::box_uint32(x_544);
x_571 = lean::nat_dec_eq(x_3, x_570);
lean::dec(x_570);
if (lean::obj_tag(x_571) == 0)
{
obj* x_575; 
lean::dec(x_542);
lean::dec(x_571);
x_575 = lean::box(0);
x_18 = x_575;
goto lbl_19;
}
else
{
obj* x_580; obj* x_581; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_3);
lean::dec(x_571);
x_580 = lean::mk_nat_obj(10u);
x_581 = lean::nat_dec_lt(x_580, x_542);
lean::dec(x_542);
if (lean::obj_tag(x_581) == 0)
{
obj* x_584; obj* x_585; 
lean::dec(x_581);
x_584 = lean::mk_nat_obj(57343u);
x_585 = lean::nat_dec_lt(x_584, x_580);
lean::dec(x_584);
if (lean::obj_tag(x_585) == 0)
{
obj* x_589; obj* x_590; obj* x_592; obj* x_593; obj* x_595; 
lean::dec(x_585);
lean::dec(x_580);
x_589 = lean::mk_nat_obj(0u);
x_590 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_590);
x_592 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_592, 0, x_589);
lean::cnstr_set(x_592, 1, x_5);
lean::cnstr_set(x_592, 2, x_590);
x_593 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_592);
lean::inc(x_590);
x_595 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_590, x_593);
return x_595;
}
else
{
obj* x_597; obj* x_598; 
lean::dec(x_585);
x_597 = lean::mk_nat_obj(1114112u);
x_598 = lean::nat_dec_lt(x_580, x_597);
lean::dec(x_597);
if (lean::obj_tag(x_598) == 0)
{
obj* x_602; obj* x_603; obj* x_605; obj* x_606; obj* x_608; 
lean::dec(x_598);
lean::dec(x_580);
x_602 = lean::mk_nat_obj(0u);
x_603 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_603);
x_605 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_605, 0, x_602);
lean::cnstr_set(x_605, 1, x_5);
lean::cnstr_set(x_605, 2, x_603);
x_606 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_605);
lean::inc(x_603);
x_608 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_603, x_606);
return x_608;
}
else
{
obj* x_610; obj* x_612; obj* x_613; obj* x_615; 
lean::dec(x_598);
x_610 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_610);
x_612 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_612, 0, x_580);
lean::cnstr_set(x_612, 1, x_5);
lean::cnstr_set(x_612, 2, x_610);
x_613 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_612);
lean::inc(x_610);
x_615 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_610, x_613);
return x_615;
}
}
}
else
{
obj* x_617; obj* x_619; obj* x_620; obj* x_622; 
lean::dec(x_581);
x_617 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_617);
x_619 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_619, 0, x_580);
lean::cnstr_set(x_619, 1, x_5);
lean::cnstr_set(x_619, 2, x_617);
x_620 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_619);
lean::inc(x_617);
x_622 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_617, x_620);
return x_622;
}
}
}
}
lbl_23:
{
obj* x_624; obj* x_625; obj* x_626; unsigned x_628; 
lean::dec(x_22);
x_624 = lean::mk_nat_obj(39u);
x_625 = lean::mk_nat_obj(55296u);
x_626 = lean::nat_dec_lt(x_624, x_625);
lean::dec(x_625);
if (lean::obj_tag(x_626) == 0)
{
obj* x_631; obj* x_632; 
lean::dec(x_626);
x_631 = lean::mk_nat_obj(57343u);
x_632 = lean::nat_dec_lt(x_631, x_624);
lean::dec(x_631);
if (lean::obj_tag(x_632) == 0)
{
obj* x_636; unsigned x_637; 
lean::dec(x_624);
lean::dec(x_632);
x_636 = lean::mk_nat_obj(0u);
x_637 = lean::unbox_uint32(x_636);
lean::dec(x_636);
x_628 = x_637;
goto lbl_629;
}
else
{
obj* x_640; obj* x_641; 
lean::dec(x_632);
x_640 = lean::mk_nat_obj(1114112u);
x_641 = lean::nat_dec_lt(x_624, x_640);
lean::dec(x_640);
if (lean::obj_tag(x_641) == 0)
{
obj* x_645; unsigned x_646; 
lean::dec(x_624);
lean::dec(x_641);
x_645 = lean::mk_nat_obj(0u);
x_646 = lean::unbox_uint32(x_645);
lean::dec(x_645);
x_628 = x_646;
goto lbl_629;
}
else
{
unsigned x_649; 
lean::dec(x_641);
x_649 = lean::unbox_uint32(x_624);
lean::dec(x_624);
x_628 = x_649;
goto lbl_629;
}
}
}
else
{
unsigned x_652; 
lean::dec(x_626);
x_652 = lean::unbox_uint32(x_624);
lean::dec(x_624);
x_628 = x_652;
goto lbl_629;
}
lbl_629:
{
obj* x_654; obj* x_655; 
x_654 = lean::box_uint32(x_628);
x_655 = lean::nat_dec_eq(x_3, x_654);
if (lean::obj_tag(x_655) == 0)
{
obj* x_658; 
lean::dec(x_655);
lean::dec(x_654);
x_658 = lean::box(0);
x_20 = x_658;
goto lbl_21;
}
else
{
obj* x_663; obj* x_665; obj* x_666; obj* x_668; 
lean::dec(x_655);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_3);
x_663 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_663);
x_665 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_665, 0, x_654);
lean::cnstr_set(x_665, 1, x_5);
lean::cnstr_set(x_665, 2, x_663);
x_666 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_665);
lean::inc(x_663);
x_668 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_663, x_666);
return x_668;
}
}
}
lbl_25:
{
obj* x_670; obj* x_671; obj* x_672; unsigned x_674; 
lean::dec(x_24);
x_670 = lean::mk_nat_obj(34u);
x_671 = lean::mk_nat_obj(55296u);
x_672 = lean::nat_dec_lt(x_670, x_671);
lean::dec(x_671);
if (lean::obj_tag(x_672) == 0)
{
obj* x_677; obj* x_678; 
lean::dec(x_672);
x_677 = lean::mk_nat_obj(57343u);
x_678 = lean::nat_dec_lt(x_677, x_670);
lean::dec(x_677);
if (lean::obj_tag(x_678) == 0)
{
obj* x_682; unsigned x_683; 
lean::dec(x_670);
lean::dec(x_678);
x_682 = lean::mk_nat_obj(0u);
x_683 = lean::unbox_uint32(x_682);
lean::dec(x_682);
x_674 = x_683;
goto lbl_675;
}
else
{
obj* x_686; obj* x_687; 
lean::dec(x_678);
x_686 = lean::mk_nat_obj(1114112u);
x_687 = lean::nat_dec_lt(x_670, x_686);
lean::dec(x_686);
if (lean::obj_tag(x_687) == 0)
{
obj* x_691; unsigned x_692; 
lean::dec(x_687);
lean::dec(x_670);
x_691 = lean::mk_nat_obj(0u);
x_692 = lean::unbox_uint32(x_691);
lean::dec(x_691);
x_674 = x_692;
goto lbl_675;
}
else
{
unsigned x_695; 
lean::dec(x_687);
x_695 = lean::unbox_uint32(x_670);
lean::dec(x_670);
x_674 = x_695;
goto lbl_675;
}
}
}
else
{
unsigned x_698; 
lean::dec(x_672);
x_698 = lean::unbox_uint32(x_670);
lean::dec(x_670);
x_674 = x_698;
goto lbl_675;
}
lbl_675:
{
obj* x_700; obj* x_701; 
x_700 = lean::box_uint32(x_674);
x_701 = lean::nat_dec_eq(x_3, x_700);
if (lean::obj_tag(x_701) == 0)
{
obj* x_704; 
lean::dec(x_701);
lean::dec(x_700);
x_704 = lean::box(0);
x_22 = x_704;
goto lbl_23;
}
else
{
obj* x_709; obj* x_711; obj* x_712; obj* x_714; 
lean::dec(x_701);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_3);
x_709 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_709);
x_711 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_711, 0, x_700);
lean::cnstr_set(x_711, 1, x_5);
lean::cnstr_set(x_711, 2, x_709);
x_712 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_711);
lean::inc(x_709);
x_714 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_709, x_712);
return x_714;
}
}
}
lbl_31:
{
obj* x_715; obj* x_716; 
x_715 = lean::box_uint32(x_30);
x_716 = lean::nat_dec_eq(x_3, x_715);
if (lean::obj_tag(x_716) == 0)
{
obj* x_719; 
lean::dec(x_716);
lean::dec(x_715);
x_719 = lean::box(0);
x_24 = x_719;
goto lbl_25;
}
else
{
obj* x_724; obj* x_726; obj* x_727; obj* x_729; 
lean::dec(x_716);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_3);
x_724 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_724);
x_726 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_726, 0, x_715);
lean::cnstr_set(x_726, 1, x_5);
lean::cnstr_set(x_726, 2, x_724);
x_727 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_726);
lean::inc(x_724);
x_729 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_724, x_727);
return x_729;
}
}
}
else
{
obj* x_731; unsigned char x_733; obj* x_734; obj* x_735; obj* x_736; obj* x_737; obj* x_739; 
lean::dec(x_0);
x_731 = lean::cnstr_get(x_2, 0);
lean::inc(x_731);
x_733 = lean::cnstr_get_scalar<unsigned char>(x_2, sizeof(void*)*1);
if (lean::is_shared(x_2)) {
 lean::dec(x_2);
 x_734 = lean::box(0);
} else {
 lean::cnstr_release(x_2, 0);
 x_734 = x_2;
}
if (lean::is_scalar(x_734)) {
 x_735 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_735 = x_734;
}
lean::cnstr_set(x_735, 0, x_731);
lean::cnstr_set_scalar(x_735, sizeof(void*)*1, x_733);
x_736 = x_735;
x_737 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_737);
x_739 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_737, x_736);
return x_739;
}
}
}
obj* l_lean_parser_parse__string__literal__aux___main___at_lean_ir_parse__literal___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; 
lean::dec(x_4);
x_6 = l_lean_parser_monad__parsec_any___at_lean_ir_parse__literal___spec__4(x_2);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_18; obj* x_20; obj* x_21; obj* x_22; unsigned x_24; 
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 2);
lean::inc(x_11);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_13 = x_6;
}
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
x_20 = lean::mk_nat_obj(92u);
x_21 = lean::mk_nat_obj(55296u);
x_22 = lean::nat_dec_lt(x_20, x_21);
lean::dec(x_21);
if (lean::obj_tag(x_22) == 0)
{
obj* x_27; obj* x_28; 
lean::dec(x_22);
x_27 = lean::mk_nat_obj(57343u);
x_28 = lean::nat_dec_lt(x_27, x_20);
lean::dec(x_27);
if (lean::obj_tag(x_28) == 0)
{
unsigned x_32; 
lean::dec(x_20);
lean::dec(x_28);
x_32 = lean::unbox_uint32(x_3);
x_24 = x_32;
goto lbl_25;
}
else
{
obj* x_34; obj* x_35; 
lean::dec(x_28);
x_34 = lean::mk_nat_obj(1114112u);
x_35 = lean::nat_dec_lt(x_20, x_34);
lean::dec(x_34);
if (lean::obj_tag(x_35) == 0)
{
unsigned x_39; 
lean::dec(x_20);
lean::dec(x_35);
x_39 = lean::unbox_uint32(x_3);
x_24 = x_39;
goto lbl_25;
}
else
{
unsigned x_41; 
lean::dec(x_35);
x_41 = lean::unbox_uint32(x_20);
lean::dec(x_20);
x_24 = x_41;
goto lbl_25;
}
}
}
else
{
unsigned x_44; 
lean::dec(x_22);
x_44 = lean::unbox_uint32(x_20);
lean::dec(x_20);
x_24 = x_44;
goto lbl_25;
}
lbl_19:
{
obj* x_47; obj* x_48; obj* x_49; unsigned x_51; 
lean::dec(x_18);
x_47 = lean::mk_nat_obj(34u);
x_48 = lean::mk_nat_obj(55296u);
x_49 = lean::nat_dec_lt(x_47, x_48);
lean::dec(x_48);
if (lean::obj_tag(x_49) == 0)
{
obj* x_54; obj* x_55; 
lean::dec(x_49);
x_54 = lean::mk_nat_obj(57343u);
x_55 = lean::nat_dec_lt(x_54, x_47);
lean::dec(x_54);
if (lean::obj_tag(x_55) == 0)
{
unsigned x_59; 
lean::dec(x_55);
lean::dec(x_47);
x_59 = lean::unbox_uint32(x_3);
lean::dec(x_3);
x_51 = x_59;
goto lbl_52;
}
else
{
obj* x_62; obj* x_63; 
lean::dec(x_55);
x_62 = lean::mk_nat_obj(1114112u);
x_63 = lean::nat_dec_lt(x_47, x_62);
lean::dec(x_62);
if (lean::obj_tag(x_63) == 0)
{
unsigned x_67; 
lean::dec(x_63);
lean::dec(x_47);
x_67 = lean::unbox_uint32(x_3);
lean::dec(x_3);
x_51 = x_67;
goto lbl_52;
}
else
{
unsigned x_71; 
lean::dec(x_63);
lean::dec(x_3);
x_71 = lean::unbox_uint32(x_47);
lean::dec(x_47);
x_51 = x_71;
goto lbl_52;
}
}
}
else
{
unsigned x_75; 
lean::dec(x_49);
lean::dec(x_3);
x_75 = lean::unbox_uint32(x_47);
lean::dec(x_47);
x_51 = x_75;
goto lbl_52;
}
lbl_52:
{
obj* x_77; obj* x_78; 
x_77 = lean::box_uint32(x_51);
x_78 = lean::nat_dec_eq(x_7, x_77);
lean::dec(x_77);
if (lean::obj_tag(x_78) == 0)
{
unsigned x_82; obj* x_84; obj* x_85; obj* x_86; 
lean::dec(x_13);
lean::dec(x_78);
x_82 = lean::unbox_uint32(x_7);
lean::dec(x_7);
x_84 = lean::string_push(x_1, x_82);
x_85 = l_lean_parser_parse__string__literal__aux___main___at_lean_ir_parse__literal___spec__3(x_15, x_84, x_9);
x_86 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_85);
return x_86;
}
else
{
obj* x_90; obj* x_92; obj* x_93; 
lean::dec(x_15);
lean::dec(x_78);
lean::dec(x_7);
x_90 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_90);
if (lean::is_scalar(x_13)) {
 x_92 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_92 = x_13;
}
lean::cnstr_set(x_92, 0, x_1);
lean::cnstr_set(x_92, 1, x_9);
lean::cnstr_set(x_92, 2, x_90);
x_93 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_92);
return x_93;
}
}
}
lbl_25:
{
obj* x_94; obj* x_95; 
x_94 = lean::box_uint32(x_24);
x_95 = lean::nat_dec_eq(x_7, x_94);
lean::dec(x_94);
if (lean::obj_tag(x_95) == 0)
{
obj* x_98; 
lean::dec(x_95);
x_98 = lean::box(0);
x_18 = x_98;
goto lbl_19;
}
else
{
obj* x_103; 
lean::dec(x_13);
lean::dec(x_95);
lean::dec(x_7);
lean::dec(x_3);
x_103 = l_lean_parser_parse__quoted__char___at_lean_ir_parse__literal___spec__5(x_9);
if (lean::obj_tag(x_103) == 0)
{
obj* x_104; obj* x_106; obj* x_108; unsigned x_111; obj* x_113; obj* x_114; obj* x_115; obj* x_116; 
x_104 = lean::cnstr_get(x_103, 0);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_103, 1);
lean::inc(x_106);
x_108 = lean::cnstr_get(x_103, 2);
lean::inc(x_108);
lean::dec(x_103);
x_111 = lean::unbox_uint32(x_104);
lean::dec(x_104);
x_113 = lean::string_push(x_1, x_111);
x_114 = l_lean_parser_parse__string__literal__aux___main___at_lean_ir_parse__literal___spec__3(x_15, x_113, x_106);
x_115 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_108, x_114);
x_116 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_115);
return x_116;
}
else
{
obj* x_119; unsigned char x_121; obj* x_122; obj* x_123; obj* x_124; obj* x_125; 
lean::dec(x_15);
lean::dec(x_1);
x_119 = lean::cnstr_get(x_103, 0);
lean::inc(x_119);
x_121 = lean::cnstr_get_scalar<unsigned char>(x_103, sizeof(void*)*1);
if (lean::is_shared(x_103)) {
 lean::dec(x_103);
 x_122 = lean::box(0);
} else {
 lean::cnstr_release(x_103, 0);
 x_122 = x_103;
}
if (lean::is_scalar(x_122)) {
 x_123 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_123 = x_122;
}
lean::cnstr_set(x_123, 0, x_119);
lean::cnstr_set_scalar(x_123, sizeof(void*)*1, x_121);
x_124 = x_123;
x_125 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_124);
return x_125;
}
}
}
}
else
{
obj* x_129; unsigned char x_131; obj* x_132; obj* x_133; obj* x_134; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_3);
x_129 = lean::cnstr_get(x_6, 0);
lean::inc(x_129);
x_131 = lean::cnstr_get_scalar<unsigned char>(x_6, sizeof(void*)*1);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_132 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 x_132 = x_6;
}
if (lean::is_scalar(x_132)) {
 x_133 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_133 = x_132;
}
lean::cnstr_set(x_133, 0, x_129);
lean::cnstr_set_scalar(x_133, sizeof(void*)*1, x_131);
x_134 = x_133;
return x_134;
}
}
else
{
obj* x_137; obj* x_138; obj* x_139; 
lean::dec(x_4);
lean::dec(x_0);
x_137 = lean::mk_nat_obj(34u);
x_138 = lean::mk_nat_obj(55296u);
x_139 = lean::nat_dec_lt(x_137, x_138);
lean::dec(x_138);
if (lean::obj_tag(x_139) == 0)
{
obj* x_142; obj* x_143; 
lean::dec(x_139);
x_142 = lean::mk_nat_obj(57343u);
x_143 = lean::nat_dec_lt(x_142, x_137);
lean::dec(x_142);
if (lean::obj_tag(x_143) == 0)
{
unsigned x_147; obj* x_149; 
lean::dec(x_137);
lean::dec(x_143);
x_147 = lean::unbox_uint32(x_3);
lean::dec(x_3);
x_149 = l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2(x_147, x_2);
if (lean::obj_tag(x_149) == 0)
{
obj* x_150; obj* x_152; obj* x_154; obj* x_155; obj* x_157; obj* x_158; 
x_150 = lean::cnstr_get(x_149, 1);
lean::inc(x_150);
x_152 = lean::cnstr_get(x_149, 2);
lean::inc(x_152);
if (lean::is_shared(x_149)) {
 lean::dec(x_149);
 x_154 = lean::box(0);
} else {
 lean::cnstr_release(x_149, 0);
 lean::cnstr_release(x_149, 1);
 lean::cnstr_release(x_149, 2);
 x_154 = x_149;
}
x_155 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_155);
if (lean::is_scalar(x_154)) {
 x_157 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_157 = x_154;
}
lean::cnstr_set(x_157, 0, x_1);
lean::cnstr_set(x_157, 1, x_150);
lean::cnstr_set(x_157, 2, x_155);
x_158 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_152, x_157);
return x_158;
}
else
{
obj* x_160; unsigned char x_162; obj* x_163; obj* x_164; obj* x_165; 
lean::dec(x_1);
x_160 = lean::cnstr_get(x_149, 0);
lean::inc(x_160);
x_162 = lean::cnstr_get_scalar<unsigned char>(x_149, sizeof(void*)*1);
if (lean::is_shared(x_149)) {
 lean::dec(x_149);
 x_163 = lean::box(0);
} else {
 lean::cnstr_release(x_149, 0);
 x_163 = x_149;
}
if (lean::is_scalar(x_163)) {
 x_164 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_164 = x_163;
}
lean::cnstr_set(x_164, 0, x_160);
lean::cnstr_set_scalar(x_164, sizeof(void*)*1, x_162);
x_165 = x_164;
return x_165;
}
}
else
{
obj* x_167; obj* x_168; 
lean::dec(x_143);
x_167 = lean::mk_nat_obj(1114112u);
x_168 = lean::nat_dec_lt(x_137, x_167);
lean::dec(x_167);
if (lean::obj_tag(x_168) == 0)
{
unsigned x_172; obj* x_174; 
lean::dec(x_137);
lean::dec(x_168);
x_172 = lean::unbox_uint32(x_3);
lean::dec(x_3);
x_174 = l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2(x_172, x_2);
if (lean::obj_tag(x_174) == 0)
{
obj* x_175; obj* x_177; obj* x_179; obj* x_180; obj* x_182; obj* x_183; 
x_175 = lean::cnstr_get(x_174, 1);
lean::inc(x_175);
x_177 = lean::cnstr_get(x_174, 2);
lean::inc(x_177);
if (lean::is_shared(x_174)) {
 lean::dec(x_174);
 x_179 = lean::box(0);
} else {
 lean::cnstr_release(x_174, 0);
 lean::cnstr_release(x_174, 1);
 lean::cnstr_release(x_174, 2);
 x_179 = x_174;
}
x_180 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_180);
if (lean::is_scalar(x_179)) {
 x_182 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_182 = x_179;
}
lean::cnstr_set(x_182, 0, x_1);
lean::cnstr_set(x_182, 1, x_175);
lean::cnstr_set(x_182, 2, x_180);
x_183 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_177, x_182);
return x_183;
}
else
{
obj* x_185; unsigned char x_187; obj* x_188; obj* x_189; obj* x_190; 
lean::dec(x_1);
x_185 = lean::cnstr_get(x_174, 0);
lean::inc(x_185);
x_187 = lean::cnstr_get_scalar<unsigned char>(x_174, sizeof(void*)*1);
if (lean::is_shared(x_174)) {
 lean::dec(x_174);
 x_188 = lean::box(0);
} else {
 lean::cnstr_release(x_174, 0);
 x_188 = x_174;
}
if (lean::is_scalar(x_188)) {
 x_189 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_189 = x_188;
}
lean::cnstr_set(x_189, 0, x_185);
lean::cnstr_set_scalar(x_189, sizeof(void*)*1, x_187);
x_190 = x_189;
return x_190;
}
}
else
{
unsigned x_193; obj* x_195; 
lean::dec(x_168);
lean::dec(x_3);
x_193 = lean::unbox_uint32(x_137);
lean::dec(x_137);
x_195 = l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2(x_193, x_2);
if (lean::obj_tag(x_195) == 0)
{
obj* x_196; obj* x_198; obj* x_200; obj* x_201; obj* x_203; obj* x_204; 
x_196 = lean::cnstr_get(x_195, 1);
lean::inc(x_196);
x_198 = lean::cnstr_get(x_195, 2);
lean::inc(x_198);
if (lean::is_shared(x_195)) {
 lean::dec(x_195);
 x_200 = lean::box(0);
} else {
 lean::cnstr_release(x_195, 0);
 lean::cnstr_release(x_195, 1);
 lean::cnstr_release(x_195, 2);
 x_200 = x_195;
}
x_201 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_201);
if (lean::is_scalar(x_200)) {
 x_203 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_203 = x_200;
}
lean::cnstr_set(x_203, 0, x_1);
lean::cnstr_set(x_203, 1, x_196);
lean::cnstr_set(x_203, 2, x_201);
x_204 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_198, x_203);
return x_204;
}
else
{
obj* x_206; unsigned char x_208; obj* x_209; obj* x_210; obj* x_211; 
lean::dec(x_1);
x_206 = lean::cnstr_get(x_195, 0);
lean::inc(x_206);
x_208 = lean::cnstr_get_scalar<unsigned char>(x_195, sizeof(void*)*1);
if (lean::is_shared(x_195)) {
 lean::dec(x_195);
 x_209 = lean::box(0);
} else {
 lean::cnstr_release(x_195, 0);
 x_209 = x_195;
}
if (lean::is_scalar(x_209)) {
 x_210 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_210 = x_209;
}
lean::cnstr_set(x_210, 0, x_206);
lean::cnstr_set_scalar(x_210, sizeof(void*)*1, x_208);
x_211 = x_210;
return x_211;
}
}
}
}
else
{
unsigned x_214; obj* x_216; 
lean::dec(x_139);
lean::dec(x_3);
x_214 = lean::unbox_uint32(x_137);
lean::dec(x_137);
x_216 = l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2(x_214, x_2);
if (lean::obj_tag(x_216) == 0)
{
obj* x_217; obj* x_219; obj* x_221; obj* x_222; obj* x_224; obj* x_225; 
x_217 = lean::cnstr_get(x_216, 1);
lean::inc(x_217);
x_219 = lean::cnstr_get(x_216, 2);
lean::inc(x_219);
if (lean::is_shared(x_216)) {
 lean::dec(x_216);
 x_221 = lean::box(0);
} else {
 lean::cnstr_release(x_216, 0);
 lean::cnstr_release(x_216, 1);
 lean::cnstr_release(x_216, 2);
 x_221 = x_216;
}
x_222 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_222);
if (lean::is_scalar(x_221)) {
 x_224 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_224 = x_221;
}
lean::cnstr_set(x_224, 0, x_1);
lean::cnstr_set(x_224, 1, x_217);
lean::cnstr_set(x_224, 2, x_222);
x_225 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_219, x_224);
return x_225;
}
else
{
obj* x_227; unsigned char x_229; obj* x_230; obj* x_231; obj* x_232; 
lean::dec(x_1);
x_227 = lean::cnstr_get(x_216, 0);
lean::inc(x_227);
x_229 = lean::cnstr_get_scalar<unsigned char>(x_216, sizeof(void*)*1);
if (lean::is_shared(x_216)) {
 lean::dec(x_216);
 x_230 = lean::box(0);
} else {
 lean::cnstr_release(x_216, 0);
 x_230 = x_216;
}
if (lean::is_scalar(x_230)) {
 x_231 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_231 = x_230;
}
lean::cnstr_set(x_231, 0, x_227);
lean::cnstr_set_scalar(x_231, sizeof(void*)*1, x_229);
x_232 = x_231;
return x_232;
}
}
}
}
}
obj* l_lean_parser_parse__string__literal___at_lean_ir_parse__literal___spec__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::mk_nat_obj(34u);
x_2 = lean::mk_nat_obj(55296u);
x_3 = lean::nat_dec_lt(x_1, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_6; obj* x_7; 
lean::dec(x_3);
x_6 = lean::mk_nat_obj(57343u);
x_7 = lean::nat_dec_lt(x_6, x_1);
lean::dec(x_6);
if (lean::obj_tag(x_7) == 0)
{
obj* x_11; unsigned x_12; obj* x_14; 
lean::dec(x_7);
lean::dec(x_1);
x_11 = lean::mk_nat_obj(0u);
x_12 = lean::unbox_uint32(x_11);
lean::dec(x_11);
x_14 = l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2(x_12, x_0);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_17; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_26; obj* x_27; 
x_15 = lean::cnstr_get(x_14, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 2);
lean::inc(x_17);
lean::dec(x_14);
x_20 = lean::string_iterator_remaining(x_15);
x_21 = l_string_join___closed__1;
lean::inc(x_21);
x_23 = l_lean_parser_parse__string__literal__aux___main___at_lean_ir_parse__literal___spec__3(x_20, x_21, x_15);
x_24 = l_lean_ir_keyword___closed__1;
lean::inc(x_24);
x_26 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_24, x_23);
x_27 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_26);
return x_27;
}
else
{
obj* x_28; unsigned char x_30; obj* x_31; obj* x_32; obj* x_33; 
x_28 = lean::cnstr_get(x_14, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get_scalar<unsigned char>(x_14, sizeof(void*)*1);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_31 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_31 = x_14;
}
if (lean::is_scalar(x_31)) {
 x_32 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_32 = x_31;
}
lean::cnstr_set(x_32, 0, x_28);
lean::cnstr_set_scalar(x_32, sizeof(void*)*1, x_30);
x_33 = x_32;
return x_33;
}
}
else
{
obj* x_35; obj* x_36; 
lean::dec(x_7);
x_35 = lean::mk_nat_obj(1114112u);
x_36 = lean::nat_dec_lt(x_1, x_35);
lean::dec(x_35);
if (lean::obj_tag(x_36) == 0)
{
obj* x_40; unsigned x_41; obj* x_43; 
lean::dec(x_1);
lean::dec(x_36);
x_40 = lean::mk_nat_obj(0u);
x_41 = lean::unbox_uint32(x_40);
lean::dec(x_40);
x_43 = l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2(x_41, x_0);
if (lean::obj_tag(x_43) == 0)
{
obj* x_44; obj* x_46; obj* x_49; obj* x_50; obj* x_52; obj* x_53; obj* x_55; obj* x_56; 
x_44 = lean::cnstr_get(x_43, 1);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_43, 2);
lean::inc(x_46);
lean::dec(x_43);
x_49 = lean::string_iterator_remaining(x_44);
x_50 = l_string_join___closed__1;
lean::inc(x_50);
x_52 = l_lean_parser_parse__string__literal__aux___main___at_lean_ir_parse__literal___spec__3(x_49, x_50, x_44);
x_53 = l_lean_ir_keyword___closed__1;
lean::inc(x_53);
x_55 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_53, x_52);
x_56 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_46, x_55);
return x_56;
}
else
{
obj* x_57; unsigned char x_59; obj* x_60; obj* x_61; obj* x_62; 
x_57 = lean::cnstr_get(x_43, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get_scalar<unsigned char>(x_43, sizeof(void*)*1);
if (lean::is_shared(x_43)) {
 lean::dec(x_43);
 x_60 = lean::box(0);
} else {
 lean::cnstr_release(x_43, 0);
 x_60 = x_43;
}
if (lean::is_scalar(x_60)) {
 x_61 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_61 = x_60;
}
lean::cnstr_set(x_61, 0, x_57);
lean::cnstr_set_scalar(x_61, sizeof(void*)*1, x_59);
x_62 = x_61;
return x_62;
}
}
else
{
unsigned x_64; obj* x_66; 
lean::dec(x_36);
x_64 = lean::unbox_uint32(x_1);
lean::dec(x_1);
x_66 = l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2(x_64, x_0);
if (lean::obj_tag(x_66) == 0)
{
obj* x_67; obj* x_69; obj* x_72; obj* x_73; obj* x_75; obj* x_76; obj* x_78; obj* x_79; 
x_67 = lean::cnstr_get(x_66, 1);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_66, 2);
lean::inc(x_69);
lean::dec(x_66);
x_72 = lean::string_iterator_remaining(x_67);
x_73 = l_string_join___closed__1;
lean::inc(x_73);
x_75 = l_lean_parser_parse__string__literal__aux___main___at_lean_ir_parse__literal___spec__3(x_72, x_73, x_67);
x_76 = l_lean_ir_keyword___closed__1;
lean::inc(x_76);
x_78 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_76, x_75);
x_79 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_69, x_78);
return x_79;
}
else
{
obj* x_80; unsigned char x_82; obj* x_83; obj* x_84; obj* x_85; 
x_80 = lean::cnstr_get(x_66, 0);
lean::inc(x_80);
x_82 = lean::cnstr_get_scalar<unsigned char>(x_66, sizeof(void*)*1);
if (lean::is_shared(x_66)) {
 lean::dec(x_66);
 x_83 = lean::box(0);
} else {
 lean::cnstr_release(x_66, 0);
 x_83 = x_66;
}
if (lean::is_scalar(x_83)) {
 x_84 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_84 = x_83;
}
lean::cnstr_set(x_84, 0, x_80);
lean::cnstr_set_scalar(x_84, sizeof(void*)*1, x_82);
x_85 = x_84;
return x_85;
}
}
}
}
else
{
unsigned x_87; obj* x_89; 
lean::dec(x_3);
x_87 = lean::unbox_uint32(x_1);
lean::dec(x_1);
x_89 = l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2(x_87, x_0);
if (lean::obj_tag(x_89) == 0)
{
obj* x_90; obj* x_92; obj* x_95; obj* x_96; obj* x_98; obj* x_99; obj* x_101; obj* x_102; 
x_90 = lean::cnstr_get(x_89, 1);
lean::inc(x_90);
x_92 = lean::cnstr_get(x_89, 2);
lean::inc(x_92);
lean::dec(x_89);
x_95 = lean::string_iterator_remaining(x_90);
x_96 = l_string_join___closed__1;
lean::inc(x_96);
x_98 = l_lean_parser_parse__string__literal__aux___main___at_lean_ir_parse__literal___spec__3(x_95, x_96, x_90);
x_99 = l_lean_ir_keyword___closed__1;
lean::inc(x_99);
x_101 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_99, x_98);
x_102 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_92, x_101);
return x_102;
}
else
{
obj* x_103; unsigned char x_105; obj* x_106; obj* x_107; obj* x_108; 
x_103 = lean::cnstr_get(x_89, 0);
lean::inc(x_103);
x_105 = lean::cnstr_get_scalar<unsigned char>(x_89, sizeof(void*)*1);
if (lean::is_shared(x_89)) {
 lean::dec(x_89);
 x_106 = lean::box(0);
} else {
 lean::cnstr_release(x_89, 0);
 x_106 = x_89;
}
if (lean::is_scalar(x_106)) {
 x_107 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_107 = x_106;
}
lean::cnstr_set(x_107, 0, x_103);
lean::cnstr_set_scalar(x_107, sizeof(void*)*1, x_105);
x_108 = x_107;
return x_108;
}
}
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__12(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_char_is__digit(x_10);
if (x_11 == 0)
{
obj* x_13; 
lean::dec(x_0);
x_13 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_18; obj* x_19; 
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
x_18 = lean::string_push(x_1, x_10);
x_19 = lean::string_iterator_next(x_2);
x_0 = x_15;
x_1 = x_18;
x_2 = x_19;
goto _start;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__11(unsigned x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_string_join___closed__1;
lean::inc(x_2);
x_4 = lean::string_push(x_2, x_0);
x_5 = lean::string_iterator_remaining(x_1);
x_6 = l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__12(x_5, x_4, x_1);
return x_6;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__14(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_char_is__digit(x_10);
if (x_11 == 0)
{
obj* x_13; 
lean::dec(x_0);
x_13 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_18; obj* x_19; 
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
x_18 = lean::string_push(x_1, x_10);
x_19 = lean::string_iterator_next(x_2);
x_0 = x_15;
x_1 = x_18;
x_2 = x_19;
goto _start;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__13(unsigned x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_string_join___closed__1;
lean::inc(x_2);
x_4 = lean::string_push(x_2, x_0);
x_5 = lean::string_iterator_remaining(x_1);
x_6 = l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__14(x_5, x_4, x_1);
return x_6;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__16(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_char_is__digit(x_10);
if (x_11 == 0)
{
obj* x_13; 
lean::dec(x_0);
x_13 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_18; obj* x_19; 
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
x_18 = lean::string_push(x_1, x_10);
x_19 = lean::string_iterator_next(x_2);
x_0 = x_15;
x_1 = x_18;
x_2 = x_19;
goto _start;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__15(unsigned x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_string_join___closed__1;
lean::inc(x_2);
x_4 = lean::string_push(x_2, x_0);
x_5 = lean::string_iterator_remaining(x_1);
x_6 = l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__16(x_5, x_4, x_1);
return x_6;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__18(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_char_is__digit(x_10);
if (x_11 == 0)
{
obj* x_13; 
lean::dec(x_0);
x_13 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_18; obj* x_19; 
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
x_18 = lean::string_push(x_1, x_10);
x_19 = lean::string_iterator_next(x_2);
x_0 = x_15;
x_1 = x_18;
x_2 = x_19;
goto _start;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__17(unsigned x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_string_join___closed__1;
lean::inc(x_2);
x_4 = lean::string_push(x_2, x_0);
x_5 = lean::string_iterator_remaining(x_1);
x_6 = l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__18(x_5, x_4, x_1);
return x_6;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__20(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_char_is__digit(x_10);
if (x_11 == 0)
{
obj* x_13; 
lean::dec(x_0);
x_13 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_18; obj* x_19; 
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
x_18 = lean::string_push(x_1, x_10);
x_19 = lean::string_iterator_next(x_2);
x_0 = x_15;
x_1 = x_18;
x_2 = x_19;
goto _start;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__19(unsigned x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_string_join___closed__1;
lean::inc(x_2);
x_4 = lean::string_push(x_2, x_0);
x_5 = lean::string_iterator_remaining(x_1);
x_6 = l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__20(x_5, x_4, x_1);
return x_6;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__22(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_char_is__digit(x_10);
if (x_11 == 0)
{
obj* x_13; 
lean::dec(x_0);
x_13 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_18; obj* x_19; 
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
x_18 = lean::string_push(x_1, x_10);
x_19 = lean::string_iterator_next(x_2);
x_0 = x_15;
x_1 = x_18;
x_2 = x_19;
goto _start;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__21(unsigned x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_string_join___closed__1;
lean::inc(x_2);
x_4 = lean::string_push(x_2, x_0);
x_5 = lean::string_iterator_remaining(x_1);
x_6 = l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__22(x_5, x_4, x_1);
return x_6;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__24(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_char_is__digit(x_10);
if (x_11 == 0)
{
obj* x_13; 
lean::dec(x_0);
x_13 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_18; obj* x_19; 
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
x_18 = lean::string_push(x_1, x_10);
x_19 = lean::string_iterator_next(x_2);
x_0 = x_15;
x_1 = x_18;
x_2 = x_19;
goto _start;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__23(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; 
x_2 = lean::string_iterator_curr(x_0);
lean::dec(x_0);
x_4 = l_string_join___closed__1;
lean::inc(x_4);
x_6 = lean::string_push(x_4, x_2);
x_7 = lean::string_iterator_remaining(x_1);
x_8 = l___private_31565857__take__while__aux___main___at_lean_ir_parse__literal___spec__24(x_7, x_6, x_1);
return x_8;
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_ir_parse__literal___spec__10(obj* x_0) {
_start:
{
unsigned char x_1; 
x_1 = lean::string_iterator_has_next(x_0);
if (x_1 == 0)
{
obj* x_2; obj* x_3; obj* x_4; obj* x_8; 
x_2 = lean::box(0);
x_3 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_4 = l_mjoin___rarg___closed__1;
lean::inc(x_2);
lean::inc(x_4);
lean::inc(x_3);
x_8 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_3, x_4, x_2, x_2, x_0);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; obj* x_11; obj* x_13; 
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_8, 2);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
if (lean::obj_tag(x_8) == 0)
{
unsigned x_16; obj* x_18; obj* x_19; 
lean::dec(x_8);
x_16 = lean::unbox_uint32(x_9);
lean::dec(x_9);
x_18 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__11(x_16, x_11);
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_18);
return x_19;
}
else
{
unsigned char x_22; obj* x_23; obj* x_24; obj* x_25; 
lean::dec(x_13);
lean::dec(x_11);
x_22 = lean::cnstr_get_scalar<unsigned char>(x_8, sizeof(void*)*1);
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_23 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 x_23 = x_8;
}
if (lean::is_scalar(x_23)) {
 x_24 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_24 = x_23;
}
lean::cnstr_set(x_24, 0, x_9);
lean::cnstr_set_scalar(x_24, sizeof(void*)*1, x_22);
x_25 = x_24;
return x_25;
}
}
else
{
obj* x_27; obj* x_29; obj* x_31; obj* x_32; unsigned x_33; obj* x_35; obj* x_36; 
lean::dec(x_8);
x_27 = lean::cnstr_get(x_13, 0);
lean::inc(x_27);
if (lean::is_shared(x_13)) {
 lean::dec(x_13);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_13, 0);
 x_29 = x_13;
}
lean::inc(x_4);
x_31 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_31, 0, x_4);
lean::closure_set(x_31, 1, x_27);
if (lean::is_scalar(x_29)) {
 x_32 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_32 = x_29;
}
lean::cnstr_set(x_32, 0, x_31);
x_33 = lean::unbox_uint32(x_9);
lean::dec(x_9);
x_35 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__13(x_33, x_11);
x_36 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_32, x_35);
return x_36;
}
}
else
{
obj* x_37; unsigned char x_39; 
x_37 = lean::cnstr_get(x_8, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get_scalar<unsigned char>(x_8, sizeof(void*)*1);
if (x_39 == 0)
{
obj* x_41; obj* x_43; obj* x_45; obj* x_48; obj* x_49; obj* x_52; obj* x_53; obj* x_54; 
lean::dec(x_8);
x_41 = lean::cnstr_get(x_37, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_37, 1);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_37, 2);
lean::inc(x_45);
lean::inc(x_4);
x_48 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_48, 0, x_4);
lean::closure_set(x_48, 1, x_45);
x_49 = lean::cnstr_get(x_37, 3);
lean::inc(x_49);
lean::dec(x_37);
x_52 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_52, 0, x_41);
lean::cnstr_set(x_52, 1, x_43);
lean::cnstr_set(x_52, 2, x_48);
lean::cnstr_set(x_52, 3, x_49);
x_53 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set_scalar(x_53, sizeof(void*)*1, x_39);
x_54 = x_53;
return x_54;
}
else
{
if (lean::obj_tag(x_8) == 0)
{
obj* x_55; obj* x_57; unsigned x_60; obj* x_62; obj* x_63; 
x_55 = lean::cnstr_get(x_8, 1);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_8, 2);
lean::inc(x_57);
lean::dec(x_8);
x_60 = lean::unbox_uint32(x_37);
lean::dec(x_37);
x_62 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__15(x_60, x_55);
x_63 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_57, x_62);
return x_63;
}
else
{
obj* x_64; obj* x_65; obj* x_66; 
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_64 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 x_64 = x_8;
}
if (lean::is_scalar(x_64)) {
 x_65 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_65 = x_64;
}
lean::cnstr_set(x_65, 0, x_37);
lean::cnstr_set_scalar(x_65, sizeof(void*)*1, x_39);
x_66 = x_65;
return x_66;
}
}
}
}
else
{
unsigned x_67; unsigned char x_68; 
x_67 = lean::string_iterator_curr(x_0);
x_68 = l_char_is__digit(x_67);
if (x_68 == 0)
{
obj* x_69; obj* x_70; obj* x_72; obj* x_74; obj* x_75; obj* x_76; obj* x_79; 
x_69 = l_char_quote__core(x_67);
x_70 = l_char_has__repr___closed__1;
lean::inc(x_70);
x_72 = lean::string_append(x_70, x_69);
lean::dec(x_69);
x_74 = lean::string_append(x_72, x_70);
x_75 = lean::box(0);
x_76 = l_mjoin___rarg___closed__1;
lean::inc(x_75);
lean::inc(x_76);
x_79 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_74, x_76, x_75, x_75, x_0);
if (lean::obj_tag(x_79) == 0)
{
obj* x_80; obj* x_82; obj* x_84; 
x_80 = lean::cnstr_get(x_79, 0);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_79, 1);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_79, 2);
lean::inc(x_84);
if (lean::obj_tag(x_84) == 0)
{
if (lean::obj_tag(x_79) == 0)
{
unsigned x_87; obj* x_89; obj* x_90; 
lean::dec(x_79);
x_87 = lean::unbox_uint32(x_80);
lean::dec(x_80);
x_89 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__17(x_87, x_82);
x_90 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_84, x_89);
return x_90;
}
else
{
unsigned char x_93; obj* x_94; obj* x_95; obj* x_96; 
lean::dec(x_82);
lean::dec(x_84);
x_93 = lean::cnstr_get_scalar<unsigned char>(x_79, sizeof(void*)*1);
if (lean::is_shared(x_79)) {
 lean::dec(x_79);
 x_94 = lean::box(0);
} else {
 lean::cnstr_release(x_79, 0);
 x_94 = x_79;
}
if (lean::is_scalar(x_94)) {
 x_95 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_95 = x_94;
}
lean::cnstr_set(x_95, 0, x_80);
lean::cnstr_set_scalar(x_95, sizeof(void*)*1, x_93);
x_96 = x_95;
return x_96;
}
}
else
{
obj* x_98; obj* x_100; obj* x_102; obj* x_103; unsigned x_104; obj* x_106; obj* x_107; 
lean::dec(x_79);
x_98 = lean::cnstr_get(x_84, 0);
lean::inc(x_98);
if (lean::is_shared(x_84)) {
 lean::dec(x_84);
 x_100 = lean::box(0);
} else {
 lean::cnstr_release(x_84, 0);
 x_100 = x_84;
}
lean::inc(x_76);
x_102 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_102, 0, x_76);
lean::closure_set(x_102, 1, x_98);
if (lean::is_scalar(x_100)) {
 x_103 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_103 = x_100;
}
lean::cnstr_set(x_103, 0, x_102);
x_104 = lean::unbox_uint32(x_80);
lean::dec(x_80);
x_106 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__19(x_104, x_82);
x_107 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_103, x_106);
return x_107;
}
}
else
{
obj* x_108; unsigned char x_110; 
x_108 = lean::cnstr_get(x_79, 0);
lean::inc(x_108);
x_110 = lean::cnstr_get_scalar<unsigned char>(x_79, sizeof(void*)*1);
if (x_110 == 0)
{
obj* x_112; obj* x_114; obj* x_116; obj* x_119; obj* x_120; obj* x_123; obj* x_124; obj* x_125; 
lean::dec(x_79);
x_112 = lean::cnstr_get(x_108, 0);
lean::inc(x_112);
x_114 = lean::cnstr_get(x_108, 1);
lean::inc(x_114);
x_116 = lean::cnstr_get(x_108, 2);
lean::inc(x_116);
lean::inc(x_76);
x_119 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_119, 0, x_76);
lean::closure_set(x_119, 1, x_116);
x_120 = lean::cnstr_get(x_108, 3);
lean::inc(x_120);
lean::dec(x_108);
x_123 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_123, 0, x_112);
lean::cnstr_set(x_123, 1, x_114);
lean::cnstr_set(x_123, 2, x_119);
lean::cnstr_set(x_123, 3, x_120);
x_124 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_124, 0, x_123);
lean::cnstr_set_scalar(x_124, sizeof(void*)*1, x_110);
x_125 = x_124;
return x_125;
}
else
{
if (lean::obj_tag(x_79) == 0)
{
obj* x_126; obj* x_128; unsigned x_131; obj* x_133; obj* x_134; 
x_126 = lean::cnstr_get(x_79, 1);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_79, 2);
lean::inc(x_128);
lean::dec(x_79);
x_131 = lean::unbox_uint32(x_108);
lean::dec(x_108);
x_133 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__21(x_131, x_126);
x_134 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_128, x_133);
return x_134;
}
else
{
obj* x_135; obj* x_136; obj* x_137; 
if (lean::is_shared(x_79)) {
 lean::dec(x_79);
 x_135 = lean::box(0);
} else {
 lean::cnstr_release(x_79, 0);
 x_135 = x_79;
}
if (lean::is_scalar(x_135)) {
 x_136 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_136 = x_135;
}
lean::cnstr_set(x_136, 0, x_108);
lean::cnstr_set_scalar(x_136, sizeof(void*)*1, x_110);
x_137 = x_136;
return x_137;
}
}
}
}
else
{
obj* x_139; obj* x_140; obj* x_141; obj* x_142; 
lean::inc(x_0);
x_139 = lean::string_iterator_next(x_0);
x_140 = lean::box(0);
x_141 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__23(x_0, x_139);
x_142 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_140, x_141);
return x_142;
}
}
}
}
obj* l_lean_parser_monad__parsec_num___at_lean_ir_parse__literal___spec__9(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_monad__parsec_take__while1___at_lean_ir_parse__literal___spec__10(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_12; obj* x_13; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 lean::cnstr_release(x_1, 2);
 x_8 = x_1;
}
x_9 = l_string_to__nat(x_2);
x_10 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_10);
if (lean::is_scalar(x_8)) {
 x_12 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_12 = x_8;
}
lean::cnstr_set(x_12, 0, x_9);
lean::cnstr_set(x_12, 1, x_4);
lean::cnstr_set(x_12, 2, x_10);
x_13 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_12);
return x_13;
}
else
{
obj* x_14; unsigned char x_16; obj* x_17; obj* x_18; obj* x_19; 
x_14 = lean::cnstr_get(x_1, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get_scalar<unsigned char>(x_1, sizeof(void*)*1);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_17 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 x_17 = x_1;
}
if (lean::is_scalar(x_17)) {
 x_18 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_18 = x_17;
}
lean::cnstr_set(x_18, 0, x_14);
lean::cnstr_set_scalar(x_18, sizeof(void*)*1, x_16);
x_19 = x_18;
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2(x_2, x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__11___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__11(x_2, x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__13___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__13(x_2, x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__15___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__15(x_2, x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__17___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__17(x_2, x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__19___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__19(x_2, x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__21___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_parse__literal___spec__21(x_2, x_1);
return x_3;
}
}
obj* l_lean_ir_parse__uint16(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_6; 
lean::inc(x_0);
x_6 = l_lean_parser_monad__parsec_num___at_lean_ir_parse__literal___spec__9(x_0);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_14; 
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 2);
lean::inc(x_11);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_13 = x_6;
}
x_14 = l_lean_parser_monad__parsec_whitespace___at_lean_ir_symbol___spec__2(x_9);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_17; obj* x_20; obj* x_22; obj* x_23; obj* x_24; 
x_15 = lean::cnstr_get(x_14, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 2);
lean::inc(x_17);
lean::dec(x_14);
x_20 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_20);
if (lean::is_scalar(x_13)) {
 x_22 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_22 = x_13;
}
lean::cnstr_set(x_22, 0, x_7);
lean::cnstr_set(x_22, 1, x_15);
lean::cnstr_set(x_22, 2, x_20);
x_23 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_22);
x_24 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_23);
if (lean::obj_tag(x_24) == 0)
{
obj* x_25; obj* x_27; obj* x_29; 
x_25 = lean::cnstr_get(x_24, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_24, 2);
lean::inc(x_29);
lean::dec(x_24);
x_1 = x_25;
x_2 = x_27;
x_3 = x_29;
goto lbl_4;
}
else
{
obj* x_33; unsigned char x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_40; obj* x_41; obj* x_42; obj* x_44; 
lean::dec(x_0);
x_33 = lean::cnstr_get(x_24, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get_scalar<unsigned char>(x_24, sizeof(void*)*1);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_36 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_36 = x_24;
}
if (lean::is_scalar(x_36)) {
 x_37 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_37 = x_36;
}
lean::cnstr_set(x_37, 0, x_33);
lean::cnstr_set_scalar(x_37, sizeof(void*)*1, x_35);
x_38 = x_37;
lean::inc(x_20);
x_40 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_20, x_38);
x_41 = l_lean_parser_parsec__t_try__mk__res___rarg(x_40);
x_42 = l_lean_ir_parse__uint16___closed__1;
lean::inc(x_42);
x_44 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_41, x_42);
return x_44;
}
}
else
{
obj* x_47; unsigned char x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
lean::dec(x_13);
lean::dec(x_7);
x_47 = lean::cnstr_get(x_14, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get_scalar<unsigned char>(x_14, sizeof(void*)*1);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_50 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_50 = x_14;
}
if (lean::is_scalar(x_50)) {
 x_51 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_51 = x_50;
}
lean::cnstr_set(x_51, 0, x_47);
lean::cnstr_set_scalar(x_51, sizeof(void*)*1, x_49);
x_52 = x_51;
x_53 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_52);
if (lean::obj_tag(x_53) == 0)
{
obj* x_54; obj* x_56; obj* x_58; 
x_54 = lean::cnstr_get(x_53, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_53, 1);
lean::inc(x_56);
x_58 = lean::cnstr_get(x_53, 2);
lean::inc(x_58);
lean::dec(x_53);
x_1 = x_54;
x_2 = x_56;
x_3 = x_58;
goto lbl_4;
}
else
{
obj* x_62; unsigned char x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_70; obj* x_71; obj* x_72; obj* x_74; 
lean::dec(x_0);
x_62 = lean::cnstr_get(x_53, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get_scalar<unsigned char>(x_53, sizeof(void*)*1);
if (lean::is_shared(x_53)) {
 lean::dec(x_53);
 x_65 = lean::box(0);
} else {
 lean::cnstr_release(x_53, 0);
 x_65 = x_53;
}
if (lean::is_scalar(x_65)) {
 x_66 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_66 = x_65;
}
lean::cnstr_set(x_66, 0, x_62);
lean::cnstr_set_scalar(x_66, sizeof(void*)*1, x_64);
x_67 = x_66;
x_68 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_68);
x_70 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_68, x_67);
x_71 = l_lean_parser_parsec__t_try__mk__res___rarg(x_70);
x_72 = l_lean_ir_parse__uint16___closed__1;
lean::inc(x_72);
x_74 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_71, x_72);
return x_74;
}
}
}
else
{
obj* x_76; unsigned char x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_84; obj* x_85; obj* x_86; obj* x_88; 
lean::dec(x_0);
x_76 = lean::cnstr_get(x_6, 0);
lean::inc(x_76);
x_78 = lean::cnstr_get_scalar<unsigned char>(x_6, sizeof(void*)*1);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_79 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 x_79 = x_6;
}
if (lean::is_scalar(x_79)) {
 x_80 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_80 = x_79;
}
lean::cnstr_set(x_80, 0, x_76);
lean::cnstr_set_scalar(x_80, sizeof(void*)*1, x_78);
x_81 = x_80;
x_82 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_82);
x_84 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_82, x_81);
x_85 = l_lean_parser_parsec__t_try__mk__res___rarg(x_84);
x_86 = l_lean_ir_parse__uint16___closed__1;
lean::inc(x_86);
x_88 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_85, x_86);
return x_88;
}
lbl_4:
{
obj* x_89; obj* x_90; 
x_89 = l_uint16__sz;
x_90 = lean::nat_dec_le(x_89, x_1);
if (lean::obj_tag(x_90) == 0)
{
unsigned short x_93; obj* x_95; obj* x_96; obj* x_98; obj* x_99; obj* x_100; obj* x_102; obj* x_103; obj* x_104; obj* x_106; 
lean::dec(x_90);
lean::dec(x_0);
x_93 = lean::uint16_of_nat(x_1);
lean::dec(x_1);
x_95 = l_lean_ir_keyword___closed__1;
x_96 = lean::box(x_93);
lean::inc(x_95);
x_98 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_98, 0, x_96);
lean::cnstr_set(x_98, 1, x_2);
lean::cnstr_set(x_98, 2, x_95);
x_99 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_98);
x_100 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_100);
x_102 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_100, x_99);
x_103 = l_lean_parser_parsec__t_try__mk__res___rarg(x_102);
x_104 = l_lean_ir_parse__uint16___closed__1;
lean::inc(x_104);
x_106 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_103, x_104);
return x_106;
}
else
{
obj* x_108; obj* x_110; 
lean::dec(x_90);
x_108 = l_lean_ir_parse__uint16___closed__2;
lean::inc(x_108);
x_110 = l_lean_parser_monad__parsec_unexpected__at___at_lean_ir_parse__literal___spec__8___rarg(x_108, x_0, x_2);
if (lean::obj_tag(x_110) == 0)
{
obj* x_111; obj* x_113; obj* x_115; unsigned short x_116; obj* x_118; obj* x_119; obj* x_121; obj* x_122; obj* x_123; obj* x_125; obj* x_126; obj* x_127; obj* x_129; 
x_111 = lean::cnstr_get(x_110, 1);
lean::inc(x_111);
x_113 = lean::cnstr_get(x_110, 2);
lean::inc(x_113);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_115 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 lean::cnstr_release(x_110, 1);
 lean::cnstr_release(x_110, 2);
 x_115 = x_110;
}
x_116 = lean::uint16_of_nat(x_1);
lean::dec(x_1);
x_118 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_119 = lean::box(x_116);
lean::inc(x_118);
if (lean::is_scalar(x_115)) {
 x_121 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_121 = x_115;
}
lean::cnstr_set(x_121, 0, x_119);
lean::cnstr_set(x_121, 1, x_111);
lean::cnstr_set(x_121, 2, x_118);
x_122 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_113, x_121);
x_123 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_122);
lean::inc(x_118);
x_125 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_118, x_123);
x_126 = l_lean_parser_parsec__t_try__mk__res___rarg(x_125);
x_127 = l_lean_ir_parse__uint16___closed__1;
lean::inc(x_127);
x_129 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_126, x_127);
return x_129;
}
else
{
obj* x_131; unsigned char x_133; obj* x_134; obj* x_135; obj* x_136; obj* x_137; obj* x_138; obj* x_140; obj* x_141; obj* x_142; obj* x_144; 
lean::dec(x_1);
x_131 = lean::cnstr_get(x_110, 0);
lean::inc(x_131);
x_133 = lean::cnstr_get_scalar<unsigned char>(x_110, sizeof(void*)*1);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_134 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 x_134 = x_110;
}
if (lean::is_scalar(x_134)) {
 x_135 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_135 = x_134;
}
lean::cnstr_set(x_135, 0, x_131);
lean::cnstr_set_scalar(x_135, sizeof(void*)*1, x_133);
x_136 = x_135;
x_137 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_136);
x_138 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_138);
x_140 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_138, x_137);
x_141 = l_lean_parser_parsec__t_try__mk__res___rarg(x_140);
x_142 = l_lean_ir_parse__uint16___closed__1;
lean::inc(x_142);
x_144 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_141, x_142);
return x_144;
}
}
}
}
}
obj* _init_l_lean_ir_parse__uint16___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("uint16");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_ir_parse__uint16___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("big numeral, it does not fit in an uint16");
return x_0;
}
}
obj* l_lean_ir_parse__usize(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_6; 
lean::inc(x_0);
x_6 = l_lean_parser_monad__parsec_num___at_lean_ir_parse__literal___spec__9(x_0);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_14; 
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 2);
lean::inc(x_11);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_13 = x_6;
}
x_14 = l_lean_parser_monad__parsec_whitespace___at_lean_ir_symbol___spec__2(x_9);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_17; obj* x_20; obj* x_22; obj* x_23; obj* x_24; 
x_15 = lean::cnstr_get(x_14, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 2);
lean::inc(x_17);
lean::dec(x_14);
x_20 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_20);
if (lean::is_scalar(x_13)) {
 x_22 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_22 = x_13;
}
lean::cnstr_set(x_22, 0, x_7);
lean::cnstr_set(x_22, 1, x_15);
lean::cnstr_set(x_22, 2, x_20);
x_23 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_22);
x_24 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_23);
if (lean::obj_tag(x_24) == 0)
{
obj* x_25; obj* x_27; obj* x_29; 
x_25 = lean::cnstr_get(x_24, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_24, 2);
lean::inc(x_29);
lean::dec(x_24);
x_1 = x_25;
x_2 = x_27;
x_3 = x_29;
goto lbl_4;
}
else
{
obj* x_33; unsigned char x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_40; obj* x_41; obj* x_42; obj* x_44; 
lean::dec(x_0);
x_33 = lean::cnstr_get(x_24, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get_scalar<unsigned char>(x_24, sizeof(void*)*1);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_36 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_36 = x_24;
}
if (lean::is_scalar(x_36)) {
 x_37 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_37 = x_36;
}
lean::cnstr_set(x_37, 0, x_33);
lean::cnstr_set_scalar(x_37, sizeof(void*)*1, x_35);
x_38 = x_37;
lean::inc(x_20);
x_40 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_20, x_38);
x_41 = l_lean_parser_parsec__t_try__mk__res___rarg(x_40);
x_42 = l_lean_ir_parse__usize___closed__1;
lean::inc(x_42);
x_44 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_41, x_42);
return x_44;
}
}
else
{
obj* x_47; unsigned char x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
lean::dec(x_13);
lean::dec(x_7);
x_47 = lean::cnstr_get(x_14, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get_scalar<unsigned char>(x_14, sizeof(void*)*1);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_50 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_50 = x_14;
}
if (lean::is_scalar(x_50)) {
 x_51 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_51 = x_50;
}
lean::cnstr_set(x_51, 0, x_47);
lean::cnstr_set_scalar(x_51, sizeof(void*)*1, x_49);
x_52 = x_51;
x_53 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_52);
if (lean::obj_tag(x_53) == 0)
{
obj* x_54; obj* x_56; obj* x_58; 
x_54 = lean::cnstr_get(x_53, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_53, 1);
lean::inc(x_56);
x_58 = lean::cnstr_get(x_53, 2);
lean::inc(x_58);
lean::dec(x_53);
x_1 = x_54;
x_2 = x_56;
x_3 = x_58;
goto lbl_4;
}
else
{
obj* x_62; unsigned char x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_70; obj* x_71; obj* x_72; obj* x_74; 
lean::dec(x_0);
x_62 = lean::cnstr_get(x_53, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get_scalar<unsigned char>(x_53, sizeof(void*)*1);
if (lean::is_shared(x_53)) {
 lean::dec(x_53);
 x_65 = lean::box(0);
} else {
 lean::cnstr_release(x_53, 0);
 x_65 = x_53;
}
if (lean::is_scalar(x_65)) {
 x_66 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_66 = x_65;
}
lean::cnstr_set(x_66, 0, x_62);
lean::cnstr_set_scalar(x_66, sizeof(void*)*1, x_64);
x_67 = x_66;
x_68 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_68);
x_70 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_68, x_67);
x_71 = l_lean_parser_parsec__t_try__mk__res___rarg(x_70);
x_72 = l_lean_ir_parse__usize___closed__1;
lean::inc(x_72);
x_74 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_71, x_72);
return x_74;
}
}
}
else
{
obj* x_76; unsigned char x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_84; obj* x_85; obj* x_86; obj* x_88; 
lean::dec(x_0);
x_76 = lean::cnstr_get(x_6, 0);
lean::inc(x_76);
x_78 = lean::cnstr_get_scalar<unsigned char>(x_6, sizeof(void*)*1);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_79 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 x_79 = x_6;
}
if (lean::is_scalar(x_79)) {
 x_80 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_80 = x_79;
}
lean::cnstr_set(x_80, 0, x_76);
lean::cnstr_set_scalar(x_80, sizeof(void*)*1, x_78);
x_81 = x_80;
x_82 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_82);
x_84 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_82, x_81);
x_85 = l_lean_parser_parsec__t_try__mk__res___rarg(x_84);
x_86 = l_lean_ir_parse__usize___closed__1;
lean::inc(x_86);
x_88 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_85, x_86);
return x_88;
}
lbl_4:
{
obj* x_89; obj* x_90; 
x_89 = l_usize__sz;
x_90 = lean::nat_dec_le(x_89, x_1);
if (lean::obj_tag(x_90) == 0)
{
size_t x_93; obj* x_95; obj* x_96; obj* x_98; obj* x_99; obj* x_100; obj* x_102; obj* x_103; obj* x_104; obj* x_106; 
lean::dec(x_90);
lean::dec(x_0);
x_93 = lean::usize_of_nat(x_1);
lean::dec(x_1);
x_95 = l_lean_ir_keyword___closed__1;
x_96 = lean::box_size_t(x_93);
lean::inc(x_95);
x_98 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_98, 0, x_96);
lean::cnstr_set(x_98, 1, x_2);
lean::cnstr_set(x_98, 2, x_95);
x_99 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_98);
x_100 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_100);
x_102 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_100, x_99);
x_103 = l_lean_parser_parsec__t_try__mk__res___rarg(x_102);
x_104 = l_lean_ir_parse__usize___closed__1;
lean::inc(x_104);
x_106 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_103, x_104);
return x_106;
}
else
{
obj* x_108; obj* x_110; 
lean::dec(x_90);
x_108 = l_lean_ir_parse__usize___closed__2;
lean::inc(x_108);
x_110 = l_lean_parser_monad__parsec_unexpected__at___at_lean_ir_parse__literal___spec__8___rarg(x_108, x_0, x_2);
if (lean::obj_tag(x_110) == 0)
{
obj* x_111; obj* x_113; obj* x_115; size_t x_116; obj* x_118; obj* x_119; obj* x_121; obj* x_122; obj* x_123; obj* x_125; obj* x_126; obj* x_127; obj* x_129; 
x_111 = lean::cnstr_get(x_110, 1);
lean::inc(x_111);
x_113 = lean::cnstr_get(x_110, 2);
lean::inc(x_113);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_115 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 lean::cnstr_release(x_110, 1);
 lean::cnstr_release(x_110, 2);
 x_115 = x_110;
}
x_116 = lean::usize_of_nat(x_1);
lean::dec(x_1);
x_118 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_119 = lean::box_size_t(x_116);
lean::inc(x_118);
if (lean::is_scalar(x_115)) {
 x_121 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_121 = x_115;
}
lean::cnstr_set(x_121, 0, x_119);
lean::cnstr_set(x_121, 1, x_111);
lean::cnstr_set(x_121, 2, x_118);
x_122 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_113, x_121);
x_123 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_122);
lean::inc(x_118);
x_125 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_118, x_123);
x_126 = l_lean_parser_parsec__t_try__mk__res___rarg(x_125);
x_127 = l_lean_ir_parse__usize___closed__1;
lean::inc(x_127);
x_129 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_126, x_127);
return x_129;
}
else
{
obj* x_131; unsigned char x_133; obj* x_134; obj* x_135; obj* x_136; obj* x_137; obj* x_138; obj* x_140; obj* x_141; obj* x_142; obj* x_144; 
lean::dec(x_1);
x_131 = lean::cnstr_get(x_110, 0);
lean::inc(x_131);
x_133 = lean::cnstr_get_scalar<unsigned char>(x_110, sizeof(void*)*1);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_134 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 x_134 = x_110;
}
if (lean::is_scalar(x_134)) {
 x_135 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_135 = x_134;
}
lean::cnstr_set(x_135, 0, x_131);
lean::cnstr_set_scalar(x_135, sizeof(void*)*1, x_133);
x_136 = x_135;
x_137 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_136);
x_138 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_138);
x_140 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_138, x_137);
x_141 = l_lean_parser_parsec__t_try__mk__res___rarg(x_140);
x_142 = l_lean_ir_parse__usize___closed__1;
lean::inc(x_142);
x_144 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_141, x_142);
return x_144;
}
}
}
}
}
obj* _init_l_lean_ir_parse__usize___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("usize");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_ir_parse__usize___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("big numeral, it does not fit in an usize");
return x_0;
}
}
obj* l_lean_ir_identifier(obj* x_0) {
_start:
{
obj* x_2; 
lean::inc(x_0);
x_2 = l_lean_parser_identifier___at_lean_ir_identifier___spec__1(x_0);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; unsigned char x_11; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 2);
lean::inc(x_7);
if (lean::is_shared(x_2)) {
 lean::dec(x_2);
 x_9 = lean::box(0);
} else {
 lean::cnstr_release(x_2, 0);
 lean::cnstr_release(x_2, 1);
 lean::cnstr_release(x_2, 2);
 x_9 = x_2;
}
lean::inc(x_3);
x_11 = l_lean_ir_is__reserved__name___main(x_3);
if (x_11 == 0)
{
obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_23; 
lean::dec(x_0);
x_13 = l_lean_ir_keyword___closed__1;
lean::inc(x_13);
if (lean::is_scalar(x_9)) {
 x_15 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_15 = x_9;
}
lean::cnstr_set(x_15, 0, x_3);
lean::cnstr_set(x_15, 1, x_5);
lean::cnstr_set(x_15, 2, x_13);
x_16 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_15);
x_17 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_17);
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_16);
x_20 = l_lean_parser_parsec__t_try__mk__res___rarg(x_19);
x_21 = l_lean_ir_identifier___closed__1;
lean::inc(x_21);
x_23 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_20, x_21);
return x_23;
}
else
{
obj* x_24; obj* x_26; 
x_24 = l_lean_ir_identifier___closed__2;
lean::inc(x_24);
x_26 = l_lean_parser_monad__parsec_unexpected__at___at_lean_ir_parse__literal___spec__8___rarg(x_24, x_0, x_5);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; obj* x_29; obj* x_32; obj* x_34; obj* x_35; obj* x_36; obj* x_38; obj* x_39; obj* x_40; obj* x_42; 
x_27 = lean::cnstr_get(x_26, 1);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_26, 2);
lean::inc(x_29);
lean::dec(x_26);
x_32 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_32);
if (lean::is_scalar(x_9)) {
 x_34 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_34 = x_9;
}
lean::cnstr_set(x_34, 0, x_3);
lean::cnstr_set(x_34, 1, x_27);
lean::cnstr_set(x_34, 2, x_32);
x_35 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_29, x_34);
x_36 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_35);
lean::inc(x_32);
x_38 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_32, x_36);
x_39 = l_lean_parser_parsec__t_try__mk__res___rarg(x_38);
x_40 = l_lean_ir_identifier___closed__1;
lean::inc(x_40);
x_42 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_39, x_40);
return x_42;
}
else
{
obj* x_45; unsigned char x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_54; obj* x_55; obj* x_56; obj* x_58; 
lean::dec(x_9);
lean::dec(x_3);
x_45 = lean::cnstr_get(x_26, 0);
lean::inc(x_45);
x_47 = lean::cnstr_get_scalar<unsigned char>(x_26, sizeof(void*)*1);
if (lean::is_shared(x_26)) {
 lean::dec(x_26);
 x_48 = lean::box(0);
} else {
 lean::cnstr_release(x_26, 0);
 x_48 = x_26;
}
if (lean::is_scalar(x_48)) {
 x_49 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_49 = x_48;
}
lean::cnstr_set(x_49, 0, x_45);
lean::cnstr_set_scalar(x_49, sizeof(void*)*1, x_47);
x_50 = x_49;
x_51 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_50);
x_52 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_52);
x_54 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_52, x_51);
x_55 = l_lean_parser_parsec__t_try__mk__res___rarg(x_54);
x_56 = l_lean_ir_identifier___closed__1;
lean::inc(x_56);
x_58 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_55, x_56);
return x_58;
}
}
}
else
{
obj* x_60; unsigned char x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_68; obj* x_69; obj* x_70; obj* x_72; 
lean::dec(x_0);
x_60 = lean::cnstr_get(x_2, 0);
lean::inc(x_60);
x_62 = lean::cnstr_get_scalar<unsigned char>(x_2, sizeof(void*)*1);
if (lean::is_shared(x_2)) {
 lean::dec(x_2);
 x_63 = lean::box(0);
} else {
 lean::cnstr_release(x_2, 0);
 x_63 = x_2;
}
if (lean::is_scalar(x_63)) {
 x_64 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_64 = x_63;
}
lean::cnstr_set(x_64, 0, x_60);
lean::cnstr_set_scalar(x_64, sizeof(void*)*1, x_62);
x_65 = x_64;
x_66 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_66);
x_68 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_66, x_65);
x_69 = l_lean_parser_parsec__t_try__mk__res___rarg(x_68);
x_70 = l_lean_ir_identifier___closed__1;
lean::inc(x_70);
x_72 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_69, x_70);
return x_72;
}
}
}
obj* _init_l_lean_ir_identifier___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("identifier");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_ir_identifier___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("keyword");
return x_0;
}
}
obj* l_lean_parser_monad__parsec_curr___at_lean_ir_identifier___spec__3(obj* x_0) {
_start:
{
unsigned x_1; obj* x_2; obj* x_3; obj* x_5; 
x_1 = lean::string_iterator_curr(x_0);
x_2 = l_lean_ir_keyword___closed__1;
x_3 = lean::box_uint32(x_1);
lean::inc(x_2);
x_5 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_0);
lean::cnstr_set(x_5, 2, x_2);
return x_5;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__6(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_lean_is__id__rest(x_10);
if (x_11 == 0)
{
obj* x_13; 
lean::dec(x_0);
x_13 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_18; obj* x_19; 
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
x_18 = lean::string_push(x_1, x_10);
x_19 = lean::string_iterator_next(x_2);
x_0 = x_15;
x_1 = x_18;
x_2 = x_19;
goto _start;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__5(unsigned x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_string_join___closed__1;
lean::inc(x_2);
x_4 = lean::string_push(x_2, x_0);
x_5 = lean::string_iterator_remaining(x_1);
x_6 = l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__6(x_5, x_4, x_1);
return x_6;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__8(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_lean_is__id__rest(x_10);
if (x_11 == 0)
{
obj* x_13; 
lean::dec(x_0);
x_13 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_18; obj* x_19; 
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
x_18 = lean::string_push(x_1, x_10);
x_19 = lean::string_iterator_next(x_2);
x_0 = x_15;
x_1 = x_18;
x_2 = x_19;
goto _start;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__7(unsigned x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_string_join___closed__1;
lean::inc(x_2);
x_4 = lean::string_push(x_2, x_0);
x_5 = lean::string_iterator_remaining(x_1);
x_6 = l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__8(x_5, x_4, x_1);
return x_6;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__10(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_lean_is__id__rest(x_10);
if (x_11 == 0)
{
obj* x_13; 
lean::dec(x_0);
x_13 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_18; obj* x_19; 
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
x_18 = lean::string_push(x_1, x_10);
x_19 = lean::string_iterator_next(x_2);
x_0 = x_15;
x_1 = x_18;
x_2 = x_19;
goto _start;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__9(unsigned x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_string_join___closed__1;
lean::inc(x_2);
x_4 = lean::string_push(x_2, x_0);
x_5 = lean::string_iterator_remaining(x_1);
x_6 = l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__10(x_5, x_4, x_1);
return x_6;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__12(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_lean_is__id__rest(x_10);
if (x_11 == 0)
{
obj* x_13; 
lean::dec(x_0);
x_13 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_18; obj* x_19; 
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
x_18 = lean::string_push(x_1, x_10);
x_19 = lean::string_iterator_next(x_2);
x_0 = x_15;
x_1 = x_18;
x_2 = x_19;
goto _start;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__11(unsigned x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_string_join___closed__1;
lean::inc(x_2);
x_4 = lean::string_push(x_2, x_0);
x_5 = lean::string_iterator_remaining(x_1);
x_6 = l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__12(x_5, x_4, x_1);
return x_6;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__14(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_lean_is__id__rest(x_10);
if (x_11 == 0)
{
obj* x_13; 
lean::dec(x_0);
x_13 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_18; obj* x_19; 
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
x_18 = lean::string_push(x_1, x_10);
x_19 = lean::string_iterator_next(x_2);
x_0 = x_15;
x_1 = x_18;
x_2 = x_19;
goto _start;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__13(unsigned x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_string_join___closed__1;
lean::inc(x_2);
x_4 = lean::string_push(x_2, x_0);
x_5 = lean::string_iterator_remaining(x_1);
x_6 = l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__14(x_5, x_4, x_1);
return x_6;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__16(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_lean_is__id__rest(x_10);
if (x_11 == 0)
{
obj* x_13; 
lean::dec(x_0);
x_13 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_18; obj* x_19; 
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
x_18 = lean::string_push(x_1, x_10);
x_19 = lean::string_iterator_next(x_2);
x_0 = x_15;
x_1 = x_18;
x_2 = x_19;
goto _start;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__15(unsigned x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_string_join___closed__1;
lean::inc(x_2);
x_4 = lean::string_push(x_2, x_0);
x_5 = lean::string_iterator_remaining(x_1);
x_6 = l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__16(x_5, x_4, x_1);
return x_6;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__18(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_lean_is__id__rest(x_10);
if (x_11 == 0)
{
obj* x_13; 
lean::dec(x_0);
x_13 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_18; obj* x_19; 
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
x_18 = lean::string_push(x_1, x_10);
x_19 = lean::string_iterator_next(x_2);
x_0 = x_15;
x_1 = x_18;
x_2 = x_19;
goto _start;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__17(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; 
x_2 = lean::string_iterator_curr(x_0);
lean::dec(x_0);
x_4 = l_string_join___closed__1;
lean::inc(x_4);
x_6 = lean::string_push(x_4, x_2);
x_7 = lean::string_iterator_remaining(x_1);
x_8 = l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__18(x_7, x_6, x_1);
return x_8;
}
}
obj* l_lean_parser_id__part__default___at_lean_ir_identifier___spec__4(obj* x_0) {
_start:
{
unsigned char x_1; 
x_1 = lean::string_iterator_has_next(x_0);
if (x_1 == 0)
{
obj* x_2; obj* x_3; obj* x_4; obj* x_8; 
x_2 = lean::box(0);
x_3 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_4 = l_mjoin___rarg___closed__1;
lean::inc(x_2);
lean::inc(x_4);
lean::inc(x_3);
x_8 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_3, x_4, x_2, x_2, x_0);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; obj* x_11; obj* x_13; 
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_8, 2);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
if (lean::obj_tag(x_8) == 0)
{
unsigned x_16; obj* x_18; obj* x_19; 
lean::dec(x_8);
x_16 = lean::unbox_uint32(x_9);
lean::dec(x_9);
x_18 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__5(x_16, x_11);
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_18);
return x_19;
}
else
{
unsigned char x_22; obj* x_23; obj* x_24; obj* x_25; 
lean::dec(x_13);
lean::dec(x_11);
x_22 = lean::cnstr_get_scalar<unsigned char>(x_8, sizeof(void*)*1);
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_23 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 x_23 = x_8;
}
if (lean::is_scalar(x_23)) {
 x_24 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_24 = x_23;
}
lean::cnstr_set(x_24, 0, x_9);
lean::cnstr_set_scalar(x_24, sizeof(void*)*1, x_22);
x_25 = x_24;
return x_25;
}
}
else
{
obj* x_27; obj* x_29; obj* x_31; obj* x_32; unsigned x_33; obj* x_35; obj* x_36; 
lean::dec(x_8);
x_27 = lean::cnstr_get(x_13, 0);
lean::inc(x_27);
if (lean::is_shared(x_13)) {
 lean::dec(x_13);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_13, 0);
 x_29 = x_13;
}
lean::inc(x_4);
x_31 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_31, 0, x_4);
lean::closure_set(x_31, 1, x_27);
if (lean::is_scalar(x_29)) {
 x_32 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_32 = x_29;
}
lean::cnstr_set(x_32, 0, x_31);
x_33 = lean::unbox_uint32(x_9);
lean::dec(x_9);
x_35 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__7(x_33, x_11);
x_36 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_32, x_35);
return x_36;
}
}
else
{
obj* x_37; unsigned char x_39; 
x_37 = lean::cnstr_get(x_8, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get_scalar<unsigned char>(x_8, sizeof(void*)*1);
if (x_39 == 0)
{
obj* x_41; obj* x_43; obj* x_45; obj* x_48; obj* x_49; obj* x_52; obj* x_53; obj* x_54; 
lean::dec(x_8);
x_41 = lean::cnstr_get(x_37, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_37, 1);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_37, 2);
lean::inc(x_45);
lean::inc(x_4);
x_48 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_48, 0, x_4);
lean::closure_set(x_48, 1, x_45);
x_49 = lean::cnstr_get(x_37, 3);
lean::inc(x_49);
lean::dec(x_37);
x_52 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_52, 0, x_41);
lean::cnstr_set(x_52, 1, x_43);
lean::cnstr_set(x_52, 2, x_48);
lean::cnstr_set(x_52, 3, x_49);
x_53 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set_scalar(x_53, sizeof(void*)*1, x_39);
x_54 = x_53;
return x_54;
}
else
{
if (lean::obj_tag(x_8) == 0)
{
obj* x_55; obj* x_57; unsigned x_60; obj* x_62; obj* x_63; 
x_55 = lean::cnstr_get(x_8, 1);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_8, 2);
lean::inc(x_57);
lean::dec(x_8);
x_60 = lean::unbox_uint32(x_37);
lean::dec(x_37);
x_62 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__9(x_60, x_55);
x_63 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_57, x_62);
return x_63;
}
else
{
obj* x_64; obj* x_65; obj* x_66; 
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_64 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 x_64 = x_8;
}
if (lean::is_scalar(x_64)) {
 x_65 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_65 = x_64;
}
lean::cnstr_set(x_65, 0, x_37);
lean::cnstr_set_scalar(x_65, sizeof(void*)*1, x_39);
x_66 = x_65;
return x_66;
}
}
}
}
else
{
unsigned x_67; unsigned char x_68; 
x_67 = lean::string_iterator_curr(x_0);
x_68 = l_lean_is__id__first(x_67);
if (x_68 == 0)
{
obj* x_69; obj* x_70; obj* x_72; obj* x_74; obj* x_75; obj* x_76; obj* x_79; 
x_69 = l_char_quote__core(x_67);
x_70 = l_char_has__repr___closed__1;
lean::inc(x_70);
x_72 = lean::string_append(x_70, x_69);
lean::dec(x_69);
x_74 = lean::string_append(x_72, x_70);
x_75 = lean::box(0);
x_76 = l_mjoin___rarg___closed__1;
lean::inc(x_75);
lean::inc(x_76);
x_79 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_74, x_76, x_75, x_75, x_0);
if (lean::obj_tag(x_79) == 0)
{
obj* x_80; obj* x_82; obj* x_84; 
x_80 = lean::cnstr_get(x_79, 0);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_79, 1);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_79, 2);
lean::inc(x_84);
if (lean::obj_tag(x_84) == 0)
{
if (lean::obj_tag(x_79) == 0)
{
unsigned x_87; obj* x_89; obj* x_90; 
lean::dec(x_79);
x_87 = lean::unbox_uint32(x_80);
lean::dec(x_80);
x_89 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__11(x_87, x_82);
x_90 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_84, x_89);
return x_90;
}
else
{
unsigned char x_93; obj* x_94; obj* x_95; obj* x_96; 
lean::dec(x_82);
lean::dec(x_84);
x_93 = lean::cnstr_get_scalar<unsigned char>(x_79, sizeof(void*)*1);
if (lean::is_shared(x_79)) {
 lean::dec(x_79);
 x_94 = lean::box(0);
} else {
 lean::cnstr_release(x_79, 0);
 x_94 = x_79;
}
if (lean::is_scalar(x_94)) {
 x_95 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_95 = x_94;
}
lean::cnstr_set(x_95, 0, x_80);
lean::cnstr_set_scalar(x_95, sizeof(void*)*1, x_93);
x_96 = x_95;
return x_96;
}
}
else
{
obj* x_98; obj* x_100; obj* x_102; obj* x_103; unsigned x_104; obj* x_106; obj* x_107; 
lean::dec(x_79);
x_98 = lean::cnstr_get(x_84, 0);
lean::inc(x_98);
if (lean::is_shared(x_84)) {
 lean::dec(x_84);
 x_100 = lean::box(0);
} else {
 lean::cnstr_release(x_84, 0);
 x_100 = x_84;
}
lean::inc(x_76);
x_102 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_102, 0, x_76);
lean::closure_set(x_102, 1, x_98);
if (lean::is_scalar(x_100)) {
 x_103 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_103 = x_100;
}
lean::cnstr_set(x_103, 0, x_102);
x_104 = lean::unbox_uint32(x_80);
lean::dec(x_80);
x_106 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__13(x_104, x_82);
x_107 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_103, x_106);
return x_107;
}
}
else
{
obj* x_108; unsigned char x_110; 
x_108 = lean::cnstr_get(x_79, 0);
lean::inc(x_108);
x_110 = lean::cnstr_get_scalar<unsigned char>(x_79, sizeof(void*)*1);
if (x_110 == 0)
{
obj* x_112; obj* x_114; obj* x_116; obj* x_119; obj* x_120; obj* x_123; obj* x_124; obj* x_125; 
lean::dec(x_79);
x_112 = lean::cnstr_get(x_108, 0);
lean::inc(x_112);
x_114 = lean::cnstr_get(x_108, 1);
lean::inc(x_114);
x_116 = lean::cnstr_get(x_108, 2);
lean::inc(x_116);
lean::inc(x_76);
x_119 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_119, 0, x_76);
lean::closure_set(x_119, 1, x_116);
x_120 = lean::cnstr_get(x_108, 3);
lean::inc(x_120);
lean::dec(x_108);
x_123 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_123, 0, x_112);
lean::cnstr_set(x_123, 1, x_114);
lean::cnstr_set(x_123, 2, x_119);
lean::cnstr_set(x_123, 3, x_120);
x_124 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_124, 0, x_123);
lean::cnstr_set_scalar(x_124, sizeof(void*)*1, x_110);
x_125 = x_124;
return x_125;
}
else
{
if (lean::obj_tag(x_79) == 0)
{
obj* x_126; obj* x_128; unsigned x_131; obj* x_133; obj* x_134; 
x_126 = lean::cnstr_get(x_79, 1);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_79, 2);
lean::inc(x_128);
lean::dec(x_79);
x_131 = lean::unbox_uint32(x_108);
lean::dec(x_108);
x_133 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__15(x_131, x_126);
x_134 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_128, x_133);
return x_134;
}
else
{
obj* x_135; obj* x_136; obj* x_137; 
if (lean::is_shared(x_79)) {
 lean::dec(x_79);
 x_135 = lean::box(0);
} else {
 lean::cnstr_release(x_79, 0);
 x_135 = x_79;
}
if (lean::is_scalar(x_135)) {
 x_136 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_136 = x_135;
}
lean::cnstr_set(x_136, 0, x_108);
lean::cnstr_set_scalar(x_136, sizeof(void*)*1, x_110);
x_137 = x_136;
return x_137;
}
}
}
}
else
{
obj* x_139; obj* x_140; obj* x_141; obj* x_142; 
lean::inc(x_0);
x_139 = lean::string_iterator_next(x_0);
x_140 = lean::box(0);
x_141 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__17(x_0, x_139);
x_142 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_140, x_141);
return x_142;
}
}
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__22(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_lean_is__id__end__escape(x_10);
if (x_11 == 0)
{
obj* x_12; obj* x_13; obj* x_16; obj* x_17; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_12);
lean::dec(x_0);
x_16 = lean::string_push(x_1, x_10);
x_17 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_16;
x_2 = x_17;
goto _start;
}
else
{
obj* x_20; 
lean::dec(x_0);
x_20 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_20;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__21(unsigned x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_string_join___closed__1;
lean::inc(x_2);
x_4 = lean::string_push(x_2, x_0);
x_5 = lean::string_iterator_remaining(x_1);
x_6 = l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__22(x_5, x_4, x_1);
return x_6;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__24(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_lean_is__id__end__escape(x_10);
if (x_11 == 0)
{
obj* x_12; obj* x_13; obj* x_16; obj* x_17; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_12);
lean::dec(x_0);
x_16 = lean::string_push(x_1, x_10);
x_17 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_16;
x_2 = x_17;
goto _start;
}
else
{
obj* x_20; 
lean::dec(x_0);
x_20 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_20;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__23(unsigned x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_string_join___closed__1;
lean::inc(x_2);
x_4 = lean::string_push(x_2, x_0);
x_5 = lean::string_iterator_remaining(x_1);
x_6 = l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__24(x_5, x_4, x_1);
return x_6;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__26(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_lean_is__id__end__escape(x_10);
if (x_11 == 0)
{
obj* x_12; obj* x_13; obj* x_16; obj* x_17; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_12);
lean::dec(x_0);
x_16 = lean::string_push(x_1, x_10);
x_17 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_16;
x_2 = x_17;
goto _start;
}
else
{
obj* x_20; 
lean::dec(x_0);
x_20 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_20;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__25(unsigned x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_string_join___closed__1;
lean::inc(x_2);
x_4 = lean::string_push(x_2, x_0);
x_5 = lean::string_iterator_remaining(x_1);
x_6 = l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__26(x_5, x_4, x_1);
return x_6;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__28(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_lean_is__id__end__escape(x_10);
if (x_11 == 0)
{
obj* x_12; obj* x_13; obj* x_16; obj* x_17; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_12);
lean::dec(x_0);
x_16 = lean::string_push(x_1, x_10);
x_17 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_16;
x_2 = x_17;
goto _start;
}
else
{
obj* x_20; 
lean::dec(x_0);
x_20 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_20;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__27(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; 
x_2 = lean::string_iterator_curr(x_0);
lean::dec(x_0);
x_4 = l_string_join___closed__1;
lean::inc(x_4);
x_6 = lean::string_push(x_4, x_2);
x_7 = lean::string_iterator_remaining(x_1);
x_8 = l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__28(x_7, x_6, x_1);
return x_8;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__30(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_lean_is__id__end__escape(x_10);
if (x_11 == 0)
{
obj* x_12; obj* x_13; obj* x_16; obj* x_17; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_12);
lean::dec(x_0);
x_16 = lean::string_push(x_1, x_10);
x_17 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_16;
x_2 = x_17;
goto _start;
}
else
{
obj* x_20; 
lean::dec(x_0);
x_20 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_20;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__29(unsigned x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_string_join___closed__1;
lean::inc(x_2);
x_4 = lean::string_push(x_2, x_0);
x_5 = lean::string_iterator_remaining(x_1);
x_6 = l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__30(x_5, x_4, x_1);
return x_6;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__32(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_lean_is__id__end__escape(x_10);
if (x_11 == 0)
{
obj* x_12; obj* x_13; obj* x_16; obj* x_17; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_12);
lean::dec(x_0);
x_16 = lean::string_push(x_1, x_10);
x_17 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_16;
x_2 = x_17;
goto _start;
}
else
{
obj* x_20; 
lean::dec(x_0);
x_20 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_20;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__31(unsigned x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_string_join___closed__1;
lean::inc(x_2);
x_4 = lean::string_push(x_2, x_0);
x_5 = lean::string_iterator_remaining(x_1);
x_6 = l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__32(x_5, x_4, x_1);
return x_6;
}
}
obj* l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__34(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned char x_7; 
lean::dec(x_4);
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_9; 
lean::dec(x_0);
x_9 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_9;
}
else
{
unsigned x_10; unsigned char x_11; 
x_10 = lean::string_iterator_curr(x_2);
x_11 = l_lean_is__id__end__escape(x_10);
if (x_11 == 0)
{
obj* x_12; obj* x_13; obj* x_16; obj* x_17; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_12);
lean::dec(x_0);
x_16 = lean::string_push(x_1, x_10);
x_17 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_16;
x_2 = x_17;
goto _start;
}
else
{
obj* x_20; 
lean::dec(x_0);
x_20 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_20;
}
}
}
else
{
obj* x_23; 
lean::dec(x_4);
lean::dec(x_0);
x_23 = l___private_2142412293__mk__string__result___rarg(x_1, x_2);
return x_23;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__33(unsigned x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_string_join___closed__1;
lean::inc(x_2);
x_4 = lean::string_push(x_2, x_0);
x_5 = lean::string_iterator_remaining(x_1);
x_6 = l___private_31565857__take__while__aux___main___at_lean_ir_identifier___spec__34(x_5, x_4, x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_ir_identifier___spec__20(obj* x_0) {
_start:
{
unsigned char x_1; 
x_1 = lean::string_iterator_has_next(x_0);
if (x_1 == 0)
{
obj* x_2; obj* x_3; obj* x_4; obj* x_8; 
x_2 = lean::box(0);
x_3 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_4 = l_mjoin___rarg___closed__1;
lean::inc(x_2);
lean::inc(x_4);
lean::inc(x_3);
x_8 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_3, x_4, x_2, x_2, x_0);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; obj* x_11; obj* x_13; 
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_8, 2);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
if (lean::obj_tag(x_8) == 0)
{
unsigned x_16; obj* x_18; obj* x_19; 
lean::dec(x_8);
x_16 = lean::unbox_uint32(x_9);
lean::dec(x_9);
x_18 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__21(x_16, x_11);
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_18);
return x_19;
}
else
{
unsigned char x_22; obj* x_23; obj* x_24; obj* x_25; 
lean::dec(x_13);
lean::dec(x_11);
x_22 = lean::cnstr_get_scalar<unsigned char>(x_8, sizeof(void*)*1);
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_23 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 x_23 = x_8;
}
if (lean::is_scalar(x_23)) {
 x_24 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_24 = x_23;
}
lean::cnstr_set(x_24, 0, x_9);
lean::cnstr_set_scalar(x_24, sizeof(void*)*1, x_22);
x_25 = x_24;
return x_25;
}
}
else
{
obj* x_27; obj* x_29; obj* x_31; obj* x_32; unsigned x_33; obj* x_35; obj* x_36; 
lean::dec(x_8);
x_27 = lean::cnstr_get(x_13, 0);
lean::inc(x_27);
if (lean::is_shared(x_13)) {
 lean::dec(x_13);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_13, 0);
 x_29 = x_13;
}
lean::inc(x_4);
x_31 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_31, 0, x_4);
lean::closure_set(x_31, 1, x_27);
if (lean::is_scalar(x_29)) {
 x_32 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_32 = x_29;
}
lean::cnstr_set(x_32, 0, x_31);
x_33 = lean::unbox_uint32(x_9);
lean::dec(x_9);
x_35 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__23(x_33, x_11);
x_36 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_32, x_35);
return x_36;
}
}
else
{
obj* x_37; unsigned char x_39; 
x_37 = lean::cnstr_get(x_8, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get_scalar<unsigned char>(x_8, sizeof(void*)*1);
if (x_39 == 0)
{
obj* x_41; obj* x_43; obj* x_45; obj* x_48; obj* x_49; obj* x_52; obj* x_53; obj* x_54; 
lean::dec(x_8);
x_41 = lean::cnstr_get(x_37, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_37, 1);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_37, 2);
lean::inc(x_45);
lean::inc(x_4);
x_48 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_48, 0, x_4);
lean::closure_set(x_48, 1, x_45);
x_49 = lean::cnstr_get(x_37, 3);
lean::inc(x_49);
lean::dec(x_37);
x_52 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_52, 0, x_41);
lean::cnstr_set(x_52, 1, x_43);
lean::cnstr_set(x_52, 2, x_48);
lean::cnstr_set(x_52, 3, x_49);
x_53 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set_scalar(x_53, sizeof(void*)*1, x_39);
x_54 = x_53;
return x_54;
}
else
{
if (lean::obj_tag(x_8) == 0)
{
obj* x_55; obj* x_57; unsigned x_60; obj* x_62; obj* x_63; 
x_55 = lean::cnstr_get(x_8, 1);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_8, 2);
lean::inc(x_57);
lean::dec(x_8);
x_60 = lean::unbox_uint32(x_37);
lean::dec(x_37);
x_62 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__25(x_60, x_55);
x_63 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_57, x_62);
return x_63;
}
else
{
obj* x_64; obj* x_65; obj* x_66; 
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_64 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 x_64 = x_8;
}
if (lean::is_scalar(x_64)) {
 x_65 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_65 = x_64;
}
lean::cnstr_set(x_65, 0, x_37);
lean::cnstr_set_scalar(x_65, sizeof(void*)*1, x_39);
x_66 = x_65;
return x_66;
}
}
}
}
else
{
unsigned x_67; unsigned char x_68; 
x_67 = lean::string_iterator_curr(x_0);
x_68 = l_lean_is__id__end__escape(x_67);
if (x_68 == 0)
{
obj* x_70; obj* x_71; obj* x_72; obj* x_73; 
lean::inc(x_0);
x_70 = lean::string_iterator_next(x_0);
x_71 = lean::box(0);
x_72 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__27(x_0, x_70);
x_73 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_71, x_72);
return x_73;
}
else
{
obj* x_74; obj* x_75; obj* x_77; obj* x_79; obj* x_80; obj* x_81; obj* x_84; 
x_74 = l_char_quote__core(x_67);
x_75 = l_char_has__repr___closed__1;
lean::inc(x_75);
x_77 = lean::string_append(x_75, x_74);
lean::dec(x_74);
x_79 = lean::string_append(x_77, x_75);
x_80 = lean::box(0);
x_81 = l_mjoin___rarg___closed__1;
lean::inc(x_80);
lean::inc(x_81);
x_84 = l_lean_parser_monad__parsec_error___at_lean_ir_keyword___spec__1___rarg(x_79, x_81, x_80, x_80, x_0);
if (lean::obj_tag(x_84) == 0)
{
obj* x_85; obj* x_87; obj* x_89; 
x_85 = lean::cnstr_get(x_84, 0);
lean::inc(x_85);
x_87 = lean::cnstr_get(x_84, 1);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_84, 2);
lean::inc(x_89);
if (lean::obj_tag(x_89) == 0)
{
if (lean::obj_tag(x_84) == 0)
{
unsigned x_92; obj* x_94; obj* x_95; 
lean::dec(x_84);
x_92 = lean::unbox_uint32(x_85);
lean::dec(x_85);
x_94 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__29(x_92, x_87);
x_95 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_89, x_94);
return x_95;
}
else
{
unsigned char x_98; obj* x_99; obj* x_100; obj* x_101; 
lean::dec(x_87);
lean::dec(x_89);
x_98 = lean::cnstr_get_scalar<unsigned char>(x_84, sizeof(void*)*1);
if (lean::is_shared(x_84)) {
 lean::dec(x_84);
 x_99 = lean::box(0);
} else {
 lean::cnstr_release(x_84, 0);
 x_99 = x_84;
}
if (lean::is_scalar(x_99)) {
 x_100 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_100 = x_99;
}
lean::cnstr_set(x_100, 0, x_85);
lean::cnstr_set_scalar(x_100, sizeof(void*)*1, x_98);
x_101 = x_100;
return x_101;
}
}
else
{
obj* x_103; obj* x_105; obj* x_107; obj* x_108; unsigned x_109; obj* x_111; obj* x_112; 
lean::dec(x_84);
x_103 = lean::cnstr_get(x_89, 0);
lean::inc(x_103);
if (lean::is_shared(x_89)) {
 lean::dec(x_89);
 x_105 = lean::box(0);
} else {
 lean::cnstr_release(x_89, 0);
 x_105 = x_89;
}
lean::inc(x_81);
x_107 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_107, 0, x_81);
lean::closure_set(x_107, 1, x_103);
if (lean::is_scalar(x_105)) {
 x_108 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_108 = x_105;
}
lean::cnstr_set(x_108, 0, x_107);
x_109 = lean::unbox_uint32(x_85);
lean::dec(x_85);
x_111 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__31(x_109, x_87);
x_112 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_108, x_111);
return x_112;
}
}
else
{
obj* x_113; unsigned char x_115; 
x_113 = lean::cnstr_get(x_84, 0);
lean::inc(x_113);
x_115 = lean::cnstr_get_scalar<unsigned char>(x_84, sizeof(void*)*1);
if (x_115 == 0)
{
obj* x_117; obj* x_119; obj* x_121; obj* x_124; obj* x_125; obj* x_128; obj* x_129; obj* x_130; 
lean::dec(x_84);
x_117 = lean::cnstr_get(x_113, 0);
lean::inc(x_117);
x_119 = lean::cnstr_get(x_113, 1);
lean::inc(x_119);
x_121 = lean::cnstr_get(x_113, 2);
lean::inc(x_121);
lean::inc(x_81);
x_124 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_124, 0, x_81);
lean::closure_set(x_124, 1, x_121);
x_125 = lean::cnstr_get(x_113, 3);
lean::inc(x_125);
lean::dec(x_113);
x_128 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_128, 0, x_117);
lean::cnstr_set(x_128, 1, x_119);
lean::cnstr_set(x_128, 2, x_124);
lean::cnstr_set(x_128, 3, x_125);
x_129 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_129, 0, x_128);
lean::cnstr_set_scalar(x_129, sizeof(void*)*1, x_115);
x_130 = x_129;
return x_130;
}
else
{
if (lean::obj_tag(x_84) == 0)
{
obj* x_131; obj* x_133; unsigned x_136; obj* x_138; obj* x_139; 
x_131 = lean::cnstr_get(x_84, 1);
lean::inc(x_131);
x_133 = lean::cnstr_get(x_84, 2);
lean::inc(x_133);
lean::dec(x_84);
x_136 = lean::unbox_uint32(x_113);
lean::dec(x_113);
x_138 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__33(x_136, x_131);
x_139 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_133, x_138);
return x_139;
}
else
{
obj* x_140; obj* x_141; obj* x_142; 
if (lean::is_shared(x_84)) {
 lean::dec(x_84);
 x_140 = lean::box(0);
} else {
 lean::cnstr_release(x_84, 0);
 x_140 = x_84;
}
if (lean::is_scalar(x_140)) {
 x_141 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_141 = x_140;
}
lean::cnstr_set(x_141, 0, x_113);
lean::cnstr_set_scalar(x_141, sizeof(void*)*1, x_115);
x_142 = x_141;
return x_142;
}
}
}
}
}
}
}
obj* l_lean_parser_id__part__escaped___at_lean_ir_identifier___spec__19(obj* x_0) {
_start:
{
obj* x_1; unsigned x_2; obj* x_3; 
x_1 = l_lean_id__begin__escape;
x_2 = lean::unbox_uint32(x_1);
x_3 = l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2(x_2, x_0);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 2);
lean::inc(x_6);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_release(x_3, 1);
 lean::cnstr_release(x_3, 2);
 x_8 = x_3;
}
x_9 = l_lean_parser_monad__parsec_take__while1___at_lean_ir_identifier___spec__20(x_4);
x_10 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_9);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_13; obj* x_15; obj* x_18; unsigned x_19; obj* x_20; 
x_11 = lean::cnstr_get(x_10, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_10, 2);
lean::inc(x_15);
lean::dec(x_10);
x_18 = l_lean_id__end__escape;
x_19 = lean::unbox_uint32(x_18);
x_20 = l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2(x_19, x_13);
if (lean::obj_tag(x_20) == 0)
{
obj* x_21; obj* x_23; obj* x_26; obj* x_28; obj* x_29; obj* x_30; 
x_21 = lean::cnstr_get(x_20, 1);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_20, 2);
lean::inc(x_23);
lean::dec(x_20);
x_26 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_26);
if (lean::is_scalar(x_8)) {
 x_28 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_28 = x_8;
}
lean::cnstr_set(x_28, 0, x_11);
lean::cnstr_set(x_28, 1, x_21);
lean::cnstr_set(x_28, 2, x_26);
x_29 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_23, x_28);
x_30 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_29);
return x_30;
}
else
{
obj* x_33; unsigned char x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_11);
lean::dec(x_8);
x_33 = lean::cnstr_get(x_20, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get_scalar<unsigned char>(x_20, sizeof(void*)*1);
if (lean::is_shared(x_20)) {
 lean::dec(x_20);
 x_36 = lean::box(0);
} else {
 lean::cnstr_release(x_20, 0);
 x_36 = x_20;
}
if (lean::is_scalar(x_36)) {
 x_37 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_37 = x_36;
}
lean::cnstr_set(x_37, 0, x_33);
lean::cnstr_set_scalar(x_37, sizeof(void*)*1, x_35);
x_38 = x_37;
x_39 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_38);
return x_39;
}
}
else
{
obj* x_41; unsigned char x_43; obj* x_44; obj* x_45; obj* x_46; 
lean::dec(x_8);
x_41 = lean::cnstr_get(x_10, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get_scalar<unsigned char>(x_10, sizeof(void*)*1);
if (lean::is_shared(x_10)) {
 lean::dec(x_10);
 x_44 = lean::box(0);
} else {
 lean::cnstr_release(x_10, 0);
 x_44 = x_10;
}
if (lean::is_scalar(x_44)) {
 x_45 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_45 = x_44;
}
lean::cnstr_set(x_45, 0, x_41);
lean::cnstr_set_scalar(x_45, sizeof(void*)*1, x_43);
x_46 = x_45;
return x_46;
}
}
else
{
obj* x_47; unsigned char x_49; obj* x_50; obj* x_51; obj* x_52; 
x_47 = lean::cnstr_get(x_3, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get_scalar<unsigned char>(x_3, sizeof(void*)*1);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_50 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 x_50 = x_3;
}
if (lean::is_scalar(x_50)) {
 x_51 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_51 = x_50;
}
lean::cnstr_set(x_51, 0, x_47);
lean::cnstr_set_scalar(x_51, sizeof(void*)*1, x_49);
x_52 = x_51;
return x_52;
}
}
}
obj* l_lean_parser_id__part___at_lean_ir_identifier___spec__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_monad__parsec_curr___at_lean_ir_identifier___spec__3(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; unsigned x_9; unsigned char x_11; obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 lean::cnstr_release(x_1, 2);
 x_8 = x_1;
}
x_9 = lean::unbox_uint32(x_2);
lean::dec(x_2);
x_11 = l_lean_is__id__begin__escape(x_9);
x_12 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_13 = lean::box(x_11);
lean::inc(x_12);
if (lean::is_scalar(x_8)) {
 x_15 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_15 = x_8;
}
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_4);
lean::cnstr_set(x_15, 2, x_12);
x_16 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_15);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; obj* x_19; obj* x_21; unsigned char x_24; 
x_17 = lean::cnstr_get(x_16, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_16, 1);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_16, 2);
lean::inc(x_21);
lean::dec(x_16);
x_24 = lean::unbox(x_17);
lean::dec(x_17);
if (x_24 == 0)
{
obj* x_26; obj* x_27; 
x_26 = l_lean_parser_id__part__default___at_lean_ir_identifier___spec__4(x_19);
x_27 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_21, x_26);
return x_27;
}
else
{
obj* x_28; obj* x_29; 
x_28 = l_lean_parser_id__part__escaped___at_lean_ir_identifier___spec__19(x_19);
x_29 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_21, x_28);
return x_29;
}
}
else
{
obj* x_30; unsigned char x_32; obj* x_33; obj* x_34; obj* x_35; 
x_30 = lean::cnstr_get(x_16, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get_scalar<unsigned char>(x_16, sizeof(void*)*1);
if (lean::is_shared(x_16)) {
 lean::dec(x_16);
 x_33 = lean::box(0);
} else {
 lean::cnstr_release(x_16, 0);
 x_33 = x_16;
}
if (lean::is_scalar(x_33)) {
 x_34 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_34 = x_33;
}
lean::cnstr_set(x_34, 0, x_30);
lean::cnstr_set_scalar(x_34, sizeof(void*)*1, x_32);
x_35 = x_34;
return x_35;
}
}
else
{
obj* x_36; unsigned char x_38; obj* x_39; obj* x_40; obj* x_41; 
x_36 = lean::cnstr_get(x_1, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get_scalar<unsigned char>(x_1, sizeof(void*)*1);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 x_39 = x_1;
}
if (lean::is_scalar(x_39)) {
 x_40 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_40 = x_39;
}
lean::cnstr_set(x_40, 0, x_36);
lean::cnstr_set_scalar(x_40, sizeof(void*)*1, x_38);
x_41 = x_40;
return x_41;
}
}
}
obj* l_lean_parser_monad__parsec_foldl__aux___main___at_lean_ir_identifier___spec__36(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_1, x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned x_6; obj* x_9; 
lean::dec(x_4);
x_6 = lean::unbox_uint32(x_3);
lean::dec(x_3);
lean::inc(x_2);
x_9 = l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2(x_6, x_2);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; obj* x_16; 
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_9, 2);
lean::inc(x_12);
if (lean::is_shared(x_9)) {
 lean::dec(x_9);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_9, 0);
 lean::cnstr_release(x_9, 1);
 lean::cnstr_release(x_9, 2);
 x_14 = x_9;
}
x_15 = l_lean_parser_id__part___at_lean_ir_identifier___spec__2(x_10);
x_16 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_15);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; obj* x_19; obj* x_21; obj* x_24; obj* x_25; obj* x_29; obj* x_30; obj* x_31; 
x_17 = lean::cnstr_get(x_16, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_16, 1);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_16, 2);
lean::inc(x_21);
lean::dec(x_16);
x_24 = lean::mk_nat_obj(1u);
x_25 = lean::nat_sub(x_1, x_24);
lean::dec(x_24);
lean::dec(x_1);
lean::inc(x_0);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_0);
lean::cnstr_set(x_29, 1, x_17);
x_30 = l_lean_parser_monad__parsec_foldl__aux___main___at_lean_ir_identifier___spec__36(x_29, x_25, x_19);
x_31 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_21, x_30);
if (lean::obj_tag(x_31) == 0)
{
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
return x_31;
}
else
{
obj* x_35; unsigned char x_37; 
x_35 = lean::cnstr_get(x_31, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get_scalar<unsigned char>(x_31, sizeof(void*)*1);
if (x_37 == 0)
{
obj* x_39; obj* x_42; obj* x_44; obj* x_45; obj* x_46; 
lean::dec(x_31);
x_39 = lean::cnstr_get(x_35, 2);
lean::inc(x_39);
lean::dec(x_35);
x_42 = l_mjoin___rarg___closed__1;
lean::inc(x_42);
x_44 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_44, 0, x_39);
lean::closure_set(x_44, 1, x_42);
x_45 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_45, 0, x_44);
if (lean::is_scalar(x_14)) {
 x_46 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_46 = x_14;
}
lean::cnstr_set(x_46, 0, x_0);
lean::cnstr_set(x_46, 1, x_2);
lean::cnstr_set(x_46, 2, x_45);
return x_46;
}
else
{
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_35);
return x_31;
}
}
}
else
{
obj* x_52; unsigned char x_54; obj* x_55; 
lean::dec(x_1);
x_52 = lean::cnstr_get(x_16, 0);
lean::inc(x_52);
x_54 = lean::cnstr_get_scalar<unsigned char>(x_16, sizeof(void*)*1);
if (lean::is_shared(x_16)) {
 lean::dec(x_16);
 x_55 = lean::box(0);
} else {
 lean::cnstr_release(x_16, 0);
 x_55 = x_16;
}
if (x_54 == 0)
{
obj* x_57; obj* x_60; obj* x_62; obj* x_63; obj* x_64; 
lean::dec(x_55);
x_57 = lean::cnstr_get(x_52, 2);
lean::inc(x_57);
lean::dec(x_52);
x_60 = l_mjoin___rarg___closed__1;
lean::inc(x_60);
x_62 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_62, 0, x_57);
lean::closure_set(x_62, 1, x_60);
x_63 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_63, 0, x_62);
if (lean::is_scalar(x_14)) {
 x_64 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_64 = x_14;
}
lean::cnstr_set(x_64, 0, x_0);
lean::cnstr_set(x_64, 1, x_2);
lean::cnstr_set(x_64, 2, x_63);
return x_64;
}
else
{
obj* x_68; obj* x_69; 
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
if (lean::is_scalar(x_55)) {
 x_68 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_68 = x_55;
}
lean::cnstr_set(x_68, 0, x_52);
lean::cnstr_set_scalar(x_68, sizeof(void*)*1, x_54);
x_69 = x_68;
return x_69;
}
}
}
else
{
obj* x_71; unsigned char x_73; obj* x_74; 
lean::dec(x_1);
x_71 = lean::cnstr_get(x_9, 0);
lean::inc(x_71);
x_73 = lean::cnstr_get_scalar<unsigned char>(x_9, sizeof(void*)*1);
if (lean::is_shared(x_9)) {
 lean::dec(x_9);
 x_74 = lean::box(0);
} else {
 lean::cnstr_release(x_9, 0);
 x_74 = x_9;
}
if (x_73 == 0)
{
obj* x_76; obj* x_79; obj* x_81; obj* x_82; obj* x_83; 
lean::dec(x_74);
x_76 = lean::cnstr_get(x_71, 2);
lean::inc(x_76);
lean::dec(x_71);
x_79 = l_mjoin___rarg___closed__1;
lean::inc(x_79);
x_81 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_81, 0, x_76);
lean::closure_set(x_81, 1, x_79);
x_82 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_82, 0, x_81);
x_83 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_83, 0, x_0);
lean::cnstr_set(x_83, 1, x_2);
lean::cnstr_set(x_83, 2, x_82);
return x_83;
}
else
{
obj* x_86; obj* x_87; 
lean::dec(x_0);
lean::dec(x_2);
if (lean::is_scalar(x_74)) {
 x_86 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_86 = x_74;
}
lean::cnstr_set(x_86, 0, x_71);
lean::cnstr_set_scalar(x_86, sizeof(void*)*1, x_73);
x_87 = x_86;
return x_87;
}
}
}
else
{
obj* x_91; obj* x_93; 
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
x_91 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_91);
x_93 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_93, 0, x_0);
lean::cnstr_set(x_93, 1, x_2);
lean::cnstr_set(x_93, 2, x_91);
return x_93;
}
}
}
obj* l_lean_parser_monad__parsec_foldl___at_lean_ir_identifier___spec__35(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_8; 
x_2 = lean::box(0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_0);
x_4 = lean::string_iterator_remaining(x_1);
x_5 = l_lean_parser_monad__parsec_foldl__aux___main___at_lean_ir_identifier___spec__36(x_3, x_4, x_1);
x_6 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_6);
x_8 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_5);
return x_8;
}
}
obj* l_lean_parser_monad__parsec_foldl__aux___main___at_lean_ir_identifier___spec__38(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_1, x_3);
if (lean::obj_tag(x_4) == 0)
{
unsigned x_6; obj* x_9; 
lean::dec(x_4);
x_6 = lean::unbox_uint32(x_3);
lean::dec(x_3);
lean::inc(x_2);
x_9 = l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2(x_6, x_2);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; obj* x_16; 
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_9, 2);
lean::inc(x_12);
if (lean::is_shared(x_9)) {
 lean::dec(x_9);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_9, 0);
 lean::cnstr_release(x_9, 1);
 lean::cnstr_release(x_9, 2);
 x_14 = x_9;
}
x_15 = l_lean_parser_id__part___at_lean_ir_identifier___spec__2(x_10);
x_16 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_15);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; obj* x_19; obj* x_21; obj* x_24; obj* x_25; obj* x_29; obj* x_30; obj* x_31; 
x_17 = lean::cnstr_get(x_16, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_16, 1);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_16, 2);
lean::inc(x_21);
lean::dec(x_16);
x_24 = lean::mk_nat_obj(1u);
x_25 = lean::nat_sub(x_1, x_24);
lean::dec(x_24);
lean::dec(x_1);
lean::inc(x_0);
x_29 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_29, 0, x_0);
lean::cnstr_set(x_29, 1, x_17);
x_30 = l_lean_parser_monad__parsec_foldl__aux___main___at_lean_ir_identifier___spec__38(x_29, x_25, x_19);
x_31 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_21, x_30);
if (lean::obj_tag(x_31) == 0)
{
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
return x_31;
}
else
{
obj* x_35; unsigned char x_37; 
x_35 = lean::cnstr_get(x_31, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get_scalar<unsigned char>(x_31, sizeof(void*)*1);
if (x_37 == 0)
{
obj* x_39; obj* x_42; obj* x_44; obj* x_45; obj* x_46; 
lean::dec(x_31);
x_39 = lean::cnstr_get(x_35, 2);
lean::inc(x_39);
lean::dec(x_35);
x_42 = l_mjoin___rarg___closed__1;
lean::inc(x_42);
x_44 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_44, 0, x_39);
lean::closure_set(x_44, 1, x_42);
x_45 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_45, 0, x_44);
if (lean::is_scalar(x_14)) {
 x_46 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_46 = x_14;
}
lean::cnstr_set(x_46, 0, x_0);
lean::cnstr_set(x_46, 1, x_2);
lean::cnstr_set(x_46, 2, x_45);
return x_46;
}
else
{
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_35);
return x_31;
}
}
}
else
{
obj* x_52; unsigned char x_54; obj* x_55; 
lean::dec(x_1);
x_52 = lean::cnstr_get(x_16, 0);
lean::inc(x_52);
x_54 = lean::cnstr_get_scalar<unsigned char>(x_16, sizeof(void*)*1);
if (lean::is_shared(x_16)) {
 lean::dec(x_16);
 x_55 = lean::box(0);
} else {
 lean::cnstr_release(x_16, 0);
 x_55 = x_16;
}
if (x_54 == 0)
{
obj* x_57; obj* x_60; obj* x_62; obj* x_63; obj* x_64; 
lean::dec(x_55);
x_57 = lean::cnstr_get(x_52, 2);
lean::inc(x_57);
lean::dec(x_52);
x_60 = l_mjoin___rarg___closed__1;
lean::inc(x_60);
x_62 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_62, 0, x_57);
lean::closure_set(x_62, 1, x_60);
x_63 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_63, 0, x_62);
if (lean::is_scalar(x_14)) {
 x_64 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_64 = x_14;
}
lean::cnstr_set(x_64, 0, x_0);
lean::cnstr_set(x_64, 1, x_2);
lean::cnstr_set(x_64, 2, x_63);
return x_64;
}
else
{
obj* x_68; obj* x_69; 
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
if (lean::is_scalar(x_55)) {
 x_68 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_68 = x_55;
}
lean::cnstr_set(x_68, 0, x_52);
lean::cnstr_set_scalar(x_68, sizeof(void*)*1, x_54);
x_69 = x_68;
return x_69;
}
}
}
else
{
obj* x_71; unsigned char x_73; obj* x_74; 
lean::dec(x_1);
x_71 = lean::cnstr_get(x_9, 0);
lean::inc(x_71);
x_73 = lean::cnstr_get_scalar<unsigned char>(x_9, sizeof(void*)*1);
if (lean::is_shared(x_9)) {
 lean::dec(x_9);
 x_74 = lean::box(0);
} else {
 lean::cnstr_release(x_9, 0);
 x_74 = x_9;
}
if (x_73 == 0)
{
obj* x_76; obj* x_79; obj* x_81; obj* x_82; obj* x_83; 
lean::dec(x_74);
x_76 = lean::cnstr_get(x_71, 2);
lean::inc(x_76);
lean::dec(x_71);
x_79 = l_mjoin___rarg___closed__1;
lean::inc(x_79);
x_81 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_81, 0, x_76);
lean::closure_set(x_81, 1, x_79);
x_82 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_82, 0, x_81);
x_83 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_83, 0, x_0);
lean::cnstr_set(x_83, 1, x_2);
lean::cnstr_set(x_83, 2, x_82);
return x_83;
}
else
{
obj* x_86; obj* x_87; 
lean::dec(x_0);
lean::dec(x_2);
if (lean::is_scalar(x_74)) {
 x_86 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_86 = x_74;
}
lean::cnstr_set(x_86, 0, x_71);
lean::cnstr_set_scalar(x_86, sizeof(void*)*1, x_73);
x_87 = x_86;
return x_87;
}
}
}
else
{
obj* x_91; obj* x_93; 
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
x_91 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_91);
x_93 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_93, 0, x_0);
lean::cnstr_set(x_93, 1, x_2);
lean::cnstr_set(x_93, 2, x_91);
return x_93;
}
}
}
obj* l_lean_parser_monad__parsec_foldl___at_lean_ir_identifier___spec__37(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_8; 
x_2 = lean::box(0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_0);
x_4 = lean::string_iterator_remaining(x_1);
x_5 = l_lean_parser_monad__parsec_foldl__aux___main___at_lean_ir_identifier___spec__38(x_3, x_4, x_1);
x_6 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_6);
x_8 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_5);
return x_8;
}
}
obj* l_lean_parser_monad__parsec_foldl__aux___main___at_lean_ir_identifier___spec__40(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_1, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_7; unsigned x_8; obj* x_11; 
lean::dec(x_4);
x_7 = lean::mk_nat_obj(46u);
x_8 = lean::unbox_uint32(x_7);
lean::dec(x_7);
lean::inc(x_2);
x_11 = l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2(x_8, x_2);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_18; 
x_12 = lean::cnstr_get(x_11, 1);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_11, 2);
lean::inc(x_14);
if (lean::is_shared(x_11)) {
 lean::dec(x_11);
 x_16 = lean::box(0);
} else {
 lean::cnstr_release(x_11, 0);
 lean::cnstr_release(x_11, 1);
 lean::cnstr_release(x_11, 2);
 x_16 = x_11;
}
x_17 = l_lean_parser_id__part___at_lean_ir_identifier___spec__2(x_12);
x_18 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_17);
if (lean::obj_tag(x_18) == 0)
{
obj* x_19; obj* x_21; obj* x_23; obj* x_26; obj* x_27; obj* x_31; obj* x_32; obj* x_33; 
x_19 = lean::cnstr_get(x_18, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_18, 1);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_18, 2);
lean::inc(x_23);
lean::dec(x_18);
x_26 = lean::mk_nat_obj(1u);
x_27 = lean::nat_sub(x_1, x_26);
lean::dec(x_26);
lean::dec(x_1);
lean::inc(x_0);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_0);
lean::cnstr_set(x_31, 1, x_19);
x_32 = l_lean_parser_monad__parsec_foldl__aux___main___at_lean_ir_identifier___spec__40(x_31, x_27, x_21);
x_33 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_23, x_32);
if (lean::obj_tag(x_33) == 0)
{
lean::dec(x_16);
lean::dec(x_0);
lean::dec(x_2);
return x_33;
}
else
{
obj* x_37; unsigned char x_39; 
x_37 = lean::cnstr_get(x_33, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get_scalar<unsigned char>(x_33, sizeof(void*)*1);
if (x_39 == 0)
{
obj* x_41; obj* x_44; obj* x_46; obj* x_47; obj* x_48; 
lean::dec(x_33);
x_41 = lean::cnstr_get(x_37, 2);
lean::inc(x_41);
lean::dec(x_37);
x_44 = l_mjoin___rarg___closed__1;
lean::inc(x_44);
x_46 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_46, 0, x_41);
lean::closure_set(x_46, 1, x_44);
x_47 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_47, 0, x_46);
if (lean::is_scalar(x_16)) {
 x_48 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_48 = x_16;
}
lean::cnstr_set(x_48, 0, x_0);
lean::cnstr_set(x_48, 1, x_2);
lean::cnstr_set(x_48, 2, x_47);
return x_48;
}
else
{
lean::dec(x_16);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_37);
return x_33;
}
}
}
else
{
obj* x_54; unsigned char x_56; obj* x_57; 
lean::dec(x_1);
x_54 = lean::cnstr_get(x_18, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get_scalar<unsigned char>(x_18, sizeof(void*)*1);
if (lean::is_shared(x_18)) {
 lean::dec(x_18);
 x_57 = lean::box(0);
} else {
 lean::cnstr_release(x_18, 0);
 x_57 = x_18;
}
if (x_56 == 0)
{
obj* x_59; obj* x_62; obj* x_64; obj* x_65; obj* x_66; 
lean::dec(x_57);
x_59 = lean::cnstr_get(x_54, 2);
lean::inc(x_59);
lean::dec(x_54);
x_62 = l_mjoin___rarg___closed__1;
lean::inc(x_62);
x_64 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_64, 0, x_59);
lean::closure_set(x_64, 1, x_62);
x_65 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_65, 0, x_64);
if (lean::is_scalar(x_16)) {
 x_66 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_66 = x_16;
}
lean::cnstr_set(x_66, 0, x_0);
lean::cnstr_set(x_66, 1, x_2);
lean::cnstr_set(x_66, 2, x_65);
return x_66;
}
else
{
obj* x_70; obj* x_71; 
lean::dec(x_16);
lean::dec(x_0);
lean::dec(x_2);
if (lean::is_scalar(x_57)) {
 x_70 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_70 = x_57;
}
lean::cnstr_set(x_70, 0, x_54);
lean::cnstr_set_scalar(x_70, sizeof(void*)*1, x_56);
x_71 = x_70;
return x_71;
}
}
}
else
{
obj* x_73; unsigned char x_75; obj* x_76; 
lean::dec(x_1);
x_73 = lean::cnstr_get(x_11, 0);
lean::inc(x_73);
x_75 = lean::cnstr_get_scalar<unsigned char>(x_11, sizeof(void*)*1);
if (lean::is_shared(x_11)) {
 lean::dec(x_11);
 x_76 = lean::box(0);
} else {
 lean::cnstr_release(x_11, 0);
 x_76 = x_11;
}
if (x_75 == 0)
{
obj* x_78; obj* x_81; obj* x_83; obj* x_84; obj* x_85; 
lean::dec(x_76);
x_78 = lean::cnstr_get(x_73, 2);
lean::inc(x_78);
lean::dec(x_73);
x_81 = l_mjoin___rarg___closed__1;
lean::inc(x_81);
x_83 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_83, 0, x_78);
lean::closure_set(x_83, 1, x_81);
x_84 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_84, 0, x_83);
x_85 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_85, 0, x_0);
lean::cnstr_set(x_85, 1, x_2);
lean::cnstr_set(x_85, 2, x_84);
return x_85;
}
else
{
obj* x_88; obj* x_89; 
lean::dec(x_0);
lean::dec(x_2);
if (lean::is_scalar(x_76)) {
 x_88 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_88 = x_76;
}
lean::cnstr_set(x_88, 0, x_73);
lean::cnstr_set_scalar(x_88, sizeof(void*)*1, x_75);
x_89 = x_88;
return x_89;
}
}
}
else
{
obj* x_92; obj* x_94; 
lean::dec(x_4);
lean::dec(x_1);
x_92 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_92);
x_94 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_94, 0, x_0);
lean::cnstr_set(x_94, 1, x_2);
lean::cnstr_set(x_94, 2, x_92);
return x_94;
}
}
}
obj* l_lean_parser_monad__parsec_foldl___at_lean_ir_identifier___spec__39(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_8; 
x_2 = lean::box(0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_0);
x_4 = lean::string_iterator_remaining(x_1);
x_5 = l_lean_parser_monad__parsec_foldl__aux___main___at_lean_ir_identifier___spec__40(x_3, x_4, x_1);
x_6 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_6);
x_8 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_5);
return x_8;
}
}
obj* l_lean_parser_monad__parsec_foldl__aux___main___at_lean_ir_identifier___spec__42(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_1, x_3);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_7; unsigned x_8; obj* x_11; 
lean::dec(x_4);
x_7 = lean::mk_nat_obj(46u);
x_8 = lean::unbox_uint32(x_7);
lean::dec(x_7);
lean::inc(x_2);
x_11 = l_lean_parser_monad__parsec_ch___at_lean_ir_parse__literal___spec__2(x_8, x_2);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_18; 
x_12 = lean::cnstr_get(x_11, 1);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_11, 2);
lean::inc(x_14);
if (lean::is_shared(x_11)) {
 lean::dec(x_11);
 x_16 = lean::box(0);
} else {
 lean::cnstr_release(x_11, 0);
 lean::cnstr_release(x_11, 1);
 lean::cnstr_release(x_11, 2);
 x_16 = x_11;
}
x_17 = l_lean_parser_id__part___at_lean_ir_identifier___spec__2(x_12);
x_18 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_17);
if (lean::obj_tag(x_18) == 0)
{
obj* x_19; obj* x_21; obj* x_23; obj* x_26; obj* x_27; obj* x_31; obj* x_32; obj* x_33; 
x_19 = lean::cnstr_get(x_18, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_18, 1);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_18, 2);
lean::inc(x_23);
lean::dec(x_18);
x_26 = lean::mk_nat_obj(1u);
x_27 = lean::nat_sub(x_1, x_26);
lean::dec(x_26);
lean::dec(x_1);
lean::inc(x_0);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_0);
lean::cnstr_set(x_31, 1, x_19);
x_32 = l_lean_parser_monad__parsec_foldl__aux___main___at_lean_ir_identifier___spec__42(x_31, x_27, x_21);
x_33 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_23, x_32);
if (lean::obj_tag(x_33) == 0)
{
lean::dec(x_16);
lean::dec(x_0);
lean::dec(x_2);
return x_33;
}
else
{
obj* x_37; unsigned char x_39; 
x_37 = lean::cnstr_get(x_33, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get_scalar<unsigned char>(x_33, sizeof(void*)*1);
if (x_39 == 0)
{
obj* x_41; obj* x_44; obj* x_46; obj* x_47; obj* x_48; 
lean::dec(x_33);
x_41 = lean::cnstr_get(x_37, 2);
lean::inc(x_41);
lean::dec(x_37);
x_44 = l_mjoin___rarg___closed__1;
lean::inc(x_44);
x_46 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_46, 0, x_41);
lean::closure_set(x_46, 1, x_44);
x_47 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_47, 0, x_46);
if (lean::is_scalar(x_16)) {
 x_48 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_48 = x_16;
}
lean::cnstr_set(x_48, 0, x_0);
lean::cnstr_set(x_48, 1, x_2);
lean::cnstr_set(x_48, 2, x_47);
return x_48;
}
else
{
lean::dec(x_16);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_37);
return x_33;
}
}
}
else
{
obj* x_54; unsigned char x_56; obj* x_57; 
lean::dec(x_1);
x_54 = lean::cnstr_get(x_18, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get_scalar<unsigned char>(x_18, sizeof(void*)*1);
if (lean::is_shared(x_18)) {
 lean::dec(x_18);
 x_57 = lean::box(0);
} else {
 lean::cnstr_release(x_18, 0);
 x_57 = x_18;
}
if (x_56 == 0)
{
obj* x_59; obj* x_62; obj* x_64; obj* x_65; obj* x_66; 
lean::dec(x_57);
x_59 = lean::cnstr_get(x_54, 2);
lean::inc(x_59);
lean::dec(x_54);
x_62 = l_mjoin___rarg___closed__1;
lean::inc(x_62);
x_64 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_64, 0, x_59);
lean::closure_set(x_64, 1, x_62);
x_65 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_65, 0, x_64);
if (lean::is_scalar(x_16)) {
 x_66 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_66 = x_16;
}
lean::cnstr_set(x_66, 0, x_0);
lean::cnstr_set(x_66, 1, x_2);
lean::cnstr_set(x_66, 2, x_65);
return x_66;
}
else
{
obj* x_70; obj* x_71; 
lean::dec(x_16);
lean::dec(x_0);
lean::dec(x_2);
if (lean::is_scalar(x_57)) {
 x_70 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_70 = x_57;
}
lean::cnstr_set(x_70, 0, x_54);
lean::cnstr_set_scalar(x_70, sizeof(void*)*1, x_56);
x_71 = x_70;
return x_71;
}
}
}
else
{
obj* x_73; unsigned char x_75; obj* x_76; 
lean::dec(x_1);
x_73 = lean::cnstr_get(x_11, 0);
lean::inc(x_73);
x_75 = lean::cnstr_get_scalar<unsigned char>(x_11, sizeof(void*)*1);
if (lean::is_shared(x_11)) {
 lean::dec(x_11);
 x_76 = lean::box(0);
} else {
 lean::cnstr_release(x_11, 0);
 x_76 = x_11;
}
if (x_75 == 0)
{
obj* x_78; obj* x_81; obj* x_83; obj* x_84; obj* x_85; 
lean::dec(x_76);
x_78 = lean::cnstr_get(x_73, 2);
lean::inc(x_78);
lean::dec(x_73);
x_81 = l_mjoin___rarg___closed__1;
lean::inc(x_81);
x_83 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_83, 0, x_78);
lean::closure_set(x_83, 1, x_81);
x_84 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_84, 0, x_83);
x_85 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_85, 0, x_0);
lean::cnstr_set(x_85, 1, x_2);
lean::cnstr_set(x_85, 2, x_84);
return x_85;
}
else
{
obj* x_88; obj* x_89; 
lean::dec(x_0);
lean::dec(x_2);
if (lean::is_scalar(x_76)) {
 x_88 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_88 = x_76;
}
lean::cnstr_set(x_88, 0, x_73);
lean::cnstr_set_scalar(x_88, sizeof(void*)*1, x_75);
x_89 = x_88;
return x_89;
}
}
}
else
{
obj* x_92; obj* x_94; 
lean::dec(x_4);
lean::dec(x_1);
x_92 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_92);
x_94 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_94, 0, x_0);
lean::cnstr_set(x_94, 1, x_2);
lean::cnstr_set(x_94, 2, x_92);
return x_94;
}
}
}
obj* l_lean_parser_monad__parsec_foldl___at_lean_ir_identifier___spec__41(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_8; 
x_2 = lean::box(0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_0);
x_4 = lean::string_iterator_remaining(x_1);
x_5 = l_lean_parser_monad__parsec_foldl__aux___main___at_lean_ir_identifier___spec__42(x_3, x_4, x_1);
x_6 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_6);
x_8 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_5);
return x_8;
}
}
obj* l_lean_parser_identifier___at_lean_ir_identifier___spec__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_id__part___at_lean_ir_identifier___spec__2(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; obj* x_4; obj* x_6; obj* x_9; obj* x_10; obj* x_11; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
lean::dec(x_1);
x_9 = lean::mk_nat_obj(46u);
x_10 = lean::mk_nat_obj(55296u);
x_11 = lean::nat_dec_lt(x_9, x_10);
lean::dec(x_10);
if (lean::obj_tag(x_11) == 0)
{
obj* x_14; obj* x_15; 
lean::dec(x_11);
x_14 = lean::mk_nat_obj(57343u);
x_15 = lean::nat_dec_lt(x_14, x_9);
lean::dec(x_14);
if (lean::obj_tag(x_15) == 0)
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_24; 
lean::dec(x_15);
lean::dec(x_9);
x_19 = l_lean_parser_monad__parsec_foldl___at_lean_ir_identifier___spec__35(x_2, x_4);
x_20 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_19);
x_21 = l_lean_parser_parsec__t_try__mk__res___rarg(x_20);
x_22 = l_lean_ir_identifier___closed__1;
lean::inc(x_22);
x_24 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_21, x_22);
return x_24;
}
else
{
obj* x_26; obj* x_27; 
lean::dec(x_15);
x_26 = lean::mk_nat_obj(1114112u);
x_27 = lean::nat_dec_lt(x_9, x_26);
lean::dec(x_26);
lean::dec(x_9);
if (lean::obj_tag(x_27) == 0)
{
obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_36; 
lean::dec(x_27);
x_31 = l_lean_parser_monad__parsec_foldl___at_lean_ir_identifier___spec__37(x_2, x_4);
x_32 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_31);
x_33 = l_lean_parser_parsec__t_try__mk__res___rarg(x_32);
x_34 = l_lean_ir_identifier___closed__1;
lean::inc(x_34);
x_36 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_33, x_34);
return x_36;
}
else
{
obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_43; 
lean::dec(x_27);
x_38 = l_lean_parser_monad__parsec_foldl___at_lean_ir_identifier___spec__39(x_2, x_4);
x_39 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_38);
x_40 = l_lean_parser_parsec__t_try__mk__res___rarg(x_39);
x_41 = l_lean_ir_identifier___closed__1;
lean::inc(x_41);
x_43 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_40, x_41);
return x_43;
}
}
}
else
{
obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_51; 
lean::dec(x_9);
lean::dec(x_11);
x_46 = l_lean_parser_monad__parsec_foldl___at_lean_ir_identifier___spec__41(x_2, x_4);
x_47 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_46);
x_48 = l_lean_parser_parsec__t_try__mk__res___rarg(x_47);
x_49 = l_lean_ir_identifier___closed__1;
lean::inc(x_49);
x_51 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_48, x_49);
return x_51;
}
}
else
{
obj* x_52; obj* x_54; obj* x_55; obj* x_57; obj* x_59; obj* x_62; obj* x_64; unsigned char x_65; obj* x_66; obj* x_67; 
x_52 = lean::cnstr_get(x_1, 0);
lean::inc(x_52);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_54 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 x_54 = x_1;
}
x_55 = lean::cnstr_get(x_52, 0);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_52, 1);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_52, 3);
lean::inc(x_59);
lean::dec(x_52);
x_62 = l_lean_ir_identifier___closed__1;
lean::inc(x_62);
x_64 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_64, 0, x_55);
lean::cnstr_set(x_64, 1, x_57);
lean::cnstr_set(x_64, 2, x_62);
lean::cnstr_set(x_64, 3, x_59);
x_65 = 0;
if (lean::is_scalar(x_54)) {
 x_66 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_66 = x_54;
}
lean::cnstr_set(x_66, 0, x_64);
lean::cnstr_set_scalar(x_66, sizeof(void*)*1, x_65);
x_67 = x_66;
return x_67;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__5___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__5(x_2, x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__7___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__7(x_2, x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__9___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__9(x_2, x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__11___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__11(x_2, x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__13___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__13(x_2, x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__15___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__15(x_2, x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__21___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__21(x_2, x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__23___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__23(x_2, x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__25___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__25(x_2, x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__29___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__29(x_2, x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__31___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__31(x_2, x_1);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__33___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_take__while__cont___at_lean_ir_identifier___spec__33(x_2, x_1);
return x_3;
}
}
obj* l_lean_ir_parse__var(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_ir_identifier(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 lean::cnstr_release(x_1, 2);
 x_8 = x_1;
}
x_9 = l_lean_parser_monad__parsec_whitespace___at_lean_ir_symbol___spec__2(x_4);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; obj* x_12; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_22; 
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_9, 2);
lean::inc(x_12);
lean::dec(x_9);
x_15 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_15);
if (lean::is_scalar(x_8)) {
 x_17 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_17 = x_8;
}
lean::cnstr_set(x_17, 0, x_2);
lean::cnstr_set(x_17, 1, x_10);
lean::cnstr_set(x_17, 2, x_15);
x_18 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_17);
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_18);
x_20 = l_lean_ir_parse__var___closed__1;
lean::inc(x_20);
x_22 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_19, x_20);
return x_22;
}
else
{
obj* x_25; unsigned char x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_34; 
lean::dec(x_8);
lean::dec(x_2);
x_25 = lean::cnstr_get(x_9, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get_scalar<unsigned char>(x_9, sizeof(void*)*1);
if (lean::is_shared(x_9)) {
 lean::dec(x_9);
 x_28 = lean::box(0);
} else {
 lean::cnstr_release(x_9, 0);
 x_28 = x_9;
}
if (lean::is_scalar(x_28)) {
 x_29 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_29 = x_28;
}
lean::cnstr_set(x_29, 0, x_25);
lean::cnstr_set_scalar(x_29, sizeof(void*)*1, x_27);
x_30 = x_29;
x_31 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_30);
x_32 = l_lean_ir_parse__var___closed__1;
lean::inc(x_32);
x_34 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_31, x_32);
return x_34;
}
}
else
{
obj* x_35; unsigned char x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_43; 
x_35 = lean::cnstr_get(x_1, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get_scalar<unsigned char>(x_1, sizeof(void*)*1);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_38 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 x_38 = x_1;
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_35);
lean::cnstr_set_scalar(x_39, sizeof(void*)*1, x_37);
x_40 = x_39;
x_41 = l_lean_ir_parse__var___closed__1;
lean::inc(x_41);
x_43 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_40, x_41);
return x_43;
}
}
}
obj* _init_l_lean_ir_parse__var___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("variable");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_ir_parse__fnid(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_ir_identifier(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 lean::cnstr_release(x_1, 2);
 x_8 = x_1;
}
x_9 = l_lean_parser_monad__parsec_whitespace___at_lean_ir_symbol___spec__2(x_4);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; obj* x_12; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_22; 
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_9, 2);
lean::inc(x_12);
lean::dec(x_9);
x_15 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_15);
if (lean::is_scalar(x_8)) {
 x_17 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_17 = x_8;
}
lean::cnstr_set(x_17, 0, x_2);
lean::cnstr_set(x_17, 1, x_10);
lean::cnstr_set(x_17, 2, x_15);
x_18 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_17);
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_18);
x_20 = l_lean_ir_parse__fnid___closed__1;
lean::inc(x_20);
x_22 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_19, x_20);
return x_22;
}
else
{
obj* x_25; unsigned char x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_34; 
lean::dec(x_8);
lean::dec(x_2);
x_25 = lean::cnstr_get(x_9, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get_scalar<unsigned char>(x_9, sizeof(void*)*1);
if (lean::is_shared(x_9)) {
 lean::dec(x_9);
 x_28 = lean::box(0);
} else {
 lean::cnstr_release(x_9, 0);
 x_28 = x_9;
}
if (lean::is_scalar(x_28)) {
 x_29 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_29 = x_28;
}
lean::cnstr_set(x_29, 0, x_25);
lean::cnstr_set_scalar(x_29, sizeof(void*)*1, x_27);
x_30 = x_29;
x_31 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_30);
x_32 = l_lean_ir_parse__fnid___closed__1;
lean::inc(x_32);
x_34 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_31, x_32);
return x_34;
}
}
else
{
obj* x_35; unsigned char x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_43; 
x_35 = lean::cnstr_get(x_1, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get_scalar<unsigned char>(x_1, sizeof(void*)*1);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_38 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 x_38 = x_1;
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_35);
lean::cnstr_set_scalar(x_39, sizeof(void*)*1, x_37);
x_40 = x_39;
x_41 = l_lean_ir_parse__fnid___closed__1;
lean::inc(x_41);
x_43 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_40, x_41);
return x_43;
}
}
}
obj* _init_l_lean_ir_parse__fnid___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("function name");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_ir_parse__blockid(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_ir_identifier(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 lean::cnstr_release(x_1, 2);
 x_8 = x_1;
}
x_9 = l_lean_parser_monad__parsec_whitespace___at_lean_ir_symbol___spec__2(x_4);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; obj* x_12; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_22; 
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_9, 2);
lean::inc(x_12);
lean::dec(x_9);
x_15 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_15);
if (lean::is_scalar(x_8)) {
 x_17 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_17 = x_8;
}
lean::cnstr_set(x_17, 0, x_2);
lean::cnstr_set(x_17, 1, x_10);
lean::cnstr_set(x_17, 2, x_15);
x_18 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_17);
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_18);
x_20 = l_lean_ir_parse__blockid___closed__1;
lean::inc(x_20);
x_22 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_19, x_20);
return x_22;
}
else
{
obj* x_25; unsigned char x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_34; 
lean::dec(x_8);
lean::dec(x_2);
x_25 = lean::cnstr_get(x_9, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get_scalar<unsigned char>(x_9, sizeof(void*)*1);
if (lean::is_shared(x_9)) {
 lean::dec(x_9);
 x_28 = lean::box(0);
} else {
 lean::cnstr_release(x_9, 0);
 x_28 = x_9;
}
if (lean::is_scalar(x_28)) {
 x_29 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_29 = x_28;
}
lean::cnstr_set(x_29, 0, x_25);
lean::cnstr_set_scalar(x_29, sizeof(void*)*1, x_27);
x_30 = x_29;
x_31 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_30);
x_32 = l_lean_ir_parse__blockid___closed__1;
lean::inc(x_32);
x_34 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_31, x_32);
return x_34;
}
}
else
{
obj* x_35; unsigned char x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_43; 
x_35 = lean::cnstr_get(x_1, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get_scalar<unsigned char>(x_1, sizeof(void*)*1);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_38 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 x_38 = x_1;
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_35);
lean::cnstr_set_scalar(x_39, sizeof(void*)*1, x_37);
x_40 = x_39;
x_41 = l_lean_ir_parse__blockid___closed__1;
lean::inc(x_41);
x_43 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_40, x_41);
return x_43;
}
}
}
obj* _init_l_lean_ir_parse__blockid___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("label");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_ir_parse__typed__assignment(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; 
x_2 = l_lean_ir_parse__typed__assignment___closed__1;
lean::inc(x_2);
x_4 = l_lean_ir_symbol(x_2, x_1);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_14; 
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 2);
lean::inc(x_7);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_9 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 lean::cnstr_release(x_4, 2);
 x_9 = x_4;
}
x_10 = l_lean_ir_parse__typed__assignment___closed__2;
x_11 = l_lean_ir_str2type;
lean::inc(x_11);
lean::inc(x_10);
x_14 = l_lean_ir_parse__key2val___main___rarg(x_10, x_11, x_5);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_24; 
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_14, 2);
lean::inc(x_19);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_21 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 lean::cnstr_release(x_14, 1);
 lean::cnstr_release(x_14, 2);
 x_21 = x_14;
}
x_22 = l_lean_ir_parse__typed__assignment___closed__3;
lean::inc(x_22);
x_24 = l_lean_ir_symbol(x_22, x_17);
if (lean::obj_tag(x_24) == 0)
{
obj* x_25; obj* x_27; obj* x_29; obj* x_30; obj* x_32; obj* x_33; obj* x_34; obj* x_36; obj* x_39; 
x_25 = lean::cnstr_get(x_24, 1);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_24, 2);
lean::inc(x_27);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 lean::cnstr_release(x_24, 1);
 lean::cnstr_release(x_24, 2);
 x_29 = x_24;
}
x_36 = l_lean_ir_parse__typed__assignment___closed__6;
lean::inc(x_25);
lean::inc(x_36);
x_39 = l_lean_ir_keyword(x_36, x_25);
if (lean::obj_tag(x_39) == 0)
{
obj* x_40; obj* x_42; obj* x_44; obj* x_45; 
x_40 = lean::cnstr_get(x_39, 1);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_39, 2);
lean::inc(x_42);
if (lean::is_shared(x_39)) {
 lean::dec(x_39);
 x_44 = lean::box(0);
} else {
 lean::cnstr_release(x_39, 0);
 lean::cnstr_release(x_39, 1);
 lean::cnstr_release(x_39, 2);
 x_44 = x_39;
}
x_45 = l_lean_ir_parse__var(x_40);
if (lean::obj_tag(x_45) == 0)
{
obj* x_46; obj* x_48; obj* x_50; obj* x_55; obj* x_56; obj* x_58; obj* x_59; obj* x_60; 
x_46 = lean::cnstr_get(x_45, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_45, 1);
lean::inc(x_48);
x_50 = lean::cnstr_get(x_45, 2);
lean::inc(x_50);
lean::dec(x_45);
lean::inc(x_15);
lean::inc(x_0);
x_55 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_parse__typed__assignment___lambda__3___boxed), 4, 3);
lean::closure_set(x_55, 0, x_0);
lean::closure_set(x_55, 1, x_15);
lean::closure_set(x_55, 2, x_46);
x_56 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_56);
if (lean::is_scalar(x_44)) {
 x_58 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_58 = x_44;
}
lean::cnstr_set(x_58, 0, x_55);
lean::cnstr_set(x_58, 1, x_48);
lean::cnstr_set(x_58, 2, x_56);
x_59 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_50, x_58);
x_60 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_42, x_59);
if (lean::obj_tag(x_60) == 0)
{
obj* x_61; obj* x_63; obj* x_65; 
x_61 = lean::cnstr_get(x_60, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_60, 1);
lean::inc(x_63);
x_65 = lean::cnstr_get(x_60, 2);
lean::inc(x_65);
lean::dec(x_60);
x_32 = x_61;
x_33 = x_63;
x_34 = x_65;
goto lbl_35;
}
else
{
obj* x_68; unsigned char x_70; obj* x_71; obj* x_72; obj* x_73; 
x_68 = lean::cnstr_get(x_60, 0);
lean::inc(x_68);
x_70 = lean::cnstr_get_scalar<unsigned char>(x_60, sizeof(void*)*1);
if (lean::is_shared(x_60)) {
 lean::dec(x_60);
 x_71 = lean::box(0);
} else {
 lean::cnstr_release(x_60, 0);
 x_71 = x_60;
}
if (lean::is_scalar(x_71)) {
 x_72 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_72 = x_71;
}
lean::cnstr_set(x_72, 0, x_68);
lean::cnstr_set_scalar(x_72, sizeof(void*)*1, x_70);
x_73 = x_72;
x_30 = x_73;
goto lbl_31;
}
}
else
{
obj* x_75; unsigned char x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; 
lean::dec(x_44);
x_75 = lean::cnstr_get(x_45, 0);
lean::inc(x_75);
x_77 = lean::cnstr_get_scalar<unsigned char>(x_45, sizeof(void*)*1);
if (lean::is_shared(x_45)) {
 lean::dec(x_45);
 x_78 = lean::box(0);
} else {
 lean::cnstr_release(x_45, 0);
 x_78 = x_45;
}
if (lean::is_scalar(x_78)) {
 x_79 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_79 = x_78;
}
lean::cnstr_set(x_79, 0, x_75);
lean::cnstr_set_scalar(x_79, sizeof(void*)*1, x_77);
x_80 = x_79;
x_81 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_42, x_80);
if (lean::obj_tag(x_81) == 0)
{
obj* x_82; obj* x_84; obj* x_86; 
x_82 = lean::cnstr_get(x_81, 0);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_81, 1);
lean::inc(x_84);
x_86 = lean::cnstr_get(x_81, 2);
lean::inc(x_86);
lean::dec(x_81);
x_32 = x_82;
x_33 = x_84;
x_34 = x_86;
goto lbl_35;
}
else
{
obj* x_89; unsigned char x_91; obj* x_92; obj* x_93; obj* x_94; 
x_89 = lean::cnstr_get(x_81, 0);
lean::inc(x_89);
x_91 = lean::cnstr_get_scalar<unsigned char>(x_81, sizeof(void*)*1);
if (lean::is_shared(x_81)) {
 lean::dec(x_81);
 x_92 = lean::box(0);
} else {
 lean::cnstr_release(x_81, 0);
 x_92 = x_81;
}
if (lean::is_scalar(x_92)) {
 x_93 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_93 = x_92;
}
lean::cnstr_set(x_93, 0, x_89);
lean::cnstr_set_scalar(x_93, sizeof(void*)*1, x_91);
x_94 = x_93;
x_30 = x_94;
goto lbl_31;
}
}
}
else
{
obj* x_95; unsigned char x_97; obj* x_98; obj* x_99; obj* x_100; 
x_95 = lean::cnstr_get(x_39, 0);
lean::inc(x_95);
x_97 = lean::cnstr_get_scalar<unsigned char>(x_39, sizeof(void*)*1);
if (lean::is_shared(x_39)) {
 lean::dec(x_39);
 x_98 = lean::box(0);
} else {
 lean::cnstr_release(x_39, 0);
 x_98 = x_39;
}
if (lean::is_scalar(x_98)) {
 x_99 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_99 = x_98;
}
lean::cnstr_set(x_99, 0, x_95);
lean::cnstr_set_scalar(x_99, sizeof(void*)*1, x_97);
x_100 = x_99;
x_30 = x_100;
goto lbl_31;
}
lbl_31:
{
if (lean::obj_tag(x_30) == 0)
{
obj* x_107; obj* x_108; obj* x_109; 
lean::dec(x_15);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_21);
lean::dec(x_25);
lean::dec(x_29);
x_107 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_27, x_30);
x_108 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_107);
x_109 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_108);
return x_109;
}
else
{
obj* x_110; unsigned char x_112; obj* x_113; obj* x_114; unsigned char x_115; 
x_110 = lean::cnstr_get(x_30, 0);
lean::inc(x_110);
x_112 = lean::cnstr_get_scalar<unsigned char>(x_30, sizeof(void*)*1);
if (x_112 == 0)
{
obj* x_119; 
lean::dec(x_30);
lean::inc(x_25);
x_119 = l_lean_ir_parse__var(x_25);
if (lean::obj_tag(x_119) == 0)
{
obj* x_120; obj* x_122; obj* x_124; obj* x_126; obj* x_128; unsigned char x_129; obj* x_130; obj* x_131; obj* x_133; obj* x_134; 
x_120 = lean::cnstr_get(x_119, 0);
lean::inc(x_120);
x_122 = lean::cnstr_get(x_119, 1);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_119, 2);
lean::inc(x_124);
if (lean::is_shared(x_119)) {
 lean::dec(x_119);
 x_126 = lean::box(0);
} else {
 lean::cnstr_release(x_119, 0);
 lean::cnstr_release(x_119, 1);
 lean::cnstr_release(x_119, 2);
 x_126 = x_119;
}
lean::inc(x_0);
x_128 = lean::alloc_cnstr(0, 2, 1);
lean::cnstr_set(x_128, 0, x_0);
lean::cnstr_set(x_128, 1, x_120);
x_129 = lean::unbox(x_15);
lean::cnstr_set_scalar(x_128, sizeof(void*)*2, x_129);
x_130 = x_128;
x_131 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_131);
if (lean::is_scalar(x_126)) {
 x_133 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_133 = x_126;
}
lean::cnstr_set(x_133, 0, x_130);
lean::cnstr_set(x_133, 1, x_122);
lean::cnstr_set(x_133, 2, x_131);
x_134 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_124, x_133);
if (lean::obj_tag(x_134) == 0)
{
obj* x_141; obj* x_142; obj* x_143; obj* x_144; 
lean::dec(x_15);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_21);
lean::dec(x_25);
lean::dec(x_29);
x_141 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_110, x_134);
x_142 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_27, x_141);
x_143 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_142);
x_144 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_143);
return x_144;
}
else
{
obj* x_145; unsigned char x_147; 
x_145 = lean::cnstr_get(x_134, 0);
lean::inc(x_145);
x_147 = lean::cnstr_get_scalar<unsigned char>(x_134, sizeof(void*)*1);
x_113 = x_134;
x_114 = x_145;
x_115 = x_147;
goto lbl_116;
}
}
else
{
obj* x_148; unsigned char x_150; obj* x_151; obj* x_153; obj* x_154; 
x_148 = lean::cnstr_get(x_119, 0);
lean::inc(x_148);
x_150 = lean::cnstr_get_scalar<unsigned char>(x_119, sizeof(void*)*1);
if (lean::is_shared(x_119)) {
 lean::dec(x_119);
 x_151 = lean::box(0);
} else {
 lean::cnstr_release(x_119, 0);
 x_151 = x_119;
}
lean::inc(x_148);
if (lean::is_scalar(x_151)) {
 x_153 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_153 = x_151;
}
lean::cnstr_set(x_153, 0, x_148);
lean::cnstr_set_scalar(x_153, sizeof(void*)*1, x_150);
x_154 = x_153;
x_113 = x_154;
x_114 = x_148;
x_115 = x_150;
goto lbl_116;
}
}
else
{
obj* x_162; obj* x_163; obj* x_164; 
lean::dec(x_15);
lean::dec(x_110);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_21);
lean::dec(x_25);
lean::dec(x_29);
x_162 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_27, x_30);
x_163 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_162);
x_164 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_163);
return x_164;
}
lbl_116:
{
obj* x_165; obj* x_166; unsigned char x_167; 
if (x_115 == 0)
{
obj* x_170; obj* x_171; obj* x_175; 
lean::dec(x_113);
x_170 = l_lean_ir_parse__typed__assignment___closed__5;
x_171 = l_lean_ir_str2aunop;
lean::inc(x_25);
lean::inc(x_171);
lean::inc(x_170);
x_175 = l_lean_ir_parse__key2val___main___rarg(x_170, x_171, x_25);
if (lean::obj_tag(x_175) == 0)
{
obj* x_176; obj* x_178; obj* x_180; obj* x_182; obj* x_185; obj* x_186; obj* x_188; obj* x_189; 
x_176 = lean::cnstr_get(x_175, 0);
lean::inc(x_176);
x_178 = lean::cnstr_get(x_175, 1);
lean::inc(x_178);
x_180 = lean::cnstr_get(x_175, 2);
lean::inc(x_180);
if (lean::is_shared(x_175)) {
 lean::dec(x_175);
 x_182 = lean::box(0);
} else {
 lean::cnstr_release(x_175, 0);
 lean::cnstr_release(x_175, 1);
 lean::cnstr_release(x_175, 2);
 x_182 = x_175;
}
lean::inc(x_15);
lean::inc(x_0);
x_185 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_parse__typed__assignment___lambda__2___boxed), 4, 3);
lean::closure_set(x_185, 0, x_0);
lean::closure_set(x_185, 1, x_15);
lean::closure_set(x_185, 2, x_176);
x_186 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_186);
if (lean::is_scalar(x_182)) {
 x_188 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_188 = x_182;
}
lean::cnstr_set(x_188, 0, x_185);
lean::cnstr_set(x_188, 1, x_178);
lean::cnstr_set(x_188, 2, x_186);
x_189 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_180, x_188);
if (lean::obj_tag(x_189) == 0)
{
obj* x_190; obj* x_192; obj* x_194; obj* x_196; obj* x_197; 
x_190 = lean::cnstr_get(x_189, 0);
lean::inc(x_190);
x_192 = lean::cnstr_get(x_189, 1);
lean::inc(x_192);
x_194 = lean::cnstr_get(x_189, 2);
lean::inc(x_194);
if (lean::is_shared(x_189)) {
 lean::dec(x_189);
 x_196 = lean::box(0);
} else {
 lean::cnstr_release(x_189, 0);
 lean::cnstr_release(x_189, 1);
 lean::cnstr_release(x_189, 2);
 x_196 = x_189;
}
x_197 = l_lean_ir_parse__var(x_192);
if (lean::obj_tag(x_197) == 0)
{
obj* x_198; obj* x_200; obj* x_202; obj* x_205; obj* x_207; obj* x_208; obj* x_209; 
x_198 = lean::cnstr_get(x_197, 0);
lean::inc(x_198);
x_200 = lean::cnstr_get(x_197, 1);
lean::inc(x_200);
x_202 = lean::cnstr_get(x_197, 2);
lean::inc(x_202);
lean::dec(x_197);
x_205 = lean::apply_1(x_190, x_198);
lean::inc(x_186);
if (lean::is_scalar(x_196)) {
 x_207 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_207 = x_196;
}
lean::cnstr_set(x_207, 0, x_205);
lean::cnstr_set(x_207, 1, x_200);
lean::cnstr_set(x_207, 2, x_186);
x_208 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_202, x_207);
x_209 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_194, x_208);
if (lean::obj_tag(x_209) == 0)
{
obj* x_216; obj* x_217; obj* x_218; obj* x_219; obj* x_220; 
lean::dec(x_15);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_21);
lean::dec(x_25);
lean::dec(x_29);
x_216 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_114, x_209);
x_217 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_110, x_216);
x_218 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_27, x_217);
x_219 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_218);
x_220 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_219);
return x_220;
}
else
{
obj* x_221; unsigned char x_223; 
x_221 = lean::cnstr_get(x_209, 0);
lean::inc(x_221);
x_223 = lean::cnstr_get_scalar<unsigned char>(x_209, sizeof(void*)*1);
x_165 = x_209;
x_166 = x_221;
x_167 = x_223;
goto lbl_168;
}
}
else
{
obj* x_226; unsigned char x_228; obj* x_229; obj* x_230; obj* x_231; obj* x_232; 
lean::dec(x_190);
lean::dec(x_196);
x_226 = lean::cnstr_get(x_197, 0);
lean::inc(x_226);
x_228 = lean::cnstr_get_scalar<unsigned char>(x_197, sizeof(void*)*1);
if (lean::is_shared(x_197)) {
 lean::dec(x_197);
 x_229 = lean::box(0);
} else {
 lean::cnstr_release(x_197, 0);
 x_229 = x_197;
}
if (lean::is_scalar(x_229)) {
 x_230 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_230 = x_229;
}
lean::cnstr_set(x_230, 0, x_226);
lean::cnstr_set_scalar(x_230, sizeof(void*)*1, x_228);
x_231 = x_230;
x_232 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_194, x_231);
if (lean::obj_tag(x_232) == 0)
{
obj* x_239; obj* x_240; obj* x_241; obj* x_242; obj* x_243; 
lean::dec(x_15);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_21);
lean::dec(x_25);
lean::dec(x_29);
x_239 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_114, x_232);
x_240 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_110, x_239);
x_241 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_27, x_240);
x_242 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_241);
x_243 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_242);
return x_243;
}
else
{
obj* x_244; unsigned char x_246; 
x_244 = lean::cnstr_get(x_232, 0);
lean::inc(x_244);
x_246 = lean::cnstr_get_scalar<unsigned char>(x_232, sizeof(void*)*1);
x_165 = x_232;
x_166 = x_244;
x_167 = x_246;
goto lbl_168;
}
}
}
else
{
obj* x_247; unsigned char x_249; obj* x_250; obj* x_252; obj* x_253; 
x_247 = lean::cnstr_get(x_189, 0);
lean::inc(x_247);
x_249 = lean::cnstr_get_scalar<unsigned char>(x_189, sizeof(void*)*1);
if (lean::is_shared(x_189)) {
 lean::dec(x_189);
 x_250 = lean::box(0);
} else {
 lean::cnstr_release(x_189, 0);
 x_250 = x_189;
}
lean::inc(x_247);
if (lean::is_scalar(x_250)) {
 x_252 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_252 = x_250;
}
lean::cnstr_set(x_252, 0, x_247);
lean::cnstr_set_scalar(x_252, sizeof(void*)*1, x_249);
x_253 = x_252;
x_165 = x_253;
x_166 = x_247;
x_167 = x_249;
goto lbl_168;
}
}
else
{
obj* x_254; unsigned char x_256; obj* x_257; obj* x_259; obj* x_260; 
x_254 = lean::cnstr_get(x_175, 0);
lean::inc(x_254);
x_256 = lean::cnstr_get_scalar<unsigned char>(x_175, sizeof(void*)*1);
if (lean::is_shared(x_175)) {
 lean::dec(x_175);
 x_257 = lean::box(0);
} else {
 lean::cnstr_release(x_175, 0);
 x_257 = x_175;
}
lean::inc(x_254);
if (lean::is_scalar(x_257)) {
 x_259 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_259 = x_257;
}
lean::cnstr_set(x_259, 0, x_254);
lean::cnstr_set_scalar(x_259, sizeof(void*)*1, x_256);
x_260 = x_259;
x_165 = x_260;
x_166 = x_254;
x_167 = x_256;
goto lbl_168;
}
}
else
{
obj* x_268; obj* x_269; obj* x_270; obj* x_271; 
lean::dec(x_114);
lean::dec(x_15);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_21);
lean::dec(x_25);
lean::dec(x_29);
x_268 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_110, x_113);
x_269 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_27, x_268);
x_270 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_269);
x_271 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_270);
return x_271;
}
lbl_168:
{
obj* x_272; obj* x_273; unsigned char x_274; obj* x_276; obj* x_277; obj* x_278; 
if (x_167 == 0)
{
obj* x_281; obj* x_282; obj* x_286; 
lean::dec(x_165);
x_281 = l_lean_ir_parse__typed__assignment___closed__4;
x_282 = l_lean_ir_str2abinop;
lean::inc(x_25);
lean::inc(x_282);
lean::inc(x_281);
x_286 = l_lean_ir_parse__key2val___main___rarg(x_281, x_282, x_25);
if (lean::obj_tag(x_286) == 0)
{
obj* x_287; obj* x_289; obj* x_291; obj* x_293; obj* x_296; obj* x_297; obj* x_299; obj* x_300; 
x_287 = lean::cnstr_get(x_286, 0);
lean::inc(x_287);
x_289 = lean::cnstr_get(x_286, 1);
lean::inc(x_289);
x_291 = lean::cnstr_get(x_286, 2);
lean::inc(x_291);
if (lean::is_shared(x_286)) {
 lean::dec(x_286);
 x_293 = lean::box(0);
} else {
 lean::cnstr_release(x_286, 0);
 lean::cnstr_release(x_286, 1);
 lean::cnstr_release(x_286, 2);
 x_293 = x_286;
}
lean::inc(x_15);
lean::inc(x_0);
x_296 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_parse__typed__assignment___lambda__1___boxed), 5, 3);
lean::closure_set(x_296, 0, x_0);
lean::closure_set(x_296, 1, x_15);
lean::closure_set(x_296, 2, x_287);
x_297 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_297);
if (lean::is_scalar(x_29)) {
 x_299 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_299 = x_29;
}
lean::cnstr_set(x_299, 0, x_296);
lean::cnstr_set(x_299, 1, x_289);
lean::cnstr_set(x_299, 2, x_297);
x_300 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_291, x_299);
if (lean::obj_tag(x_300) == 0)
{
obj* x_301; obj* x_303; obj* x_305; obj* x_308; 
x_301 = lean::cnstr_get(x_300, 0);
lean::inc(x_301);
x_303 = lean::cnstr_get(x_300, 1);
lean::inc(x_303);
x_305 = lean::cnstr_get(x_300, 2);
lean::inc(x_305);
lean::dec(x_300);
x_308 = l_lean_ir_parse__var(x_303);
if (lean::obj_tag(x_308) == 0)
{
obj* x_309; obj* x_311; obj* x_313; obj* x_316; obj* x_318; obj* x_319; obj* x_320; 
x_309 = lean::cnstr_get(x_308, 0);
lean::inc(x_309);
x_311 = lean::cnstr_get(x_308, 1);
lean::inc(x_311);
x_313 = lean::cnstr_get(x_308, 2);
lean::inc(x_313);
lean::dec(x_308);
x_316 = lean::apply_1(x_301, x_309);
lean::inc(x_297);
if (lean::is_scalar(x_293)) {
 x_318 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_318 = x_293;
}
lean::cnstr_set(x_318, 0, x_316);
lean::cnstr_set(x_318, 1, x_311);
lean::cnstr_set(x_318, 2, x_297);
x_319 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_313, x_318);
x_320 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_305, x_319);
if (lean::obj_tag(x_320) == 0)
{
obj* x_321; obj* x_323; obj* x_325; 
x_321 = lean::cnstr_get(x_320, 0);
lean::inc(x_321);
x_323 = lean::cnstr_get(x_320, 1);
lean::inc(x_323);
x_325 = lean::cnstr_get(x_320, 2);
lean::inc(x_325);
lean::dec(x_320);
x_276 = x_321;
x_277 = x_323;
x_278 = x_325;
goto lbl_279;
}
else
{
obj* x_329; unsigned char x_331; obj* x_332; obj* x_334; obj* x_335; 
lean::dec(x_21);
x_329 = lean::cnstr_get(x_320, 0);
lean::inc(x_329);
x_331 = lean::cnstr_get_scalar<unsigned char>(x_320, sizeof(void*)*1);
if (lean::is_shared(x_320)) {
 lean::dec(x_320);
 x_332 = lean::box(0);
} else {
 lean::cnstr_release(x_320, 0);
 x_332 = x_320;
}
lean::inc(x_329);
if (lean::is_scalar(x_332)) {
 x_334 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_334 = x_332;
}
lean::cnstr_set(x_334, 0, x_329);
lean::cnstr_set_scalar(x_334, sizeof(void*)*1, x_331);
x_335 = x_334;
x_272 = x_335;
x_273 = x_329;
x_274 = x_331;
goto lbl_275;
}
}
else
{
obj* x_338; unsigned char x_340; obj* x_341; obj* x_342; obj* x_343; obj* x_344; 
lean::dec(x_301);
lean::dec(x_293);
x_338 = lean::cnstr_get(x_308, 0);
lean::inc(x_338);
x_340 = lean::cnstr_get_scalar<unsigned char>(x_308, sizeof(void*)*1);
if (lean::is_shared(x_308)) {
 lean::dec(x_308);
 x_341 = lean::box(0);
} else {
 lean::cnstr_release(x_308, 0);
 x_341 = x_308;
}
if (lean::is_scalar(x_341)) {
 x_342 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_342 = x_341;
}
lean::cnstr_set(x_342, 0, x_338);
lean::cnstr_set_scalar(x_342, sizeof(void*)*1, x_340);
x_343 = x_342;
x_344 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_305, x_343);
if (lean::obj_tag(x_344) == 0)
{
obj* x_345; obj* x_347; obj* x_349; 
x_345 = lean::cnstr_get(x_344, 0);
lean::inc(x_345);
x_347 = lean::cnstr_get(x_344, 1);
lean::inc(x_347);
x_349 = lean::cnstr_get(x_344, 2);
lean::inc(x_349);
lean::dec(x_344);
x_276 = x_345;
x_277 = x_347;
x_278 = x_349;
goto lbl_279;
}
else
{
obj* x_353; unsigned char x_355; obj* x_356; obj* x_358; obj* x_359; 
lean::dec(x_21);
x_353 = lean::cnstr_get(x_344, 0);
lean::inc(x_353);
x_355 = lean::cnstr_get_scalar<unsigned char>(x_344, sizeof(void*)*1);
if (lean::is_shared(x_344)) {
 lean::dec(x_344);
 x_356 = lean::box(0);
} else {
 lean::cnstr_release(x_344, 0);
 x_356 = x_344;
}
lean::inc(x_353);
if (lean::is_scalar(x_356)) {
 x_358 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_358 = x_356;
}
lean::cnstr_set(x_358, 0, x_353);
lean::cnstr_set_scalar(x_358, sizeof(void*)*1, x_355);
x_359 = x_358;
x_272 = x_359;
x_273 = x_353;
x_274 = x_355;
goto lbl_275;
}
}
}
else
{
obj* x_362; unsigned char x_364; obj* x_365; obj* x_367; obj* x_368; 
lean::dec(x_21);
lean::dec(x_293);
x_362 = lean::cnstr_get(x_300, 0);
lean::inc(x_362);
x_364 = lean::cnstr_get_scalar<unsigned char>(x_300, sizeof(void*)*1);
if (lean::is_shared(x_300)) {
 lean::dec(x_300);
 x_365 = lean::box(0);
} else {
 lean::cnstr_release(x_300, 0);
 x_365 = x_300;
}
lean::inc(x_362);
if (lean::is_scalar(x_365)) {
 x_367 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_367 = x_365;
}
lean::cnstr_set(x_367, 0, x_362);
lean::cnstr_set_scalar(x_367, sizeof(void*)*1, x_364);
x_368 = x_367;
x_272 = x_368;
x_273 = x_362;
x_274 = x_364;
goto lbl_275;
}
}
else
{
obj* x_371; unsigned char x_373; obj* x_374; obj* x_376; obj* x_377; 
lean::dec(x_21);
lean::dec(x_29);
x_371 = lean::cnstr_get(x_286, 0);
lean::inc(x_371);
x_373 = lean::cnstr_get_scalar<unsigned char>(x_286, sizeof(void*)*1);
if (lean::is_shared(x_286)) {
 lean::dec(x_286);
 x_374 = lean::box(0);
} else {
 lean::cnstr_release(x_286, 0);
 x_374 = x_286;
}
lean::inc(x_371);
if (lean::is_scalar(x_374)) {
 x_376 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_376 = x_374;
}
lean::cnstr_set(x_376, 0, x_371);
lean::cnstr_set_scalar(x_376, sizeof(void*)*1, x_373);
x_377 = x_376;
x_272 = x_377;
x_273 = x_371;
x_274 = x_373;
goto lbl_275;
}
}
else
{
obj* x_385; obj* x_386; obj* x_387; obj* x_388; obj* x_389; 
lean::dec(x_15);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_21);
lean::dec(x_25);
lean::dec(x_29);
lean::dec(x_166);
x_385 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_114, x_165);
x_386 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_110, x_385);
x_387 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_27, x_386);
x_388 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_387);
x_389 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_388);
return x_389;
}
lbl_275:
{
if (x_274 == 0)
{
obj* x_391; 
lean::dec(x_272);
x_391 = l_lean_ir_parse__literal(x_25);
if (lean::obj_tag(x_391) == 0)
{
obj* x_392; obj* x_394; obj* x_396; obj* x_399; unsigned char x_400; obj* x_402; obj* x_403; obj* x_405; obj* x_406; obj* x_407; obj* x_408; obj* x_409; obj* x_410; obj* x_411; obj* x_412; obj* x_413; 
x_392 = lean::cnstr_get(x_391, 0);
lean::inc(x_392);
x_394 = lean::cnstr_get(x_391, 1);
lean::inc(x_394);
x_396 = lean::cnstr_get(x_391, 2);
lean::inc(x_396);
lean::dec(x_391);
x_399 = lean::alloc_cnstr(1, 2, 1);
lean::cnstr_set(x_399, 0, x_0);
lean::cnstr_set(x_399, 1, x_392);
x_400 = lean::unbox(x_15);
lean::dec(x_15);
lean::cnstr_set_scalar(x_399, sizeof(void*)*2, x_400);
x_402 = x_399;
x_403 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_403);
if (lean::is_scalar(x_9)) {
 x_405 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_405 = x_9;
}
lean::cnstr_set(x_405, 0, x_402);
lean::cnstr_set(x_405, 1, x_394);
lean::cnstr_set(x_405, 2, x_403);
x_406 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_396, x_405);
x_407 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_273, x_406);
x_408 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_166, x_407);
x_409 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_114, x_408);
x_410 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_110, x_409);
x_411 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_27, x_410);
x_412 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_411);
x_413 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_412);
return x_413;
}
else
{
obj* x_417; unsigned char x_419; obj* x_420; obj* x_421; obj* x_422; obj* x_423; obj* x_424; obj* x_425; obj* x_426; obj* x_427; obj* x_428; obj* x_429; 
lean::dec(x_15);
lean::dec(x_9);
lean::dec(x_0);
x_417 = lean::cnstr_get(x_391, 0);
lean::inc(x_417);
x_419 = lean::cnstr_get_scalar<unsigned char>(x_391, sizeof(void*)*1);
if (lean::is_shared(x_391)) {
 lean::dec(x_391);
 x_420 = lean::box(0);
} else {
 lean::cnstr_release(x_391, 0);
 x_420 = x_391;
}
if (lean::is_scalar(x_420)) {
 x_421 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_421 = x_420;
}
lean::cnstr_set(x_421, 0, x_417);
lean::cnstr_set_scalar(x_421, sizeof(void*)*1, x_419);
x_422 = x_421;
x_423 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_273, x_422);
x_424 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_166, x_423);
x_425 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_114, x_424);
x_426 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_110, x_425);
x_427 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_27, x_426);
x_428 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_427);
x_429 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_428);
return x_429;
}
}
else
{
obj* x_435; obj* x_436; obj* x_437; obj* x_438; obj* x_439; obj* x_440; 
lean::dec(x_15);
lean::dec(x_273);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_25);
x_435 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_166, x_272);
x_436 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_114, x_435);
x_437 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_110, x_436);
x_438 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_27, x_437);
x_439 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_438);
x_440 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_439);
return x_440;
}
}
lbl_279:
{
obj* x_441; 
x_441 = l_lean_ir_parse__var(x_277);
if (lean::obj_tag(x_441) == 0)
{
obj* x_442; obj* x_444; obj* x_446; obj* x_449; obj* x_450; obj* x_452; obj* x_453; obj* x_454; 
x_442 = lean::cnstr_get(x_441, 0);
lean::inc(x_442);
x_444 = lean::cnstr_get(x_441, 1);
lean::inc(x_444);
x_446 = lean::cnstr_get(x_441, 2);
lean::inc(x_446);
lean::dec(x_441);
x_449 = lean::apply_1(x_276, x_442);
x_450 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_450);
if (lean::is_scalar(x_21)) {
 x_452 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_452 = x_21;
}
lean::cnstr_set(x_452, 0, x_449);
lean::cnstr_set(x_452, 1, x_444);
lean::cnstr_set(x_452, 2, x_450);
x_453 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_446, x_452);
x_454 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_278, x_453);
if (lean::obj_tag(x_454) == 0)
{
obj* x_459; obj* x_460; obj* x_461; obj* x_462; obj* x_463; obj* x_464; 
lean::dec(x_15);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_25);
x_459 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_166, x_454);
x_460 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_114, x_459);
x_461 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_110, x_460);
x_462 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_27, x_461);
x_463 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_462);
x_464 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_463);
return x_464;
}
else
{
obj* x_465; unsigned char x_467; 
x_465 = lean::cnstr_get(x_454, 0);
lean::inc(x_465);
x_467 = lean::cnstr_get_scalar<unsigned char>(x_454, sizeof(void*)*1);
x_272 = x_454;
x_273 = x_465;
x_274 = x_467;
goto lbl_275;
}
}
else
{
obj* x_470; unsigned char x_472; obj* x_473; obj* x_474; obj* x_475; obj* x_476; 
lean::dec(x_276);
lean::dec(x_21);
x_470 = lean::cnstr_get(x_441, 0);
lean::inc(x_470);
x_472 = lean::cnstr_get_scalar<unsigned char>(x_441, sizeof(void*)*1);
if (lean::is_shared(x_441)) {
 lean::dec(x_441);
 x_473 = lean::box(0);
} else {
 lean::cnstr_release(x_441, 0);
 x_473 = x_441;
}
if (lean::is_scalar(x_473)) {
 x_474 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_474 = x_473;
}
lean::cnstr_set(x_474, 0, x_470);
lean::cnstr_set_scalar(x_474, sizeof(void*)*1, x_472);
x_475 = x_474;
x_476 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_278, x_475);
if (lean::obj_tag(x_476) == 0)
{
obj* x_481; obj* x_482; obj* x_483; obj* x_484; obj* x_485; obj* x_486; 
lean::dec(x_15);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_25);
x_481 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_166, x_476);
x_482 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_114, x_481);
x_483 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_110, x_482);
x_484 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_27, x_483);
x_485 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_484);
x_486 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_485);
return x_486;
}
else
{
obj* x_487; unsigned char x_489; 
x_487 = lean::cnstr_get(x_476, 0);
lean::inc(x_487);
x_489 = lean::cnstr_get_scalar<unsigned char>(x_476, sizeof(void*)*1);
x_272 = x_476;
x_273 = x_487;
x_274 = x_489;
goto lbl_275;
}
}
}
}
}
}
}
lbl_35:
{
obj* x_490; 
x_490 = l_lean_ir_parse__usize(x_33);
if (lean::obj_tag(x_490) == 0)
{
obj* x_491; obj* x_493; obj* x_495; obj* x_497; obj* x_498; obj* x_499; obj* x_501; obj* x_502; obj* x_503; 
x_491 = lean::cnstr_get(x_490, 0);
lean::inc(x_491);
x_493 = lean::cnstr_get(x_490, 1);
lean::inc(x_493);
x_495 = lean::cnstr_get(x_490, 2);
lean::inc(x_495);
if (lean::is_shared(x_490)) {
 lean::dec(x_490);
 x_497 = lean::box(0);
} else {
 lean::cnstr_release(x_490, 0);
 lean::cnstr_release(x_490, 1);
 lean::cnstr_release(x_490, 2);
 x_497 = x_490;
}
x_498 = lean::apply_1(x_32, x_491);
x_499 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_499);
if (lean::is_scalar(x_497)) {
 x_501 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_501 = x_497;
}
lean::cnstr_set(x_501, 0, x_498);
lean::cnstr_set(x_501, 1, x_493);
lean::cnstr_set(x_501, 2, x_499);
x_502 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_495, x_501);
x_503 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_34, x_502);
x_30 = x_503;
goto lbl_31;
}
else
{
obj* x_505; unsigned char x_507; obj* x_508; obj* x_509; obj* x_510; obj* x_511; 
lean::dec(x_32);
x_505 = lean::cnstr_get(x_490, 0);
lean::inc(x_505);
x_507 = lean::cnstr_get_scalar<unsigned char>(x_490, sizeof(void*)*1);
if (lean::is_shared(x_490)) {
 lean::dec(x_490);
 x_508 = lean::box(0);
} else {
 lean::cnstr_release(x_490, 0);
 x_508 = x_490;
}
if (lean::is_scalar(x_508)) {
 x_509 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_509 = x_508;
}
lean::cnstr_set(x_509, 0, x_505);
lean::cnstr_set_scalar(x_509, sizeof(void*)*1, x_507);
x_510 = x_509;
x_511 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_34, x_510);
x_30 = x_511;
goto lbl_31;
}
}
}
else
{
obj* x_516; unsigned char x_518; obj* x_519; obj* x_520; obj* x_521; obj* x_522; obj* x_523; 
lean::dec(x_15);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_21);
x_516 = lean::cnstr_get(x_24, 0);
lean::inc(x_516);
x_518 = lean::cnstr_get_scalar<unsigned char>(x_24, sizeof(void*)*1);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_519 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_519 = x_24;
}
if (lean::is_scalar(x_519)) {
 x_520 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_520 = x_519;
}
lean::cnstr_set(x_520, 0, x_516);
lean::cnstr_set_scalar(x_520, sizeof(void*)*1, x_518);
x_521 = x_520;
x_522 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_521);
x_523 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_522);
return x_523;
}
}
else
{
obj* x_526; unsigned char x_528; obj* x_529; obj* x_530; obj* x_531; obj* x_532; 
lean::dec(x_9);
lean::dec(x_0);
x_526 = lean::cnstr_get(x_14, 0);
lean::inc(x_526);
x_528 = lean::cnstr_get_scalar<unsigned char>(x_14, sizeof(void*)*1);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_529 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_529 = x_14;
}
if (lean::is_scalar(x_529)) {
 x_530 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_530 = x_529;
}
lean::cnstr_set(x_530, 0, x_526);
lean::cnstr_set_scalar(x_530, sizeof(void*)*1, x_528);
x_531 = x_530;
x_532 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_531);
return x_532;
}
}
else
{
obj* x_534; unsigned char x_536; obj* x_537; obj* x_538; obj* x_539; 
lean::dec(x_0);
x_534 = lean::cnstr_get(x_4, 0);
lean::inc(x_534);
x_536 = lean::cnstr_get_scalar<unsigned char>(x_4, sizeof(void*)*1);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_537 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 x_537 = x_4;
}
if (lean::is_scalar(x_537)) {
 x_538 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_538 = x_537;
}
lean::cnstr_set(x_538, 0, x_534);
lean::cnstr_set_scalar(x_538, sizeof(void*)*1, x_536);
x_539 = x_538;
return x_539;
}
}
}
obj* _init_l_lean_ir_parse__typed__assignment___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string(":");
return x_0;
}
}
obj* _init_l_lean_ir_parse__typed__assignment___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("type");
return x_0;
}
}
obj* _init_l_lean_ir_parse__typed__assignment___closed__3() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string(":=");
return x_0;
}
}
obj* _init_l_lean_ir_parse__typed__assignment___closed__4() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("binary operator");
return x_0;
}
}
obj* _init_l_lean_ir_parse__typed__assignment___closed__5() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unary operator");
return x_0;
}
}
obj* _init_l_lean_ir_parse__typed__assignment___closed__6() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("sget");
return x_0;
}
}
obj* l_lean_ir_parse__typed__assignment___lambda__1(obj* x_0, unsigned char x_1, unsigned char x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = lean::alloc_cnstr(3, 3, 2);
lean::cnstr_set(x_5, 0, x_0);
lean::cnstr_set(x_5, 1, x_3);
lean::cnstr_set(x_5, 2, x_4);
lean::cnstr_set_scalar(x_5, sizeof(void*)*3, x_1);
x_6 = x_5;
lean::cnstr_set_scalar(x_6, sizeof(void*)*3 + 1, x_2);
x_7 = x_6;
return x_7;
}
}
obj* l_lean_ir_parse__typed__assignment___lambda__2(obj* x_0, unsigned char x_1, unsigned char x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = lean::alloc_cnstr(2, 2, 2);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_3);
lean::cnstr_set_scalar(x_4, sizeof(void*)*2, x_1);
x_5 = x_4;
lean::cnstr_set_scalar(x_5, sizeof(void*)*2 + 1, x_2);
x_6 = x_5;
return x_6;
}
}
obj* l_lean_ir_parse__typed__assignment___lambda__3(obj* x_0, unsigned char x_1, obj* x_2, size_t x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = lean::alloc_cnstr(10, 2, sizeof(size_t)*1 + 1);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
lean::cnstr_set_scalar(x_4, sizeof(void*)*3, x_1);
x_5 = x_4;
lean::cnstr_set_scalar(x_5, sizeof(void*)*2, x_3);
x_6 = x_5;
return x_6;
}
}
obj* l_lean_ir_parse__typed__assignment___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
unsigned char x_5; unsigned char x_6; obj* x_7; 
x_5 = lean::unbox(x_1);
x_6 = lean::unbox(x_2);
x_7 = l_lean_ir_parse__typed__assignment___lambda__1(x_0, x_5, x_6, x_3, x_4);
return x_7;
}
}
obj* l_lean_ir_parse__typed__assignment___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
unsigned char x_4; unsigned char x_5; obj* x_6; 
x_4 = lean::unbox(x_1);
x_5 = lean::unbox(x_2);
x_6 = l_lean_ir_parse__typed__assignment___lambda__2(x_0, x_4, x_5, x_3);
return x_6;
}
}
obj* l_lean_ir_parse__typed__assignment___lambda__3___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
unsigned char x_4; size_t x_5; obj* x_6; 
x_4 = lean::unbox(x_1);
x_5 = lean::unbox_size_t(x_3);
x_6 = l_lean_ir_parse__typed__assignment___lambda__3(x_0, x_4, x_2, x_5);
return x_6;
}
}
obj* l_lean_ir_parse__untyped__assignment(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; 
x_2 = l_lean_ir_parse__typed__assignment___closed__3;
lean::inc(x_2);
x_4 = l_lean_ir_symbol(x_2, x_1);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_16; obj* x_19; 
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 2);
lean::inc(x_7);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_9 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 lean::cnstr_release(x_4, 2);
 x_9 = x_4;
}
x_16 = l_lean_ir_parse__untyped__assignment___closed__7;
lean::inc(x_5);
lean::inc(x_16);
x_19 = l_lean_ir_keyword(x_16, x_5);
if (lean::obj_tag(x_19) == 0)
{
obj* x_20; obj* x_22; obj* x_24; obj* x_25; 
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_19, 2);
lean::inc(x_22);
if (lean::is_shared(x_19)) {
 lean::dec(x_19);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_19, 0);
 lean::cnstr_release(x_19, 1);
 lean::cnstr_release(x_19, 2);
 x_24 = x_19;
}
x_25 = l_lean_ir_parse__fnid(x_20);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; obj* x_28; obj* x_30; obj* x_34; obj* x_35; obj* x_37; obj* x_38; obj* x_39; 
x_26 = lean::cnstr_get(x_25, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_25, 1);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_25, 2);
lean::inc(x_30);
lean::dec(x_25);
lean::inc(x_0);
x_34 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_parse__untyped__assignment___lambda__6), 3, 2);
lean::closure_set(x_34, 0, x_0);
lean::closure_set(x_34, 1, x_26);
x_35 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_35);
if (lean::is_scalar(x_24)) {
 x_37 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_37 = x_24;
}
lean::cnstr_set(x_37, 0, x_34);
lean::cnstr_set(x_37, 1, x_28);
lean::cnstr_set(x_37, 2, x_35);
x_38 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_30, x_37);
x_39 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_22, x_38);
if (lean::obj_tag(x_39) == 0)
{
obj* x_40; obj* x_42; obj* x_44; 
x_40 = lean::cnstr_get(x_39, 0);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_39, 1);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_39, 2);
lean::inc(x_44);
lean::dec(x_39);
x_12 = x_40;
x_13 = x_42;
x_14 = x_44;
goto lbl_15;
}
else
{
obj* x_47; unsigned char x_49; obj* x_50; obj* x_51; obj* x_52; 
x_47 = lean::cnstr_get(x_39, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get_scalar<unsigned char>(x_39, sizeof(void*)*1);
if (lean::is_shared(x_39)) {
 lean::dec(x_39);
 x_50 = lean::box(0);
} else {
 lean::cnstr_release(x_39, 0);
 x_50 = x_39;
}
if (lean::is_scalar(x_50)) {
 x_51 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_51 = x_50;
}
lean::cnstr_set(x_51, 0, x_47);
lean::cnstr_set_scalar(x_51, sizeof(void*)*1, x_49);
x_52 = x_51;
x_10 = x_52;
goto lbl_11;
}
}
else
{
obj* x_54; unsigned char x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
lean::dec(x_24);
x_54 = lean::cnstr_get(x_25, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get_scalar<unsigned char>(x_25, sizeof(void*)*1);
if (lean::is_shared(x_25)) {
 lean::dec(x_25);
 x_57 = lean::box(0);
} else {
 lean::cnstr_release(x_25, 0);
 x_57 = x_25;
}
if (lean::is_scalar(x_57)) {
 x_58 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_58 = x_57;
}
lean::cnstr_set(x_58, 0, x_54);
lean::cnstr_set_scalar(x_58, sizeof(void*)*1, x_56);
x_59 = x_58;
x_60 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_22, x_59);
if (lean::obj_tag(x_60) == 0)
{
obj* x_61; obj* x_63; obj* x_65; 
x_61 = lean::cnstr_get(x_60, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_60, 1);
lean::inc(x_63);
x_65 = lean::cnstr_get(x_60, 2);
lean::inc(x_65);
lean::dec(x_60);
x_12 = x_61;
x_13 = x_63;
x_14 = x_65;
goto lbl_15;
}
else
{
obj* x_68; unsigned char x_70; obj* x_71; obj* x_72; obj* x_73; 
x_68 = lean::cnstr_get(x_60, 0);
lean::inc(x_68);
x_70 = lean::cnstr_get_scalar<unsigned char>(x_60, sizeof(void*)*1);
if (lean::is_shared(x_60)) {
 lean::dec(x_60);
 x_71 = lean::box(0);
} else {
 lean::cnstr_release(x_60, 0);
 x_71 = x_60;
}
if (lean::is_scalar(x_71)) {
 x_72 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_72 = x_71;
}
lean::cnstr_set(x_72, 0, x_68);
lean::cnstr_set_scalar(x_72, sizeof(void*)*1, x_70);
x_73 = x_72;
x_10 = x_73;
goto lbl_11;
}
}
}
else
{
obj* x_74; unsigned char x_76; obj* x_77; obj* x_78; obj* x_79; 
x_74 = lean::cnstr_get(x_19, 0);
lean::inc(x_74);
x_76 = lean::cnstr_get_scalar<unsigned char>(x_19, sizeof(void*)*1);
if (lean::is_shared(x_19)) {
 lean::dec(x_19);
 x_77 = lean::box(0);
} else {
 lean::cnstr_release(x_19, 0);
 x_77 = x_19;
}
if (lean::is_scalar(x_77)) {
 x_78 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_78 = x_77;
}
lean::cnstr_set(x_78, 0, x_74);
lean::cnstr_set_scalar(x_78, sizeof(void*)*1, x_76);
x_79 = x_78;
x_10 = x_79;
goto lbl_11;
}
lbl_11:
{
if (lean::obj_tag(x_10) == 0)
{
obj* x_83; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_0);
x_83 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_10);
return x_83;
}
else
{
obj* x_84; unsigned char x_86; obj* x_87; obj* x_88; unsigned char x_89; 
x_84 = lean::cnstr_get(x_10, 0);
lean::inc(x_84);
x_86 = lean::cnstr_get_scalar<unsigned char>(x_10, sizeof(void*)*1);
if (x_86 == 0)
{
obj* x_92; obj* x_95; 
lean::dec(x_10);
x_92 = l_lean_ir_parse__untyped__assignment___closed__6;
lean::inc(x_5);
lean::inc(x_92);
x_95 = l_lean_ir_keyword(x_92, x_5);
if (lean::obj_tag(x_95) == 0)
{
obj* x_96; obj* x_98; obj* x_100; obj* x_101; 
x_96 = lean::cnstr_get(x_95, 1);
lean::inc(x_96);
x_98 = lean::cnstr_get(x_95, 2);
lean::inc(x_98);
if (lean::is_shared(x_95)) {
 lean::dec(x_95);
 x_100 = lean::box(0);
} else {
 lean::cnstr_release(x_95, 0);
 lean::cnstr_release(x_95, 1);
 lean::cnstr_release(x_95, 2);
 x_100 = x_95;
}
x_101 = l_lean_parser_monad__parsec_many1___at_lean_ir_parse__untyped__assignment___spec__4(x_96);
if (lean::obj_tag(x_101) == 0)
{
obj* x_102; obj* x_104; obj* x_106; obj* x_110; obj* x_111; obj* x_113; obj* x_114; obj* x_115; 
x_102 = lean::cnstr_get(x_101, 0);
lean::inc(x_102);
x_104 = lean::cnstr_get(x_101, 1);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_101, 2);
lean::inc(x_106);
lean::dec(x_101);
lean::inc(x_0);
x_110 = lean::alloc_cnstr(12, 2, 0);
lean::cnstr_set(x_110, 0, x_0);
lean::cnstr_set(x_110, 1, x_102);
x_111 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_111);
if (lean::is_scalar(x_100)) {
 x_113 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_113 = x_100;
}
lean::cnstr_set(x_113, 0, x_110);
lean::cnstr_set(x_113, 1, x_104);
lean::cnstr_set(x_113, 2, x_111);
x_114 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_106, x_113);
x_115 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_98, x_114);
if (lean::obj_tag(x_115) == 0)
{
obj* x_119; obj* x_120; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_0);
x_119 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_115);
x_120 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_119);
return x_120;
}
else
{
obj* x_121; unsigned char x_123; 
x_121 = lean::cnstr_get(x_115, 0);
lean::inc(x_121);
x_123 = lean::cnstr_get_scalar<unsigned char>(x_115, sizeof(void*)*1);
x_87 = x_115;
x_88 = x_121;
x_89 = x_123;
goto lbl_90;
}
}
else
{
obj* x_125; unsigned char x_127; obj* x_128; obj* x_129; obj* x_130; obj* x_131; 
lean::dec(x_100);
x_125 = lean::cnstr_get(x_101, 0);
lean::inc(x_125);
x_127 = lean::cnstr_get_scalar<unsigned char>(x_101, sizeof(void*)*1);
if (lean::is_shared(x_101)) {
 lean::dec(x_101);
 x_128 = lean::box(0);
} else {
 lean::cnstr_release(x_101, 0);
 x_128 = x_101;
}
if (lean::is_scalar(x_128)) {
 x_129 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_129 = x_128;
}
lean::cnstr_set(x_129, 0, x_125);
lean::cnstr_set_scalar(x_129, sizeof(void*)*1, x_127);
x_130 = x_129;
x_131 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_98, x_130);
if (lean::obj_tag(x_131) == 0)
{
obj* x_135; obj* x_136; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_0);
x_135 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_131);
x_136 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_135);
return x_136;
}
else
{
obj* x_137; unsigned char x_139; 
x_137 = lean::cnstr_get(x_131, 0);
lean::inc(x_137);
x_139 = lean::cnstr_get_scalar<unsigned char>(x_131, sizeof(void*)*1);
x_87 = x_131;
x_88 = x_137;
x_89 = x_139;
goto lbl_90;
}
}
}
else
{
obj* x_140; unsigned char x_142; obj* x_143; obj* x_145; obj* x_146; 
x_140 = lean::cnstr_get(x_95, 0);
lean::inc(x_140);
x_142 = lean::cnstr_get_scalar<unsigned char>(x_95, sizeof(void*)*1);
if (lean::is_shared(x_95)) {
 lean::dec(x_95);
 x_143 = lean::box(0);
} else {
 lean::cnstr_release(x_95, 0);
 x_143 = x_95;
}
lean::inc(x_140);
if (lean::is_scalar(x_143)) {
 x_145 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_145 = x_143;
}
lean::cnstr_set(x_145, 0, x_140);
lean::cnstr_set_scalar(x_145, sizeof(void*)*1, x_142);
x_146 = x_145;
x_87 = x_146;
x_88 = x_140;
x_89 = x_142;
goto lbl_90;
}
}
else
{
obj* x_151; 
lean::dec(x_84);
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_0);
x_151 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_10);
return x_151;
}
lbl_90:
{
obj* x_152; obj* x_153; unsigned char x_154; obj* x_156; obj* x_157; obj* x_158; 
if (x_89 == 0)
{
obj* x_161; obj* x_164; 
lean::dec(x_87);
x_161 = l_lean_ir_parse__untyped__assignment___closed__5;
lean::inc(x_5);
lean::inc(x_161);
x_164 = l_lean_ir_keyword(x_161, x_5);
if (lean::obj_tag(x_164) == 0)
{
obj* x_165; obj* x_167; obj* x_169; obj* x_170; 
x_165 = lean::cnstr_get(x_164, 1);
lean::inc(x_165);
x_167 = lean::cnstr_get(x_164, 2);
lean::inc(x_167);
if (lean::is_shared(x_164)) {
 lean::dec(x_164);
 x_169 = lean::box(0);
} else {
 lean::cnstr_release(x_164, 0);
 lean::cnstr_release(x_164, 1);
 lean::cnstr_release(x_164, 2);
 x_169 = x_164;
}
x_170 = l_lean_ir_parse__var(x_165);
if (lean::obj_tag(x_170) == 0)
{
obj* x_171; obj* x_173; obj* x_175; obj* x_179; obj* x_180; obj* x_182; obj* x_183; obj* x_184; 
x_171 = lean::cnstr_get(x_170, 0);
lean::inc(x_171);
x_173 = lean::cnstr_get(x_170, 1);
lean::inc(x_173);
x_175 = lean::cnstr_get(x_170, 2);
lean::inc(x_175);
lean::dec(x_170);
lean::inc(x_0);
x_179 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_parse__untyped__assignment___lambda__5___boxed), 3, 2);
lean::closure_set(x_179, 0, x_0);
lean::closure_set(x_179, 1, x_171);
x_180 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_180);
if (lean::is_scalar(x_169)) {
 x_182 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_182 = x_169;
}
lean::cnstr_set(x_182, 0, x_179);
lean::cnstr_set(x_182, 1, x_173);
lean::cnstr_set(x_182, 2, x_180);
x_183 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_175, x_182);
x_184 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_167, x_183);
if (lean::obj_tag(x_184) == 0)
{
obj* x_185; obj* x_187; obj* x_189; 
x_185 = lean::cnstr_get(x_184, 0);
lean::inc(x_185);
x_187 = lean::cnstr_get(x_184, 1);
lean::inc(x_187);
x_189 = lean::cnstr_get(x_184, 2);
lean::inc(x_189);
lean::dec(x_184);
x_156 = x_185;
x_157 = x_187;
x_158 = x_189;
goto lbl_159;
}
else
{
obj* x_192; unsigned char x_194; obj* x_195; obj* x_197; obj* x_198; 
x_192 = lean::cnstr_get(x_184, 0);
lean::inc(x_192);
x_194 = lean::cnstr_get_scalar<unsigned char>(x_184, sizeof(void*)*1);
if (lean::is_shared(x_184)) {
 lean::dec(x_184);
 x_195 = lean::box(0);
} else {
 lean::cnstr_release(x_184, 0);
 x_195 = x_184;
}
lean::inc(x_192);
if (lean::is_scalar(x_195)) {
 x_197 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_197 = x_195;
}
lean::cnstr_set(x_197, 0, x_192);
lean::cnstr_set_scalar(x_197, sizeof(void*)*1, x_194);
x_198 = x_197;
x_152 = x_198;
x_153 = x_192;
x_154 = x_194;
goto lbl_155;
}
}
else
{
obj* x_200; unsigned char x_202; obj* x_203; obj* x_204; obj* x_205; obj* x_206; 
lean::dec(x_169);
x_200 = lean::cnstr_get(x_170, 0);
lean::inc(x_200);
x_202 = lean::cnstr_get_scalar<unsigned char>(x_170, sizeof(void*)*1);
if (lean::is_shared(x_170)) {
 lean::dec(x_170);
 x_203 = lean::box(0);
} else {
 lean::cnstr_release(x_170, 0);
 x_203 = x_170;
}
if (lean::is_scalar(x_203)) {
 x_204 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_204 = x_203;
}
lean::cnstr_set(x_204, 0, x_200);
lean::cnstr_set_scalar(x_204, sizeof(void*)*1, x_202);
x_205 = x_204;
x_206 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_167, x_205);
if (lean::obj_tag(x_206) == 0)
{
obj* x_207; obj* x_209; obj* x_211; 
x_207 = lean::cnstr_get(x_206, 0);
lean::inc(x_207);
x_209 = lean::cnstr_get(x_206, 1);
lean::inc(x_209);
x_211 = lean::cnstr_get(x_206, 2);
lean::inc(x_211);
lean::dec(x_206);
x_156 = x_207;
x_157 = x_209;
x_158 = x_211;
goto lbl_159;
}
else
{
obj* x_214; unsigned char x_216; obj* x_217; obj* x_219; obj* x_220; 
x_214 = lean::cnstr_get(x_206, 0);
lean::inc(x_214);
x_216 = lean::cnstr_get_scalar<unsigned char>(x_206, sizeof(void*)*1);
if (lean::is_shared(x_206)) {
 lean::dec(x_206);
 x_217 = lean::box(0);
} else {
 lean::cnstr_release(x_206, 0);
 x_217 = x_206;
}
lean::inc(x_214);
if (lean::is_scalar(x_217)) {
 x_219 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_219 = x_217;
}
lean::cnstr_set(x_219, 0, x_214);
lean::cnstr_set_scalar(x_219, sizeof(void*)*1, x_216);
x_220 = x_219;
x_152 = x_220;
x_153 = x_214;
x_154 = x_216;
goto lbl_155;
}
}
}
else
{
obj* x_221; unsigned char x_223; obj* x_224; obj* x_226; obj* x_227; 
x_221 = lean::cnstr_get(x_164, 0);
lean::inc(x_221);
x_223 = lean::cnstr_get_scalar<unsigned char>(x_164, sizeof(void*)*1);
if (lean::is_shared(x_164)) {
 lean::dec(x_164);
 x_224 = lean::box(0);
} else {
 lean::cnstr_release(x_164, 0);
 x_224 = x_164;
}
lean::inc(x_221);
if (lean::is_scalar(x_224)) {
 x_226 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_226 = x_224;
}
lean::cnstr_set(x_226, 0, x_221);
lean::cnstr_set_scalar(x_226, sizeof(void*)*1, x_223);
x_227 = x_226;
x_152 = x_227;
x_153 = x_221;
x_154 = x_223;
goto lbl_155;
}
}
else
{
obj* x_232; obj* x_233; 
lean::dec(x_88);
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_0);
x_232 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_87);
x_233 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_232);
return x_233;
}
lbl_155:
{
obj* x_234; obj* x_235; unsigned char x_236; obj* x_238; obj* x_239; obj* x_240; 
if (x_154 == 0)
{
obj* x_243; obj* x_246; 
lean::dec(x_152);
x_243 = l_lean_ir_parse__untyped__assignment___closed__4;
lean::inc(x_5);
lean::inc(x_243);
x_246 = l_lean_ir_keyword(x_243, x_5);
if (lean::obj_tag(x_246) == 0)
{
obj* x_247; obj* x_249; obj* x_251; obj* x_252; 
x_247 = lean::cnstr_get(x_246, 1);
lean::inc(x_247);
x_249 = lean::cnstr_get(x_246, 2);
lean::inc(x_249);
if (lean::is_shared(x_246)) {
 lean::dec(x_246);
 x_251 = lean::box(0);
} else {
 lean::cnstr_release(x_246, 0);
 lean::cnstr_release(x_246, 1);
 lean::cnstr_release(x_246, 2);
 x_251 = x_246;
}
x_252 = l_lean_ir_parse__fnid(x_247);
if (lean::obj_tag(x_252) == 0)
{
obj* x_253; obj* x_255; obj* x_257; obj* x_261; obj* x_262; obj* x_264; obj* x_265; obj* x_266; 
x_253 = lean::cnstr_get(x_252, 0);
lean::inc(x_253);
x_255 = lean::cnstr_get(x_252, 1);
lean::inc(x_255);
x_257 = lean::cnstr_get(x_252, 2);
lean::inc(x_257);
lean::dec(x_252);
lean::inc(x_0);
x_261 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_parse__untyped__assignment___lambda__4), 3, 2);
lean::closure_set(x_261, 0, x_0);
lean::closure_set(x_261, 1, x_253);
x_262 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_262);
if (lean::is_scalar(x_251)) {
 x_264 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_264 = x_251;
}
lean::cnstr_set(x_264, 0, x_261);
lean::cnstr_set(x_264, 1, x_255);
lean::cnstr_set(x_264, 2, x_262);
x_265 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_257, x_264);
x_266 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_249, x_265);
if (lean::obj_tag(x_266) == 0)
{
obj* x_267; obj* x_269; obj* x_271; 
x_267 = lean::cnstr_get(x_266, 0);
lean::inc(x_267);
x_269 = lean::cnstr_get(x_266, 1);
lean::inc(x_269);
x_271 = lean::cnstr_get(x_266, 2);
lean::inc(x_271);
lean::dec(x_266);
x_238 = x_267;
x_239 = x_269;
x_240 = x_271;
goto lbl_241;
}
else
{
obj* x_274; unsigned char x_276; obj* x_277; obj* x_279; obj* x_280; 
x_274 = lean::cnstr_get(x_266, 0);
lean::inc(x_274);
x_276 = lean::cnstr_get_scalar<unsigned char>(x_266, sizeof(void*)*1);
if (lean::is_shared(x_266)) {
 lean::dec(x_266);
 x_277 = lean::box(0);
} else {
 lean::cnstr_release(x_266, 0);
 x_277 = x_266;
}
lean::inc(x_274);
if (lean::is_scalar(x_277)) {
 x_279 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_279 = x_277;
}
lean::cnstr_set(x_279, 0, x_274);
lean::cnstr_set_scalar(x_279, sizeof(void*)*1, x_276);
x_280 = x_279;
x_234 = x_280;
x_235 = x_274;
x_236 = x_276;
goto lbl_237;
}
}
else
{
obj* x_282; unsigned char x_284; obj* x_285; obj* x_286; obj* x_287; obj* x_288; 
lean::dec(x_251);
x_282 = lean::cnstr_get(x_252, 0);
lean::inc(x_282);
x_284 = lean::cnstr_get_scalar<unsigned char>(x_252, sizeof(void*)*1);
if (lean::is_shared(x_252)) {
 lean::dec(x_252);
 x_285 = lean::box(0);
} else {
 lean::cnstr_release(x_252, 0);
 x_285 = x_252;
}
if (lean::is_scalar(x_285)) {
 x_286 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_286 = x_285;
}
lean::cnstr_set(x_286, 0, x_282);
lean::cnstr_set_scalar(x_286, sizeof(void*)*1, x_284);
x_287 = x_286;
x_288 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_249, x_287);
if (lean::obj_tag(x_288) == 0)
{
obj* x_289; obj* x_291; obj* x_293; 
x_289 = lean::cnstr_get(x_288, 0);
lean::inc(x_289);
x_291 = lean::cnstr_get(x_288, 1);
lean::inc(x_291);
x_293 = lean::cnstr_get(x_288, 2);
lean::inc(x_293);
lean::dec(x_288);
x_238 = x_289;
x_239 = x_291;
x_240 = x_293;
goto lbl_241;
}
else
{
obj* x_296; unsigned char x_298; obj* x_299; obj* x_301; obj* x_302; 
x_296 = lean::cnstr_get(x_288, 0);
lean::inc(x_296);
x_298 = lean::cnstr_get_scalar<unsigned char>(x_288, sizeof(void*)*1);
if (lean::is_shared(x_288)) {
 lean::dec(x_288);
 x_299 = lean::box(0);
} else {
 lean::cnstr_release(x_288, 0);
 x_299 = x_288;
}
lean::inc(x_296);
if (lean::is_scalar(x_299)) {
 x_301 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_301 = x_299;
}
lean::cnstr_set(x_301, 0, x_296);
lean::cnstr_set_scalar(x_301, sizeof(void*)*1, x_298);
x_302 = x_301;
x_234 = x_302;
x_235 = x_296;
x_236 = x_298;
goto lbl_237;
}
}
}
else
{
obj* x_303; unsigned char x_305; obj* x_306; obj* x_308; obj* x_309; 
x_303 = lean::cnstr_get(x_246, 0);
lean::inc(x_303);
x_305 = lean::cnstr_get_scalar<unsigned char>(x_246, sizeof(void*)*1);
if (lean::is_shared(x_246)) {
 lean::dec(x_246);
 x_306 = lean::box(0);
} else {
 lean::cnstr_release(x_246, 0);
 x_306 = x_246;
}
lean::inc(x_303);
if (lean::is_scalar(x_306)) {
 x_308 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_308 = x_306;
}
lean::cnstr_set(x_308, 0, x_303);
lean::cnstr_set_scalar(x_308, sizeof(void*)*1, x_305);
x_309 = x_308;
x_234 = x_309;
x_235 = x_303;
x_236 = x_305;
goto lbl_237;
}
}
else
{
obj* x_314; obj* x_315; obj* x_316; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_153);
x_314 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_152);
x_315 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_314);
x_316 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_315);
return x_316;
}
lbl_237:
{
obj* x_317; obj* x_318; unsigned char x_319; obj* x_321; obj* x_322; obj* x_323; obj* x_325; obj* x_326; obj* x_327; 
if (x_236 == 0)
{
obj* x_330; obj* x_333; 
lean::dec(x_234);
x_330 = l_lean_ir_parse__untyped__assignment___closed__3;
lean::inc(x_5);
lean::inc(x_330);
x_333 = l_lean_ir_keyword(x_330, x_5);
if (lean::obj_tag(x_333) == 0)
{
obj* x_334; obj* x_336; obj* x_338; obj* x_339; 
x_334 = lean::cnstr_get(x_333, 1);
lean::inc(x_334);
x_336 = lean::cnstr_get(x_333, 2);
lean::inc(x_336);
if (lean::is_shared(x_333)) {
 lean::dec(x_333);
 x_338 = lean::box(0);
} else {
 lean::cnstr_release(x_333, 0);
 lean::cnstr_release(x_333, 1);
 lean::cnstr_release(x_333, 2);
 x_338 = x_333;
}
x_339 = l_lean_ir_parse__uint16(x_334);
if (lean::obj_tag(x_339) == 0)
{
obj* x_340; obj* x_342; obj* x_344; obj* x_348; obj* x_349; obj* x_351; obj* x_352; obj* x_353; 
x_340 = lean::cnstr_get(x_339, 0);
lean::inc(x_340);
x_342 = lean::cnstr_get(x_339, 1);
lean::inc(x_342);
x_344 = lean::cnstr_get(x_339, 2);
lean::inc(x_344);
lean::dec(x_339);
lean::inc(x_0);
x_348 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_parse__untyped__assignment___lambda__3___boxed), 4, 2);
lean::closure_set(x_348, 0, x_0);
lean::closure_set(x_348, 1, x_340);
x_349 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_349);
if (lean::is_scalar(x_338)) {
 x_351 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_351 = x_338;
}
lean::cnstr_set(x_351, 0, x_348);
lean::cnstr_set(x_351, 1, x_342);
lean::cnstr_set(x_351, 2, x_349);
x_352 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_344, x_351);
x_353 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_336, x_352);
if (lean::obj_tag(x_353) == 0)
{
obj* x_354; obj* x_356; obj* x_358; 
x_354 = lean::cnstr_get(x_353, 0);
lean::inc(x_354);
x_356 = lean::cnstr_get(x_353, 1);
lean::inc(x_356);
x_358 = lean::cnstr_get(x_353, 2);
lean::inc(x_358);
lean::dec(x_353);
x_325 = x_354;
x_326 = x_356;
x_327 = x_358;
goto lbl_328;
}
else
{
obj* x_361; unsigned char x_363; obj* x_364; obj* x_366; obj* x_367; 
x_361 = lean::cnstr_get(x_353, 0);
lean::inc(x_361);
x_363 = lean::cnstr_get_scalar<unsigned char>(x_353, sizeof(void*)*1);
if (lean::is_shared(x_353)) {
 lean::dec(x_353);
 x_364 = lean::box(0);
} else {
 lean::cnstr_release(x_353, 0);
 x_364 = x_353;
}
lean::inc(x_361);
if (lean::is_scalar(x_364)) {
 x_366 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_366 = x_364;
}
lean::cnstr_set(x_366, 0, x_361);
lean::cnstr_set_scalar(x_366, sizeof(void*)*1, x_363);
x_367 = x_366;
x_317 = x_367;
x_318 = x_361;
x_319 = x_363;
goto lbl_320;
}
}
else
{
obj* x_369; unsigned char x_371; obj* x_372; obj* x_373; obj* x_374; obj* x_375; 
lean::dec(x_338);
x_369 = lean::cnstr_get(x_339, 0);
lean::inc(x_369);
x_371 = lean::cnstr_get_scalar<unsigned char>(x_339, sizeof(void*)*1);
if (lean::is_shared(x_339)) {
 lean::dec(x_339);
 x_372 = lean::box(0);
} else {
 lean::cnstr_release(x_339, 0);
 x_372 = x_339;
}
if (lean::is_scalar(x_372)) {
 x_373 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_373 = x_372;
}
lean::cnstr_set(x_373, 0, x_369);
lean::cnstr_set_scalar(x_373, sizeof(void*)*1, x_371);
x_374 = x_373;
x_375 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_336, x_374);
if (lean::obj_tag(x_375) == 0)
{
obj* x_376; obj* x_378; obj* x_380; 
x_376 = lean::cnstr_get(x_375, 0);
lean::inc(x_376);
x_378 = lean::cnstr_get(x_375, 1);
lean::inc(x_378);
x_380 = lean::cnstr_get(x_375, 2);
lean::inc(x_380);
lean::dec(x_375);
x_325 = x_376;
x_326 = x_378;
x_327 = x_380;
goto lbl_328;
}
else
{
obj* x_383; unsigned char x_385; obj* x_386; obj* x_388; obj* x_389; 
x_383 = lean::cnstr_get(x_375, 0);
lean::inc(x_383);
x_385 = lean::cnstr_get_scalar<unsigned char>(x_375, sizeof(void*)*1);
if (lean::is_shared(x_375)) {
 lean::dec(x_375);
 x_386 = lean::box(0);
} else {
 lean::cnstr_release(x_375, 0);
 x_386 = x_375;
}
lean::inc(x_383);
if (lean::is_scalar(x_386)) {
 x_388 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_388 = x_386;
}
lean::cnstr_set(x_388, 0, x_383);
lean::cnstr_set_scalar(x_388, sizeof(void*)*1, x_385);
x_389 = x_388;
x_317 = x_389;
x_318 = x_383;
x_319 = x_385;
goto lbl_320;
}
}
}
else
{
obj* x_390; unsigned char x_392; obj* x_393; obj* x_395; obj* x_396; 
x_390 = lean::cnstr_get(x_333, 0);
lean::inc(x_390);
x_392 = lean::cnstr_get_scalar<unsigned char>(x_333, sizeof(void*)*1);
if (lean::is_shared(x_333)) {
 lean::dec(x_333);
 x_393 = lean::box(0);
} else {
 lean::cnstr_release(x_333, 0);
 x_393 = x_333;
}
lean::inc(x_390);
if (lean::is_scalar(x_393)) {
 x_395 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_395 = x_393;
}
lean::cnstr_set(x_395, 0, x_390);
lean::cnstr_set_scalar(x_395, sizeof(void*)*1, x_392);
x_396 = x_395;
x_317 = x_396;
x_318 = x_390;
x_319 = x_392;
goto lbl_320;
}
}
else
{
obj* x_401; obj* x_402; obj* x_403; obj* x_404; 
lean::dec(x_235);
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_0);
x_401 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_153, x_234);
x_402 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_401);
x_403 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_402);
x_404 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_403);
return x_404;
}
lbl_320:
{
obj* x_405; obj* x_406; unsigned char x_407; obj* x_409; obj* x_410; obj* x_411; 
if (x_319 == 0)
{
obj* x_414; obj* x_417; 
lean::dec(x_317);
x_414 = l_lean_ir_parse__untyped__assignment___closed__2;
lean::inc(x_5);
lean::inc(x_414);
x_417 = l_lean_ir_keyword(x_414, x_5);
if (lean::obj_tag(x_417) == 0)
{
obj* x_418; obj* x_420; obj* x_422; obj* x_423; 
x_418 = lean::cnstr_get(x_417, 1);
lean::inc(x_418);
x_420 = lean::cnstr_get(x_417, 2);
lean::inc(x_420);
if (lean::is_shared(x_417)) {
 lean::dec(x_417);
 x_422 = lean::box(0);
} else {
 lean::cnstr_release(x_417, 0);
 lean::cnstr_release(x_417, 1);
 lean::cnstr_release(x_417, 2);
 x_422 = x_417;
}
x_423 = l_lean_ir_parse__var(x_418);
if (lean::obj_tag(x_423) == 0)
{
obj* x_424; obj* x_426; obj* x_428; obj* x_432; obj* x_433; obj* x_435; obj* x_436; obj* x_437; 
x_424 = lean::cnstr_get(x_423, 0);
lean::inc(x_424);
x_426 = lean::cnstr_get(x_423, 1);
lean::inc(x_426);
x_428 = lean::cnstr_get(x_423, 2);
lean::inc(x_428);
lean::dec(x_423);
lean::inc(x_0);
x_432 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_parse__untyped__assignment___lambda__2), 3, 2);
lean::closure_set(x_432, 0, x_0);
lean::closure_set(x_432, 1, x_424);
x_433 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_433);
if (lean::is_scalar(x_422)) {
 x_435 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_435 = x_422;
}
lean::cnstr_set(x_435, 0, x_432);
lean::cnstr_set(x_435, 1, x_426);
lean::cnstr_set(x_435, 2, x_433);
x_436 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_428, x_435);
x_437 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_420, x_436);
if (lean::obj_tag(x_437) == 0)
{
obj* x_438; obj* x_440; obj* x_442; 
x_438 = lean::cnstr_get(x_437, 0);
lean::inc(x_438);
x_440 = lean::cnstr_get(x_437, 1);
lean::inc(x_440);
x_442 = lean::cnstr_get(x_437, 2);
lean::inc(x_442);
lean::dec(x_437);
x_409 = x_438;
x_410 = x_440;
x_411 = x_442;
goto lbl_412;
}
else
{
obj* x_445; unsigned char x_447; obj* x_448; obj* x_450; obj* x_451; 
x_445 = lean::cnstr_get(x_437, 0);
lean::inc(x_445);
x_447 = lean::cnstr_get_scalar<unsigned char>(x_437, sizeof(void*)*1);
if (lean::is_shared(x_437)) {
 lean::dec(x_437);
 x_448 = lean::box(0);
} else {
 lean::cnstr_release(x_437, 0);
 x_448 = x_437;
}
lean::inc(x_445);
if (lean::is_scalar(x_448)) {
 x_450 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_450 = x_448;
}
lean::cnstr_set(x_450, 0, x_445);
lean::cnstr_set_scalar(x_450, sizeof(void*)*1, x_447);
x_451 = x_450;
x_405 = x_451;
x_406 = x_445;
x_407 = x_447;
goto lbl_408;
}
}
else
{
obj* x_453; unsigned char x_455; obj* x_456; obj* x_457; obj* x_458; obj* x_459; 
lean::dec(x_422);
x_453 = lean::cnstr_get(x_423, 0);
lean::inc(x_453);
x_455 = lean::cnstr_get_scalar<unsigned char>(x_423, sizeof(void*)*1);
if (lean::is_shared(x_423)) {
 lean::dec(x_423);
 x_456 = lean::box(0);
} else {
 lean::cnstr_release(x_423, 0);
 x_456 = x_423;
}
if (lean::is_scalar(x_456)) {
 x_457 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_457 = x_456;
}
lean::cnstr_set(x_457, 0, x_453);
lean::cnstr_set_scalar(x_457, sizeof(void*)*1, x_455);
x_458 = x_457;
x_459 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_420, x_458);
if (lean::obj_tag(x_459) == 0)
{
obj* x_460; obj* x_462; obj* x_464; 
x_460 = lean::cnstr_get(x_459, 0);
lean::inc(x_460);
x_462 = lean::cnstr_get(x_459, 1);
lean::inc(x_462);
x_464 = lean::cnstr_get(x_459, 2);
lean::inc(x_464);
lean::dec(x_459);
x_409 = x_460;
x_410 = x_462;
x_411 = x_464;
goto lbl_412;
}
else
{
obj* x_467; unsigned char x_469; obj* x_470; obj* x_472; obj* x_473; 
x_467 = lean::cnstr_get(x_459, 0);
lean::inc(x_467);
x_469 = lean::cnstr_get_scalar<unsigned char>(x_459, sizeof(void*)*1);
if (lean::is_shared(x_459)) {
 lean::dec(x_459);
 x_470 = lean::box(0);
} else {
 lean::cnstr_release(x_459, 0);
 x_470 = x_459;
}
lean::inc(x_467);
if (lean::is_scalar(x_470)) {
 x_472 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_472 = x_470;
}
lean::cnstr_set(x_472, 0, x_467);
lean::cnstr_set_scalar(x_472, sizeof(void*)*1, x_469);
x_473 = x_472;
x_405 = x_473;
x_406 = x_467;
x_407 = x_469;
goto lbl_408;
}
}
}
else
{
obj* x_474; unsigned char x_476; obj* x_477; obj* x_479; obj* x_480; 
x_474 = lean::cnstr_get(x_417, 0);
lean::inc(x_474);
x_476 = lean::cnstr_get_scalar<unsigned char>(x_417, sizeof(void*)*1);
if (lean::is_shared(x_417)) {
 lean::dec(x_417);
 x_477 = lean::box(0);
} else {
 lean::cnstr_release(x_417, 0);
 x_477 = x_417;
}
lean::inc(x_474);
if (lean::is_scalar(x_477)) {
 x_479 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_479 = x_477;
}
lean::cnstr_set(x_479, 0, x_474);
lean::cnstr_set_scalar(x_479, sizeof(void*)*1, x_476);
x_480 = x_479;
x_405 = x_480;
x_406 = x_474;
x_407 = x_476;
goto lbl_408;
}
}
else
{
obj* x_485; obj* x_486; obj* x_487; obj* x_488; obj* x_489; 
lean::dec(x_318);
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_0);
x_485 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_235, x_317);
x_486 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_153, x_485);
x_487 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_486);
x_488 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_487);
x_489 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_488);
return x_489;
}
lbl_408:
{
obj* x_490; obj* x_491; obj* x_492; obj* x_494; obj* x_495; obj* x_496; 
if (x_407 == 0)
{
obj* x_499; obj* x_501; 
lean::dec(x_405);
x_499 = l_lean_ir_parse__untyped__assignment___closed__1;
lean::inc(x_499);
x_501 = l_lean_ir_keyword(x_499, x_5);
if (lean::obj_tag(x_501) == 0)
{
obj* x_502; obj* x_504; obj* x_506; obj* x_507; obj* x_508; obj* x_511; 
x_502 = lean::cnstr_get(x_501, 1);
lean::inc(x_502);
x_504 = lean::cnstr_get(x_501, 2);
lean::inc(x_504);
if (lean::is_shared(x_501)) {
 lean::dec(x_501);
 x_506 = lean::box(0);
} else {
 lean::cnstr_release(x_501, 0);
 lean::cnstr_release(x_501, 1);
 lean::cnstr_release(x_501, 2);
 x_506 = x_501;
}
x_507 = l_lean_ir_parse__typed__assignment___closed__2;
x_508 = l_lean_ir_str2type;
lean::inc(x_508);
lean::inc(x_507);
x_511 = l_lean_ir_parse__key2val___main___rarg(x_507, x_508, x_502);
if (lean::obj_tag(x_511) == 0)
{
obj* x_512; obj* x_514; obj* x_516; obj* x_519; obj* x_520; obj* x_522; obj* x_523; obj* x_524; 
x_512 = lean::cnstr_get(x_511, 0);
lean::inc(x_512);
x_514 = lean::cnstr_get(x_511, 1);
lean::inc(x_514);
x_516 = lean::cnstr_get(x_511, 2);
lean::inc(x_516);
lean::dec(x_511);
x_519 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_parse__untyped__assignment___lambda__1___boxed), 4, 2);
lean::closure_set(x_519, 0, x_0);
lean::closure_set(x_519, 1, x_512);
x_520 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_520);
if (lean::is_scalar(x_506)) {
 x_522 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_522 = x_506;
}
lean::cnstr_set(x_522, 0, x_519);
lean::cnstr_set(x_522, 1, x_514);
lean::cnstr_set(x_522, 2, x_520);
x_523 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_516, x_522);
x_524 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_504, x_523);
if (lean::obj_tag(x_524) == 0)
{
obj* x_525; obj* x_527; obj* x_529; 
x_525 = lean::cnstr_get(x_524, 0);
lean::inc(x_525);
x_527 = lean::cnstr_get(x_524, 1);
lean::inc(x_527);
x_529 = lean::cnstr_get(x_524, 2);
lean::inc(x_529);
lean::dec(x_524);
x_494 = x_525;
x_495 = x_527;
x_496 = x_529;
goto lbl_497;
}
else
{
obj* x_533; unsigned char x_535; obj* x_536; obj* x_537; obj* x_538; obj* x_539; obj* x_540; obj* x_541; obj* x_542; obj* x_543; obj* x_544; obj* x_545; 
lean::dec(x_9);
x_533 = lean::cnstr_get(x_524, 0);
lean::inc(x_533);
x_535 = lean::cnstr_get_scalar<unsigned char>(x_524, sizeof(void*)*1);
if (lean::is_shared(x_524)) {
 lean::dec(x_524);
 x_536 = lean::box(0);
} else {
 lean::cnstr_release(x_524, 0);
 x_536 = x_524;
}
if (lean::is_scalar(x_536)) {
 x_537 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_537 = x_536;
}
lean::cnstr_set(x_537, 0, x_533);
lean::cnstr_set_scalar(x_537, sizeof(void*)*1, x_535);
x_538 = x_537;
x_539 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_406, x_538);
x_540 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_318, x_539);
x_541 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_235, x_540);
x_542 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_153, x_541);
x_543 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_542);
x_544 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_543);
x_545 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_544);
return x_545;
}
}
else
{
obj* x_548; unsigned char x_550; obj* x_551; obj* x_552; obj* x_553; obj* x_554; 
lean::dec(x_506);
lean::dec(x_0);
x_548 = lean::cnstr_get(x_511, 0);
lean::inc(x_548);
x_550 = lean::cnstr_get_scalar<unsigned char>(x_511, sizeof(void*)*1);
if (lean::is_shared(x_511)) {
 lean::dec(x_511);
 x_551 = lean::box(0);
} else {
 lean::cnstr_release(x_511, 0);
 x_551 = x_511;
}
if (lean::is_scalar(x_551)) {
 x_552 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_552 = x_551;
}
lean::cnstr_set(x_552, 0, x_548);
lean::cnstr_set_scalar(x_552, sizeof(void*)*1, x_550);
x_553 = x_552;
x_554 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_504, x_553);
if (lean::obj_tag(x_554) == 0)
{
obj* x_555; obj* x_557; obj* x_559; 
x_555 = lean::cnstr_get(x_554, 0);
lean::inc(x_555);
x_557 = lean::cnstr_get(x_554, 1);
lean::inc(x_557);
x_559 = lean::cnstr_get(x_554, 2);
lean::inc(x_559);
lean::dec(x_554);
x_494 = x_555;
x_495 = x_557;
x_496 = x_559;
goto lbl_497;
}
else
{
obj* x_563; unsigned char x_565; obj* x_566; obj* x_567; obj* x_568; obj* x_569; obj* x_570; obj* x_571; obj* x_572; obj* x_573; obj* x_574; obj* x_575; 
lean::dec(x_9);
x_563 = lean::cnstr_get(x_554, 0);
lean::inc(x_563);
x_565 = lean::cnstr_get_scalar<unsigned char>(x_554, sizeof(void*)*1);
if (lean::is_shared(x_554)) {
 lean::dec(x_554);
 x_566 = lean::box(0);
} else {
 lean::cnstr_release(x_554, 0);
 x_566 = x_554;
}
if (lean::is_scalar(x_566)) {
 x_567 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_567 = x_566;
}
lean::cnstr_set(x_567, 0, x_563);
lean::cnstr_set_scalar(x_567, sizeof(void*)*1, x_565);
x_568 = x_567;
x_569 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_406, x_568);
x_570 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_318, x_569);
x_571 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_235, x_570);
x_572 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_153, x_571);
x_573 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_572);
x_574 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_573);
x_575 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_574);
return x_575;
}
}
}
else
{
obj* x_578; unsigned char x_580; obj* x_581; obj* x_582; obj* x_583; obj* x_584; obj* x_585; obj* x_586; obj* x_587; obj* x_588; obj* x_589; obj* x_590; 
lean::dec(x_9);
lean::dec(x_0);
x_578 = lean::cnstr_get(x_501, 0);
lean::inc(x_578);
x_580 = lean::cnstr_get_scalar<unsigned char>(x_501, sizeof(void*)*1);
if (lean::is_shared(x_501)) {
 lean::dec(x_501);
 x_581 = lean::box(0);
} else {
 lean::cnstr_release(x_501, 0);
 x_581 = x_501;
}
if (lean::is_scalar(x_581)) {
 x_582 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_582 = x_581;
}
lean::cnstr_set(x_582, 0, x_578);
lean::cnstr_set_scalar(x_582, sizeof(void*)*1, x_580);
x_583 = x_582;
x_584 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_406, x_583);
x_585 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_318, x_584);
x_586 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_235, x_585);
x_587 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_153, x_586);
x_588 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_587);
x_589 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_588);
x_590 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_589);
return x_590;
}
}
else
{
obj* x_595; obj* x_596; obj* x_597; obj* x_598; obj* x_599; obj* x_600; 
lean::dec(x_406);
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_0);
x_595 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_318, x_405);
x_596 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_235, x_595);
x_597 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_153, x_596);
x_598 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_597);
x_599 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_598);
x_600 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_599);
return x_600;
}
lbl_493:
{
obj* x_601; 
x_601 = l_lean_ir_parse__var(x_491);
if (lean::obj_tag(x_601) == 0)
{
obj* x_602; obj* x_604; obj* x_606; obj* x_609; obj* x_610; obj* x_612; obj* x_613; obj* x_614; obj* x_615; obj* x_616; obj* x_617; obj* x_618; obj* x_619; obj* x_620; obj* x_621; 
x_602 = lean::cnstr_get(x_601, 0);
lean::inc(x_602);
x_604 = lean::cnstr_get(x_601, 1);
lean::inc(x_604);
x_606 = lean::cnstr_get(x_601, 2);
lean::inc(x_606);
lean::dec(x_601);
x_609 = lean::apply_1(x_490, x_602);
x_610 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_610);
if (lean::is_scalar(x_9)) {
 x_612 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_612 = x_9;
}
lean::cnstr_set(x_612, 0, x_609);
lean::cnstr_set(x_612, 1, x_604);
lean::cnstr_set(x_612, 2, x_610);
x_613 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_606, x_612);
x_614 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_492, x_613);
x_615 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_406, x_614);
x_616 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_318, x_615);
x_617 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_235, x_616);
x_618 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_153, x_617);
x_619 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_618);
x_620 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_619);
x_621 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_620);
return x_621;
}
else
{
obj* x_624; unsigned char x_626; obj* x_627; obj* x_628; obj* x_629; obj* x_630; obj* x_631; obj* x_632; obj* x_633; obj* x_634; obj* x_635; obj* x_636; obj* x_637; 
lean::dec(x_490);
lean::dec(x_9);
x_624 = lean::cnstr_get(x_601, 0);
lean::inc(x_624);
x_626 = lean::cnstr_get_scalar<unsigned char>(x_601, sizeof(void*)*1);
if (lean::is_shared(x_601)) {
 lean::dec(x_601);
 x_627 = lean::box(0);
} else {
 lean::cnstr_release(x_601, 0);
 x_627 = x_601;
}
if (lean::is_scalar(x_627)) {
 x_628 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_628 = x_627;
}
lean::cnstr_set(x_628, 0, x_624);
lean::cnstr_set_scalar(x_628, sizeof(void*)*1, x_626);
x_629 = x_628;
x_630 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_492, x_629);
x_631 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_406, x_630);
x_632 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_318, x_631);
x_633 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_235, x_632);
x_634 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_153, x_633);
x_635 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_634);
x_636 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_635);
x_637 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_636);
return x_637;
}
}
lbl_497:
{
obj* x_638; 
x_638 = l_lean_ir_parse__var(x_495);
if (lean::obj_tag(x_638) == 0)
{
obj* x_639; obj* x_641; obj* x_643; obj* x_645; obj* x_646; obj* x_647; obj* x_649; obj* x_650; obj* x_651; 
x_639 = lean::cnstr_get(x_638, 0);
lean::inc(x_639);
x_641 = lean::cnstr_get(x_638, 1);
lean::inc(x_641);
x_643 = lean::cnstr_get(x_638, 2);
lean::inc(x_643);
if (lean::is_shared(x_638)) {
 lean::dec(x_638);
 x_645 = lean::box(0);
} else {
 lean::cnstr_release(x_638, 0);
 lean::cnstr_release(x_638, 1);
 lean::cnstr_release(x_638, 2);
 x_645 = x_638;
}
x_646 = lean::apply_1(x_494, x_639);
x_647 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_647);
if (lean::is_scalar(x_645)) {
 x_649 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_649 = x_645;
}
lean::cnstr_set(x_649, 0, x_646);
lean::cnstr_set(x_649, 1, x_641);
lean::cnstr_set(x_649, 2, x_647);
x_650 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_643, x_649);
x_651 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_496, x_650);
if (lean::obj_tag(x_651) == 0)
{
obj* x_652; obj* x_654; obj* x_656; 
x_652 = lean::cnstr_get(x_651, 0);
lean::inc(x_652);
x_654 = lean::cnstr_get(x_651, 1);
lean::inc(x_654);
x_656 = lean::cnstr_get(x_651, 2);
lean::inc(x_656);
lean::dec(x_651);
x_490 = x_652;
x_491 = x_654;
x_492 = x_656;
goto lbl_493;
}
else
{
obj* x_660; unsigned char x_662; obj* x_663; obj* x_664; obj* x_665; obj* x_666; obj* x_667; obj* x_668; obj* x_669; obj* x_670; obj* x_671; obj* x_672; 
lean::dec(x_9);
x_660 = lean::cnstr_get(x_651, 0);
lean::inc(x_660);
x_662 = lean::cnstr_get_scalar<unsigned char>(x_651, sizeof(void*)*1);
if (lean::is_shared(x_651)) {
 lean::dec(x_651);
 x_663 = lean::box(0);
} else {
 lean::cnstr_release(x_651, 0);
 x_663 = x_651;
}
if (lean::is_scalar(x_663)) {
 x_664 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_664 = x_663;
}
lean::cnstr_set(x_664, 0, x_660);
lean::cnstr_set_scalar(x_664, sizeof(void*)*1, x_662);
x_665 = x_664;
x_666 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_406, x_665);
x_667 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_318, x_666);
x_668 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_235, x_667);
x_669 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_153, x_668);
x_670 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_669);
x_671 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_670);
x_672 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_671);
return x_672;
}
}
else
{
obj* x_674; unsigned char x_676; obj* x_677; obj* x_678; obj* x_679; obj* x_680; 
lean::dec(x_494);
x_674 = lean::cnstr_get(x_638, 0);
lean::inc(x_674);
x_676 = lean::cnstr_get_scalar<unsigned char>(x_638, sizeof(void*)*1);
if (lean::is_shared(x_638)) {
 lean::dec(x_638);
 x_677 = lean::box(0);
} else {
 lean::cnstr_release(x_638, 0);
 x_677 = x_638;
}
if (lean::is_scalar(x_677)) {
 x_678 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_678 = x_677;
}
lean::cnstr_set(x_678, 0, x_674);
lean::cnstr_set_scalar(x_678, sizeof(void*)*1, x_676);
x_679 = x_678;
x_680 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_496, x_679);
if (lean::obj_tag(x_680) == 0)
{
obj* x_681; obj* x_683; obj* x_685; 
x_681 = lean::cnstr_get(x_680, 0);
lean::inc(x_681);
x_683 = lean::cnstr_get(x_680, 1);
lean::inc(x_683);
x_685 = lean::cnstr_get(x_680, 2);
lean::inc(x_685);
lean::dec(x_680);
x_490 = x_681;
x_491 = x_683;
x_492 = x_685;
goto lbl_493;
}
else
{
obj* x_689; unsigned char x_691; obj* x_692; obj* x_693; obj* x_694; obj* x_695; obj* x_696; obj* x_697; obj* x_698; obj* x_699; obj* x_700; obj* x_701; 
lean::dec(x_9);
x_689 = lean::cnstr_get(x_680, 0);
lean::inc(x_689);
x_691 = lean::cnstr_get_scalar<unsigned char>(x_680, sizeof(void*)*1);
if (lean::is_shared(x_680)) {
 lean::dec(x_680);
 x_692 = lean::box(0);
} else {
 lean::cnstr_release(x_680, 0);
 x_692 = x_680;
}
if (lean::is_scalar(x_692)) {
 x_693 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_693 = x_692;
}
lean::cnstr_set(x_693, 0, x_689);
lean::cnstr_set_scalar(x_693, sizeof(void*)*1, x_691);
x_694 = x_693;
x_695 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_406, x_694);
x_696 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_318, x_695);
x_697 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_235, x_696);
x_698 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_153, x_697);
x_699 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_698);
x_700 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_699);
x_701 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_700);
return x_701;
}
}
}
}
lbl_412:
{
obj* x_702; 
x_702 = l_lean_ir_parse__var(x_410);
if (lean::obj_tag(x_702) == 0)
{
obj* x_703; obj* x_705; obj* x_707; obj* x_709; obj* x_710; obj* x_711; obj* x_713; obj* x_714; obj* x_715; 
x_703 = lean::cnstr_get(x_702, 0);
lean::inc(x_703);
x_705 = lean::cnstr_get(x_702, 1);
lean::inc(x_705);
x_707 = lean::cnstr_get(x_702, 2);
lean::inc(x_707);
if (lean::is_shared(x_702)) {
 lean::dec(x_702);
 x_709 = lean::box(0);
} else {
 lean::cnstr_release(x_702, 0);
 lean::cnstr_release(x_702, 1);
 lean::cnstr_release(x_702, 2);
 x_709 = x_702;
}
x_710 = lean::apply_1(x_409, x_703);
x_711 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_711);
if (lean::is_scalar(x_709)) {
 x_713 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_713 = x_709;
}
lean::cnstr_set(x_713, 0, x_710);
lean::cnstr_set(x_713, 1, x_705);
lean::cnstr_set(x_713, 2, x_711);
x_714 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_707, x_713);
x_715 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_411, x_714);
if (lean::obj_tag(x_715) == 0)
{
obj* x_719; obj* x_720; obj* x_721; obj* x_722; obj* x_723; obj* x_724; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_0);
x_719 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_318, x_715);
x_720 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_235, x_719);
x_721 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_153, x_720);
x_722 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_721);
x_723 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_722);
x_724 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_723);
return x_724;
}
else
{
obj* x_725; unsigned char x_727; 
x_725 = lean::cnstr_get(x_715, 0);
lean::inc(x_725);
x_727 = lean::cnstr_get_scalar<unsigned char>(x_715, sizeof(void*)*1);
x_405 = x_715;
x_406 = x_725;
x_407 = x_727;
goto lbl_408;
}
}
else
{
obj* x_729; unsigned char x_731; obj* x_732; obj* x_733; obj* x_734; obj* x_735; 
lean::dec(x_409);
x_729 = lean::cnstr_get(x_702, 0);
lean::inc(x_729);
x_731 = lean::cnstr_get_scalar<unsigned char>(x_702, sizeof(void*)*1);
if (lean::is_shared(x_702)) {
 lean::dec(x_702);
 x_732 = lean::box(0);
} else {
 lean::cnstr_release(x_702, 0);
 x_732 = x_702;
}
if (lean::is_scalar(x_732)) {
 x_733 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_733 = x_732;
}
lean::cnstr_set(x_733, 0, x_729);
lean::cnstr_set_scalar(x_733, sizeof(void*)*1, x_731);
x_734 = x_733;
x_735 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_411, x_734);
if (lean::obj_tag(x_735) == 0)
{
obj* x_739; obj* x_740; obj* x_741; obj* x_742; obj* x_743; obj* x_744; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_0);
x_739 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_318, x_735);
x_740 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_235, x_739);
x_741 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_153, x_740);
x_742 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_741);
x_743 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_742);
x_744 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_743);
return x_744;
}
else
{
obj* x_745; unsigned char x_747; 
x_745 = lean::cnstr_get(x_735, 0);
lean::inc(x_745);
x_747 = lean::cnstr_get_scalar<unsigned char>(x_735, sizeof(void*)*1);
x_405 = x_735;
x_406 = x_745;
x_407 = x_747;
goto lbl_408;
}
}
}
}
lbl_324:
{
obj* x_748; 
x_748 = l_lean_ir_parse__usize(x_322);
if (lean::obj_tag(x_748) == 0)
{
obj* x_749; obj* x_751; obj* x_753; obj* x_755; obj* x_756; obj* x_757; obj* x_759; obj* x_760; obj* x_761; 
x_749 = lean::cnstr_get(x_748, 0);
lean::inc(x_749);
x_751 = lean::cnstr_get(x_748, 1);
lean::inc(x_751);
x_753 = lean::cnstr_get(x_748, 2);
lean::inc(x_753);
if (lean::is_shared(x_748)) {
 lean::dec(x_748);
 x_755 = lean::box(0);
} else {
 lean::cnstr_release(x_748, 0);
 lean::cnstr_release(x_748, 1);
 lean::cnstr_release(x_748, 2);
 x_755 = x_748;
}
x_756 = lean::apply_1(x_321, x_749);
x_757 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_757);
if (lean::is_scalar(x_755)) {
 x_759 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_759 = x_755;
}
lean::cnstr_set(x_759, 0, x_756);
lean::cnstr_set(x_759, 1, x_751);
lean::cnstr_set(x_759, 2, x_757);
x_760 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_753, x_759);
x_761 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_323, x_760);
if (lean::obj_tag(x_761) == 0)
{
obj* x_765; obj* x_766; obj* x_767; obj* x_768; obj* x_769; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_0);
x_765 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_235, x_761);
x_766 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_153, x_765);
x_767 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_766);
x_768 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_767);
x_769 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_768);
return x_769;
}
else
{
obj* x_770; unsigned char x_772; 
x_770 = lean::cnstr_get(x_761, 0);
lean::inc(x_770);
x_772 = lean::cnstr_get_scalar<unsigned char>(x_761, sizeof(void*)*1);
x_317 = x_761;
x_318 = x_770;
x_319 = x_772;
goto lbl_320;
}
}
else
{
obj* x_774; unsigned char x_776; obj* x_777; obj* x_778; obj* x_779; obj* x_780; 
lean::dec(x_321);
x_774 = lean::cnstr_get(x_748, 0);
lean::inc(x_774);
x_776 = lean::cnstr_get_scalar<unsigned char>(x_748, sizeof(void*)*1);
if (lean::is_shared(x_748)) {
 lean::dec(x_748);
 x_777 = lean::box(0);
} else {
 lean::cnstr_release(x_748, 0);
 x_777 = x_748;
}
if (lean::is_scalar(x_777)) {
 x_778 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_778 = x_777;
}
lean::cnstr_set(x_778, 0, x_774);
lean::cnstr_set_scalar(x_778, sizeof(void*)*1, x_776);
x_779 = x_778;
x_780 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_323, x_779);
if (lean::obj_tag(x_780) == 0)
{
obj* x_784; obj* x_785; obj* x_786; obj* x_787; obj* x_788; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_0);
x_784 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_235, x_780);
x_785 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_153, x_784);
x_786 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_785);
x_787 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_786);
x_788 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_787);
return x_788;
}
else
{
obj* x_789; unsigned char x_791; 
x_789 = lean::cnstr_get(x_780, 0);
lean::inc(x_789);
x_791 = lean::cnstr_get_scalar<unsigned char>(x_780, sizeof(void*)*1);
x_317 = x_780;
x_318 = x_789;
x_319 = x_791;
goto lbl_320;
}
}
}
lbl_328:
{
obj* x_792; 
x_792 = l_lean_ir_parse__uint16(x_326);
if (lean::obj_tag(x_792) == 0)
{
obj* x_793; obj* x_795; obj* x_797; obj* x_799; obj* x_800; obj* x_801; obj* x_803; obj* x_804; obj* x_805; 
x_793 = lean::cnstr_get(x_792, 0);
lean::inc(x_793);
x_795 = lean::cnstr_get(x_792, 1);
lean::inc(x_795);
x_797 = lean::cnstr_get(x_792, 2);
lean::inc(x_797);
if (lean::is_shared(x_792)) {
 lean::dec(x_792);
 x_799 = lean::box(0);
} else {
 lean::cnstr_release(x_792, 0);
 lean::cnstr_release(x_792, 1);
 lean::cnstr_release(x_792, 2);
 x_799 = x_792;
}
x_800 = lean::apply_1(x_325, x_793);
x_801 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_801);
if (lean::is_scalar(x_799)) {
 x_803 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_803 = x_799;
}
lean::cnstr_set(x_803, 0, x_800);
lean::cnstr_set(x_803, 1, x_795);
lean::cnstr_set(x_803, 2, x_801);
x_804 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_797, x_803);
x_805 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_327, x_804);
if (lean::obj_tag(x_805) == 0)
{
obj* x_806; obj* x_808; obj* x_810; 
x_806 = lean::cnstr_get(x_805, 0);
lean::inc(x_806);
x_808 = lean::cnstr_get(x_805, 1);
lean::inc(x_808);
x_810 = lean::cnstr_get(x_805, 2);
lean::inc(x_810);
lean::dec(x_805);
x_321 = x_806;
x_322 = x_808;
x_323 = x_810;
goto lbl_324;
}
else
{
obj* x_813; unsigned char x_815; obj* x_816; obj* x_818; obj* x_819; 
x_813 = lean::cnstr_get(x_805, 0);
lean::inc(x_813);
x_815 = lean::cnstr_get_scalar<unsigned char>(x_805, sizeof(void*)*1);
if (lean::is_shared(x_805)) {
 lean::dec(x_805);
 x_816 = lean::box(0);
} else {
 lean::cnstr_release(x_805, 0);
 x_816 = x_805;
}
lean::inc(x_813);
if (lean::is_scalar(x_816)) {
 x_818 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_818 = x_816;
}
lean::cnstr_set(x_818, 0, x_813);
lean::cnstr_set_scalar(x_818, sizeof(void*)*1, x_815);
x_819 = x_818;
x_317 = x_819;
x_318 = x_813;
x_319 = x_815;
goto lbl_320;
}
}
else
{
obj* x_821; unsigned char x_823; obj* x_824; obj* x_825; obj* x_826; obj* x_827; 
lean::dec(x_325);
x_821 = lean::cnstr_get(x_792, 0);
lean::inc(x_821);
x_823 = lean::cnstr_get_scalar<unsigned char>(x_792, sizeof(void*)*1);
if (lean::is_shared(x_792)) {
 lean::dec(x_792);
 x_824 = lean::box(0);
} else {
 lean::cnstr_release(x_792, 0);
 x_824 = x_792;
}
if (lean::is_scalar(x_824)) {
 x_825 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_825 = x_824;
}
lean::cnstr_set(x_825, 0, x_821);
lean::cnstr_set_scalar(x_825, sizeof(void*)*1, x_823);
x_826 = x_825;
x_827 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_327, x_826);
if (lean::obj_tag(x_827) == 0)
{
obj* x_828; obj* x_830; obj* x_832; 
x_828 = lean::cnstr_get(x_827, 0);
lean::inc(x_828);
x_830 = lean::cnstr_get(x_827, 1);
lean::inc(x_830);
x_832 = lean::cnstr_get(x_827, 2);
lean::inc(x_832);
lean::dec(x_827);
x_321 = x_828;
x_322 = x_830;
x_323 = x_832;
goto lbl_324;
}
else
{
obj* x_835; unsigned char x_837; obj* x_838; obj* x_840; obj* x_841; 
x_835 = lean::cnstr_get(x_827, 0);
lean::inc(x_835);
x_837 = lean::cnstr_get_scalar<unsigned char>(x_827, sizeof(void*)*1);
if (lean::is_shared(x_827)) {
 lean::dec(x_827);
 x_838 = lean::box(0);
} else {
 lean::cnstr_release(x_827, 0);
 x_838 = x_827;
}
lean::inc(x_835);
if (lean::is_scalar(x_838)) {
 x_840 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_840 = x_838;
}
lean::cnstr_set(x_840, 0, x_835);
lean::cnstr_set_scalar(x_840, sizeof(void*)*1, x_837);
x_841 = x_840;
x_317 = x_841;
x_318 = x_835;
x_319 = x_837;
goto lbl_320;
}
}
}
}
lbl_241:
{
obj* x_842; 
x_842 = l_lean_parser_monad__parsec_many___at_lean_ir_parse__untyped__assignment___spec__1(x_239);
if (lean::obj_tag(x_842) == 0)
{
obj* x_843; obj* x_845; obj* x_847; obj* x_849; obj* x_850; obj* x_851; obj* x_853; obj* x_854; obj* x_855; 
x_843 = lean::cnstr_get(x_842, 0);
lean::inc(x_843);
x_845 = lean::cnstr_get(x_842, 1);
lean::inc(x_845);
x_847 = lean::cnstr_get(x_842, 2);
lean::inc(x_847);
if (lean::is_shared(x_842)) {
 lean::dec(x_842);
 x_849 = lean::box(0);
} else {
 lean::cnstr_release(x_842, 0);
 lean::cnstr_release(x_842, 1);
 lean::cnstr_release(x_842, 2);
 x_849 = x_842;
}
x_850 = lean::apply_1(x_238, x_843);
x_851 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_851);
if (lean::is_scalar(x_849)) {
 x_853 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_853 = x_849;
}
lean::cnstr_set(x_853, 0, x_850);
lean::cnstr_set(x_853, 1, x_845);
lean::cnstr_set(x_853, 2, x_851);
x_854 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_847, x_853);
x_855 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_240, x_854);
if (lean::obj_tag(x_855) == 0)
{
obj* x_859; obj* x_860; obj* x_861; obj* x_862; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_0);
x_859 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_153, x_855);
x_860 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_859);
x_861 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_860);
x_862 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_861);
return x_862;
}
else
{
obj* x_863; unsigned char x_865; 
x_863 = lean::cnstr_get(x_855, 0);
lean::inc(x_863);
x_865 = lean::cnstr_get_scalar<unsigned char>(x_855, sizeof(void*)*1);
x_234 = x_855;
x_235 = x_863;
x_236 = x_865;
goto lbl_237;
}
}
else
{
obj* x_867; unsigned char x_869; obj* x_870; obj* x_871; obj* x_872; obj* x_873; 
lean::dec(x_238);
x_867 = lean::cnstr_get(x_842, 0);
lean::inc(x_867);
x_869 = lean::cnstr_get_scalar<unsigned char>(x_842, sizeof(void*)*1);
if (lean::is_shared(x_842)) {
 lean::dec(x_842);
 x_870 = lean::box(0);
} else {
 lean::cnstr_release(x_842, 0);
 x_870 = x_842;
}
if (lean::is_scalar(x_870)) {
 x_871 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_871 = x_870;
}
lean::cnstr_set(x_871, 0, x_867);
lean::cnstr_set_scalar(x_871, sizeof(void*)*1, x_869);
x_872 = x_871;
x_873 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_240, x_872);
if (lean::obj_tag(x_873) == 0)
{
obj* x_877; obj* x_878; obj* x_879; obj* x_880; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_0);
x_877 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_153, x_873);
x_878 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_877);
x_879 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_878);
x_880 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_879);
return x_880;
}
else
{
obj* x_881; unsigned char x_883; 
x_881 = lean::cnstr_get(x_873, 0);
lean::inc(x_881);
x_883 = lean::cnstr_get_scalar<unsigned char>(x_873, sizeof(void*)*1);
x_234 = x_873;
x_235 = x_881;
x_236 = x_883;
goto lbl_237;
}
}
}
}
lbl_159:
{
obj* x_884; 
x_884 = l_lean_ir_parse__uint16(x_157);
if (lean::obj_tag(x_884) == 0)
{
obj* x_885; obj* x_887; obj* x_889; obj* x_891; obj* x_892; obj* x_893; obj* x_895; obj* x_896; obj* x_897; 
x_885 = lean::cnstr_get(x_884, 0);
lean::inc(x_885);
x_887 = lean::cnstr_get(x_884, 1);
lean::inc(x_887);
x_889 = lean::cnstr_get(x_884, 2);
lean::inc(x_889);
if (lean::is_shared(x_884)) {
 lean::dec(x_884);
 x_891 = lean::box(0);
} else {
 lean::cnstr_release(x_884, 0);
 lean::cnstr_release(x_884, 1);
 lean::cnstr_release(x_884, 2);
 x_891 = x_884;
}
x_892 = lean::apply_1(x_156, x_885);
x_893 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_893);
if (lean::is_scalar(x_891)) {
 x_895 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_895 = x_891;
}
lean::cnstr_set(x_895, 0, x_892);
lean::cnstr_set(x_895, 1, x_887);
lean::cnstr_set(x_895, 2, x_893);
x_896 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_889, x_895);
x_897 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_158, x_896);
if (lean::obj_tag(x_897) == 0)
{
obj* x_901; obj* x_902; obj* x_903; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_0);
x_901 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_897);
x_902 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_901);
x_903 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_902);
return x_903;
}
else
{
obj* x_904; unsigned char x_906; 
x_904 = lean::cnstr_get(x_897, 0);
lean::inc(x_904);
x_906 = lean::cnstr_get_scalar<unsigned char>(x_897, sizeof(void*)*1);
x_152 = x_897;
x_153 = x_904;
x_154 = x_906;
goto lbl_155;
}
}
else
{
obj* x_908; unsigned char x_910; obj* x_911; obj* x_912; obj* x_913; obj* x_914; 
lean::dec(x_156);
x_908 = lean::cnstr_get(x_884, 0);
lean::inc(x_908);
x_910 = lean::cnstr_get_scalar<unsigned char>(x_884, sizeof(void*)*1);
if (lean::is_shared(x_884)) {
 lean::dec(x_884);
 x_911 = lean::box(0);
} else {
 lean::cnstr_release(x_884, 0);
 x_911 = x_884;
}
if (lean::is_scalar(x_911)) {
 x_912 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_912 = x_911;
}
lean::cnstr_set(x_912, 0, x_908);
lean::cnstr_set_scalar(x_912, sizeof(void*)*1, x_910);
x_913 = x_912;
x_914 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_158, x_913);
if (lean::obj_tag(x_914) == 0)
{
obj* x_918; obj* x_919; obj* x_920; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_0);
x_918 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_88, x_914);
x_919 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_84, x_918);
x_920 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_919);
return x_920;
}
else
{
obj* x_921; unsigned char x_923; 
x_921 = lean::cnstr_get(x_914, 0);
lean::inc(x_921);
x_923 = lean::cnstr_get_scalar<unsigned char>(x_914, sizeof(void*)*1);
x_152 = x_914;
x_153 = x_921;
x_154 = x_923;
goto lbl_155;
}
}
}
}
}
}
lbl_15:
{
obj* x_924; 
x_924 = l_lean_parser_monad__parsec_many___at_lean_ir_parse__untyped__assignment___spec__6(x_13);
if (lean::obj_tag(x_924) == 0)
{
obj* x_925; obj* x_927; obj* x_929; obj* x_931; obj* x_932; obj* x_933; obj* x_935; obj* x_936; obj* x_937; 
x_925 = lean::cnstr_get(x_924, 0);
lean::inc(x_925);
x_927 = lean::cnstr_get(x_924, 1);
lean::inc(x_927);
x_929 = lean::cnstr_get(x_924, 2);
lean::inc(x_929);
if (lean::is_shared(x_924)) {
 lean::dec(x_924);
 x_931 = lean::box(0);
} else {
 lean::cnstr_release(x_924, 0);
 lean::cnstr_release(x_924, 1);
 lean::cnstr_release(x_924, 2);
 x_931 = x_924;
}
x_932 = lean::apply_1(x_12, x_925);
x_933 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_933);
if (lean::is_scalar(x_931)) {
 x_935 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_935 = x_931;
}
lean::cnstr_set(x_935, 0, x_932);
lean::cnstr_set(x_935, 1, x_927);
lean::cnstr_set(x_935, 2, x_933);
x_936 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_929, x_935);
x_937 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_936);
x_10 = x_937;
goto lbl_11;
}
else
{
obj* x_939; unsigned char x_941; obj* x_942; obj* x_943; obj* x_944; obj* x_945; 
lean::dec(x_12);
x_939 = lean::cnstr_get(x_924, 0);
lean::inc(x_939);
x_941 = lean::cnstr_get_scalar<unsigned char>(x_924, sizeof(void*)*1);
if (lean::is_shared(x_924)) {
 lean::dec(x_924);
 x_942 = lean::box(0);
} else {
 lean::cnstr_release(x_924, 0);
 x_942 = x_924;
}
if (lean::is_scalar(x_942)) {
 x_943 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_943 = x_942;
}
lean::cnstr_set(x_943, 0, x_939);
lean::cnstr_set_scalar(x_943, sizeof(void*)*1, x_941);
x_944 = x_943;
x_945 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_944);
x_10 = x_945;
goto lbl_11;
}
}
}
else
{
obj* x_947; unsigned char x_949; obj* x_950; obj* x_951; obj* x_952; 
lean::dec(x_0);
x_947 = lean::cnstr_get(x_4, 0);
lean::inc(x_947);
x_949 = lean::cnstr_get_scalar<unsigned char>(x_4, sizeof(void*)*1);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_950 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 x_950 = x_4;
}
if (lean::is_scalar(x_950)) {
 x_951 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_951 = x_950;
}
lean::cnstr_set(x_951, 0, x_947);
lean::cnstr_set_scalar(x_951, sizeof(void*)*1, x_949);
x_952 = x_951;
return x_952;
}
}
}
obj* _init_l_lean_ir_parse__untyped__assignment___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("sarray");
return x_0;
}
}
obj* _init_l_lean_ir_parse__untyped__assignment___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("array");
return x_0;
}
}
obj* _init_l_lean_ir_parse__untyped__assignment___closed__3() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("cnstr");
return x_0;
}
}
obj* _init_l_lean_ir_parse__untyped__assignment___closed__4() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("call");
return x_0;
}
}
obj* _init_l_lean_ir_parse__untyped__assignment___closed__5() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("get");
return x_0;
}
}
obj* _init_l_lean_ir_parse__untyped__assignment___closed__6() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("apply");
return x_0;
}
}
obj* _init_l_lean_ir_parse__untyped__assignment___closed__7() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("closure");
return x_0;
}
}
obj* l_lean_ir_parse__untyped__assignment___lambda__1(obj* x_0, unsigned char x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = lean::alloc_cnstr(14, 3, 1);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
lean::cnstr_set(x_4, 2, x_3);
lean::cnstr_set_scalar(x_4, sizeof(void*)*3, x_1);
x_5 = x_4;
return x_5;
}
}
obj* l_lean_ir_parse__untyped__assignment___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_cnstr(13, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
lean::cnstr_set(x_3, 2, x_2);
return x_3;
}
}
obj* l_lean_ir_parse__untyped__assignment___lambda__3(obj* x_0, unsigned short x_1, unsigned short x_2, size_t x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_4 = lean::alloc_cnstr(6, 1, sizeof(size_t)*1 + 4);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set_scalar(x_4, sizeof(void*)*2, x_1);
x_5 = x_4;
lean::cnstr_set_scalar(x_5, sizeof(void*)*2 + 2, x_2);
x_6 = x_5;
lean::cnstr_set_scalar(x_6, sizeof(void*)*1, x_3);
x_7 = x_6;
return x_7;
}
}
obj* l_lean_ir_parse__untyped__assignment___lambda__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_cnstr(5, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
lean::cnstr_set(x_3, 2, x_2);
return x_3;
}
}
obj* l_lean_ir_parse__untyped__assignment___lambda__5(obj* x_0, obj* x_1, unsigned short x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::alloc_cnstr(8, 2, 2);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
lean::cnstr_set_scalar(x_3, sizeof(void*)*2, x_2);
x_4 = x_3;
return x_4;
}
}
obj* l_lean_ir_parse__untyped__assignment___lambda__6(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_cnstr(11, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
lean::cnstr_set(x_3, 2, x_2);
return x_3;
}
}
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__untyped__assignment___spec__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::nat_dec_eq(x_0, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_6; 
lean::dec(x_3);
x_6 = l_lean_ir_parse__var(x_1);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_19; obj* x_20; 
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 2);
lean::inc(x_11);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_13 = x_6;
}
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
lean::inc(x_9);
x_19 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__untyped__assignment___spec__3(x_15, x_9);
if (lean::obj_tag(x_19) == 0)
{
obj* x_23; 
lean::dec(x_9);
x_23 = lean::box(0);
x_20 = x_23;
goto lbl_21;
}
else
{
obj* x_24; unsigned char x_26; 
x_24 = lean::cnstr_get(x_19, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get_scalar<unsigned char>(x_19, sizeof(void*)*1);
if (x_26 == 0)
{
obj* x_29; obj* x_30; obj* x_33; obj* x_35; obj* x_36; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
lean::dec(x_13);
lean::dec(x_19);
x_29 = lean::box(0);
x_30 = lean::cnstr_get(x_24, 2);
lean::inc(x_30);
lean::dec(x_24);
x_33 = l_mjoin___rarg___closed__1;
lean::inc(x_33);
x_35 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_35, 0, x_30);
lean::closure_set(x_35, 1, x_33);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_7);
lean::cnstr_set(x_36, 1, x_29);
lean::inc(x_33);
x_38 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_38, 0, x_35);
lean::closure_set(x_38, 1, x_33);
x_39 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_39, 0, x_38);
x_40 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_40, 0, x_36);
lean::cnstr_set(x_40, 1, x_9);
lean::cnstr_set(x_40, 2, x_39);
x_41 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_40);
return x_41;
}
else
{
obj* x_44; 
lean::dec(x_9);
lean::dec(x_24);
x_44 = lean::box(0);
x_20 = x_44;
goto lbl_21;
}
}
lbl_21:
{
lean::dec(x_20);
if (lean::obj_tag(x_19) == 0)
{
obj* x_46; obj* x_48; obj* x_50; obj* x_53; obj* x_54; obj* x_56; obj* x_57; obj* x_58; 
x_46 = lean::cnstr_get(x_19, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_19, 1);
lean::inc(x_48);
x_50 = lean::cnstr_get(x_19, 2);
lean::inc(x_50);
lean::dec(x_19);
x_53 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_53, 0, x_7);
lean::cnstr_set(x_53, 1, x_46);
x_54 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_54);
if (lean::is_scalar(x_13)) {
 x_56 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_56 = x_13;
}
lean::cnstr_set(x_56, 0, x_53);
lean::cnstr_set(x_56, 1, x_48);
lean::cnstr_set(x_56, 2, x_54);
x_57 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_50, x_56);
x_58 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_57);
return x_58;
}
else
{
obj* x_61; unsigned char x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
lean::dec(x_13);
lean::dec(x_7);
x_61 = lean::cnstr_get(x_19, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get_scalar<unsigned char>(x_19, sizeof(void*)*1);
if (lean::is_shared(x_19)) {
 lean::dec(x_19);
 x_64 = lean::box(0);
} else {
 lean::cnstr_release(x_19, 0);
 x_64 = x_19;
}
if (lean::is_scalar(x_64)) {
 x_65 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_65 = x_64;
}
lean::cnstr_set(x_65, 0, x_61);
lean::cnstr_set_scalar(x_65, sizeof(void*)*1, x_63);
x_66 = x_65;
x_67 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_66);
return x_67;
}
}
}
else
{
obj* x_69; unsigned char x_71; obj* x_72; obj* x_73; obj* x_74; 
lean::dec(x_0);
x_69 = lean::cnstr_get(x_6, 0);
lean::inc(x_69);
x_71 = lean::cnstr_get_scalar<unsigned char>(x_6, sizeof(void*)*1);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_72 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 x_72 = x_6;
}
if (lean::is_scalar(x_72)) {
 x_73 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_73 = x_72;
}
lean::cnstr_set(x_73, 0, x_69);
lean::cnstr_set_scalar(x_73, sizeof(void*)*1, x_71);
x_74 = x_73;
return x_74;
}
}
else
{
obj* x_77; 
lean::dec(x_0);
lean::dec(x_3);
x_77 = l_lean_ir_parse__var(x_1);
if (lean::obj_tag(x_77) == 0)
{
obj* x_78; obj* x_80; obj* x_82; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_89; obj* x_90; 
x_78 = lean::cnstr_get(x_77, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_77, 1);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_77, 2);
lean::inc(x_82);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_84 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 lean::cnstr_release(x_77, 1);
 lean::cnstr_release(x_77, 2);
 x_84 = x_77;
}
x_85 = lean::box(0);
x_86 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_86, 0, x_78);
lean::cnstr_set(x_86, 1, x_85);
x_87 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_87);
if (lean::is_scalar(x_84)) {
 x_89 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_89 = x_84;
}
lean::cnstr_set(x_89, 0, x_86);
lean::cnstr_set(x_89, 1, x_80);
lean::cnstr_set(x_89, 2, x_87);
x_90 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_82, x_89);
return x_90;
}
else
{
obj* x_91; unsigned char x_93; obj* x_94; obj* x_95; obj* x_96; 
x_91 = lean::cnstr_get(x_77, 0);
lean::inc(x_91);
x_93 = lean::cnstr_get_scalar<unsigned char>(x_77, sizeof(void*)*1);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_94 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 x_94 = x_77;
}
if (lean::is_scalar(x_94)) {
 x_95 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_95 = x_94;
}
lean::cnstr_set(x_95, 0, x_91);
lean::cnstr_set_scalar(x_95, sizeof(void*)*1, x_93);
x_96 = x_95;
return x_96;
}
}
}
}
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__untyped__assignment___spec__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; 
x_1 = lean::string_iterator_remaining(x_0);
x_2 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__untyped__assignment___spec__3(x_1, x_0);
x_3 = l_lean_ir_keyword___closed__1;
lean::inc(x_3);
x_5 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_many___at_lean_ir_parse__untyped__assignment___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::inc(x_0);
x_2 = l_lean_parser_monad__parsec_many1___at_lean_ir_parse__untyped__assignment___spec__2(x_0);
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_0);
return x_2;
}
else
{
obj* x_4; unsigned char x_6; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get_scalar<unsigned char>(x_2, sizeof(void*)*1);
if (x_6 == 0)
{
obj* x_8; obj* x_9; obj* x_12; obj* x_14; obj* x_15; obj* x_16; 
lean::dec(x_2);
x_8 = lean::box(0);
x_9 = lean::cnstr_get(x_4, 2);
lean::inc(x_9);
lean::dec(x_4);
x_12 = l_mjoin___rarg___closed__1;
lean::inc(x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_14, 0, x_9);
lean::closure_set(x_14, 1, x_12);
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_14);
x_16 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_16, 0, x_8);
lean::cnstr_set(x_16, 1, x_0);
lean::cnstr_set(x_16, 2, x_15);
return x_16;
}
else
{
lean::dec(x_0);
lean::dec(x_4);
return x_2;
}
}
}
}
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__untyped__assignment___spec__5(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::nat_dec_eq(x_0, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_6; 
lean::dec(x_3);
x_6 = l_lean_ir_parse__var(x_1);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_19; obj* x_20; 
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 2);
lean::inc(x_11);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_13 = x_6;
}
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
lean::inc(x_9);
x_19 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__untyped__assignment___spec__5(x_15, x_9);
if (lean::obj_tag(x_19) == 0)
{
obj* x_23; 
lean::dec(x_9);
x_23 = lean::box(0);
x_20 = x_23;
goto lbl_21;
}
else
{
obj* x_24; unsigned char x_26; 
x_24 = lean::cnstr_get(x_19, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get_scalar<unsigned char>(x_19, sizeof(void*)*1);
if (x_26 == 0)
{
obj* x_29; obj* x_30; obj* x_33; obj* x_35; obj* x_36; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
lean::dec(x_13);
lean::dec(x_19);
x_29 = lean::box(0);
x_30 = lean::cnstr_get(x_24, 2);
lean::inc(x_30);
lean::dec(x_24);
x_33 = l_mjoin___rarg___closed__1;
lean::inc(x_33);
x_35 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_35, 0, x_30);
lean::closure_set(x_35, 1, x_33);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_7);
lean::cnstr_set(x_36, 1, x_29);
lean::inc(x_33);
x_38 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_38, 0, x_35);
lean::closure_set(x_38, 1, x_33);
x_39 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_39, 0, x_38);
x_40 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_40, 0, x_36);
lean::cnstr_set(x_40, 1, x_9);
lean::cnstr_set(x_40, 2, x_39);
x_41 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_40);
return x_41;
}
else
{
obj* x_44; 
lean::dec(x_9);
lean::dec(x_24);
x_44 = lean::box(0);
x_20 = x_44;
goto lbl_21;
}
}
lbl_21:
{
lean::dec(x_20);
if (lean::obj_tag(x_19) == 0)
{
obj* x_46; obj* x_48; obj* x_50; obj* x_53; obj* x_54; obj* x_56; obj* x_57; obj* x_58; 
x_46 = lean::cnstr_get(x_19, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_19, 1);
lean::inc(x_48);
x_50 = lean::cnstr_get(x_19, 2);
lean::inc(x_50);
lean::dec(x_19);
x_53 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_53, 0, x_7);
lean::cnstr_set(x_53, 1, x_46);
x_54 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_54);
if (lean::is_scalar(x_13)) {
 x_56 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_56 = x_13;
}
lean::cnstr_set(x_56, 0, x_53);
lean::cnstr_set(x_56, 1, x_48);
lean::cnstr_set(x_56, 2, x_54);
x_57 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_50, x_56);
x_58 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_57);
return x_58;
}
else
{
obj* x_61; unsigned char x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
lean::dec(x_13);
lean::dec(x_7);
x_61 = lean::cnstr_get(x_19, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get_scalar<unsigned char>(x_19, sizeof(void*)*1);
if (lean::is_shared(x_19)) {
 lean::dec(x_19);
 x_64 = lean::box(0);
} else {
 lean::cnstr_release(x_19, 0);
 x_64 = x_19;
}
if (lean::is_scalar(x_64)) {
 x_65 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_65 = x_64;
}
lean::cnstr_set(x_65, 0, x_61);
lean::cnstr_set_scalar(x_65, sizeof(void*)*1, x_63);
x_66 = x_65;
x_67 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_66);
return x_67;
}
}
}
else
{
obj* x_69; unsigned char x_71; obj* x_72; obj* x_73; obj* x_74; 
lean::dec(x_0);
x_69 = lean::cnstr_get(x_6, 0);
lean::inc(x_69);
x_71 = lean::cnstr_get_scalar<unsigned char>(x_6, sizeof(void*)*1);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_72 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 x_72 = x_6;
}
if (lean::is_scalar(x_72)) {
 x_73 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_73 = x_72;
}
lean::cnstr_set(x_73, 0, x_69);
lean::cnstr_set_scalar(x_73, sizeof(void*)*1, x_71);
x_74 = x_73;
return x_74;
}
}
else
{
obj* x_77; 
lean::dec(x_0);
lean::dec(x_3);
x_77 = l_lean_ir_parse__var(x_1);
if (lean::obj_tag(x_77) == 0)
{
obj* x_78; obj* x_80; obj* x_82; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_89; obj* x_90; 
x_78 = lean::cnstr_get(x_77, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_77, 1);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_77, 2);
lean::inc(x_82);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_84 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 lean::cnstr_release(x_77, 1);
 lean::cnstr_release(x_77, 2);
 x_84 = x_77;
}
x_85 = lean::box(0);
x_86 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_86, 0, x_78);
lean::cnstr_set(x_86, 1, x_85);
x_87 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_87);
if (lean::is_scalar(x_84)) {
 x_89 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_89 = x_84;
}
lean::cnstr_set(x_89, 0, x_86);
lean::cnstr_set(x_89, 1, x_80);
lean::cnstr_set(x_89, 2, x_87);
x_90 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_82, x_89);
return x_90;
}
else
{
obj* x_91; unsigned char x_93; obj* x_94; obj* x_95; obj* x_96; 
x_91 = lean::cnstr_get(x_77, 0);
lean::inc(x_91);
x_93 = lean::cnstr_get_scalar<unsigned char>(x_77, sizeof(void*)*1);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_94 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 x_94 = x_77;
}
if (lean::is_scalar(x_94)) {
 x_95 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_95 = x_94;
}
lean::cnstr_set(x_95, 0, x_91);
lean::cnstr_set_scalar(x_95, sizeof(void*)*1, x_93);
x_96 = x_95;
return x_96;
}
}
}
}
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__untyped__assignment___spec__4(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; 
x_1 = lean::string_iterator_remaining(x_0);
x_2 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__untyped__assignment___spec__5(x_1, x_0);
x_3 = l_lean_ir_keyword___closed__1;
lean::inc(x_3);
x_5 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__untyped__assignment___spec__8(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::nat_dec_eq(x_0, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_6; 
lean::dec(x_3);
x_6 = l_lean_ir_parse__var(x_1);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_19; obj* x_20; 
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 2);
lean::inc(x_11);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_13 = x_6;
}
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
lean::inc(x_9);
x_19 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__untyped__assignment___spec__8(x_15, x_9);
if (lean::obj_tag(x_19) == 0)
{
obj* x_23; 
lean::dec(x_9);
x_23 = lean::box(0);
x_20 = x_23;
goto lbl_21;
}
else
{
obj* x_24; unsigned char x_26; 
x_24 = lean::cnstr_get(x_19, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get_scalar<unsigned char>(x_19, sizeof(void*)*1);
if (x_26 == 0)
{
obj* x_29; obj* x_30; obj* x_33; obj* x_35; obj* x_36; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
lean::dec(x_13);
lean::dec(x_19);
x_29 = lean::box(0);
x_30 = lean::cnstr_get(x_24, 2);
lean::inc(x_30);
lean::dec(x_24);
x_33 = l_mjoin___rarg___closed__1;
lean::inc(x_33);
x_35 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_35, 0, x_30);
lean::closure_set(x_35, 1, x_33);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_7);
lean::cnstr_set(x_36, 1, x_29);
lean::inc(x_33);
x_38 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_38, 0, x_35);
lean::closure_set(x_38, 1, x_33);
x_39 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_39, 0, x_38);
x_40 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_40, 0, x_36);
lean::cnstr_set(x_40, 1, x_9);
lean::cnstr_set(x_40, 2, x_39);
x_41 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_40);
return x_41;
}
else
{
obj* x_44; 
lean::dec(x_9);
lean::dec(x_24);
x_44 = lean::box(0);
x_20 = x_44;
goto lbl_21;
}
}
lbl_21:
{
lean::dec(x_20);
if (lean::obj_tag(x_19) == 0)
{
obj* x_46; obj* x_48; obj* x_50; obj* x_53; obj* x_54; obj* x_56; obj* x_57; obj* x_58; 
x_46 = lean::cnstr_get(x_19, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_19, 1);
lean::inc(x_48);
x_50 = lean::cnstr_get(x_19, 2);
lean::inc(x_50);
lean::dec(x_19);
x_53 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_53, 0, x_7);
lean::cnstr_set(x_53, 1, x_46);
x_54 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_54);
if (lean::is_scalar(x_13)) {
 x_56 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_56 = x_13;
}
lean::cnstr_set(x_56, 0, x_53);
lean::cnstr_set(x_56, 1, x_48);
lean::cnstr_set(x_56, 2, x_54);
x_57 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_50, x_56);
x_58 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_57);
return x_58;
}
else
{
obj* x_61; unsigned char x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
lean::dec(x_13);
lean::dec(x_7);
x_61 = lean::cnstr_get(x_19, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get_scalar<unsigned char>(x_19, sizeof(void*)*1);
if (lean::is_shared(x_19)) {
 lean::dec(x_19);
 x_64 = lean::box(0);
} else {
 lean::cnstr_release(x_19, 0);
 x_64 = x_19;
}
if (lean::is_scalar(x_64)) {
 x_65 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_65 = x_64;
}
lean::cnstr_set(x_65, 0, x_61);
lean::cnstr_set_scalar(x_65, sizeof(void*)*1, x_63);
x_66 = x_65;
x_67 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_66);
return x_67;
}
}
}
else
{
obj* x_69; unsigned char x_71; obj* x_72; obj* x_73; obj* x_74; 
lean::dec(x_0);
x_69 = lean::cnstr_get(x_6, 0);
lean::inc(x_69);
x_71 = lean::cnstr_get_scalar<unsigned char>(x_6, sizeof(void*)*1);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_72 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 x_72 = x_6;
}
if (lean::is_scalar(x_72)) {
 x_73 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_73 = x_72;
}
lean::cnstr_set(x_73, 0, x_69);
lean::cnstr_set_scalar(x_73, sizeof(void*)*1, x_71);
x_74 = x_73;
return x_74;
}
}
else
{
obj* x_77; 
lean::dec(x_0);
lean::dec(x_3);
x_77 = l_lean_ir_parse__var(x_1);
if (lean::obj_tag(x_77) == 0)
{
obj* x_78; obj* x_80; obj* x_82; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_89; obj* x_90; 
x_78 = lean::cnstr_get(x_77, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_77, 1);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_77, 2);
lean::inc(x_82);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_84 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 lean::cnstr_release(x_77, 1);
 lean::cnstr_release(x_77, 2);
 x_84 = x_77;
}
x_85 = lean::box(0);
x_86 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_86, 0, x_78);
lean::cnstr_set(x_86, 1, x_85);
x_87 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_87);
if (lean::is_scalar(x_84)) {
 x_89 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_89 = x_84;
}
lean::cnstr_set(x_89, 0, x_86);
lean::cnstr_set(x_89, 1, x_80);
lean::cnstr_set(x_89, 2, x_87);
x_90 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_82, x_89);
return x_90;
}
else
{
obj* x_91; unsigned char x_93; obj* x_94; obj* x_95; obj* x_96; 
x_91 = lean::cnstr_get(x_77, 0);
lean::inc(x_91);
x_93 = lean::cnstr_get_scalar<unsigned char>(x_77, sizeof(void*)*1);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_94 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 x_94 = x_77;
}
if (lean::is_scalar(x_94)) {
 x_95 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_95 = x_94;
}
lean::cnstr_set(x_95, 0, x_91);
lean::cnstr_set_scalar(x_95, sizeof(void*)*1, x_93);
x_96 = x_95;
return x_96;
}
}
}
}
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__untyped__assignment___spec__7(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; 
x_1 = lean::string_iterator_remaining(x_0);
x_2 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__untyped__assignment___spec__8(x_1, x_0);
x_3 = l_lean_ir_keyword___closed__1;
lean::inc(x_3);
x_5 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_many___at_lean_ir_parse__untyped__assignment___spec__6(obj* x_0) {
_start:
{
obj* x_2; 
lean::inc(x_0);
x_2 = l_lean_parser_monad__parsec_many1___at_lean_ir_parse__untyped__assignment___spec__7(x_0);
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_0);
return x_2;
}
else
{
obj* x_4; unsigned char x_6; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get_scalar<unsigned char>(x_2, sizeof(void*)*1);
if (x_6 == 0)
{
obj* x_8; obj* x_9; obj* x_12; obj* x_14; obj* x_15; obj* x_16; 
lean::dec(x_2);
x_8 = lean::box(0);
x_9 = lean::cnstr_get(x_4, 2);
lean::inc(x_9);
lean::dec(x_4);
x_12 = l_mjoin___rarg___closed__1;
lean::inc(x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_14, 0, x_9);
lean::closure_set(x_14, 1, x_12);
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_14);
x_16 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_16, 0, x_8);
lean::cnstr_set(x_16, 1, x_0);
lean::cnstr_set(x_16, 2, x_15);
return x_16;
}
else
{
lean::dec(x_0);
lean::dec(x_4);
return x_2;
}
}
}
}
obj* l_lean_ir_parse__untyped__assignment___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
unsigned char x_4; obj* x_5; 
x_4 = lean::unbox(x_1);
x_5 = l_lean_ir_parse__untyped__assignment___lambda__1(x_0, x_4, x_2, x_3);
return x_5;
}
}
obj* l_lean_ir_parse__untyped__assignment___lambda__3___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
unsigned short x_4; unsigned short x_5; size_t x_6; obj* x_7; 
x_4 = lean::unbox(x_1);
x_5 = lean::unbox(x_2);
x_6 = lean::unbox_size_t(x_3);
x_7 = l_lean_ir_parse__untyped__assignment___lambda__3(x_0, x_4, x_5, x_6);
return x_7;
}
}
obj* l_lean_ir_parse__untyped__assignment___lambda__5___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
unsigned short x_3; obj* x_4; 
x_3 = lean::unbox(x_2);
x_4 = l_lean_ir_parse__untyped__assignment___lambda__5(x_0, x_1, x_3);
return x_4;
}
}
obj* l_lean_ir_parse__assignment(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_ir_parse__var(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; obj* x_4; obj* x_6; obj* x_11; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
lean::dec(x_1);
lean::inc(x_4);
lean::inc(x_2);
x_11 = l_lean_ir_parse__untyped__assignment(x_2, x_4);
if (lean::obj_tag(x_11) == 0)
{
obj* x_14; 
lean::dec(x_2);
lean::dec(x_4);
x_14 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_11);
return x_14;
}
else
{
obj* x_15; unsigned char x_17; 
x_15 = lean::cnstr_get(x_11, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get_scalar<unsigned char>(x_11, sizeof(void*)*1);
if (x_17 == 0)
{
obj* x_19; obj* x_20; obj* x_21; 
lean::dec(x_11);
x_19 = l_lean_ir_parse__typed__assignment(x_2, x_4);
x_20 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_15, x_19);
x_21 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_20);
return x_21;
}
else
{
obj* x_25; 
lean::dec(x_15);
lean::dec(x_2);
lean::dec(x_4);
x_25 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_11);
return x_25;
}
}
}
else
{
obj* x_26; unsigned char x_28; obj* x_29; obj* x_30; obj* x_31; 
x_26 = lean::cnstr_get(x_1, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get_scalar<unsigned char>(x_1, sizeof(void*)*1);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 x_29 = x_1;
}
if (lean::is_scalar(x_29)) {
 x_30 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_30 = x_29;
}
lean::cnstr_set(x_30, 0, x_26);
lean::cnstr_set_scalar(x_30, sizeof(void*)*1, x_28);
x_31 = x_30;
return x_31;
}
}
}
obj* l_lean_ir_parse__instr(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_14; 
x_11 = l_lean_ir_parse__instr___closed__3;
lean::inc(x_0);
lean::inc(x_11);
x_14 = l_lean_ir_keyword(x_11, x_0);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_17; obj* x_19; obj* x_20; 
x_15 = lean::cnstr_get(x_14, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 2);
lean::inc(x_17);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_19 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 lean::cnstr_release(x_14, 1);
 lean::cnstr_release(x_14, 2);
 x_19 = x_14;
}
x_20 = l_lean_ir_parse__var(x_15);
if (lean::obj_tag(x_20) == 0)
{
obj* x_21; obj* x_23; obj* x_25; obj* x_28; obj* x_29; obj* x_31; obj* x_32; obj* x_33; 
x_21 = lean::cnstr_get(x_20, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_20, 1);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_20, 2);
lean::inc(x_25);
lean::dec(x_20);
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_parse__instr___lambda__4), 3, 1);
lean::closure_set(x_28, 0, x_21);
x_29 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_29);
if (lean::is_scalar(x_19)) {
 x_31 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_31 = x_19;
}
lean::cnstr_set(x_31, 0, x_28);
lean::cnstr_set(x_31, 1, x_23);
lean::cnstr_set(x_31, 2, x_29);
x_32 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_25, x_31);
x_33 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_32);
if (lean::obj_tag(x_33) == 0)
{
obj* x_34; obj* x_36; obj* x_38; 
x_34 = lean::cnstr_get(x_33, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_33, 1);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_33, 2);
lean::inc(x_38);
lean::dec(x_33);
x_7 = x_34;
x_8 = x_36;
x_9 = x_38;
goto lbl_10;
}
else
{
obj* x_41; unsigned char x_43; obj* x_44; obj* x_45; obj* x_46; 
x_41 = lean::cnstr_get(x_33, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get_scalar<unsigned char>(x_33, sizeof(void*)*1);
if (lean::is_shared(x_33)) {
 lean::dec(x_33);
 x_44 = lean::box(0);
} else {
 lean::cnstr_release(x_33, 0);
 x_44 = x_33;
}
if (lean::is_scalar(x_44)) {
 x_45 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_45 = x_44;
}
lean::cnstr_set(x_45, 0, x_41);
lean::cnstr_set_scalar(x_45, sizeof(void*)*1, x_43);
x_46 = x_45;
x_1 = x_46;
goto lbl_2;
}
}
else
{
obj* x_48; unsigned char x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
lean::dec(x_19);
x_48 = lean::cnstr_get(x_20, 0);
lean::inc(x_48);
x_50 = lean::cnstr_get_scalar<unsigned char>(x_20, sizeof(void*)*1);
if (lean::is_shared(x_20)) {
 lean::dec(x_20);
 x_51 = lean::box(0);
} else {
 lean::cnstr_release(x_20, 0);
 x_51 = x_20;
}
if (lean::is_scalar(x_51)) {
 x_52 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_52 = x_51;
}
lean::cnstr_set(x_52, 0, x_48);
lean::cnstr_set_scalar(x_52, sizeof(void*)*1, x_50);
x_53 = x_52;
x_54 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_53);
if (lean::obj_tag(x_54) == 0)
{
obj* x_55; obj* x_57; obj* x_59; 
x_55 = lean::cnstr_get(x_54, 0);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_54, 1);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_54, 2);
lean::inc(x_59);
lean::dec(x_54);
x_7 = x_55;
x_8 = x_57;
x_9 = x_59;
goto lbl_10;
}
else
{
obj* x_62; unsigned char x_64; obj* x_65; obj* x_66; obj* x_67; 
x_62 = lean::cnstr_get(x_54, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get_scalar<unsigned char>(x_54, sizeof(void*)*1);
if (lean::is_shared(x_54)) {
 lean::dec(x_54);
 x_65 = lean::box(0);
} else {
 lean::cnstr_release(x_54, 0);
 x_65 = x_54;
}
if (lean::is_scalar(x_65)) {
 x_66 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_66 = x_65;
}
lean::cnstr_set(x_66, 0, x_62);
lean::cnstr_set_scalar(x_66, sizeof(void*)*1, x_64);
x_67 = x_66;
x_1 = x_67;
goto lbl_2;
}
}
}
else
{
obj* x_68; unsigned char x_70; obj* x_71; obj* x_72; obj* x_73; 
x_68 = lean::cnstr_get(x_14, 0);
lean::inc(x_68);
x_70 = lean::cnstr_get_scalar<unsigned char>(x_14, sizeof(void*)*1);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_71 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_71 = x_14;
}
if (lean::is_scalar(x_71)) {
 x_72 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_72 = x_71;
}
lean::cnstr_set(x_72, 0, x_68);
lean::cnstr_set_scalar(x_72, sizeof(void*)*1, x_70);
x_73 = x_72;
x_1 = x_73;
goto lbl_2;
}
lbl_2:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
obj* x_75; unsigned char x_77; obj* x_78; obj* x_79; unsigned char x_80; obj* x_82; obj* x_83; obj* x_84; obj* x_86; obj* x_87; obj* x_88; 
x_75 = lean::cnstr_get(x_1, 0);
lean::inc(x_75);
x_77 = lean::cnstr_get_scalar<unsigned char>(x_1, sizeof(void*)*1);
if (x_77 == 0)
{
obj* x_91; obj* x_94; 
lean::dec(x_1);
x_91 = l_lean_ir_parse__instr___closed__2;
lean::inc(x_0);
lean::inc(x_91);
x_94 = l_lean_ir_keyword(x_91, x_0);
if (lean::obj_tag(x_94) == 0)
{
obj* x_95; obj* x_97; obj* x_99; obj* x_100; 
x_95 = lean::cnstr_get(x_94, 1);
lean::inc(x_95);
x_97 = lean::cnstr_get(x_94, 2);
lean::inc(x_97);
if (lean::is_shared(x_94)) {
 lean::dec(x_94);
 x_99 = lean::box(0);
} else {
 lean::cnstr_release(x_94, 0);
 lean::cnstr_release(x_94, 1);
 lean::cnstr_release(x_94, 2);
 x_99 = x_94;
}
x_100 = l_lean_ir_parse__var(x_95);
if (lean::obj_tag(x_100) == 0)
{
obj* x_101; obj* x_103; obj* x_105; obj* x_108; obj* x_109; obj* x_111; obj* x_112; obj* x_113; 
x_101 = lean::cnstr_get(x_100, 0);
lean::inc(x_101);
x_103 = lean::cnstr_get(x_100, 1);
lean::inc(x_103);
x_105 = lean::cnstr_get(x_100, 2);
lean::inc(x_105);
lean::dec(x_100);
x_108 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_parse__instr___lambda__3___boxed), 3, 1);
lean::closure_set(x_108, 0, x_101);
x_109 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_109);
if (lean::is_scalar(x_99)) {
 x_111 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_111 = x_99;
}
lean::cnstr_set(x_111, 0, x_108);
lean::cnstr_set(x_111, 1, x_103);
lean::cnstr_set(x_111, 2, x_109);
x_112 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_105, x_111);
x_113 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_97, x_112);
if (lean::obj_tag(x_113) == 0)
{
obj* x_114; obj* x_116; obj* x_118; 
x_114 = lean::cnstr_get(x_113, 0);
lean::inc(x_114);
x_116 = lean::cnstr_get(x_113, 1);
lean::inc(x_116);
x_118 = lean::cnstr_get(x_113, 2);
lean::inc(x_118);
lean::dec(x_113);
x_86 = x_114;
x_87 = x_116;
x_88 = x_118;
goto lbl_89;
}
else
{
obj* x_121; unsigned char x_123; obj* x_124; obj* x_126; obj* x_127; 
x_121 = lean::cnstr_get(x_113, 0);
lean::inc(x_121);
x_123 = lean::cnstr_get_scalar<unsigned char>(x_113, sizeof(void*)*1);
if (lean::is_shared(x_113)) {
 lean::dec(x_113);
 x_124 = lean::box(0);
} else {
 lean::cnstr_release(x_113, 0);
 x_124 = x_113;
}
lean::inc(x_121);
if (lean::is_scalar(x_124)) {
 x_126 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_126 = x_124;
}
lean::cnstr_set(x_126, 0, x_121);
lean::cnstr_set_scalar(x_126, sizeof(void*)*1, x_123);
x_127 = x_126;
x_78 = x_127;
x_79 = x_121;
x_80 = x_123;
goto lbl_81;
}
}
else
{
obj* x_129; unsigned char x_131; obj* x_132; obj* x_133; obj* x_134; obj* x_135; 
lean::dec(x_99);
x_129 = lean::cnstr_get(x_100, 0);
lean::inc(x_129);
x_131 = lean::cnstr_get_scalar<unsigned char>(x_100, sizeof(void*)*1);
if (lean::is_shared(x_100)) {
 lean::dec(x_100);
 x_132 = lean::box(0);
} else {
 lean::cnstr_release(x_100, 0);
 x_132 = x_100;
}
if (lean::is_scalar(x_132)) {
 x_133 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_133 = x_132;
}
lean::cnstr_set(x_133, 0, x_129);
lean::cnstr_set_scalar(x_133, sizeof(void*)*1, x_131);
x_134 = x_133;
x_135 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_97, x_134);
if (lean::obj_tag(x_135) == 0)
{
obj* x_136; obj* x_138; obj* x_140; 
x_136 = lean::cnstr_get(x_135, 0);
lean::inc(x_136);
x_138 = lean::cnstr_get(x_135, 1);
lean::inc(x_138);
x_140 = lean::cnstr_get(x_135, 2);
lean::inc(x_140);
lean::dec(x_135);
x_86 = x_136;
x_87 = x_138;
x_88 = x_140;
goto lbl_89;
}
else
{
obj* x_143; unsigned char x_145; obj* x_146; obj* x_148; obj* x_149; 
x_143 = lean::cnstr_get(x_135, 0);
lean::inc(x_143);
x_145 = lean::cnstr_get_scalar<unsigned char>(x_135, sizeof(void*)*1);
if (lean::is_shared(x_135)) {
 lean::dec(x_135);
 x_146 = lean::box(0);
} else {
 lean::cnstr_release(x_135, 0);
 x_146 = x_135;
}
lean::inc(x_143);
if (lean::is_scalar(x_146)) {
 x_148 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_148 = x_146;
}
lean::cnstr_set(x_148, 0, x_143);
lean::cnstr_set_scalar(x_148, sizeof(void*)*1, x_145);
x_149 = x_148;
x_78 = x_149;
x_79 = x_143;
x_80 = x_145;
goto lbl_81;
}
}
}
else
{
obj* x_150; unsigned char x_152; obj* x_153; obj* x_155; obj* x_156; 
x_150 = lean::cnstr_get(x_94, 0);
lean::inc(x_150);
x_152 = lean::cnstr_get_scalar<unsigned char>(x_94, sizeof(void*)*1);
if (lean::is_shared(x_94)) {
 lean::dec(x_94);
 x_153 = lean::box(0);
} else {
 lean::cnstr_release(x_94, 0);
 x_153 = x_94;
}
lean::inc(x_150);
if (lean::is_scalar(x_153)) {
 x_155 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_155 = x_153;
}
lean::cnstr_set(x_155, 0, x_150);
lean::cnstr_set_scalar(x_155, sizeof(void*)*1, x_152);
x_156 = x_155;
x_78 = x_156;
x_79 = x_150;
x_80 = x_152;
goto lbl_81;
}
}
else
{
lean::dec(x_75);
lean::dec(x_0);
return x_1;
}
lbl_81:
{
obj* x_159; obj* x_160; unsigned char x_161; obj* x_163; obj* x_164; obj* x_165; obj* x_167; obj* x_168; obj* x_169; 
if (x_80 == 0)
{
obj* x_172; obj* x_175; 
lean::dec(x_78);
x_172 = l_lean_ir_parse__instr___closed__1;
lean::inc(x_0);
lean::inc(x_172);
x_175 = l_lean_ir_keyword(x_172, x_0);
if (lean::obj_tag(x_175) == 0)
{
obj* x_176; obj* x_178; obj* x_180; obj* x_181; 
x_176 = lean::cnstr_get(x_175, 1);
lean::inc(x_176);
x_178 = lean::cnstr_get(x_175, 2);
lean::inc(x_178);
if (lean::is_shared(x_175)) {
 lean::dec(x_175);
 x_180 = lean::box(0);
} else {
 lean::cnstr_release(x_175, 0);
 lean::cnstr_release(x_175, 1);
 lean::cnstr_release(x_175, 2);
 x_180 = x_175;
}
x_181 = l_lean_ir_parse__var(x_176);
if (lean::obj_tag(x_181) == 0)
{
obj* x_182; obj* x_184; obj* x_186; obj* x_189; obj* x_190; obj* x_192; obj* x_193; obj* x_194; 
x_182 = lean::cnstr_get(x_181, 0);
lean::inc(x_182);
x_184 = lean::cnstr_get(x_181, 1);
lean::inc(x_184);
x_186 = lean::cnstr_get(x_181, 2);
lean::inc(x_186);
lean::dec(x_181);
x_189 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_parse__instr___lambda__2___boxed), 3, 1);
lean::closure_set(x_189, 0, x_182);
x_190 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_190);
if (lean::is_scalar(x_180)) {
 x_192 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_192 = x_180;
}
lean::cnstr_set(x_192, 0, x_189);
lean::cnstr_set(x_192, 1, x_184);
lean::cnstr_set(x_192, 2, x_190);
x_193 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_186, x_192);
x_194 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_178, x_193);
if (lean::obj_tag(x_194) == 0)
{
obj* x_195; obj* x_197; obj* x_199; 
x_195 = lean::cnstr_get(x_194, 0);
lean::inc(x_195);
x_197 = lean::cnstr_get(x_194, 1);
lean::inc(x_197);
x_199 = lean::cnstr_get(x_194, 2);
lean::inc(x_199);
lean::dec(x_194);
x_167 = x_195;
x_168 = x_197;
x_169 = x_199;
goto lbl_170;
}
else
{
obj* x_202; unsigned char x_204; obj* x_205; obj* x_207; obj* x_208; 
x_202 = lean::cnstr_get(x_194, 0);
lean::inc(x_202);
x_204 = lean::cnstr_get_scalar<unsigned char>(x_194, sizeof(void*)*1);
if (lean::is_shared(x_194)) {
 lean::dec(x_194);
 x_205 = lean::box(0);
} else {
 lean::cnstr_release(x_194, 0);
 x_205 = x_194;
}
lean::inc(x_202);
if (lean::is_scalar(x_205)) {
 x_207 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_207 = x_205;
}
lean::cnstr_set(x_207, 0, x_202);
lean::cnstr_set_scalar(x_207, sizeof(void*)*1, x_204);
x_208 = x_207;
x_159 = x_208;
x_160 = x_202;
x_161 = x_204;
goto lbl_162;
}
}
else
{
obj* x_210; unsigned char x_212; obj* x_213; obj* x_214; obj* x_215; obj* x_216; 
lean::dec(x_180);
x_210 = lean::cnstr_get(x_181, 0);
lean::inc(x_210);
x_212 = lean::cnstr_get_scalar<unsigned char>(x_181, sizeof(void*)*1);
if (lean::is_shared(x_181)) {
 lean::dec(x_181);
 x_213 = lean::box(0);
} else {
 lean::cnstr_release(x_181, 0);
 x_213 = x_181;
}
if (lean::is_scalar(x_213)) {
 x_214 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_214 = x_213;
}
lean::cnstr_set(x_214, 0, x_210);
lean::cnstr_set_scalar(x_214, sizeof(void*)*1, x_212);
x_215 = x_214;
x_216 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_178, x_215);
if (lean::obj_tag(x_216) == 0)
{
obj* x_217; obj* x_219; obj* x_221; 
x_217 = lean::cnstr_get(x_216, 0);
lean::inc(x_217);
x_219 = lean::cnstr_get(x_216, 1);
lean::inc(x_219);
x_221 = lean::cnstr_get(x_216, 2);
lean::inc(x_221);
lean::dec(x_216);
x_167 = x_217;
x_168 = x_219;
x_169 = x_221;
goto lbl_170;
}
else
{
obj* x_224; unsigned char x_226; obj* x_227; obj* x_229; obj* x_230; 
x_224 = lean::cnstr_get(x_216, 0);
lean::inc(x_224);
x_226 = lean::cnstr_get_scalar<unsigned char>(x_216, sizeof(void*)*1);
if (lean::is_shared(x_216)) {
 lean::dec(x_216);
 x_227 = lean::box(0);
} else {
 lean::cnstr_release(x_216, 0);
 x_227 = x_216;
}
lean::inc(x_224);
if (lean::is_scalar(x_227)) {
 x_229 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_229 = x_227;
}
lean::cnstr_set(x_229, 0, x_224);
lean::cnstr_set_scalar(x_229, sizeof(void*)*1, x_226);
x_230 = x_229;
x_159 = x_230;
x_160 = x_224;
x_161 = x_226;
goto lbl_162;
}
}
}
else
{
obj* x_231; unsigned char x_233; obj* x_234; obj* x_236; obj* x_237; 
x_231 = lean::cnstr_get(x_175, 0);
lean::inc(x_231);
x_233 = lean::cnstr_get_scalar<unsigned char>(x_175, sizeof(void*)*1);
if (lean::is_shared(x_175)) {
 lean::dec(x_175);
 x_234 = lean::box(0);
} else {
 lean::cnstr_release(x_175, 0);
 x_234 = x_175;
}
lean::inc(x_231);
if (lean::is_scalar(x_234)) {
 x_236 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_236 = x_234;
}
lean::cnstr_set(x_236, 0, x_231);
lean::cnstr_set_scalar(x_236, sizeof(void*)*1, x_233);
x_237 = x_236;
x_159 = x_237;
x_160 = x_231;
x_161 = x_233;
goto lbl_162;
}
}
else
{
obj* x_240; 
lean::dec(x_0);
lean::dec(x_79);
x_240 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_75, x_78);
return x_240;
}
lbl_162:
{
obj* x_241; obj* x_242; obj* x_243; 
if (x_161 == 0)
{
obj* x_246; obj* x_247; obj* x_251; 
lean::dec(x_159);
x_246 = l_lean_ir_parse__typed__assignment___closed__5;
x_247 = l_lean_ir_str2unop;
lean::inc(x_0);
lean::inc(x_247);
lean::inc(x_246);
x_251 = l_lean_ir_parse__key2val___main___rarg(x_246, x_247, x_0);
if (lean::obj_tag(x_251) == 0)
{
obj* x_252; obj* x_254; obj* x_256; obj* x_258; obj* x_259; obj* x_260; obj* x_262; obj* x_263; 
x_252 = lean::cnstr_get(x_251, 0);
lean::inc(x_252);
x_254 = lean::cnstr_get(x_251, 1);
lean::inc(x_254);
x_256 = lean::cnstr_get(x_251, 2);
lean::inc(x_256);
if (lean::is_shared(x_251)) {
 lean::dec(x_251);
 x_258 = lean::box(0);
} else {
 lean::cnstr_release(x_251, 0);
 lean::cnstr_release(x_251, 1);
 lean::cnstr_release(x_251, 2);
 x_258 = x_251;
}
x_259 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_parse__instr___lambda__1___boxed), 2, 1);
lean::closure_set(x_259, 0, x_252);
x_260 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_260);
if (lean::is_scalar(x_258)) {
 x_262 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_262 = x_258;
}
lean::cnstr_set(x_262, 0, x_259);
lean::cnstr_set(x_262, 1, x_254);
lean::cnstr_set(x_262, 2, x_260);
x_263 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_256, x_262);
if (lean::obj_tag(x_263) == 0)
{
obj* x_264; obj* x_266; obj* x_268; 
x_264 = lean::cnstr_get(x_263, 0);
lean::inc(x_264);
x_266 = lean::cnstr_get(x_263, 1);
lean::inc(x_266);
x_268 = lean::cnstr_get(x_263, 2);
lean::inc(x_268);
lean::dec(x_263);
x_241 = x_264;
x_242 = x_266;
x_243 = x_268;
goto lbl_244;
}
else
{
obj* x_271; unsigned char x_273; obj* x_274; 
x_271 = lean::cnstr_get(x_263, 0);
lean::inc(x_271);
x_273 = lean::cnstr_get_scalar<unsigned char>(x_263, sizeof(void*)*1);
if (lean::is_shared(x_263)) {
 lean::dec(x_263);
 x_274 = lean::box(0);
} else {
 lean::cnstr_release(x_263, 0);
 x_274 = x_263;
}
if (x_273 == 0)
{
obj* x_276; obj* x_277; obj* x_278; obj* x_279; obj* x_280; 
lean::dec(x_274);
x_276 = l_lean_ir_parse__assignment(x_0);
x_277 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_271, x_276);
x_278 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_160, x_277);
x_279 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_79, x_278);
x_280 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_75, x_279);
return x_280;
}
else
{
obj* x_282; obj* x_283; obj* x_284; obj* x_285; obj* x_286; 
lean::dec(x_0);
if (lean::is_scalar(x_274)) {
 x_282 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_282 = x_274;
}
lean::cnstr_set(x_282, 0, x_271);
lean::cnstr_set_scalar(x_282, sizeof(void*)*1, x_273);
x_283 = x_282;
x_284 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_160, x_283);
x_285 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_79, x_284);
x_286 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_75, x_285);
return x_286;
}
}
}
else
{
obj* x_287; unsigned char x_289; obj* x_290; 
x_287 = lean::cnstr_get(x_251, 0);
lean::inc(x_287);
x_289 = lean::cnstr_get_scalar<unsigned char>(x_251, sizeof(void*)*1);
if (lean::is_shared(x_251)) {
 lean::dec(x_251);
 x_290 = lean::box(0);
} else {
 lean::cnstr_release(x_251, 0);
 x_290 = x_251;
}
if (x_289 == 0)
{
obj* x_292; obj* x_293; obj* x_294; obj* x_295; obj* x_296; 
lean::dec(x_290);
x_292 = l_lean_ir_parse__assignment(x_0);
x_293 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_287, x_292);
x_294 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_160, x_293);
x_295 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_79, x_294);
x_296 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_75, x_295);
return x_296;
}
else
{
obj* x_298; obj* x_299; obj* x_300; obj* x_301; obj* x_302; 
lean::dec(x_0);
if (lean::is_scalar(x_290)) {
 x_298 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_298 = x_290;
}
lean::cnstr_set(x_298, 0, x_287);
lean::cnstr_set_scalar(x_298, sizeof(void*)*1, x_289);
x_299 = x_298;
x_300 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_160, x_299);
x_301 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_79, x_300);
x_302 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_75, x_301);
return x_302;
}
}
}
else
{
obj* x_305; obj* x_306; 
lean::dec(x_0);
lean::dec(x_160);
x_305 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_79, x_159);
x_306 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_75, x_305);
return x_306;
}
lbl_244:
{
obj* x_307; 
x_307 = l_lean_ir_parse__var(x_242);
if (lean::obj_tag(x_307) == 0)
{
obj* x_308; obj* x_310; obj* x_312; obj* x_314; obj* x_315; obj* x_316; obj* x_318; obj* x_319; obj* x_320; 
x_308 = lean::cnstr_get(x_307, 0);
lean::inc(x_308);
x_310 = lean::cnstr_get(x_307, 1);
lean::inc(x_310);
x_312 = lean::cnstr_get(x_307, 2);
lean::inc(x_312);
if (lean::is_shared(x_307)) {
 lean::dec(x_307);
 x_314 = lean::box(0);
} else {
 lean::cnstr_release(x_307, 0);
 lean::cnstr_release(x_307, 1);
 lean::cnstr_release(x_307, 2);
 x_314 = x_307;
}
x_315 = lean::apply_1(x_241, x_308);
x_316 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_316);
if (lean::is_scalar(x_314)) {
 x_318 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_318 = x_314;
}
lean::cnstr_set(x_318, 0, x_315);
lean::cnstr_set(x_318, 1, x_310);
lean::cnstr_set(x_318, 2, x_316);
x_319 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_312, x_318);
x_320 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_243, x_319);
if (lean::obj_tag(x_320) == 0)
{
obj* x_322; obj* x_323; obj* x_324; 
lean::dec(x_0);
x_322 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_160, x_320);
x_323 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_79, x_322);
x_324 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_75, x_323);
return x_324;
}
else
{
obj* x_325; unsigned char x_327; 
x_325 = lean::cnstr_get(x_320, 0);
lean::inc(x_325);
x_327 = lean::cnstr_get_scalar<unsigned char>(x_320, sizeof(void*)*1);
if (x_327 == 0)
{
obj* x_329; obj* x_330; obj* x_331; obj* x_332; obj* x_333; 
lean::dec(x_320);
x_329 = l_lean_ir_parse__assignment(x_0);
x_330 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_325, x_329);
x_331 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_160, x_330);
x_332 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_79, x_331);
x_333 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_75, x_332);
return x_333;
}
else
{
obj* x_336; obj* x_337; obj* x_338; 
lean::dec(x_0);
lean::dec(x_325);
x_336 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_160, x_320);
x_337 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_79, x_336);
x_338 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_75, x_337);
return x_338;
}
}
}
else
{
obj* x_340; unsigned char x_342; obj* x_343; obj* x_344; obj* x_345; obj* x_346; 
lean::dec(x_241);
x_340 = lean::cnstr_get(x_307, 0);
lean::inc(x_340);
x_342 = lean::cnstr_get_scalar<unsigned char>(x_307, sizeof(void*)*1);
if (lean::is_shared(x_307)) {
 lean::dec(x_307);
 x_343 = lean::box(0);
} else {
 lean::cnstr_release(x_307, 0);
 x_343 = x_307;
}
if (lean::is_scalar(x_343)) {
 x_344 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_344 = x_343;
}
lean::cnstr_set(x_344, 0, x_340);
lean::cnstr_set_scalar(x_344, sizeof(void*)*1, x_342);
x_345 = x_344;
x_346 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_243, x_345);
if (lean::obj_tag(x_346) == 0)
{
obj* x_348; obj* x_349; obj* x_350; 
lean::dec(x_0);
x_348 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_160, x_346);
x_349 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_79, x_348);
x_350 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_75, x_349);
return x_350;
}
else
{
obj* x_351; unsigned char x_353; 
x_351 = lean::cnstr_get(x_346, 0);
lean::inc(x_351);
x_353 = lean::cnstr_get_scalar<unsigned char>(x_346, sizeof(void*)*1);
if (x_353 == 0)
{
obj* x_355; obj* x_356; obj* x_357; obj* x_358; obj* x_359; 
lean::dec(x_346);
x_355 = l_lean_ir_parse__assignment(x_0);
x_356 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_351, x_355);
x_357 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_160, x_356);
x_358 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_79, x_357);
x_359 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_75, x_358);
return x_359;
}
else
{
obj* x_362; obj* x_363; obj* x_364; 
lean::dec(x_351);
lean::dec(x_0);
x_362 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_160, x_346);
x_363 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_79, x_362);
x_364 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_75, x_363);
return x_364;
}
}
}
}
}
lbl_166:
{
obj* x_365; 
x_365 = l_lean_ir_parse__var(x_164);
if (lean::obj_tag(x_365) == 0)
{
obj* x_366; obj* x_368; obj* x_370; obj* x_372; obj* x_373; obj* x_374; obj* x_376; obj* x_377; obj* x_378; 
x_366 = lean::cnstr_get(x_365, 0);
lean::inc(x_366);
x_368 = lean::cnstr_get(x_365, 1);
lean::inc(x_368);
x_370 = lean::cnstr_get(x_365, 2);
lean::inc(x_370);
if (lean::is_shared(x_365)) {
 lean::dec(x_365);
 x_372 = lean::box(0);
} else {
 lean::cnstr_release(x_365, 0);
 lean::cnstr_release(x_365, 1);
 lean::cnstr_release(x_365, 2);
 x_372 = x_365;
}
x_373 = lean::apply_1(x_163, x_366);
x_374 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_374);
if (lean::is_scalar(x_372)) {
 x_376 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_376 = x_372;
}
lean::cnstr_set(x_376, 0, x_373);
lean::cnstr_set(x_376, 1, x_368);
lean::cnstr_set(x_376, 2, x_374);
x_377 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_370, x_376);
x_378 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_165, x_377);
if (lean::obj_tag(x_378) == 0)
{
obj* x_380; obj* x_381; 
lean::dec(x_0);
x_380 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_79, x_378);
x_381 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_75, x_380);
return x_381;
}
else
{
obj* x_382; unsigned char x_384; 
x_382 = lean::cnstr_get(x_378, 0);
lean::inc(x_382);
x_384 = lean::cnstr_get_scalar<unsigned char>(x_378, sizeof(void*)*1);
x_159 = x_378;
x_160 = x_382;
x_161 = x_384;
goto lbl_162;
}
}
else
{
obj* x_386; unsigned char x_388; obj* x_389; obj* x_390; obj* x_391; obj* x_392; 
lean::dec(x_163);
x_386 = lean::cnstr_get(x_365, 0);
lean::inc(x_386);
x_388 = lean::cnstr_get_scalar<unsigned char>(x_365, sizeof(void*)*1);
if (lean::is_shared(x_365)) {
 lean::dec(x_365);
 x_389 = lean::box(0);
} else {
 lean::cnstr_release(x_365, 0);
 x_389 = x_365;
}
if (lean::is_scalar(x_389)) {
 x_390 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_390 = x_389;
}
lean::cnstr_set(x_390, 0, x_386);
lean::cnstr_set_scalar(x_390, sizeof(void*)*1, x_388);
x_391 = x_390;
x_392 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_165, x_391);
if (lean::obj_tag(x_392) == 0)
{
obj* x_394; obj* x_395; 
lean::dec(x_0);
x_394 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_79, x_392);
x_395 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_75, x_394);
return x_395;
}
else
{
obj* x_396; unsigned char x_398; 
x_396 = lean::cnstr_get(x_392, 0);
lean::inc(x_396);
x_398 = lean::cnstr_get_scalar<unsigned char>(x_392, sizeof(void*)*1);
x_159 = x_392;
x_160 = x_396;
x_161 = x_398;
goto lbl_162;
}
}
}
lbl_170:
{
obj* x_399; 
x_399 = l_lean_ir_parse__usize(x_168);
if (lean::obj_tag(x_399) == 0)
{
obj* x_400; obj* x_402; obj* x_404; obj* x_406; obj* x_407; obj* x_408; obj* x_410; obj* x_411; obj* x_412; 
x_400 = lean::cnstr_get(x_399, 0);
lean::inc(x_400);
x_402 = lean::cnstr_get(x_399, 1);
lean::inc(x_402);
x_404 = lean::cnstr_get(x_399, 2);
lean::inc(x_404);
if (lean::is_shared(x_399)) {
 lean::dec(x_399);
 x_406 = lean::box(0);
} else {
 lean::cnstr_release(x_399, 0);
 lean::cnstr_release(x_399, 1);
 lean::cnstr_release(x_399, 2);
 x_406 = x_399;
}
x_407 = lean::apply_1(x_167, x_400);
x_408 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_408);
if (lean::is_scalar(x_406)) {
 x_410 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_410 = x_406;
}
lean::cnstr_set(x_410, 0, x_407);
lean::cnstr_set(x_410, 1, x_402);
lean::cnstr_set(x_410, 2, x_408);
x_411 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_404, x_410);
x_412 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_169, x_411);
if (lean::obj_tag(x_412) == 0)
{
obj* x_413; obj* x_415; obj* x_417; 
x_413 = lean::cnstr_get(x_412, 0);
lean::inc(x_413);
x_415 = lean::cnstr_get(x_412, 1);
lean::inc(x_415);
x_417 = lean::cnstr_get(x_412, 2);
lean::inc(x_417);
lean::dec(x_412);
x_163 = x_413;
x_164 = x_415;
x_165 = x_417;
goto lbl_166;
}
else
{
obj* x_420; unsigned char x_422; obj* x_423; obj* x_425; obj* x_426; 
x_420 = lean::cnstr_get(x_412, 0);
lean::inc(x_420);
x_422 = lean::cnstr_get_scalar<unsigned char>(x_412, sizeof(void*)*1);
if (lean::is_shared(x_412)) {
 lean::dec(x_412);
 x_423 = lean::box(0);
} else {
 lean::cnstr_release(x_412, 0);
 x_423 = x_412;
}
lean::inc(x_420);
if (lean::is_scalar(x_423)) {
 x_425 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_425 = x_423;
}
lean::cnstr_set(x_425, 0, x_420);
lean::cnstr_set_scalar(x_425, sizeof(void*)*1, x_422);
x_426 = x_425;
x_159 = x_426;
x_160 = x_420;
x_161 = x_422;
goto lbl_162;
}
}
else
{
obj* x_428; unsigned char x_430; obj* x_431; obj* x_432; obj* x_433; obj* x_434; 
lean::dec(x_167);
x_428 = lean::cnstr_get(x_399, 0);
lean::inc(x_428);
x_430 = lean::cnstr_get_scalar<unsigned char>(x_399, sizeof(void*)*1);
if (lean::is_shared(x_399)) {
 lean::dec(x_399);
 x_431 = lean::box(0);
} else {
 lean::cnstr_release(x_399, 0);
 x_431 = x_399;
}
if (lean::is_scalar(x_431)) {
 x_432 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_432 = x_431;
}
lean::cnstr_set(x_432, 0, x_428);
lean::cnstr_set_scalar(x_432, sizeof(void*)*1, x_430);
x_433 = x_432;
x_434 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_169, x_433);
if (lean::obj_tag(x_434) == 0)
{
obj* x_435; obj* x_437; obj* x_439; 
x_435 = lean::cnstr_get(x_434, 0);
lean::inc(x_435);
x_437 = lean::cnstr_get(x_434, 1);
lean::inc(x_437);
x_439 = lean::cnstr_get(x_434, 2);
lean::inc(x_439);
lean::dec(x_434);
x_163 = x_435;
x_164 = x_437;
x_165 = x_439;
goto lbl_166;
}
else
{
obj* x_442; unsigned char x_444; obj* x_445; obj* x_447; obj* x_448; 
x_442 = lean::cnstr_get(x_434, 0);
lean::inc(x_442);
x_444 = lean::cnstr_get_scalar<unsigned char>(x_434, sizeof(void*)*1);
if (lean::is_shared(x_434)) {
 lean::dec(x_434);
 x_445 = lean::box(0);
} else {
 lean::cnstr_release(x_434, 0);
 x_445 = x_434;
}
lean::inc(x_442);
if (lean::is_scalar(x_445)) {
 x_447 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_447 = x_445;
}
lean::cnstr_set(x_447, 0, x_442);
lean::cnstr_set_scalar(x_447, sizeof(void*)*1, x_444);
x_448 = x_447;
x_159 = x_448;
x_160 = x_442;
x_161 = x_444;
goto lbl_162;
}
}
}
}
lbl_85:
{
obj* x_449; 
x_449 = l_lean_ir_parse__var(x_83);
if (lean::obj_tag(x_449) == 0)
{
obj* x_450; obj* x_452; obj* x_454; obj* x_456; obj* x_457; obj* x_458; obj* x_460; obj* x_461; obj* x_462; 
x_450 = lean::cnstr_get(x_449, 0);
lean::inc(x_450);
x_452 = lean::cnstr_get(x_449, 1);
lean::inc(x_452);
x_454 = lean::cnstr_get(x_449, 2);
lean::inc(x_454);
if (lean::is_shared(x_449)) {
 lean::dec(x_449);
 x_456 = lean::box(0);
} else {
 lean::cnstr_release(x_449, 0);
 lean::cnstr_release(x_449, 1);
 lean::cnstr_release(x_449, 2);
 x_456 = x_449;
}
x_457 = lean::apply_1(x_82, x_450);
x_458 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_458);
if (lean::is_scalar(x_456)) {
 x_460 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_460 = x_456;
}
lean::cnstr_set(x_460, 0, x_457);
lean::cnstr_set(x_460, 1, x_452);
lean::cnstr_set(x_460, 2, x_458);
x_461 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_454, x_460);
x_462 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_84, x_461);
if (lean::obj_tag(x_462) == 0)
{
obj* x_464; 
lean::dec(x_0);
x_464 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_75, x_462);
return x_464;
}
else
{
obj* x_465; unsigned char x_467; 
x_465 = lean::cnstr_get(x_462, 0);
lean::inc(x_465);
x_467 = lean::cnstr_get_scalar<unsigned char>(x_462, sizeof(void*)*1);
x_78 = x_462;
x_79 = x_465;
x_80 = x_467;
goto lbl_81;
}
}
else
{
obj* x_469; unsigned char x_471; obj* x_472; obj* x_473; obj* x_474; obj* x_475; 
lean::dec(x_82);
x_469 = lean::cnstr_get(x_449, 0);
lean::inc(x_469);
x_471 = lean::cnstr_get_scalar<unsigned char>(x_449, sizeof(void*)*1);
if (lean::is_shared(x_449)) {
 lean::dec(x_449);
 x_472 = lean::box(0);
} else {
 lean::cnstr_release(x_449, 0);
 x_472 = x_449;
}
if (lean::is_scalar(x_472)) {
 x_473 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_473 = x_472;
}
lean::cnstr_set(x_473, 0, x_469);
lean::cnstr_set_scalar(x_473, sizeof(void*)*1, x_471);
x_474 = x_473;
x_475 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_84, x_474);
if (lean::obj_tag(x_475) == 0)
{
obj* x_477; 
lean::dec(x_0);
x_477 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_75, x_475);
return x_477;
}
else
{
obj* x_478; unsigned char x_480; 
x_478 = lean::cnstr_get(x_475, 0);
lean::inc(x_478);
x_480 = lean::cnstr_get_scalar<unsigned char>(x_475, sizeof(void*)*1);
x_78 = x_475;
x_79 = x_478;
x_80 = x_480;
goto lbl_81;
}
}
}
lbl_89:
{
obj* x_481; 
x_481 = l_lean_ir_parse__uint16(x_87);
if (lean::obj_tag(x_481) == 0)
{
obj* x_482; obj* x_484; obj* x_486; obj* x_488; obj* x_489; obj* x_490; obj* x_492; obj* x_493; obj* x_494; 
x_482 = lean::cnstr_get(x_481, 0);
lean::inc(x_482);
x_484 = lean::cnstr_get(x_481, 1);
lean::inc(x_484);
x_486 = lean::cnstr_get(x_481, 2);
lean::inc(x_486);
if (lean::is_shared(x_481)) {
 lean::dec(x_481);
 x_488 = lean::box(0);
} else {
 lean::cnstr_release(x_481, 0);
 lean::cnstr_release(x_481, 1);
 lean::cnstr_release(x_481, 2);
 x_488 = x_481;
}
x_489 = lean::apply_1(x_86, x_482);
x_490 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_490);
if (lean::is_scalar(x_488)) {
 x_492 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_492 = x_488;
}
lean::cnstr_set(x_492, 0, x_489);
lean::cnstr_set(x_492, 1, x_484);
lean::cnstr_set(x_492, 2, x_490);
x_493 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_486, x_492);
x_494 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_88, x_493);
if (lean::obj_tag(x_494) == 0)
{
obj* x_495; obj* x_497; obj* x_499; 
x_495 = lean::cnstr_get(x_494, 0);
lean::inc(x_495);
x_497 = lean::cnstr_get(x_494, 1);
lean::inc(x_497);
x_499 = lean::cnstr_get(x_494, 2);
lean::inc(x_499);
lean::dec(x_494);
x_82 = x_495;
x_83 = x_497;
x_84 = x_499;
goto lbl_85;
}
else
{
obj* x_502; unsigned char x_504; obj* x_505; obj* x_507; obj* x_508; 
x_502 = lean::cnstr_get(x_494, 0);
lean::inc(x_502);
x_504 = lean::cnstr_get_scalar<unsigned char>(x_494, sizeof(void*)*1);
if (lean::is_shared(x_494)) {
 lean::dec(x_494);
 x_505 = lean::box(0);
} else {
 lean::cnstr_release(x_494, 0);
 x_505 = x_494;
}
lean::inc(x_502);
if (lean::is_scalar(x_505)) {
 x_507 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_507 = x_505;
}
lean::cnstr_set(x_507, 0, x_502);
lean::cnstr_set_scalar(x_507, sizeof(void*)*1, x_504);
x_508 = x_507;
x_78 = x_508;
x_79 = x_502;
x_80 = x_504;
goto lbl_81;
}
}
else
{
obj* x_510; unsigned char x_512; obj* x_513; obj* x_514; obj* x_515; obj* x_516; 
lean::dec(x_86);
x_510 = lean::cnstr_get(x_481, 0);
lean::inc(x_510);
x_512 = lean::cnstr_get_scalar<unsigned char>(x_481, sizeof(void*)*1);
if (lean::is_shared(x_481)) {
 lean::dec(x_481);
 x_513 = lean::box(0);
} else {
 lean::cnstr_release(x_481, 0);
 x_513 = x_481;
}
if (lean::is_scalar(x_513)) {
 x_514 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_514 = x_513;
}
lean::cnstr_set(x_514, 0, x_510);
lean::cnstr_set_scalar(x_514, sizeof(void*)*1, x_512);
x_515 = x_514;
x_516 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_88, x_515);
if (lean::obj_tag(x_516) == 0)
{
obj* x_517; obj* x_519; obj* x_521; 
x_517 = lean::cnstr_get(x_516, 0);
lean::inc(x_517);
x_519 = lean::cnstr_get(x_516, 1);
lean::inc(x_519);
x_521 = lean::cnstr_get(x_516, 2);
lean::inc(x_521);
lean::dec(x_516);
x_82 = x_517;
x_83 = x_519;
x_84 = x_521;
goto lbl_85;
}
else
{
obj* x_524; unsigned char x_526; obj* x_527; obj* x_529; obj* x_530; 
x_524 = lean::cnstr_get(x_516, 0);
lean::inc(x_524);
x_526 = lean::cnstr_get_scalar<unsigned char>(x_516, sizeof(void*)*1);
if (lean::is_shared(x_516)) {
 lean::dec(x_516);
 x_527 = lean::box(0);
} else {
 lean::cnstr_release(x_516, 0);
 x_527 = x_516;
}
lean::inc(x_524);
if (lean::is_scalar(x_527)) {
 x_529 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_529 = x_527;
}
lean::cnstr_set(x_529, 0, x_524);
lean::cnstr_set_scalar(x_529, sizeof(void*)*1, x_526);
x_530 = x_529;
x_78 = x_530;
x_79 = x_524;
x_80 = x_526;
goto lbl_81;
}
}
}
}
}
lbl_6:
{
obj* x_531; 
x_531 = l_lean_ir_parse__var(x_4);
if (lean::obj_tag(x_531) == 0)
{
obj* x_532; obj* x_534; obj* x_536; obj* x_538; obj* x_539; obj* x_540; obj* x_542; obj* x_543; obj* x_544; 
x_532 = lean::cnstr_get(x_531, 0);
lean::inc(x_532);
x_534 = lean::cnstr_get(x_531, 1);
lean::inc(x_534);
x_536 = lean::cnstr_get(x_531, 2);
lean::inc(x_536);
if (lean::is_shared(x_531)) {
 lean::dec(x_531);
 x_538 = lean::box(0);
} else {
 lean::cnstr_release(x_531, 0);
 lean::cnstr_release(x_531, 1);
 lean::cnstr_release(x_531, 2);
 x_538 = x_531;
}
x_539 = lean::apply_1(x_3, x_532);
x_540 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_540);
if (lean::is_scalar(x_538)) {
 x_542 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_542 = x_538;
}
lean::cnstr_set(x_542, 0, x_539);
lean::cnstr_set(x_542, 1, x_534);
lean::cnstr_set(x_542, 2, x_540);
x_543 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_536, x_542);
x_544 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_5, x_543);
x_1 = x_544;
goto lbl_2;
}
else
{
obj* x_546; unsigned char x_548; obj* x_549; obj* x_550; obj* x_551; obj* x_552; 
lean::dec(x_3);
x_546 = lean::cnstr_get(x_531, 0);
lean::inc(x_546);
x_548 = lean::cnstr_get_scalar<unsigned char>(x_531, sizeof(void*)*1);
if (lean::is_shared(x_531)) {
 lean::dec(x_531);
 x_549 = lean::box(0);
} else {
 lean::cnstr_release(x_531, 0);
 x_549 = x_531;
}
if (lean::is_scalar(x_549)) {
 x_550 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_550 = x_549;
}
lean::cnstr_set(x_550, 0, x_546);
lean::cnstr_set_scalar(x_550, sizeof(void*)*1, x_548);
x_551 = x_550;
x_552 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_5, x_551);
x_1 = x_552;
goto lbl_2;
}
}
lbl_10:
{
obj* x_553; 
x_553 = l_lean_ir_parse__var(x_8);
if (lean::obj_tag(x_553) == 0)
{
obj* x_554; obj* x_556; obj* x_558; obj* x_560; obj* x_561; obj* x_562; obj* x_564; obj* x_565; obj* x_566; 
x_554 = lean::cnstr_get(x_553, 0);
lean::inc(x_554);
x_556 = lean::cnstr_get(x_553, 1);
lean::inc(x_556);
x_558 = lean::cnstr_get(x_553, 2);
lean::inc(x_558);
if (lean::is_shared(x_553)) {
 lean::dec(x_553);
 x_560 = lean::box(0);
} else {
 lean::cnstr_release(x_553, 0);
 lean::cnstr_release(x_553, 1);
 lean::cnstr_release(x_553, 2);
 x_560 = x_553;
}
x_561 = lean::apply_1(x_7, x_554);
x_562 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_562);
if (lean::is_scalar(x_560)) {
 x_564 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_564 = x_560;
}
lean::cnstr_set(x_564, 0, x_561);
lean::cnstr_set(x_564, 1, x_556);
lean::cnstr_set(x_564, 2, x_562);
x_565 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_558, x_564);
x_566 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_9, x_565);
if (lean::obj_tag(x_566) == 0)
{
obj* x_567; obj* x_569; obj* x_571; 
x_567 = lean::cnstr_get(x_566, 0);
lean::inc(x_567);
x_569 = lean::cnstr_get(x_566, 1);
lean::inc(x_569);
x_571 = lean::cnstr_get(x_566, 2);
lean::inc(x_571);
lean::dec(x_566);
x_3 = x_567;
x_4 = x_569;
x_5 = x_571;
goto lbl_6;
}
else
{
obj* x_574; unsigned char x_576; obj* x_577; obj* x_578; obj* x_579; 
x_574 = lean::cnstr_get(x_566, 0);
lean::inc(x_574);
x_576 = lean::cnstr_get_scalar<unsigned char>(x_566, sizeof(void*)*1);
if (lean::is_shared(x_566)) {
 lean::dec(x_566);
 x_577 = lean::box(0);
} else {
 lean::cnstr_release(x_566, 0);
 x_577 = x_566;
}
if (lean::is_scalar(x_577)) {
 x_578 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_578 = x_577;
}
lean::cnstr_set(x_578, 0, x_574);
lean::cnstr_set_scalar(x_578, sizeof(void*)*1, x_576);
x_579 = x_578;
x_1 = x_579;
goto lbl_2;
}
}
else
{
obj* x_581; unsigned char x_583; obj* x_584; obj* x_585; obj* x_586; obj* x_587; 
lean::dec(x_7);
x_581 = lean::cnstr_get(x_553, 0);
lean::inc(x_581);
x_583 = lean::cnstr_get_scalar<unsigned char>(x_553, sizeof(void*)*1);
if (lean::is_shared(x_553)) {
 lean::dec(x_553);
 x_584 = lean::box(0);
} else {
 lean::cnstr_release(x_553, 0);
 x_584 = x_553;
}
if (lean::is_scalar(x_584)) {
 x_585 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_585 = x_584;
}
lean::cnstr_set(x_585, 0, x_581);
lean::cnstr_set_scalar(x_585, sizeof(void*)*1, x_583);
x_586 = x_585;
x_587 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_9, x_586);
if (lean::obj_tag(x_587) == 0)
{
obj* x_588; obj* x_590; obj* x_592; 
x_588 = lean::cnstr_get(x_587, 0);
lean::inc(x_588);
x_590 = lean::cnstr_get(x_587, 1);
lean::inc(x_590);
x_592 = lean::cnstr_get(x_587, 2);
lean::inc(x_592);
lean::dec(x_587);
x_3 = x_588;
x_4 = x_590;
x_5 = x_592;
goto lbl_6;
}
else
{
obj* x_595; unsigned char x_597; obj* x_598; obj* x_599; obj* x_600; 
x_595 = lean::cnstr_get(x_587, 0);
lean::inc(x_595);
x_597 = lean::cnstr_get_scalar<unsigned char>(x_587, sizeof(void*)*1);
if (lean::is_shared(x_587)) {
 lean::dec(x_587);
 x_598 = lean::box(0);
} else {
 lean::cnstr_release(x_587, 0);
 x_598 = x_587;
}
if (lean::is_scalar(x_598)) {
 x_599 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_599 = x_598;
}
lean::cnstr_set(x_599, 0, x_595);
lean::cnstr_set_scalar(x_599, sizeof(void*)*1, x_597);
x_600 = x_599;
x_1 = x_600;
goto lbl_2;
}
}
}
}
}
obj* _init_l_lean_ir_parse__instr___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("sset");
return x_0;
}
}
obj* _init_l_lean_ir_parse__instr___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("set");
return x_0;
}
}
obj* _init_l_lean_ir_parse__instr___closed__3() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("array_write");
return x_0;
}
}
obj* l_lean_ir_parse__instr___lambda__1(unsigned char x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::alloc_cnstr(4, 1, 1);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set_scalar(x_2, sizeof(void*)*1, x_0);
x_3 = x_2;
return x_3;
}
}
obj* l_lean_ir_parse__instr___lambda__2(obj* x_0, size_t x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::alloc_cnstr(9, 2, sizeof(size_t)*1);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
lean::cnstr_set_scalar(x_3, sizeof(void*)*2, x_1);
x_4 = x_3;
return x_4;
}
}
obj* l_lean_ir_parse__instr___lambda__3(obj* x_0, unsigned short x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::alloc_cnstr(7, 2, 2);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
lean::cnstr_set_scalar(x_3, sizeof(void*)*2, x_1);
x_4 = x_3;
return x_4;
}
}
obj* l_lean_ir_parse__instr___lambda__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_cnstr(15, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
lean::cnstr_set(x_3, 2, x_2);
return x_3;
}
}
obj* l_lean_ir_parse__instr___lambda__1___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned char x_2; obj* x_3; 
x_2 = lean::unbox(x_0);
x_3 = l_lean_ir_parse__instr___lambda__1(x_2, x_1);
return x_3;
}
}
obj* l_lean_ir_parse__instr___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
size_t x_3; obj* x_4; 
x_3 = lean::unbox_size_t(x_1);
x_4 = l_lean_ir_parse__instr___lambda__2(x_0, x_3, x_2);
return x_4;
}
}
obj* l_lean_ir_parse__instr___lambda__3___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
unsigned short x_3; obj* x_4; 
x_3 = lean::unbox(x_1);
x_4 = l_lean_ir_parse__instr___lambda__3(x_0, x_3, x_2);
return x_4;
}
}
obj* l_lean_ir_parse__phi(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; 
x_5 = l_lean_ir_parse__var(x_0);
if (lean::obj_tag(x_5) == 0)
{
obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_15; 
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_5, 2);
lean::inc(x_10);
if (lean::is_shared(x_5)) {
 lean::dec(x_5);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 lean::cnstr_release(x_5, 2);
 x_12 = x_5;
}
x_13 = l_lean_ir_parse__typed__assignment___closed__1;
lean::inc(x_13);
x_15 = l_lean_ir_symbol(x_13, x_8);
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_18; obj* x_21; obj* x_22; obj* x_25; 
x_16 = lean::cnstr_get(x_15, 1);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_15, 2);
lean::inc(x_18);
lean::dec(x_15);
x_21 = l_lean_ir_parse__typed__assignment___closed__2;
x_22 = l_lean_ir_str2type;
lean::inc(x_22);
lean::inc(x_21);
x_25 = l_lean_ir_parse__key2val___main___rarg(x_21, x_22, x_16);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; obj* x_28; obj* x_30; obj* x_33; obj* x_35; 
x_26 = lean::cnstr_get(x_25, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_25, 1);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_25, 2);
lean::inc(x_30);
lean::dec(x_25);
x_33 = l_lean_ir_parse__typed__assignment___closed__3;
lean::inc(x_33);
x_35 = l_lean_ir_symbol(x_33, x_28);
if (lean::obj_tag(x_35) == 0)
{
obj* x_36; obj* x_38; obj* x_41; obj* x_43; 
x_36 = lean::cnstr_get(x_35, 1);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_35, 2);
lean::inc(x_38);
lean::dec(x_35);
x_41 = l_lean_ir_parse__phi___closed__1;
lean::inc(x_41);
x_43 = l_lean_ir_keyword(x_41, x_36);
if (lean::obj_tag(x_43) == 0)
{
obj* x_44; obj* x_46; obj* x_49; obj* x_50; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; 
x_44 = lean::cnstr_get(x_43, 1);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_43, 2);
lean::inc(x_46);
lean::dec(x_43);
x_49 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_49, 0, x_6);
lean::cnstr_set(x_49, 1, x_26);
x_50 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_50);
if (lean::is_scalar(x_12)) {
 x_52 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_52 = x_12;
}
lean::cnstr_set(x_52, 0, x_49);
lean::cnstr_set(x_52, 1, x_44);
lean::cnstr_set(x_52, 2, x_50);
x_53 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_46, x_52);
x_54 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_38, x_53);
x_55 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_30, x_54);
x_56 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_55);
x_57 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_10, x_56);
x_58 = l_lean_parser_parsec__t_try__mk__res___rarg(x_57);
if (lean::obj_tag(x_58) == 0)
{
obj* x_59; obj* x_61; obj* x_63; 
x_59 = lean::cnstr_get(x_58, 0);
lean::inc(x_59);
x_61 = lean::cnstr_get(x_58, 1);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_58, 2);
lean::inc(x_63);
lean::dec(x_58);
x_1 = x_59;
x_2 = x_61;
x_3 = x_63;
goto lbl_4;
}
else
{
obj* x_66; unsigned char x_68; obj* x_69; obj* x_70; obj* x_71; 
x_66 = lean::cnstr_get(x_58, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get_scalar<unsigned char>(x_58, sizeof(void*)*1);
if (lean::is_shared(x_58)) {
 lean::dec(x_58);
 x_69 = lean::box(0);
} else {
 lean::cnstr_release(x_58, 0);
 x_69 = x_58;
}
if (lean::is_scalar(x_69)) {
 x_70 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_70 = x_69;
}
lean::cnstr_set(x_70, 0, x_66);
lean::cnstr_set_scalar(x_70, sizeof(void*)*1, x_68);
x_71 = x_70;
return x_71;
}
}
else
{
obj* x_75; unsigned char x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; 
lean::dec(x_12);
lean::dec(x_6);
lean::dec(x_26);
x_75 = lean::cnstr_get(x_43, 0);
lean::inc(x_75);
x_77 = lean::cnstr_get_scalar<unsigned char>(x_43, sizeof(void*)*1);
if (lean::is_shared(x_43)) {
 lean::dec(x_43);
 x_78 = lean::box(0);
} else {
 lean::cnstr_release(x_43, 0);
 x_78 = x_43;
}
if (lean::is_scalar(x_78)) {
 x_79 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_79 = x_78;
}
lean::cnstr_set(x_79, 0, x_75);
lean::cnstr_set_scalar(x_79, sizeof(void*)*1, x_77);
x_80 = x_79;
x_81 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_38, x_80);
x_82 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_30, x_81);
x_83 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_82);
x_84 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_10, x_83);
x_85 = l_lean_parser_parsec__t_try__mk__res___rarg(x_84);
if (lean::obj_tag(x_85) == 0)
{
obj* x_86; obj* x_88; obj* x_90; 
x_86 = lean::cnstr_get(x_85, 0);
lean::inc(x_86);
x_88 = lean::cnstr_get(x_85, 1);
lean::inc(x_88);
x_90 = lean::cnstr_get(x_85, 2);
lean::inc(x_90);
lean::dec(x_85);
x_1 = x_86;
x_2 = x_88;
x_3 = x_90;
goto lbl_4;
}
else
{
obj* x_93; unsigned char x_95; obj* x_96; obj* x_97; obj* x_98; 
x_93 = lean::cnstr_get(x_85, 0);
lean::inc(x_93);
x_95 = lean::cnstr_get_scalar<unsigned char>(x_85, sizeof(void*)*1);
if (lean::is_shared(x_85)) {
 lean::dec(x_85);
 x_96 = lean::box(0);
} else {
 lean::cnstr_release(x_85, 0);
 x_96 = x_85;
}
if (lean::is_scalar(x_96)) {
 x_97 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_97 = x_96;
}
lean::cnstr_set(x_97, 0, x_93);
lean::cnstr_set_scalar(x_97, sizeof(void*)*1, x_95);
x_98 = x_97;
return x_98;
}
}
}
else
{
obj* x_102; unsigned char x_104; obj* x_105; obj* x_106; obj* x_107; obj* x_108; obj* x_109; obj* x_110; obj* x_111; 
lean::dec(x_12);
lean::dec(x_6);
lean::dec(x_26);
x_102 = lean::cnstr_get(x_35, 0);
lean::inc(x_102);
x_104 = lean::cnstr_get_scalar<unsigned char>(x_35, sizeof(void*)*1);
if (lean::is_shared(x_35)) {
 lean::dec(x_35);
 x_105 = lean::box(0);
} else {
 lean::cnstr_release(x_35, 0);
 x_105 = x_35;
}
if (lean::is_scalar(x_105)) {
 x_106 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_106 = x_105;
}
lean::cnstr_set(x_106, 0, x_102);
lean::cnstr_set_scalar(x_106, sizeof(void*)*1, x_104);
x_107 = x_106;
x_108 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_30, x_107);
x_109 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_108);
x_110 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_10, x_109);
x_111 = l_lean_parser_parsec__t_try__mk__res___rarg(x_110);
if (lean::obj_tag(x_111) == 0)
{
obj* x_112; obj* x_114; obj* x_116; 
x_112 = lean::cnstr_get(x_111, 0);
lean::inc(x_112);
x_114 = lean::cnstr_get(x_111, 1);
lean::inc(x_114);
x_116 = lean::cnstr_get(x_111, 2);
lean::inc(x_116);
lean::dec(x_111);
x_1 = x_112;
x_2 = x_114;
x_3 = x_116;
goto lbl_4;
}
else
{
obj* x_119; unsigned char x_121; obj* x_122; obj* x_123; obj* x_124; 
x_119 = lean::cnstr_get(x_111, 0);
lean::inc(x_119);
x_121 = lean::cnstr_get_scalar<unsigned char>(x_111, sizeof(void*)*1);
if (lean::is_shared(x_111)) {
 lean::dec(x_111);
 x_122 = lean::box(0);
} else {
 lean::cnstr_release(x_111, 0);
 x_122 = x_111;
}
if (lean::is_scalar(x_122)) {
 x_123 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_123 = x_122;
}
lean::cnstr_set(x_123, 0, x_119);
lean::cnstr_set_scalar(x_123, sizeof(void*)*1, x_121);
x_124 = x_123;
return x_124;
}
}
}
else
{
obj* x_127; unsigned char x_129; obj* x_130; obj* x_131; obj* x_132; obj* x_133; obj* x_134; obj* x_135; 
lean::dec(x_12);
lean::dec(x_6);
x_127 = lean::cnstr_get(x_25, 0);
lean::inc(x_127);
x_129 = lean::cnstr_get_scalar<unsigned char>(x_25, sizeof(void*)*1);
if (lean::is_shared(x_25)) {
 lean::dec(x_25);
 x_130 = lean::box(0);
} else {
 lean::cnstr_release(x_25, 0);
 x_130 = x_25;
}
if (lean::is_scalar(x_130)) {
 x_131 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_131 = x_130;
}
lean::cnstr_set(x_131, 0, x_127);
lean::cnstr_set_scalar(x_131, sizeof(void*)*1, x_129);
x_132 = x_131;
x_133 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_132);
x_134 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_10, x_133);
x_135 = l_lean_parser_parsec__t_try__mk__res___rarg(x_134);
if (lean::obj_tag(x_135) == 0)
{
obj* x_136; obj* x_138; obj* x_140; 
x_136 = lean::cnstr_get(x_135, 0);
lean::inc(x_136);
x_138 = lean::cnstr_get(x_135, 1);
lean::inc(x_138);
x_140 = lean::cnstr_get(x_135, 2);
lean::inc(x_140);
lean::dec(x_135);
x_1 = x_136;
x_2 = x_138;
x_3 = x_140;
goto lbl_4;
}
else
{
obj* x_143; unsigned char x_145; obj* x_146; obj* x_147; obj* x_148; 
x_143 = lean::cnstr_get(x_135, 0);
lean::inc(x_143);
x_145 = lean::cnstr_get_scalar<unsigned char>(x_135, sizeof(void*)*1);
if (lean::is_shared(x_135)) {
 lean::dec(x_135);
 x_146 = lean::box(0);
} else {
 lean::cnstr_release(x_135, 0);
 x_146 = x_135;
}
if (lean::is_scalar(x_146)) {
 x_147 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_147 = x_146;
}
lean::cnstr_set(x_147, 0, x_143);
lean::cnstr_set_scalar(x_147, sizeof(void*)*1, x_145);
x_148 = x_147;
return x_148;
}
}
}
else
{
obj* x_151; unsigned char x_153; obj* x_154; obj* x_155; obj* x_156; obj* x_157; obj* x_158; 
lean::dec(x_12);
lean::dec(x_6);
x_151 = lean::cnstr_get(x_15, 0);
lean::inc(x_151);
x_153 = lean::cnstr_get_scalar<unsigned char>(x_15, sizeof(void*)*1);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_154 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 x_154 = x_15;
}
if (lean::is_scalar(x_154)) {
 x_155 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_155 = x_154;
}
lean::cnstr_set(x_155, 0, x_151);
lean::cnstr_set_scalar(x_155, sizeof(void*)*1, x_153);
x_156 = x_155;
x_157 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_10, x_156);
x_158 = l_lean_parser_parsec__t_try__mk__res___rarg(x_157);
if (lean::obj_tag(x_158) == 0)
{
obj* x_159; obj* x_161; obj* x_163; 
x_159 = lean::cnstr_get(x_158, 0);
lean::inc(x_159);
x_161 = lean::cnstr_get(x_158, 1);
lean::inc(x_161);
x_163 = lean::cnstr_get(x_158, 2);
lean::inc(x_163);
lean::dec(x_158);
x_1 = x_159;
x_2 = x_161;
x_3 = x_163;
goto lbl_4;
}
else
{
obj* x_166; unsigned char x_168; obj* x_169; obj* x_170; obj* x_171; 
x_166 = lean::cnstr_get(x_158, 0);
lean::inc(x_166);
x_168 = lean::cnstr_get_scalar<unsigned char>(x_158, sizeof(void*)*1);
if (lean::is_shared(x_158)) {
 lean::dec(x_158);
 x_169 = lean::box(0);
} else {
 lean::cnstr_release(x_158, 0);
 x_169 = x_158;
}
if (lean::is_scalar(x_169)) {
 x_170 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_170 = x_169;
}
lean::cnstr_set(x_170, 0, x_166);
lean::cnstr_set_scalar(x_170, sizeof(void*)*1, x_168);
x_171 = x_170;
return x_171;
}
}
}
else
{
obj* x_172; obj* x_174; unsigned char x_175; obj* x_176; obj* x_177; 
x_172 = lean::cnstr_get(x_5, 0);
lean::inc(x_172);
if (lean::is_shared(x_5)) {
 lean::dec(x_5);
 x_174 = lean::box(0);
} else {
 lean::cnstr_release(x_5, 0);
 x_174 = x_5;
}
x_175 = 0;
if (lean::is_scalar(x_174)) {
 x_176 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_176 = x_174;
}
lean::cnstr_set(x_176, 0, x_172);
lean::cnstr_set_scalar(x_176, sizeof(void*)*1, x_175);
x_177 = x_176;
return x_177;
}
lbl_4:
{
obj* x_178; obj* x_180; obj* x_183; 
x_178 = lean::cnstr_get(x_1, 0);
lean::inc(x_178);
x_180 = lean::cnstr_get(x_1, 1);
lean::inc(x_180);
lean::dec(x_1);
x_183 = l_lean_parser_monad__parsec_many1___at_lean_ir_parse__phi___spec__1(x_2);
if (lean::obj_tag(x_183) == 0)
{
obj* x_184; obj* x_186; obj* x_188; obj* x_190; obj* x_191; unsigned char x_192; obj* x_194; obj* x_195; obj* x_197; obj* x_198; obj* x_199; 
x_184 = lean::cnstr_get(x_183, 0);
lean::inc(x_184);
x_186 = lean::cnstr_get(x_183, 1);
lean::inc(x_186);
x_188 = lean::cnstr_get(x_183, 2);
lean::inc(x_188);
if (lean::is_shared(x_183)) {
 lean::dec(x_183);
 x_190 = lean::box(0);
} else {
 lean::cnstr_release(x_183, 0);
 lean::cnstr_release(x_183, 1);
 lean::cnstr_release(x_183, 2);
 x_190 = x_183;
}
x_191 = lean::alloc_cnstr(0, 2, 1);
lean::cnstr_set(x_191, 0, x_178);
lean::cnstr_set(x_191, 1, x_184);
x_192 = lean::unbox(x_180);
lean::dec(x_180);
lean::cnstr_set_scalar(x_191, sizeof(void*)*2, x_192);
x_194 = x_191;
x_195 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_195);
if (lean::is_scalar(x_190)) {
 x_197 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_197 = x_190;
}
lean::cnstr_set(x_197, 0, x_194);
lean::cnstr_set(x_197, 1, x_186);
lean::cnstr_set(x_197, 2, x_195);
x_198 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_188, x_197);
x_199 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_198);
return x_199;
}
else
{
obj* x_202; unsigned char x_204; obj* x_205; obj* x_206; obj* x_207; obj* x_208; 
lean::dec(x_180);
lean::dec(x_178);
x_202 = lean::cnstr_get(x_183, 0);
lean::inc(x_202);
x_204 = lean::cnstr_get_scalar<unsigned char>(x_183, sizeof(void*)*1);
if (lean::is_shared(x_183)) {
 lean::dec(x_183);
 x_205 = lean::box(0);
} else {
 lean::cnstr_release(x_183, 0);
 x_205 = x_183;
}
if (lean::is_scalar(x_205)) {
 x_206 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_206 = x_205;
}
lean::cnstr_set(x_206, 0, x_202);
lean::cnstr_set_scalar(x_206, sizeof(void*)*1, x_204);
x_207 = x_206;
x_208 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_207);
return x_208;
}
}
}
}
obj* _init_l_lean_ir_parse__phi___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("phi");
return x_0;
}
}
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__phi___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::nat_dec_eq(x_0, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_6; 
lean::dec(x_3);
x_6 = l_lean_ir_parse__var(x_1);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_19; obj* x_20; 
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 2);
lean::inc(x_11);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_13 = x_6;
}
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
lean::inc(x_9);
x_19 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__phi___spec__2(x_15, x_9);
if (lean::obj_tag(x_19) == 0)
{
obj* x_23; 
lean::dec(x_9);
x_23 = lean::box(0);
x_20 = x_23;
goto lbl_21;
}
else
{
obj* x_24; unsigned char x_26; 
x_24 = lean::cnstr_get(x_19, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get_scalar<unsigned char>(x_19, sizeof(void*)*1);
if (x_26 == 0)
{
obj* x_29; obj* x_30; obj* x_33; obj* x_35; obj* x_36; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
lean::dec(x_13);
lean::dec(x_19);
x_29 = lean::box(0);
x_30 = lean::cnstr_get(x_24, 2);
lean::inc(x_30);
lean::dec(x_24);
x_33 = l_mjoin___rarg___closed__1;
lean::inc(x_33);
x_35 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_35, 0, x_30);
lean::closure_set(x_35, 1, x_33);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_7);
lean::cnstr_set(x_36, 1, x_29);
lean::inc(x_33);
x_38 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_38, 0, x_35);
lean::closure_set(x_38, 1, x_33);
x_39 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_39, 0, x_38);
x_40 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_40, 0, x_36);
lean::cnstr_set(x_40, 1, x_9);
lean::cnstr_set(x_40, 2, x_39);
x_41 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_40);
return x_41;
}
else
{
obj* x_44; 
lean::dec(x_9);
lean::dec(x_24);
x_44 = lean::box(0);
x_20 = x_44;
goto lbl_21;
}
}
lbl_21:
{
lean::dec(x_20);
if (lean::obj_tag(x_19) == 0)
{
obj* x_46; obj* x_48; obj* x_50; obj* x_53; obj* x_54; obj* x_56; obj* x_57; obj* x_58; 
x_46 = lean::cnstr_get(x_19, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_19, 1);
lean::inc(x_48);
x_50 = lean::cnstr_get(x_19, 2);
lean::inc(x_50);
lean::dec(x_19);
x_53 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_53, 0, x_7);
lean::cnstr_set(x_53, 1, x_46);
x_54 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_54);
if (lean::is_scalar(x_13)) {
 x_56 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_56 = x_13;
}
lean::cnstr_set(x_56, 0, x_53);
lean::cnstr_set(x_56, 1, x_48);
lean::cnstr_set(x_56, 2, x_54);
x_57 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_50, x_56);
x_58 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_57);
return x_58;
}
else
{
obj* x_61; unsigned char x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
lean::dec(x_13);
lean::dec(x_7);
x_61 = lean::cnstr_get(x_19, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get_scalar<unsigned char>(x_19, sizeof(void*)*1);
if (lean::is_shared(x_19)) {
 lean::dec(x_19);
 x_64 = lean::box(0);
} else {
 lean::cnstr_release(x_19, 0);
 x_64 = x_19;
}
if (lean::is_scalar(x_64)) {
 x_65 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_65 = x_64;
}
lean::cnstr_set(x_65, 0, x_61);
lean::cnstr_set_scalar(x_65, sizeof(void*)*1, x_63);
x_66 = x_65;
x_67 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_66);
return x_67;
}
}
}
else
{
obj* x_69; unsigned char x_71; obj* x_72; obj* x_73; obj* x_74; 
lean::dec(x_0);
x_69 = lean::cnstr_get(x_6, 0);
lean::inc(x_69);
x_71 = lean::cnstr_get_scalar<unsigned char>(x_6, sizeof(void*)*1);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_72 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 x_72 = x_6;
}
if (lean::is_scalar(x_72)) {
 x_73 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_73 = x_72;
}
lean::cnstr_set(x_73, 0, x_69);
lean::cnstr_set_scalar(x_73, sizeof(void*)*1, x_71);
x_74 = x_73;
return x_74;
}
}
else
{
obj* x_77; 
lean::dec(x_0);
lean::dec(x_3);
x_77 = l_lean_ir_parse__var(x_1);
if (lean::obj_tag(x_77) == 0)
{
obj* x_78; obj* x_80; obj* x_82; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_89; obj* x_90; 
x_78 = lean::cnstr_get(x_77, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_77, 1);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_77, 2);
lean::inc(x_82);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_84 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 lean::cnstr_release(x_77, 1);
 lean::cnstr_release(x_77, 2);
 x_84 = x_77;
}
x_85 = lean::box(0);
x_86 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_86, 0, x_78);
lean::cnstr_set(x_86, 1, x_85);
x_87 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_87);
if (lean::is_scalar(x_84)) {
 x_89 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_89 = x_84;
}
lean::cnstr_set(x_89, 0, x_86);
lean::cnstr_set(x_89, 1, x_80);
lean::cnstr_set(x_89, 2, x_87);
x_90 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_82, x_89);
return x_90;
}
else
{
obj* x_91; unsigned char x_93; obj* x_94; obj* x_95; obj* x_96; 
x_91 = lean::cnstr_get(x_77, 0);
lean::inc(x_91);
x_93 = lean::cnstr_get_scalar<unsigned char>(x_77, sizeof(void*)*1);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_94 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 x_94 = x_77;
}
if (lean::is_scalar(x_94)) {
 x_95 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_95 = x_94;
}
lean::cnstr_set(x_95, 0, x_91);
lean::cnstr_set_scalar(x_95, sizeof(void*)*1, x_93);
x_96 = x_95;
return x_96;
}
}
}
}
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__phi___spec__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; 
x_1 = lean::string_iterator_remaining(x_0);
x_2 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__phi___spec__2(x_1, x_0);
x_3 = l_lean_ir_keyword___closed__1;
lean::inc(x_3);
x_5 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_2);
return x_5;
}
}
obj* l_lean_ir_parse__terminator(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; 
x_3 = l_lean_ir_parse__terminator___closed__3;
lean::inc(x_0);
lean::inc(x_3);
x_6 = l_lean_ir_keyword(x_3, x_0);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; 
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 2);
lean::inc(x_9);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_11 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_11 = x_6;
}
x_12 = l_lean_ir_parse__blockid(x_7);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_15; obj* x_17; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; 
x_13 = lean::cnstr_get(x_12, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_12, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_12, 2);
lean::inc(x_17);
lean::dec(x_12);
x_20 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_20, 0, x_13);
x_21 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_21);
if (lean::is_scalar(x_11)) {
 x_23 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_23 = x_11;
}
lean::cnstr_set(x_23, 0, x_20);
lean::cnstr_set(x_23, 1, x_15);
lean::cnstr_set(x_23, 2, x_21);
x_24 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_23);
x_25 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_9, x_24);
x_1 = x_25;
goto lbl_2;
}
else
{
obj* x_27; unsigned char x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
lean::dec(x_11);
x_27 = lean::cnstr_get(x_12, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get_scalar<unsigned char>(x_12, sizeof(void*)*1);
if (lean::is_shared(x_12)) {
 lean::dec(x_12);
 x_30 = lean::box(0);
} else {
 lean::cnstr_release(x_12, 0);
 x_30 = x_12;
}
if (lean::is_scalar(x_30)) {
 x_31 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_31 = x_30;
}
lean::cnstr_set(x_31, 0, x_27);
lean::cnstr_set_scalar(x_31, sizeof(void*)*1, x_29);
x_32 = x_31;
x_33 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_9, x_32);
x_1 = x_33;
goto lbl_2;
}
}
else
{
obj* x_34; unsigned char x_36; obj* x_37; obj* x_38; obj* x_39; 
x_34 = lean::cnstr_get(x_6, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get_scalar<unsigned char>(x_6, sizeof(void*)*1);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_37 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 x_37 = x_6;
}
if (lean::is_scalar(x_37)) {
 x_38 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_38 = x_37;
}
lean::cnstr_set(x_38, 0, x_34);
lean::cnstr_set_scalar(x_38, sizeof(void*)*1, x_36);
x_39 = x_38;
x_1 = x_39;
goto lbl_2;
}
lbl_2:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
obj* x_41; unsigned char x_43; obj* x_44; obj* x_45; unsigned char x_46; 
x_41 = lean::cnstr_get(x_1, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get_scalar<unsigned char>(x_1, sizeof(void*)*1);
if (x_43 == 0)
{
obj* x_49; obj* x_52; 
lean::dec(x_1);
x_49 = l_lean_ir_parse__terminator___closed__2;
lean::inc(x_0);
lean::inc(x_49);
x_52 = l_lean_ir_keyword(x_49, x_0);
if (lean::obj_tag(x_52) == 0)
{
obj* x_53; obj* x_55; obj* x_57; obj* x_58; 
x_53 = lean::cnstr_get(x_52, 1);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_52, 2);
lean::inc(x_55);
if (lean::is_shared(x_52)) {
 lean::dec(x_52);
 x_57 = lean::box(0);
} else {
 lean::cnstr_release(x_52, 0);
 lean::cnstr_release(x_52, 1);
 lean::cnstr_release(x_52, 2);
 x_57 = x_52;
}
x_58 = l_lean_ir_parse__var(x_53);
if (lean::obj_tag(x_58) == 0)
{
obj* x_59; obj* x_61; obj* x_63; obj* x_66; obj* x_67; obj* x_69; obj* x_70; obj* x_71; 
x_59 = lean::cnstr_get(x_58, 0);
lean::inc(x_59);
x_61 = lean::cnstr_get(x_58, 1);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_58, 2);
lean::inc(x_63);
lean::dec(x_58);
x_66 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_66, 0, x_59);
x_67 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_67);
if (lean::is_scalar(x_57)) {
 x_69 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_69 = x_57;
}
lean::cnstr_set(x_69, 0, x_66);
lean::cnstr_set(x_69, 1, x_61);
lean::cnstr_set(x_69, 2, x_67);
x_70 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_63, x_69);
x_71 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_55, x_70);
if (lean::obj_tag(x_71) == 0)
{
obj* x_73; 
lean::dec(x_0);
x_73 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_41, x_71);
return x_73;
}
else
{
obj* x_74; unsigned char x_76; 
x_74 = lean::cnstr_get(x_71, 0);
lean::inc(x_74);
x_76 = lean::cnstr_get_scalar<unsigned char>(x_71, sizeof(void*)*1);
x_44 = x_71;
x_45 = x_74;
x_46 = x_76;
goto lbl_47;
}
}
else
{
obj* x_78; unsigned char x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; 
lean::dec(x_57);
x_78 = lean::cnstr_get(x_58, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get_scalar<unsigned char>(x_58, sizeof(void*)*1);
if (lean::is_shared(x_58)) {
 lean::dec(x_58);
 x_81 = lean::box(0);
} else {
 lean::cnstr_release(x_58, 0);
 x_81 = x_58;
}
if (lean::is_scalar(x_81)) {
 x_82 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_82 = x_81;
}
lean::cnstr_set(x_82, 0, x_78);
lean::cnstr_set_scalar(x_82, sizeof(void*)*1, x_80);
x_83 = x_82;
x_84 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_55, x_83);
if (lean::obj_tag(x_84) == 0)
{
obj* x_86; 
lean::dec(x_0);
x_86 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_41, x_84);
return x_86;
}
else
{
obj* x_87; unsigned char x_89; 
x_87 = lean::cnstr_get(x_84, 0);
lean::inc(x_87);
x_89 = lean::cnstr_get_scalar<unsigned char>(x_84, sizeof(void*)*1);
x_44 = x_84;
x_45 = x_87;
x_46 = x_89;
goto lbl_47;
}
}
}
else
{
obj* x_90; unsigned char x_92; obj* x_93; obj* x_95; obj* x_96; 
x_90 = lean::cnstr_get(x_52, 0);
lean::inc(x_90);
x_92 = lean::cnstr_get_scalar<unsigned char>(x_52, sizeof(void*)*1);
if (lean::is_shared(x_52)) {
 lean::dec(x_52);
 x_93 = lean::box(0);
} else {
 lean::cnstr_release(x_52, 0);
 x_93 = x_52;
}
lean::inc(x_90);
if (lean::is_scalar(x_93)) {
 x_95 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_95 = x_93;
}
lean::cnstr_set(x_95, 0, x_90);
lean::cnstr_set_scalar(x_95, sizeof(void*)*1, x_92);
x_96 = x_95;
x_44 = x_96;
x_45 = x_90;
x_46 = x_92;
goto lbl_47;
}
}
else
{
lean::dec(x_41);
lean::dec(x_0);
return x_1;
}
lbl_47:
{
obj* x_99; obj* x_100; obj* x_101; 
if (x_46 == 0)
{
obj* x_104; obj* x_106; 
lean::dec(x_44);
x_104 = l_lean_ir_parse__terminator___closed__1;
lean::inc(x_104);
x_106 = l_lean_ir_keyword(x_104, x_0);
if (lean::obj_tag(x_106) == 0)
{
obj* x_107; obj* x_109; obj* x_111; obj* x_112; 
x_107 = lean::cnstr_get(x_106, 1);
lean::inc(x_107);
x_109 = lean::cnstr_get(x_106, 2);
lean::inc(x_109);
if (lean::is_shared(x_106)) {
 lean::dec(x_106);
 x_111 = lean::box(0);
} else {
 lean::cnstr_release(x_106, 0);
 lean::cnstr_release(x_106, 1);
 lean::cnstr_release(x_106, 2);
 x_111 = x_106;
}
x_112 = l_lean_ir_parse__var(x_107);
if (lean::obj_tag(x_112) == 0)
{
obj* x_113; obj* x_115; obj* x_117; obj* x_120; obj* x_121; obj* x_123; obj* x_124; obj* x_125; 
x_113 = lean::cnstr_get(x_112, 0);
lean::inc(x_113);
x_115 = lean::cnstr_get(x_112, 1);
lean::inc(x_115);
x_117 = lean::cnstr_get(x_112, 2);
lean::inc(x_117);
lean::dec(x_112);
x_120 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_parse__terminator___lambda__1), 2, 1);
lean::closure_set(x_120, 0, x_113);
x_121 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_121);
if (lean::is_scalar(x_111)) {
 x_123 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_123 = x_111;
}
lean::cnstr_set(x_123, 0, x_120);
lean::cnstr_set(x_123, 1, x_115);
lean::cnstr_set(x_123, 2, x_121);
x_124 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_117, x_123);
x_125 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_109, x_124);
if (lean::obj_tag(x_125) == 0)
{
obj* x_126; obj* x_128; obj* x_130; 
x_126 = lean::cnstr_get(x_125, 0);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_125, 1);
lean::inc(x_128);
x_130 = lean::cnstr_get(x_125, 2);
lean::inc(x_130);
lean::dec(x_125);
x_99 = x_126;
x_100 = x_128;
x_101 = x_130;
goto lbl_102;
}
else
{
obj* x_133; unsigned char x_135; obj* x_136; obj* x_137; obj* x_138; obj* x_139; obj* x_140; 
x_133 = lean::cnstr_get(x_125, 0);
lean::inc(x_133);
x_135 = lean::cnstr_get_scalar<unsigned char>(x_125, sizeof(void*)*1);
if (lean::is_shared(x_125)) {
 lean::dec(x_125);
 x_136 = lean::box(0);
} else {
 lean::cnstr_release(x_125, 0);
 x_136 = x_125;
}
if (lean::is_scalar(x_136)) {
 x_137 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_137 = x_136;
}
lean::cnstr_set(x_137, 0, x_133);
lean::cnstr_set_scalar(x_137, sizeof(void*)*1, x_135);
x_138 = x_137;
x_139 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_45, x_138);
x_140 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_41, x_139);
return x_140;
}
}
else
{
obj* x_142; unsigned char x_144; obj* x_145; obj* x_146; obj* x_147; obj* x_148; 
lean::dec(x_111);
x_142 = lean::cnstr_get(x_112, 0);
lean::inc(x_142);
x_144 = lean::cnstr_get_scalar<unsigned char>(x_112, sizeof(void*)*1);
if (lean::is_shared(x_112)) {
 lean::dec(x_112);
 x_145 = lean::box(0);
} else {
 lean::cnstr_release(x_112, 0);
 x_145 = x_112;
}
if (lean::is_scalar(x_145)) {
 x_146 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_146 = x_145;
}
lean::cnstr_set(x_146, 0, x_142);
lean::cnstr_set_scalar(x_146, sizeof(void*)*1, x_144);
x_147 = x_146;
x_148 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_109, x_147);
if (lean::obj_tag(x_148) == 0)
{
obj* x_149; obj* x_151; obj* x_153; 
x_149 = lean::cnstr_get(x_148, 0);
lean::inc(x_149);
x_151 = lean::cnstr_get(x_148, 1);
lean::inc(x_151);
x_153 = lean::cnstr_get(x_148, 2);
lean::inc(x_153);
lean::dec(x_148);
x_99 = x_149;
x_100 = x_151;
x_101 = x_153;
goto lbl_102;
}
else
{
obj* x_156; unsigned char x_158; obj* x_159; obj* x_160; obj* x_161; obj* x_162; obj* x_163; 
x_156 = lean::cnstr_get(x_148, 0);
lean::inc(x_156);
x_158 = lean::cnstr_get_scalar<unsigned char>(x_148, sizeof(void*)*1);
if (lean::is_shared(x_148)) {
 lean::dec(x_148);
 x_159 = lean::box(0);
} else {
 lean::cnstr_release(x_148, 0);
 x_159 = x_148;
}
if (lean::is_scalar(x_159)) {
 x_160 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_160 = x_159;
}
lean::cnstr_set(x_160, 0, x_156);
lean::cnstr_set_scalar(x_160, sizeof(void*)*1, x_158);
x_161 = x_160;
x_162 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_45, x_161);
x_163 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_41, x_162);
return x_163;
}
}
}
else
{
obj* x_164; unsigned char x_166; obj* x_167; obj* x_168; obj* x_169; obj* x_170; obj* x_171; 
x_164 = lean::cnstr_get(x_106, 0);
lean::inc(x_164);
x_166 = lean::cnstr_get_scalar<unsigned char>(x_106, sizeof(void*)*1);
if (lean::is_shared(x_106)) {
 lean::dec(x_106);
 x_167 = lean::box(0);
} else {
 lean::cnstr_release(x_106, 0);
 x_167 = x_106;
}
if (lean::is_scalar(x_167)) {
 x_168 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_168 = x_167;
}
lean::cnstr_set(x_168, 0, x_164);
lean::cnstr_set_scalar(x_168, sizeof(void*)*1, x_166);
x_169 = x_168;
x_170 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_45, x_169);
x_171 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_41, x_170);
return x_171;
}
}
else
{
obj* x_174; 
lean::dec(x_45);
lean::dec(x_0);
x_174 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_41, x_44);
return x_174;
}
lbl_102:
{
obj* x_175; obj* x_176; obj* x_177; obj* x_179; obj* x_181; 
x_179 = l_list_repr___main___rarg___closed__2;
lean::inc(x_179);
x_181 = l_lean_ir_symbol(x_179, x_100);
if (lean::obj_tag(x_181) == 0)
{
obj* x_182; obj* x_184; obj* x_187; obj* x_188; 
x_182 = lean::cnstr_get(x_181, 1);
lean::inc(x_182);
x_184 = lean::cnstr_get(x_181, 2);
lean::inc(x_184);
lean::dec(x_181);
x_187 = l_lean_parser_monad__parsec_sep__by1___at_lean_ir_parse__terminator___spec__1(x_182);
x_188 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_184, x_187);
if (lean::obj_tag(x_188) == 0)
{
obj* x_189; obj* x_191; obj* x_193; 
x_189 = lean::cnstr_get(x_188, 0);
lean::inc(x_189);
x_191 = lean::cnstr_get(x_188, 1);
lean::inc(x_191);
x_193 = lean::cnstr_get(x_188, 2);
lean::inc(x_193);
lean::dec(x_188);
x_175 = x_189;
x_176 = x_191;
x_177 = x_193;
goto lbl_178;
}
else
{
obj* x_197; unsigned char x_199; obj* x_200; obj* x_201; obj* x_202; obj* x_203; obj* x_204; obj* x_205; 
lean::dec(x_99);
x_197 = lean::cnstr_get(x_188, 0);
lean::inc(x_197);
x_199 = lean::cnstr_get_scalar<unsigned char>(x_188, sizeof(void*)*1);
if (lean::is_shared(x_188)) {
 lean::dec(x_188);
 x_200 = lean::box(0);
} else {
 lean::cnstr_release(x_188, 0);
 x_200 = x_188;
}
if (lean::is_scalar(x_200)) {
 x_201 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_201 = x_200;
}
lean::cnstr_set(x_201, 0, x_197);
lean::cnstr_set_scalar(x_201, sizeof(void*)*1, x_199);
x_202 = x_201;
x_203 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_101, x_202);
x_204 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_45, x_203);
x_205 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_41, x_204);
return x_205;
}
}
else
{
obj* x_207; unsigned char x_209; obj* x_210; obj* x_211; obj* x_212; obj* x_213; obj* x_214; obj* x_215; 
lean::dec(x_99);
x_207 = lean::cnstr_get(x_181, 0);
lean::inc(x_207);
x_209 = lean::cnstr_get_scalar<unsigned char>(x_181, sizeof(void*)*1);
if (lean::is_shared(x_181)) {
 lean::dec(x_181);
 x_210 = lean::box(0);
} else {
 lean::cnstr_release(x_181, 0);
 x_210 = x_181;
}
if (lean::is_scalar(x_210)) {
 x_211 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_211 = x_210;
}
lean::cnstr_set(x_211, 0, x_207);
lean::cnstr_set_scalar(x_211, sizeof(void*)*1, x_209);
x_212 = x_211;
x_213 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_101, x_212);
x_214 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_45, x_213);
x_215 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_41, x_214);
return x_215;
}
lbl_178:
{
obj* x_216; obj* x_218; 
x_216 = l_list_repr___main___rarg___closed__3;
lean::inc(x_216);
x_218 = l_lean_ir_symbol(x_216, x_176);
if (lean::obj_tag(x_218) == 0)
{
obj* x_219; obj* x_221; obj* x_223; obj* x_224; obj* x_226; obj* x_227; obj* x_228; 
x_219 = lean::cnstr_get(x_218, 1);
lean::inc(x_219);
x_221 = lean::cnstr_get(x_218, 2);
lean::inc(x_221);
if (lean::is_shared(x_218)) {
 lean::dec(x_218);
 x_223 = lean::box(0);
} else {
 lean::cnstr_release(x_218, 0);
 lean::cnstr_release(x_218, 1);
 lean::cnstr_release(x_218, 2);
 x_223 = x_218;
}
x_224 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_224);
if (lean::is_scalar(x_223)) {
 x_226 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_226 = x_223;
}
lean::cnstr_set(x_226, 0, x_175);
lean::cnstr_set(x_226, 1, x_219);
lean::cnstr_set(x_226, 2, x_224);
x_227 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_221, x_226);
x_228 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_177, x_227);
if (lean::obj_tag(x_228) == 0)
{
obj* x_229; obj* x_231; obj* x_233; obj* x_235; obj* x_236; obj* x_238; obj* x_239; obj* x_240; obj* x_241; obj* x_242; 
x_229 = lean::cnstr_get(x_228, 0);
lean::inc(x_229);
x_231 = lean::cnstr_get(x_228, 1);
lean::inc(x_231);
x_233 = lean::cnstr_get(x_228, 2);
lean::inc(x_233);
if (lean::is_shared(x_228)) {
 lean::dec(x_228);
 x_235 = lean::box(0);
} else {
 lean::cnstr_release(x_228, 0);
 lean::cnstr_release(x_228, 1);
 lean::cnstr_release(x_228, 2);
 x_235 = x_228;
}
x_236 = lean::apply_1(x_99, x_229);
lean::inc(x_224);
if (lean::is_scalar(x_235)) {
 x_238 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_238 = x_235;
}
lean::cnstr_set(x_238, 0, x_236);
lean::cnstr_set(x_238, 1, x_231);
lean::cnstr_set(x_238, 2, x_224);
x_239 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_233, x_238);
x_240 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_101, x_239);
x_241 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_45, x_240);
x_242 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_41, x_241);
return x_242;
}
else
{
obj* x_244; unsigned char x_246; obj* x_247; obj* x_248; obj* x_249; obj* x_250; obj* x_251; obj* x_252; 
lean::dec(x_99);
x_244 = lean::cnstr_get(x_228, 0);
lean::inc(x_244);
x_246 = lean::cnstr_get_scalar<unsigned char>(x_228, sizeof(void*)*1);
if (lean::is_shared(x_228)) {
 lean::dec(x_228);
 x_247 = lean::box(0);
} else {
 lean::cnstr_release(x_228, 0);
 x_247 = x_228;
}
if (lean::is_scalar(x_247)) {
 x_248 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_248 = x_247;
}
lean::cnstr_set(x_248, 0, x_244);
lean::cnstr_set_scalar(x_248, sizeof(void*)*1, x_246);
x_249 = x_248;
x_250 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_101, x_249);
x_251 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_45, x_250);
x_252 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_41, x_251);
return x_252;
}
}
else
{
obj* x_254; unsigned char x_256; obj* x_257; obj* x_258; obj* x_259; obj* x_260; 
lean::dec(x_175);
x_254 = lean::cnstr_get(x_218, 0);
lean::inc(x_254);
x_256 = lean::cnstr_get_scalar<unsigned char>(x_218, sizeof(void*)*1);
if (lean::is_shared(x_218)) {
 lean::dec(x_218);
 x_257 = lean::box(0);
} else {
 lean::cnstr_release(x_218, 0);
 x_257 = x_218;
}
if (lean::is_scalar(x_257)) {
 x_258 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_258 = x_257;
}
lean::cnstr_set(x_258, 0, x_254);
lean::cnstr_set_scalar(x_258, sizeof(void*)*1, x_256);
x_259 = x_258;
x_260 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_177, x_259);
if (lean::obj_tag(x_260) == 0)
{
obj* x_261; obj* x_263; obj* x_265; obj* x_267; obj* x_268; obj* x_269; obj* x_271; obj* x_272; obj* x_273; obj* x_274; obj* x_275; 
x_261 = lean::cnstr_get(x_260, 0);
lean::inc(x_261);
x_263 = lean::cnstr_get(x_260, 1);
lean::inc(x_263);
x_265 = lean::cnstr_get(x_260, 2);
lean::inc(x_265);
if (lean::is_shared(x_260)) {
 lean::dec(x_260);
 x_267 = lean::box(0);
} else {
 lean::cnstr_release(x_260, 0);
 lean::cnstr_release(x_260, 1);
 lean::cnstr_release(x_260, 2);
 x_267 = x_260;
}
x_268 = lean::apply_1(x_99, x_261);
x_269 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_269);
if (lean::is_scalar(x_267)) {
 x_271 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_271 = x_267;
}
lean::cnstr_set(x_271, 0, x_268);
lean::cnstr_set(x_271, 1, x_263);
lean::cnstr_set(x_271, 2, x_269);
x_272 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_265, x_271);
x_273 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_101, x_272);
x_274 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_45, x_273);
x_275 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_41, x_274);
return x_275;
}
else
{
obj* x_277; unsigned char x_279; obj* x_280; obj* x_281; obj* x_282; obj* x_283; obj* x_284; obj* x_285; 
lean::dec(x_99);
x_277 = lean::cnstr_get(x_260, 0);
lean::inc(x_277);
x_279 = lean::cnstr_get_scalar<unsigned char>(x_260, sizeof(void*)*1);
if (lean::is_shared(x_260)) {
 lean::dec(x_260);
 x_280 = lean::box(0);
} else {
 lean::cnstr_release(x_260, 0);
 x_280 = x_260;
}
if (lean::is_scalar(x_280)) {
 x_281 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_281 = x_280;
}
lean::cnstr_set(x_281, 0, x_277);
lean::cnstr_set_scalar(x_281, sizeof(void*)*1, x_279);
x_282 = x_281;
x_283 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_101, x_282);
x_284 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_45, x_283);
x_285 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_41, x_284);
return x_285;
}
}
}
}
}
}
}
}
}
obj* _init_l_lean_ir_parse__terminator___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("case");
return x_0;
}
}
obj* _init_l_lean_ir_parse__terminator___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ret");
return x_0;
}
}
obj* _init_l_lean_ir_parse__terminator___closed__3() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("jmp");
return x_0;
}
}
obj* l_lean_ir_parse__terminator___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__terminator___spec__4(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::nat_dec_eq(x_0, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_6; obj* x_7; obj* x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_16; 
lean::dec(x_3);
x_6 = lean::mk_nat_obj(1u);
x_7 = lean::nat_sub(x_0, x_6);
lean::dec(x_6);
lean::dec(x_0);
x_14 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__terminator___spec__4___closed__1;
lean::inc(x_14);
x_16 = l_lean_ir_symbol(x_14, x_1);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; obj* x_19; obj* x_22; obj* x_23; 
x_17 = lean::cnstr_get(x_16, 1);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_16, 2);
lean::inc(x_19);
lean::dec(x_16);
x_22 = l_lean_ir_parse__blockid(x_17);
x_23 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_22);
if (lean::obj_tag(x_23) == 0)
{
obj* x_24; obj* x_26; obj* x_28; 
x_24 = lean::cnstr_get(x_23, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_23, 1);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_23, 2);
lean::inc(x_28);
lean::dec(x_23);
x_10 = x_24;
x_11 = x_26;
x_12 = x_28;
goto lbl_13;
}
else
{
obj* x_32; unsigned char x_34; obj* x_35; obj* x_36; obj* x_37; 
lean::dec(x_7);
x_32 = lean::cnstr_get(x_23, 0);
lean::inc(x_32);
x_34 = lean::cnstr_get_scalar<unsigned char>(x_23, sizeof(void*)*1);
if (lean::is_shared(x_23)) {
 lean::dec(x_23);
 x_35 = lean::box(0);
} else {
 lean::cnstr_release(x_23, 0);
 x_35 = x_23;
}
if (lean::is_scalar(x_35)) {
 x_36 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_36 = x_35;
}
lean::cnstr_set(x_36, 0, x_32);
lean::cnstr_set_scalar(x_36, sizeof(void*)*1, x_34);
x_37 = x_36;
return x_37;
}
}
else
{
obj* x_39; unsigned char x_41; obj* x_42; obj* x_43; obj* x_44; 
lean::dec(x_7);
x_39 = lean::cnstr_get(x_16, 0);
lean::inc(x_39);
x_41 = lean::cnstr_get_scalar<unsigned char>(x_16, sizeof(void*)*1);
if (lean::is_shared(x_16)) {
 lean::dec(x_16);
 x_42 = lean::box(0);
} else {
 lean::cnstr_release(x_16, 0);
 x_42 = x_16;
}
if (lean::is_scalar(x_42)) {
 x_43 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_43 = x_42;
}
lean::cnstr_set(x_43, 0, x_39);
lean::cnstr_set_scalar(x_43, sizeof(void*)*1, x_41);
x_44 = x_43;
return x_44;
}
lbl_13:
{
obj* x_46; obj* x_47; 
lean::inc(x_11);
x_46 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__terminator___spec__4(x_7, x_11);
if (lean::obj_tag(x_46) == 0)
{
obj* x_50; 
lean::dec(x_11);
x_50 = lean::box(0);
x_47 = x_50;
goto lbl_48;
}
else
{
obj* x_51; unsigned char x_53; 
x_51 = lean::cnstr_get(x_46, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get_scalar<unsigned char>(x_46, sizeof(void*)*1);
if (x_53 == 0)
{
obj* x_55; obj* x_56; obj* x_59; obj* x_61; obj* x_62; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
lean::dec(x_46);
x_55 = lean::box(0);
x_56 = lean::cnstr_get(x_51, 2);
lean::inc(x_56);
lean::dec(x_51);
x_59 = l_mjoin___rarg___closed__1;
lean::inc(x_59);
x_61 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_61, 0, x_56);
lean::closure_set(x_61, 1, x_59);
x_62 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_62, 0, x_10);
lean::cnstr_set(x_62, 1, x_55);
lean::inc(x_59);
x_64 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_64, 0, x_61);
lean::closure_set(x_64, 1, x_59);
x_65 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_65, 0, x_64);
x_66 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_66, 0, x_62);
lean::cnstr_set(x_66, 1, x_11);
lean::cnstr_set(x_66, 2, x_65);
x_67 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_66);
return x_67;
}
else
{
obj* x_70; 
lean::dec(x_11);
lean::dec(x_51);
x_70 = lean::box(0);
x_47 = x_70;
goto lbl_48;
}
}
lbl_48:
{
lean::dec(x_47);
if (lean::obj_tag(x_46) == 0)
{
obj* x_72; obj* x_74; obj* x_76; obj* x_78; obj* x_79; obj* x_80; obj* x_82; obj* x_83; obj* x_84; 
x_72 = lean::cnstr_get(x_46, 0);
lean::inc(x_72);
x_74 = lean::cnstr_get(x_46, 1);
lean::inc(x_74);
x_76 = lean::cnstr_get(x_46, 2);
lean::inc(x_76);
if (lean::is_shared(x_46)) {
 lean::dec(x_46);
 x_78 = lean::box(0);
} else {
 lean::cnstr_release(x_46, 0);
 lean::cnstr_release(x_46, 1);
 lean::cnstr_release(x_46, 2);
 x_78 = x_46;
}
x_79 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_79, 0, x_10);
lean::cnstr_set(x_79, 1, x_72);
x_80 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_80);
if (lean::is_scalar(x_78)) {
 x_82 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_82 = x_78;
}
lean::cnstr_set(x_82, 0, x_79);
lean::cnstr_set(x_82, 1, x_74);
lean::cnstr_set(x_82, 2, x_80);
x_83 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_76, x_82);
x_84 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_83);
return x_84;
}
else
{
obj* x_86; unsigned char x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
lean::dec(x_10);
x_86 = lean::cnstr_get(x_46, 0);
lean::inc(x_86);
x_88 = lean::cnstr_get_scalar<unsigned char>(x_46, sizeof(void*)*1);
if (lean::is_shared(x_46)) {
 lean::dec(x_46);
 x_89 = lean::box(0);
} else {
 lean::cnstr_release(x_46, 0);
 x_89 = x_46;
}
if (lean::is_scalar(x_89)) {
 x_90 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_90 = x_89;
}
lean::cnstr_set(x_90, 0, x_86);
lean::cnstr_set_scalar(x_90, sizeof(void*)*1, x_88);
x_91 = x_90;
x_92 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_91);
return x_92;
}
}
}
}
else
{
obj* x_95; obj* x_97; 
lean::dec(x_0);
lean::dec(x_3);
x_95 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__terminator___spec__4___closed__1;
lean::inc(x_95);
x_97 = l_lean_ir_symbol(x_95, x_1);
if (lean::obj_tag(x_97) == 0)
{
obj* x_98; obj* x_100; obj* x_102; obj* x_103; obj* x_104; 
x_98 = lean::cnstr_get(x_97, 1);
lean::inc(x_98);
x_100 = lean::cnstr_get(x_97, 2);
lean::inc(x_100);
if (lean::is_shared(x_97)) {
 lean::dec(x_97);
 x_102 = lean::box(0);
} else {
 lean::cnstr_release(x_97, 0);
 lean::cnstr_release(x_97, 1);
 lean::cnstr_release(x_97, 2);
 x_102 = x_97;
}
x_103 = l_lean_ir_parse__blockid(x_98);
x_104 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_100, x_103);
if (lean::obj_tag(x_104) == 0)
{
obj* x_105; obj* x_107; obj* x_109; obj* x_112; obj* x_113; obj* x_114; obj* x_116; obj* x_117; 
x_105 = lean::cnstr_get(x_104, 0);
lean::inc(x_105);
x_107 = lean::cnstr_get(x_104, 1);
lean::inc(x_107);
x_109 = lean::cnstr_get(x_104, 2);
lean::inc(x_109);
lean::dec(x_104);
x_112 = lean::box(0);
x_113 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_113, 0, x_105);
lean::cnstr_set(x_113, 1, x_112);
x_114 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_114);
if (lean::is_scalar(x_102)) {
 x_116 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_116 = x_102;
}
lean::cnstr_set(x_116, 0, x_113);
lean::cnstr_set(x_116, 1, x_107);
lean::cnstr_set(x_116, 2, x_114);
x_117 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_109, x_116);
return x_117;
}
else
{
obj* x_119; unsigned char x_121; obj* x_122; obj* x_123; obj* x_124; 
lean::dec(x_102);
x_119 = lean::cnstr_get(x_104, 0);
lean::inc(x_119);
x_121 = lean::cnstr_get_scalar<unsigned char>(x_104, sizeof(void*)*1);
if (lean::is_shared(x_104)) {
 lean::dec(x_104);
 x_122 = lean::box(0);
} else {
 lean::cnstr_release(x_104, 0);
 x_122 = x_104;
}
if (lean::is_scalar(x_122)) {
 x_123 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_123 = x_122;
}
lean::cnstr_set(x_123, 0, x_119);
lean::cnstr_set_scalar(x_123, sizeof(void*)*1, x_121);
x_124 = x_123;
return x_124;
}
}
else
{
obj* x_125; unsigned char x_127; obj* x_128; obj* x_129; obj* x_130; 
x_125 = lean::cnstr_get(x_97, 0);
lean::inc(x_125);
x_127 = lean::cnstr_get_scalar<unsigned char>(x_97, sizeof(void*)*1);
if (lean::is_shared(x_97)) {
 lean::dec(x_97);
 x_128 = lean::box(0);
} else {
 lean::cnstr_release(x_97, 0);
 x_128 = x_97;
}
if (lean::is_scalar(x_128)) {
 x_129 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_129 = x_128;
}
lean::cnstr_set(x_129, 0, x_125);
lean::cnstr_set_scalar(x_129, sizeof(void*)*1, x_127);
x_130 = x_129;
return x_130;
}
}
}
}
obj* _init_l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__terminator___spec__4___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string(",");
return x_0;
}
}
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__terminator___spec__3(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; 
x_1 = lean::string_iterator_remaining(x_0);
x_2 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__terminator___spec__4(x_1, x_0);
x_3 = l_lean_ir_keyword___closed__1;
lean::inc(x_3);
x_5 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_many___at_lean_ir_parse__terminator___spec__2(obj* x_0) {
_start:
{
obj* x_2; 
lean::inc(x_0);
x_2 = l_lean_parser_monad__parsec_many1___at_lean_ir_parse__terminator___spec__3(x_0);
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_0);
return x_2;
}
else
{
obj* x_4; unsigned char x_6; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get_scalar<unsigned char>(x_2, sizeof(void*)*1);
if (x_6 == 0)
{
obj* x_8; obj* x_9; obj* x_12; obj* x_14; obj* x_15; obj* x_16; 
lean::dec(x_2);
x_8 = lean::box(0);
x_9 = lean::cnstr_get(x_4, 2);
lean::inc(x_9);
lean::dec(x_4);
x_12 = l_mjoin___rarg___closed__1;
lean::inc(x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_14, 0, x_9);
lean::closure_set(x_14, 1, x_12);
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_14);
x_16 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_16, 0, x_8);
lean::cnstr_set(x_16, 1, x_0);
lean::cnstr_set(x_16, 2, x_15);
return x_16;
}
else
{
lean::dec(x_0);
lean::dec(x_4);
return x_2;
}
}
}
}
obj* l_lean_parser_monad__parsec_sep__by1___at_lean_ir_parse__terminator___spec__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_ir_parse__blockid(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_12; obj* x_13; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 lean::cnstr_release(x_1, 2);
 x_8 = x_1;
}
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_sep__by1___rarg___lambda__1), 2, 1);
lean::closure_set(x_9, 0, x_2);
x_10 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_10);
if (lean::is_scalar(x_8)) {
 x_12 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_12 = x_8;
}
lean::cnstr_set(x_12, 0, x_9);
lean::cnstr_set(x_12, 1, x_4);
lean::cnstr_set(x_12, 2, x_10);
x_13 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_12);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_21; 
x_14 = lean::cnstr_get(x_13, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_13, 2);
lean::inc(x_18);
if (lean::is_shared(x_13)) {
 lean::dec(x_13);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_13, 0);
 lean::cnstr_release(x_13, 1);
 lean::cnstr_release(x_13, 2);
 x_20 = x_13;
}
x_21 = l_lean_parser_monad__parsec_many___at_lean_ir_parse__terminator___spec__2(x_16);
if (lean::obj_tag(x_21) == 0)
{
obj* x_22; obj* x_24; obj* x_26; obj* x_29; obj* x_31; obj* x_32; obj* x_33; 
x_22 = lean::cnstr_get(x_21, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_21, 1);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_21, 2);
lean::inc(x_26);
lean::dec(x_21);
x_29 = lean::apply_1(x_14, x_22);
lean::inc(x_10);
if (lean::is_scalar(x_20)) {
 x_31 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_31 = x_20;
}
lean::cnstr_set(x_31, 0, x_29);
lean::cnstr_set(x_31, 1, x_24);
lean::cnstr_set(x_31, 2, x_10);
x_32 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_26, x_31);
x_33 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_32);
return x_33;
}
else
{
obj* x_36; unsigned char x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
lean::dec(x_14);
lean::dec(x_20);
x_36 = lean::cnstr_get(x_21, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get_scalar<unsigned char>(x_21, sizeof(void*)*1);
if (lean::is_shared(x_21)) {
 lean::dec(x_21);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_21, 0);
 x_39 = x_21;
}
if (lean::is_scalar(x_39)) {
 x_40 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_40 = x_39;
}
lean::cnstr_set(x_40, 0, x_36);
lean::cnstr_set_scalar(x_40, sizeof(void*)*1, x_38);
x_41 = x_40;
x_42 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_41);
return x_42;
}
}
else
{
obj* x_43; unsigned char x_45; obj* x_46; obj* x_47; obj* x_48; 
x_43 = lean::cnstr_get(x_13, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get_scalar<unsigned char>(x_13, sizeof(void*)*1);
if (lean::is_shared(x_13)) {
 lean::dec(x_13);
 x_46 = lean::box(0);
} else {
 lean::cnstr_release(x_13, 0);
 x_46 = x_13;
}
if (lean::is_scalar(x_46)) {
 x_47 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_47 = x_46;
}
lean::cnstr_set(x_47, 0, x_43);
lean::cnstr_set_scalar(x_47, sizeof(void*)*1, x_45);
x_48 = x_47;
return x_48;
}
}
else
{
obj* x_49; unsigned char x_51; obj* x_52; obj* x_53; obj* x_54; 
x_49 = lean::cnstr_get(x_1, 0);
lean::inc(x_49);
x_51 = lean::cnstr_get_scalar<unsigned char>(x_1, sizeof(void*)*1);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_52 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 x_52 = x_1;
}
if (lean::is_scalar(x_52)) {
 x_53 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_53 = x_52;
}
lean::cnstr_set(x_53, 0, x_49);
lean::cnstr_set_scalar(x_53, sizeof(void*)*1, x_51);
x_54 = x_53;
return x_54;
}
}
}
obj* l_lean_ir_parse__block(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; 
x_5 = l_lean_ir_parse__blockid(x_0);
if (lean::obj_tag(x_5) == 0)
{
obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_15; 
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_5, 2);
lean::inc(x_10);
if (lean::is_shared(x_5)) {
 lean::dec(x_5);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 lean::cnstr_release(x_5, 2);
 x_12 = x_5;
}
x_13 = l_lean_ir_parse__typed__assignment___closed__1;
lean::inc(x_13);
x_15 = l_lean_ir_symbol(x_13, x_8);
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_18; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_16 = lean::cnstr_get(x_15, 1);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_15, 2);
lean::inc(x_18);
lean::dec(x_15);
x_21 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_21);
if (lean::is_scalar(x_12)) {
 x_23 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_23 = x_12;
}
lean::cnstr_set(x_23, 0, x_6);
lean::cnstr_set(x_23, 1, x_16);
lean::cnstr_set(x_23, 2, x_21);
x_24 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_23);
x_25 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_10, x_24);
x_26 = l_lean_parser_parsec__t_try__mk__res___rarg(x_25);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; obj* x_29; obj* x_31; 
x_27 = lean::cnstr_get(x_26, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_26, 1);
lean::inc(x_29);
x_31 = lean::cnstr_get(x_26, 2);
lean::inc(x_31);
lean::dec(x_26);
x_1 = x_27;
x_2 = x_29;
x_3 = x_31;
goto lbl_4;
}
else
{
obj* x_34; unsigned char x_36; obj* x_37; obj* x_38; obj* x_39; 
x_34 = lean::cnstr_get(x_26, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get_scalar<unsigned char>(x_26, sizeof(void*)*1);
if (lean::is_shared(x_26)) {
 lean::dec(x_26);
 x_37 = lean::box(0);
} else {
 lean::cnstr_release(x_26, 0);
 x_37 = x_26;
}
if (lean::is_scalar(x_37)) {
 x_38 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_38 = x_37;
}
lean::cnstr_set(x_38, 0, x_34);
lean::cnstr_set_scalar(x_38, sizeof(void*)*1, x_36);
x_39 = x_38;
return x_39;
}
}
else
{
obj* x_42; unsigned char x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
lean::dec(x_12);
lean::dec(x_6);
x_42 = lean::cnstr_get(x_15, 0);
lean::inc(x_42);
x_44 = lean::cnstr_get_scalar<unsigned char>(x_15, sizeof(void*)*1);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_45 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 x_45 = x_15;
}
if (lean::is_scalar(x_45)) {
 x_46 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_46 = x_45;
}
lean::cnstr_set(x_46, 0, x_42);
lean::cnstr_set_scalar(x_46, sizeof(void*)*1, x_44);
x_47 = x_46;
x_48 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_10, x_47);
x_49 = l_lean_parser_parsec__t_try__mk__res___rarg(x_48);
if (lean::obj_tag(x_49) == 0)
{
obj* x_50; obj* x_52; obj* x_54; 
x_50 = lean::cnstr_get(x_49, 0);
lean::inc(x_50);
x_52 = lean::cnstr_get(x_49, 1);
lean::inc(x_52);
x_54 = lean::cnstr_get(x_49, 2);
lean::inc(x_54);
lean::dec(x_49);
x_1 = x_50;
x_2 = x_52;
x_3 = x_54;
goto lbl_4;
}
else
{
obj* x_57; unsigned char x_59; obj* x_60; obj* x_61; obj* x_62; 
x_57 = lean::cnstr_get(x_49, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get_scalar<unsigned char>(x_49, sizeof(void*)*1);
if (lean::is_shared(x_49)) {
 lean::dec(x_49);
 x_60 = lean::box(0);
} else {
 lean::cnstr_release(x_49, 0);
 x_60 = x_49;
}
if (lean::is_scalar(x_60)) {
 x_61 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_61 = x_60;
}
lean::cnstr_set(x_61, 0, x_57);
lean::cnstr_set_scalar(x_61, sizeof(void*)*1, x_59);
x_62 = x_61;
return x_62;
}
}
}
else
{
obj* x_63; obj* x_65; unsigned char x_66; obj* x_67; obj* x_68; 
x_63 = lean::cnstr_get(x_5, 0);
lean::inc(x_63);
if (lean::is_shared(x_5)) {
 lean::dec(x_5);
 x_65 = lean::box(0);
} else {
 lean::cnstr_release(x_5, 0);
 x_65 = x_5;
}
x_66 = 0;
if (lean::is_scalar(x_65)) {
 x_67 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_67 = x_65;
}
lean::cnstr_set(x_67, 0, x_63);
lean::cnstr_set_scalar(x_67, sizeof(void*)*1, x_66);
x_68 = x_67;
return x_68;
}
lbl_4:
{
obj* x_69; 
x_69 = l_lean_parser_monad__parsec_many___at_lean_ir_parse__block___spec__1(x_2);
if (lean::obj_tag(x_69) == 0)
{
obj* x_70; obj* x_72; obj* x_74; obj* x_76; obj* x_77; 
x_70 = lean::cnstr_get(x_69, 0);
lean::inc(x_70);
x_72 = lean::cnstr_get(x_69, 1);
lean::inc(x_72);
x_74 = lean::cnstr_get(x_69, 2);
lean::inc(x_74);
if (lean::is_shared(x_69)) {
 lean::dec(x_69);
 x_76 = lean::box(0);
} else {
 lean::cnstr_release(x_69, 0);
 lean::cnstr_release(x_69, 1);
 lean::cnstr_release(x_69, 2);
 x_76 = x_69;
}
x_77 = l_lean_parser_monad__parsec_many___at_lean_ir_parse__block___spec__4(x_72);
if (lean::obj_tag(x_77) == 0)
{
obj* x_78; obj* x_80; obj* x_82; obj* x_84; obj* x_85; 
x_78 = lean::cnstr_get(x_77, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_77, 1);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_77, 2);
lean::inc(x_82);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_84 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 lean::cnstr_release(x_77, 1);
 lean::cnstr_release(x_77, 2);
 x_84 = x_77;
}
x_85 = l_lean_ir_parse__terminator(x_80);
if (lean::obj_tag(x_85) == 0)
{
obj* x_86; obj* x_88; obj* x_90; obj* x_93; obj* x_95; 
x_86 = lean::cnstr_get(x_85, 0);
lean::inc(x_86);
x_88 = lean::cnstr_get(x_85, 1);
lean::inc(x_88);
x_90 = lean::cnstr_get(x_85, 2);
lean::inc(x_90);
lean::dec(x_85);
x_93 = l_lean_ir_parse__block___closed__1;
lean::inc(x_93);
x_95 = l_lean_ir_symbol(x_93, x_88);
if (lean::obj_tag(x_95) == 0)
{
obj* x_96; obj* x_98; obj* x_101; obj* x_103; obj* x_104; obj* x_105; 
x_96 = lean::cnstr_get(x_95, 1);
lean::inc(x_96);
x_98 = lean::cnstr_get(x_95, 2);
lean::inc(x_98);
lean::dec(x_95);
x_101 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_101);
if (lean::is_scalar(x_76)) {
 x_103 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_103 = x_76;
}
lean::cnstr_set(x_103, 0, x_86);
lean::cnstr_set(x_103, 1, x_96);
lean::cnstr_set(x_103, 2, x_101);
x_104 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_98, x_103);
x_105 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_90, x_104);
if (lean::obj_tag(x_105) == 0)
{
obj* x_106; obj* x_108; obj* x_110; obj* x_113; obj* x_115; obj* x_116; obj* x_117; obj* x_118; obj* x_119; 
x_106 = lean::cnstr_get(x_105, 0);
lean::inc(x_106);
x_108 = lean::cnstr_get(x_105, 1);
lean::inc(x_108);
x_110 = lean::cnstr_get(x_105, 2);
lean::inc(x_110);
lean::dec(x_105);
x_113 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_113, 0, x_1);
lean::cnstr_set(x_113, 1, x_70);
lean::cnstr_set(x_113, 2, x_78);
lean::cnstr_set(x_113, 3, x_106);
lean::inc(x_101);
if (lean::is_scalar(x_84)) {
 x_115 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_115 = x_84;
}
lean::cnstr_set(x_115, 0, x_113);
lean::cnstr_set(x_115, 1, x_108);
lean::cnstr_set(x_115, 2, x_101);
x_116 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_110, x_115);
x_117 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_82, x_116);
x_118 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_74, x_117);
x_119 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_118);
return x_119;
}
else
{
obj* x_124; unsigned char x_126; obj* x_127; obj* x_128; obj* x_129; obj* x_130; obj* x_131; obj* x_132; 
lean::dec(x_78);
lean::dec(x_70);
lean::dec(x_1);
lean::dec(x_84);
x_124 = lean::cnstr_get(x_105, 0);
lean::inc(x_124);
x_126 = lean::cnstr_get_scalar<unsigned char>(x_105, sizeof(void*)*1);
if (lean::is_shared(x_105)) {
 lean::dec(x_105);
 x_127 = lean::box(0);
} else {
 lean::cnstr_release(x_105, 0);
 x_127 = x_105;
}
if (lean::is_scalar(x_127)) {
 x_128 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_128 = x_127;
}
lean::cnstr_set(x_128, 0, x_124);
lean::cnstr_set_scalar(x_128, sizeof(void*)*1, x_126);
x_129 = x_128;
x_130 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_82, x_129);
x_131 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_74, x_130);
x_132 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_131);
return x_132;
}
}
else
{
obj* x_135; unsigned char x_137; obj* x_138; obj* x_139; obj* x_140; obj* x_141; 
lean::dec(x_84);
lean::dec(x_86);
x_135 = lean::cnstr_get(x_95, 0);
lean::inc(x_135);
x_137 = lean::cnstr_get_scalar<unsigned char>(x_95, sizeof(void*)*1);
if (lean::is_shared(x_95)) {
 lean::dec(x_95);
 x_138 = lean::box(0);
} else {
 lean::cnstr_release(x_95, 0);
 x_138 = x_95;
}
if (lean::is_scalar(x_138)) {
 x_139 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_139 = x_138;
}
lean::cnstr_set(x_139, 0, x_135);
lean::cnstr_set_scalar(x_139, sizeof(void*)*1, x_137);
x_140 = x_139;
x_141 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_90, x_140);
if (lean::obj_tag(x_141) == 0)
{
obj* x_142; obj* x_144; obj* x_146; obj* x_149; obj* x_150; obj* x_152; obj* x_153; obj* x_154; obj* x_155; obj* x_156; 
x_142 = lean::cnstr_get(x_141, 0);
lean::inc(x_142);
x_144 = lean::cnstr_get(x_141, 1);
lean::inc(x_144);
x_146 = lean::cnstr_get(x_141, 2);
lean::inc(x_146);
lean::dec(x_141);
x_149 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_149, 0, x_1);
lean::cnstr_set(x_149, 1, x_70);
lean::cnstr_set(x_149, 2, x_78);
lean::cnstr_set(x_149, 3, x_142);
x_150 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_150);
if (lean::is_scalar(x_76)) {
 x_152 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_152 = x_76;
}
lean::cnstr_set(x_152, 0, x_149);
lean::cnstr_set(x_152, 1, x_144);
lean::cnstr_set(x_152, 2, x_150);
x_153 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_146, x_152);
x_154 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_82, x_153);
x_155 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_74, x_154);
x_156 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_155);
return x_156;
}
else
{
obj* x_161; unsigned char x_163; obj* x_164; obj* x_165; obj* x_166; obj* x_167; obj* x_168; obj* x_169; 
lean::dec(x_78);
lean::dec(x_70);
lean::dec(x_76);
lean::dec(x_1);
x_161 = lean::cnstr_get(x_141, 0);
lean::inc(x_161);
x_163 = lean::cnstr_get_scalar<unsigned char>(x_141, sizeof(void*)*1);
if (lean::is_shared(x_141)) {
 lean::dec(x_141);
 x_164 = lean::box(0);
} else {
 lean::cnstr_release(x_141, 0);
 x_164 = x_141;
}
if (lean::is_scalar(x_164)) {
 x_165 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_165 = x_164;
}
lean::cnstr_set(x_165, 0, x_161);
lean::cnstr_set_scalar(x_165, sizeof(void*)*1, x_163);
x_166 = x_165;
x_167 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_82, x_166);
x_168 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_74, x_167);
x_169 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_168);
return x_169;
}
}
}
else
{
obj* x_175; unsigned char x_177; obj* x_178; obj* x_179; obj* x_180; obj* x_181; obj* x_182; obj* x_183; 
lean::dec(x_78);
lean::dec(x_70);
lean::dec(x_76);
lean::dec(x_1);
lean::dec(x_84);
x_175 = lean::cnstr_get(x_85, 0);
lean::inc(x_175);
x_177 = lean::cnstr_get_scalar<unsigned char>(x_85, sizeof(void*)*1);
if (lean::is_shared(x_85)) {
 lean::dec(x_85);
 x_178 = lean::box(0);
} else {
 lean::cnstr_release(x_85, 0);
 x_178 = x_85;
}
if (lean::is_scalar(x_178)) {
 x_179 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_179 = x_178;
}
lean::cnstr_set(x_179, 0, x_175);
lean::cnstr_set_scalar(x_179, sizeof(void*)*1, x_177);
x_180 = x_179;
x_181 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_82, x_180);
x_182 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_74, x_181);
x_183 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_182);
return x_183;
}
}
else
{
obj* x_187; unsigned char x_189; obj* x_190; obj* x_191; obj* x_192; obj* x_193; obj* x_194; 
lean::dec(x_70);
lean::dec(x_76);
lean::dec(x_1);
x_187 = lean::cnstr_get(x_77, 0);
lean::inc(x_187);
x_189 = lean::cnstr_get_scalar<unsigned char>(x_77, sizeof(void*)*1);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_190 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 x_190 = x_77;
}
if (lean::is_scalar(x_190)) {
 x_191 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_191 = x_190;
}
lean::cnstr_set(x_191, 0, x_187);
lean::cnstr_set_scalar(x_191, sizeof(void*)*1, x_189);
x_192 = x_191;
x_193 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_74, x_192);
x_194 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_193);
return x_194;
}
}
else
{
obj* x_196; unsigned char x_198; obj* x_199; obj* x_200; obj* x_201; obj* x_202; 
lean::dec(x_1);
x_196 = lean::cnstr_get(x_69, 0);
lean::inc(x_196);
x_198 = lean::cnstr_get_scalar<unsigned char>(x_69, sizeof(void*)*1);
if (lean::is_shared(x_69)) {
 lean::dec(x_69);
 x_199 = lean::box(0);
} else {
 lean::cnstr_release(x_69, 0);
 x_199 = x_69;
}
if (lean::is_scalar(x_199)) {
 x_200 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_200 = x_199;
}
lean::cnstr_set(x_200, 0, x_196);
lean::cnstr_set_scalar(x_200, sizeof(void*)*1, x_198);
x_201 = x_200;
x_202 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_201);
return x_202;
}
}
}
}
obj* _init_l_lean_ir_parse__block___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string(";");
return x_0;
}
}
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__block___spec__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::nat_dec_eq(x_0, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_6; obj* x_7; obj* x_10; obj* x_11; obj* x_12; obj* x_14; 
lean::dec(x_3);
x_6 = lean::mk_nat_obj(1u);
x_7 = lean::nat_sub(x_0, x_6);
lean::dec(x_6);
lean::dec(x_0);
x_14 = l_lean_ir_parse__phi(x_1);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_24; 
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_14, 2);
lean::inc(x_19);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_21 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 lean::cnstr_release(x_14, 1);
 lean::cnstr_release(x_14, 2);
 x_21 = x_14;
}
x_22 = l_lean_ir_parse__block___closed__1;
lean::inc(x_22);
x_24 = l_lean_ir_symbol(x_22, x_17);
if (lean::obj_tag(x_24) == 0)
{
obj* x_25; obj* x_27; obj* x_30; obj* x_32; obj* x_33; obj* x_34; 
x_25 = lean::cnstr_get(x_24, 1);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_24, 2);
lean::inc(x_27);
lean::dec(x_24);
x_30 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_30);
if (lean::is_scalar(x_21)) {
 x_32 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_32 = x_21;
}
lean::cnstr_set(x_32, 0, x_15);
lean::cnstr_set(x_32, 1, x_25);
lean::cnstr_set(x_32, 2, x_30);
x_33 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_27, x_32);
x_34 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_33);
if (lean::obj_tag(x_34) == 0)
{
obj* x_35; obj* x_37; obj* x_39; 
x_35 = lean::cnstr_get(x_34, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_34, 1);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 2);
lean::inc(x_39);
lean::dec(x_34);
x_10 = x_35;
x_11 = x_37;
x_12 = x_39;
goto lbl_13;
}
else
{
obj* x_43; unsigned char x_45; obj* x_46; obj* x_47; obj* x_48; 
lean::dec(x_7);
x_43 = lean::cnstr_get(x_34, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get_scalar<unsigned char>(x_34, sizeof(void*)*1);
if (lean::is_shared(x_34)) {
 lean::dec(x_34);
 x_46 = lean::box(0);
} else {
 lean::cnstr_release(x_34, 0);
 x_46 = x_34;
}
if (lean::is_scalar(x_46)) {
 x_47 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_47 = x_46;
}
lean::cnstr_set(x_47, 0, x_43);
lean::cnstr_set_scalar(x_47, sizeof(void*)*1, x_45);
x_48 = x_47;
return x_48;
}
}
else
{
obj* x_51; unsigned char x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; 
lean::dec(x_15);
lean::dec(x_21);
x_51 = lean::cnstr_get(x_24, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get_scalar<unsigned char>(x_24, sizeof(void*)*1);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_54 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_54 = x_24;
}
if (lean::is_scalar(x_54)) {
 x_55 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_55 = x_54;
}
lean::cnstr_set(x_55, 0, x_51);
lean::cnstr_set_scalar(x_55, sizeof(void*)*1, x_53);
x_56 = x_55;
x_57 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_56);
if (lean::obj_tag(x_57) == 0)
{
obj* x_58; obj* x_60; obj* x_62; 
x_58 = lean::cnstr_get(x_57, 0);
lean::inc(x_58);
x_60 = lean::cnstr_get(x_57, 1);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_57, 2);
lean::inc(x_62);
lean::dec(x_57);
x_10 = x_58;
x_11 = x_60;
x_12 = x_62;
goto lbl_13;
}
else
{
obj* x_66; unsigned char x_68; obj* x_69; obj* x_70; obj* x_71; 
lean::dec(x_7);
x_66 = lean::cnstr_get(x_57, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get_scalar<unsigned char>(x_57, sizeof(void*)*1);
if (lean::is_shared(x_57)) {
 lean::dec(x_57);
 x_69 = lean::box(0);
} else {
 lean::cnstr_release(x_57, 0);
 x_69 = x_57;
}
if (lean::is_scalar(x_69)) {
 x_70 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_70 = x_69;
}
lean::cnstr_set(x_70, 0, x_66);
lean::cnstr_set_scalar(x_70, sizeof(void*)*1, x_68);
x_71 = x_70;
return x_71;
}
}
}
else
{
obj* x_73; unsigned char x_75; obj* x_76; obj* x_77; obj* x_78; 
lean::dec(x_7);
x_73 = lean::cnstr_get(x_14, 0);
lean::inc(x_73);
x_75 = lean::cnstr_get_scalar<unsigned char>(x_14, sizeof(void*)*1);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_76 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_76 = x_14;
}
if (lean::is_scalar(x_76)) {
 x_77 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_77 = x_76;
}
lean::cnstr_set(x_77, 0, x_73);
lean::cnstr_set_scalar(x_77, sizeof(void*)*1, x_75);
x_78 = x_77;
return x_78;
}
lbl_13:
{
obj* x_80; obj* x_81; 
lean::inc(x_11);
x_80 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__block___spec__3(x_7, x_11);
if (lean::obj_tag(x_80) == 0)
{
obj* x_84; 
lean::dec(x_11);
x_84 = lean::box(0);
x_81 = x_84;
goto lbl_82;
}
else
{
obj* x_85; unsigned char x_87; 
x_85 = lean::cnstr_get(x_80, 0);
lean::inc(x_85);
x_87 = lean::cnstr_get_scalar<unsigned char>(x_80, sizeof(void*)*1);
if (x_87 == 0)
{
obj* x_89; obj* x_90; obj* x_93; obj* x_95; obj* x_96; obj* x_98; obj* x_99; obj* x_100; obj* x_101; 
lean::dec(x_80);
x_89 = lean::box(0);
x_90 = lean::cnstr_get(x_85, 2);
lean::inc(x_90);
lean::dec(x_85);
x_93 = l_mjoin___rarg___closed__1;
lean::inc(x_93);
x_95 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_95, 0, x_90);
lean::closure_set(x_95, 1, x_93);
x_96 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_96, 0, x_10);
lean::cnstr_set(x_96, 1, x_89);
lean::inc(x_93);
x_98 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_98, 0, x_95);
lean::closure_set(x_98, 1, x_93);
x_99 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_99, 0, x_98);
x_100 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_100, 0, x_96);
lean::cnstr_set(x_100, 1, x_11);
lean::cnstr_set(x_100, 2, x_99);
x_101 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_100);
return x_101;
}
else
{
obj* x_104; 
lean::dec(x_85);
lean::dec(x_11);
x_104 = lean::box(0);
x_81 = x_104;
goto lbl_82;
}
}
lbl_82:
{
lean::dec(x_81);
if (lean::obj_tag(x_80) == 0)
{
obj* x_106; obj* x_108; obj* x_110; obj* x_112; obj* x_113; obj* x_114; obj* x_116; obj* x_117; obj* x_118; 
x_106 = lean::cnstr_get(x_80, 0);
lean::inc(x_106);
x_108 = lean::cnstr_get(x_80, 1);
lean::inc(x_108);
x_110 = lean::cnstr_get(x_80, 2);
lean::inc(x_110);
if (lean::is_shared(x_80)) {
 lean::dec(x_80);
 x_112 = lean::box(0);
} else {
 lean::cnstr_release(x_80, 0);
 lean::cnstr_release(x_80, 1);
 lean::cnstr_release(x_80, 2);
 x_112 = x_80;
}
x_113 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_113, 0, x_10);
lean::cnstr_set(x_113, 1, x_106);
x_114 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_114);
if (lean::is_scalar(x_112)) {
 x_116 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_116 = x_112;
}
lean::cnstr_set(x_116, 0, x_113);
lean::cnstr_set(x_116, 1, x_108);
lean::cnstr_set(x_116, 2, x_114);
x_117 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_110, x_116);
x_118 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_117);
return x_118;
}
else
{
obj* x_120; unsigned char x_122; obj* x_123; obj* x_124; obj* x_125; obj* x_126; 
lean::dec(x_10);
x_120 = lean::cnstr_get(x_80, 0);
lean::inc(x_120);
x_122 = lean::cnstr_get_scalar<unsigned char>(x_80, sizeof(void*)*1);
if (lean::is_shared(x_80)) {
 lean::dec(x_80);
 x_123 = lean::box(0);
} else {
 lean::cnstr_release(x_80, 0);
 x_123 = x_80;
}
if (lean::is_scalar(x_123)) {
 x_124 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_124 = x_123;
}
lean::cnstr_set(x_124, 0, x_120);
lean::cnstr_set_scalar(x_124, sizeof(void*)*1, x_122);
x_125 = x_124;
x_126 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_125);
return x_126;
}
}
}
}
else
{
obj* x_129; 
lean::dec(x_0);
lean::dec(x_3);
x_129 = l_lean_ir_parse__phi(x_1);
if (lean::obj_tag(x_129) == 0)
{
obj* x_130; obj* x_132; obj* x_134; obj* x_136; obj* x_137; obj* x_139; 
x_130 = lean::cnstr_get(x_129, 0);
lean::inc(x_130);
x_132 = lean::cnstr_get(x_129, 1);
lean::inc(x_132);
x_134 = lean::cnstr_get(x_129, 2);
lean::inc(x_134);
if (lean::is_shared(x_129)) {
 lean::dec(x_129);
 x_136 = lean::box(0);
} else {
 lean::cnstr_release(x_129, 0);
 lean::cnstr_release(x_129, 1);
 lean::cnstr_release(x_129, 2);
 x_136 = x_129;
}
x_137 = l_lean_ir_parse__block___closed__1;
lean::inc(x_137);
x_139 = l_lean_ir_symbol(x_137, x_132);
if (lean::obj_tag(x_139) == 0)
{
obj* x_140; obj* x_142; obj* x_144; obj* x_145; obj* x_147; obj* x_148; obj* x_149; 
x_140 = lean::cnstr_get(x_139, 1);
lean::inc(x_140);
x_142 = lean::cnstr_get(x_139, 2);
lean::inc(x_142);
if (lean::is_shared(x_139)) {
 lean::dec(x_139);
 x_144 = lean::box(0);
} else {
 lean::cnstr_release(x_139, 0);
 lean::cnstr_release(x_139, 1);
 lean::cnstr_release(x_139, 2);
 x_144 = x_139;
}
x_145 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_145);
if (lean::is_scalar(x_136)) {
 x_147 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_147 = x_136;
}
lean::cnstr_set(x_147, 0, x_130);
lean::cnstr_set(x_147, 1, x_140);
lean::cnstr_set(x_147, 2, x_145);
x_148 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_142, x_147);
x_149 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_134, x_148);
if (lean::obj_tag(x_149) == 0)
{
obj* x_150; obj* x_152; obj* x_154; obj* x_157; obj* x_158; obj* x_160; obj* x_161; 
x_150 = lean::cnstr_get(x_149, 0);
lean::inc(x_150);
x_152 = lean::cnstr_get(x_149, 1);
lean::inc(x_152);
x_154 = lean::cnstr_get(x_149, 2);
lean::inc(x_154);
lean::dec(x_149);
x_157 = lean::box(0);
x_158 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_158, 0, x_150);
lean::cnstr_set(x_158, 1, x_157);
lean::inc(x_145);
if (lean::is_scalar(x_144)) {
 x_160 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_160 = x_144;
}
lean::cnstr_set(x_160, 0, x_158);
lean::cnstr_set(x_160, 1, x_152);
lean::cnstr_set(x_160, 2, x_145);
x_161 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_154, x_160);
return x_161;
}
else
{
obj* x_163; unsigned char x_165; obj* x_166; obj* x_167; obj* x_168; 
lean::dec(x_144);
x_163 = lean::cnstr_get(x_149, 0);
lean::inc(x_163);
x_165 = lean::cnstr_get_scalar<unsigned char>(x_149, sizeof(void*)*1);
if (lean::is_shared(x_149)) {
 lean::dec(x_149);
 x_166 = lean::box(0);
} else {
 lean::cnstr_release(x_149, 0);
 x_166 = x_149;
}
if (lean::is_scalar(x_166)) {
 x_167 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_167 = x_166;
}
lean::cnstr_set(x_167, 0, x_163);
lean::cnstr_set_scalar(x_167, sizeof(void*)*1, x_165);
x_168 = x_167;
return x_168;
}
}
else
{
obj* x_170; unsigned char x_172; obj* x_173; obj* x_174; obj* x_175; obj* x_176; 
lean::dec(x_130);
x_170 = lean::cnstr_get(x_139, 0);
lean::inc(x_170);
x_172 = lean::cnstr_get_scalar<unsigned char>(x_139, sizeof(void*)*1);
if (lean::is_shared(x_139)) {
 lean::dec(x_139);
 x_173 = lean::box(0);
} else {
 lean::cnstr_release(x_139, 0);
 x_173 = x_139;
}
if (lean::is_scalar(x_173)) {
 x_174 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_174 = x_173;
}
lean::cnstr_set(x_174, 0, x_170);
lean::cnstr_set_scalar(x_174, sizeof(void*)*1, x_172);
x_175 = x_174;
x_176 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_134, x_175);
if (lean::obj_tag(x_176) == 0)
{
obj* x_177; obj* x_179; obj* x_181; obj* x_184; obj* x_185; obj* x_186; obj* x_188; obj* x_189; 
x_177 = lean::cnstr_get(x_176, 0);
lean::inc(x_177);
x_179 = lean::cnstr_get(x_176, 1);
lean::inc(x_179);
x_181 = lean::cnstr_get(x_176, 2);
lean::inc(x_181);
lean::dec(x_176);
x_184 = lean::box(0);
x_185 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_185, 0, x_177);
lean::cnstr_set(x_185, 1, x_184);
x_186 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_186);
if (lean::is_scalar(x_136)) {
 x_188 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_188 = x_136;
}
lean::cnstr_set(x_188, 0, x_185);
lean::cnstr_set(x_188, 1, x_179);
lean::cnstr_set(x_188, 2, x_186);
x_189 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_181, x_188);
return x_189;
}
else
{
obj* x_191; unsigned char x_193; obj* x_194; obj* x_195; obj* x_196; 
lean::dec(x_136);
x_191 = lean::cnstr_get(x_176, 0);
lean::inc(x_191);
x_193 = lean::cnstr_get_scalar<unsigned char>(x_176, sizeof(void*)*1);
if (lean::is_shared(x_176)) {
 lean::dec(x_176);
 x_194 = lean::box(0);
} else {
 lean::cnstr_release(x_176, 0);
 x_194 = x_176;
}
if (lean::is_scalar(x_194)) {
 x_195 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_195 = x_194;
}
lean::cnstr_set(x_195, 0, x_191);
lean::cnstr_set_scalar(x_195, sizeof(void*)*1, x_193);
x_196 = x_195;
return x_196;
}
}
}
else
{
obj* x_197; unsigned char x_199; obj* x_200; obj* x_201; obj* x_202; 
x_197 = lean::cnstr_get(x_129, 0);
lean::inc(x_197);
x_199 = lean::cnstr_get_scalar<unsigned char>(x_129, sizeof(void*)*1);
if (lean::is_shared(x_129)) {
 lean::dec(x_129);
 x_200 = lean::box(0);
} else {
 lean::cnstr_release(x_129, 0);
 x_200 = x_129;
}
if (lean::is_scalar(x_200)) {
 x_201 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_201 = x_200;
}
lean::cnstr_set(x_201, 0, x_197);
lean::cnstr_set_scalar(x_201, sizeof(void*)*1, x_199);
x_202 = x_201;
return x_202;
}
}
}
}
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__block___spec__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; 
x_1 = lean::string_iterator_remaining(x_0);
x_2 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__block___spec__3(x_1, x_0);
x_3 = l_lean_ir_keyword___closed__1;
lean::inc(x_3);
x_5 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_many___at_lean_ir_parse__block___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::inc(x_0);
x_2 = l_lean_parser_monad__parsec_many1___at_lean_ir_parse__block___spec__2(x_0);
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_0);
return x_2;
}
else
{
obj* x_4; unsigned char x_6; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get_scalar<unsigned char>(x_2, sizeof(void*)*1);
if (x_6 == 0)
{
obj* x_8; obj* x_9; obj* x_12; obj* x_14; obj* x_15; obj* x_16; 
lean::dec(x_2);
x_8 = lean::box(0);
x_9 = lean::cnstr_get(x_4, 2);
lean::inc(x_9);
lean::dec(x_4);
x_12 = l_mjoin___rarg___closed__1;
lean::inc(x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_14, 0, x_9);
lean::closure_set(x_14, 1, x_12);
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_14);
x_16 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_16, 0, x_8);
lean::cnstr_set(x_16, 1, x_0);
lean::cnstr_set(x_16, 2, x_15);
return x_16;
}
else
{
lean::dec(x_0);
lean::dec(x_4);
return x_2;
}
}
}
}
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__block___spec__6(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::nat_dec_eq(x_0, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_6; obj* x_7; obj* x_10; obj* x_11; obj* x_12; obj* x_14; 
lean::dec(x_3);
x_6 = lean::mk_nat_obj(1u);
x_7 = lean::nat_sub(x_0, x_6);
lean::dec(x_6);
lean::dec(x_0);
x_14 = l_lean_ir_parse__instr(x_1);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_24; 
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_14, 2);
lean::inc(x_19);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_21 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 lean::cnstr_release(x_14, 1);
 lean::cnstr_release(x_14, 2);
 x_21 = x_14;
}
x_22 = l_lean_ir_parse__block___closed__1;
lean::inc(x_22);
x_24 = l_lean_ir_symbol(x_22, x_17);
if (lean::obj_tag(x_24) == 0)
{
obj* x_25; obj* x_27; obj* x_30; obj* x_32; obj* x_33; obj* x_34; 
x_25 = lean::cnstr_get(x_24, 1);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_24, 2);
lean::inc(x_27);
lean::dec(x_24);
x_30 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_30);
if (lean::is_scalar(x_21)) {
 x_32 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_32 = x_21;
}
lean::cnstr_set(x_32, 0, x_15);
lean::cnstr_set(x_32, 1, x_25);
lean::cnstr_set(x_32, 2, x_30);
x_33 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_27, x_32);
x_34 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_33);
if (lean::obj_tag(x_34) == 0)
{
obj* x_35; obj* x_37; obj* x_39; 
x_35 = lean::cnstr_get(x_34, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_34, 1);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 2);
lean::inc(x_39);
lean::dec(x_34);
x_10 = x_35;
x_11 = x_37;
x_12 = x_39;
goto lbl_13;
}
else
{
obj* x_43; unsigned char x_45; obj* x_46; obj* x_47; obj* x_48; 
lean::dec(x_7);
x_43 = lean::cnstr_get(x_34, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get_scalar<unsigned char>(x_34, sizeof(void*)*1);
if (lean::is_shared(x_34)) {
 lean::dec(x_34);
 x_46 = lean::box(0);
} else {
 lean::cnstr_release(x_34, 0);
 x_46 = x_34;
}
if (lean::is_scalar(x_46)) {
 x_47 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_47 = x_46;
}
lean::cnstr_set(x_47, 0, x_43);
lean::cnstr_set_scalar(x_47, sizeof(void*)*1, x_45);
x_48 = x_47;
return x_48;
}
}
else
{
obj* x_51; unsigned char x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; 
lean::dec(x_15);
lean::dec(x_21);
x_51 = lean::cnstr_get(x_24, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get_scalar<unsigned char>(x_24, sizeof(void*)*1);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_54 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_54 = x_24;
}
if (lean::is_scalar(x_54)) {
 x_55 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_55 = x_54;
}
lean::cnstr_set(x_55, 0, x_51);
lean::cnstr_set_scalar(x_55, sizeof(void*)*1, x_53);
x_56 = x_55;
x_57 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_56);
if (lean::obj_tag(x_57) == 0)
{
obj* x_58; obj* x_60; obj* x_62; 
x_58 = lean::cnstr_get(x_57, 0);
lean::inc(x_58);
x_60 = lean::cnstr_get(x_57, 1);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_57, 2);
lean::inc(x_62);
lean::dec(x_57);
x_10 = x_58;
x_11 = x_60;
x_12 = x_62;
goto lbl_13;
}
else
{
obj* x_66; unsigned char x_68; obj* x_69; obj* x_70; obj* x_71; 
lean::dec(x_7);
x_66 = lean::cnstr_get(x_57, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get_scalar<unsigned char>(x_57, sizeof(void*)*1);
if (lean::is_shared(x_57)) {
 lean::dec(x_57);
 x_69 = lean::box(0);
} else {
 lean::cnstr_release(x_57, 0);
 x_69 = x_57;
}
if (lean::is_scalar(x_69)) {
 x_70 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_70 = x_69;
}
lean::cnstr_set(x_70, 0, x_66);
lean::cnstr_set_scalar(x_70, sizeof(void*)*1, x_68);
x_71 = x_70;
return x_71;
}
}
}
else
{
obj* x_73; unsigned char x_75; obj* x_76; obj* x_77; obj* x_78; 
lean::dec(x_7);
x_73 = lean::cnstr_get(x_14, 0);
lean::inc(x_73);
x_75 = lean::cnstr_get_scalar<unsigned char>(x_14, sizeof(void*)*1);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_76 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_76 = x_14;
}
if (lean::is_scalar(x_76)) {
 x_77 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_77 = x_76;
}
lean::cnstr_set(x_77, 0, x_73);
lean::cnstr_set_scalar(x_77, sizeof(void*)*1, x_75);
x_78 = x_77;
return x_78;
}
lbl_13:
{
obj* x_80; obj* x_81; 
lean::inc(x_11);
x_80 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__block___spec__6(x_7, x_11);
if (lean::obj_tag(x_80) == 0)
{
obj* x_84; 
lean::dec(x_11);
x_84 = lean::box(0);
x_81 = x_84;
goto lbl_82;
}
else
{
obj* x_85; unsigned char x_87; 
x_85 = lean::cnstr_get(x_80, 0);
lean::inc(x_85);
x_87 = lean::cnstr_get_scalar<unsigned char>(x_80, sizeof(void*)*1);
if (x_87 == 0)
{
obj* x_89; obj* x_90; obj* x_93; obj* x_95; obj* x_96; obj* x_98; obj* x_99; obj* x_100; obj* x_101; 
lean::dec(x_80);
x_89 = lean::box(0);
x_90 = lean::cnstr_get(x_85, 2);
lean::inc(x_90);
lean::dec(x_85);
x_93 = l_mjoin___rarg___closed__1;
lean::inc(x_93);
x_95 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_95, 0, x_90);
lean::closure_set(x_95, 1, x_93);
x_96 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_96, 0, x_10);
lean::cnstr_set(x_96, 1, x_89);
lean::inc(x_93);
x_98 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_98, 0, x_95);
lean::closure_set(x_98, 1, x_93);
x_99 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_99, 0, x_98);
x_100 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_100, 0, x_96);
lean::cnstr_set(x_100, 1, x_11);
lean::cnstr_set(x_100, 2, x_99);
x_101 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_100);
return x_101;
}
else
{
obj* x_104; 
lean::dec(x_85);
lean::dec(x_11);
x_104 = lean::box(0);
x_81 = x_104;
goto lbl_82;
}
}
lbl_82:
{
lean::dec(x_81);
if (lean::obj_tag(x_80) == 0)
{
obj* x_106; obj* x_108; obj* x_110; obj* x_112; obj* x_113; obj* x_114; obj* x_116; obj* x_117; obj* x_118; 
x_106 = lean::cnstr_get(x_80, 0);
lean::inc(x_106);
x_108 = lean::cnstr_get(x_80, 1);
lean::inc(x_108);
x_110 = lean::cnstr_get(x_80, 2);
lean::inc(x_110);
if (lean::is_shared(x_80)) {
 lean::dec(x_80);
 x_112 = lean::box(0);
} else {
 lean::cnstr_release(x_80, 0);
 lean::cnstr_release(x_80, 1);
 lean::cnstr_release(x_80, 2);
 x_112 = x_80;
}
x_113 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_113, 0, x_10);
lean::cnstr_set(x_113, 1, x_106);
x_114 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_114);
if (lean::is_scalar(x_112)) {
 x_116 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_116 = x_112;
}
lean::cnstr_set(x_116, 0, x_113);
lean::cnstr_set(x_116, 1, x_108);
lean::cnstr_set(x_116, 2, x_114);
x_117 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_110, x_116);
x_118 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_117);
return x_118;
}
else
{
obj* x_120; unsigned char x_122; obj* x_123; obj* x_124; obj* x_125; obj* x_126; 
lean::dec(x_10);
x_120 = lean::cnstr_get(x_80, 0);
lean::inc(x_120);
x_122 = lean::cnstr_get_scalar<unsigned char>(x_80, sizeof(void*)*1);
if (lean::is_shared(x_80)) {
 lean::dec(x_80);
 x_123 = lean::box(0);
} else {
 lean::cnstr_release(x_80, 0);
 x_123 = x_80;
}
if (lean::is_scalar(x_123)) {
 x_124 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_124 = x_123;
}
lean::cnstr_set(x_124, 0, x_120);
lean::cnstr_set_scalar(x_124, sizeof(void*)*1, x_122);
x_125 = x_124;
x_126 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_125);
return x_126;
}
}
}
}
else
{
obj* x_129; 
lean::dec(x_0);
lean::dec(x_3);
x_129 = l_lean_ir_parse__instr(x_1);
if (lean::obj_tag(x_129) == 0)
{
obj* x_130; obj* x_132; obj* x_134; obj* x_136; obj* x_137; obj* x_139; 
x_130 = lean::cnstr_get(x_129, 0);
lean::inc(x_130);
x_132 = lean::cnstr_get(x_129, 1);
lean::inc(x_132);
x_134 = lean::cnstr_get(x_129, 2);
lean::inc(x_134);
if (lean::is_shared(x_129)) {
 lean::dec(x_129);
 x_136 = lean::box(0);
} else {
 lean::cnstr_release(x_129, 0);
 lean::cnstr_release(x_129, 1);
 lean::cnstr_release(x_129, 2);
 x_136 = x_129;
}
x_137 = l_lean_ir_parse__block___closed__1;
lean::inc(x_137);
x_139 = l_lean_ir_symbol(x_137, x_132);
if (lean::obj_tag(x_139) == 0)
{
obj* x_140; obj* x_142; obj* x_144; obj* x_145; obj* x_147; obj* x_148; obj* x_149; 
x_140 = lean::cnstr_get(x_139, 1);
lean::inc(x_140);
x_142 = lean::cnstr_get(x_139, 2);
lean::inc(x_142);
if (lean::is_shared(x_139)) {
 lean::dec(x_139);
 x_144 = lean::box(0);
} else {
 lean::cnstr_release(x_139, 0);
 lean::cnstr_release(x_139, 1);
 lean::cnstr_release(x_139, 2);
 x_144 = x_139;
}
x_145 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_145);
if (lean::is_scalar(x_136)) {
 x_147 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_147 = x_136;
}
lean::cnstr_set(x_147, 0, x_130);
lean::cnstr_set(x_147, 1, x_140);
lean::cnstr_set(x_147, 2, x_145);
x_148 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_142, x_147);
x_149 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_134, x_148);
if (lean::obj_tag(x_149) == 0)
{
obj* x_150; obj* x_152; obj* x_154; obj* x_157; obj* x_158; obj* x_160; obj* x_161; 
x_150 = lean::cnstr_get(x_149, 0);
lean::inc(x_150);
x_152 = lean::cnstr_get(x_149, 1);
lean::inc(x_152);
x_154 = lean::cnstr_get(x_149, 2);
lean::inc(x_154);
lean::dec(x_149);
x_157 = lean::box(0);
x_158 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_158, 0, x_150);
lean::cnstr_set(x_158, 1, x_157);
lean::inc(x_145);
if (lean::is_scalar(x_144)) {
 x_160 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_160 = x_144;
}
lean::cnstr_set(x_160, 0, x_158);
lean::cnstr_set(x_160, 1, x_152);
lean::cnstr_set(x_160, 2, x_145);
x_161 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_154, x_160);
return x_161;
}
else
{
obj* x_163; unsigned char x_165; obj* x_166; obj* x_167; obj* x_168; 
lean::dec(x_144);
x_163 = lean::cnstr_get(x_149, 0);
lean::inc(x_163);
x_165 = lean::cnstr_get_scalar<unsigned char>(x_149, sizeof(void*)*1);
if (lean::is_shared(x_149)) {
 lean::dec(x_149);
 x_166 = lean::box(0);
} else {
 lean::cnstr_release(x_149, 0);
 x_166 = x_149;
}
if (lean::is_scalar(x_166)) {
 x_167 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_167 = x_166;
}
lean::cnstr_set(x_167, 0, x_163);
lean::cnstr_set_scalar(x_167, sizeof(void*)*1, x_165);
x_168 = x_167;
return x_168;
}
}
else
{
obj* x_170; unsigned char x_172; obj* x_173; obj* x_174; obj* x_175; obj* x_176; 
lean::dec(x_130);
x_170 = lean::cnstr_get(x_139, 0);
lean::inc(x_170);
x_172 = lean::cnstr_get_scalar<unsigned char>(x_139, sizeof(void*)*1);
if (lean::is_shared(x_139)) {
 lean::dec(x_139);
 x_173 = lean::box(0);
} else {
 lean::cnstr_release(x_139, 0);
 x_173 = x_139;
}
if (lean::is_scalar(x_173)) {
 x_174 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_174 = x_173;
}
lean::cnstr_set(x_174, 0, x_170);
lean::cnstr_set_scalar(x_174, sizeof(void*)*1, x_172);
x_175 = x_174;
x_176 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_134, x_175);
if (lean::obj_tag(x_176) == 0)
{
obj* x_177; obj* x_179; obj* x_181; obj* x_184; obj* x_185; obj* x_186; obj* x_188; obj* x_189; 
x_177 = lean::cnstr_get(x_176, 0);
lean::inc(x_177);
x_179 = lean::cnstr_get(x_176, 1);
lean::inc(x_179);
x_181 = lean::cnstr_get(x_176, 2);
lean::inc(x_181);
lean::dec(x_176);
x_184 = lean::box(0);
x_185 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_185, 0, x_177);
lean::cnstr_set(x_185, 1, x_184);
x_186 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_186);
if (lean::is_scalar(x_136)) {
 x_188 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_188 = x_136;
}
lean::cnstr_set(x_188, 0, x_185);
lean::cnstr_set(x_188, 1, x_179);
lean::cnstr_set(x_188, 2, x_186);
x_189 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_181, x_188);
return x_189;
}
else
{
obj* x_191; unsigned char x_193; obj* x_194; obj* x_195; obj* x_196; 
lean::dec(x_136);
x_191 = lean::cnstr_get(x_176, 0);
lean::inc(x_191);
x_193 = lean::cnstr_get_scalar<unsigned char>(x_176, sizeof(void*)*1);
if (lean::is_shared(x_176)) {
 lean::dec(x_176);
 x_194 = lean::box(0);
} else {
 lean::cnstr_release(x_176, 0);
 x_194 = x_176;
}
if (lean::is_scalar(x_194)) {
 x_195 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_195 = x_194;
}
lean::cnstr_set(x_195, 0, x_191);
lean::cnstr_set_scalar(x_195, sizeof(void*)*1, x_193);
x_196 = x_195;
return x_196;
}
}
}
else
{
obj* x_197; unsigned char x_199; obj* x_200; obj* x_201; obj* x_202; 
x_197 = lean::cnstr_get(x_129, 0);
lean::inc(x_197);
x_199 = lean::cnstr_get_scalar<unsigned char>(x_129, sizeof(void*)*1);
if (lean::is_shared(x_129)) {
 lean::dec(x_129);
 x_200 = lean::box(0);
} else {
 lean::cnstr_release(x_129, 0);
 x_200 = x_129;
}
if (lean::is_scalar(x_200)) {
 x_201 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_201 = x_200;
}
lean::cnstr_set(x_201, 0, x_197);
lean::cnstr_set_scalar(x_201, sizeof(void*)*1, x_199);
x_202 = x_201;
return x_202;
}
}
}
}
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__block___spec__5(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; 
x_1 = lean::string_iterator_remaining(x_0);
x_2 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__block___spec__6(x_1, x_0);
x_3 = l_lean_ir_keyword___closed__1;
lean::inc(x_3);
x_5 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_many___at_lean_ir_parse__block___spec__4(obj* x_0) {
_start:
{
obj* x_2; 
lean::inc(x_0);
x_2 = l_lean_parser_monad__parsec_many1___at_lean_ir_parse__block___spec__5(x_0);
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_0);
return x_2;
}
else
{
obj* x_4; unsigned char x_6; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get_scalar<unsigned char>(x_2, sizeof(void*)*1);
if (x_6 == 0)
{
obj* x_8; obj* x_9; obj* x_12; obj* x_14; obj* x_15; obj* x_16; 
lean::dec(x_2);
x_8 = lean::box(0);
x_9 = lean::cnstr_get(x_4, 2);
lean::inc(x_9);
lean::dec(x_4);
x_12 = l_mjoin___rarg___closed__1;
lean::inc(x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_14, 0, x_9);
lean::closure_set(x_14, 1, x_12);
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_14);
x_16 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_16, 0, x_8);
lean::cnstr_set(x_16, 1, x_0);
lean::cnstr_set(x_16, 2, x_15);
return x_16;
}
else
{
lean::dec(x_0);
lean::dec(x_4);
return x_2;
}
}
}
}
obj* l_lean_ir_parse__arg(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; 
x_1 = l_prod_has__repr___rarg___closed__1;
lean::inc(x_1);
x_3 = l_lean_ir_symbol(x_1, x_0);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; 
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 2);
lean::inc(x_6);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_release(x_3, 1);
 lean::cnstr_release(x_3, 2);
 x_8 = x_3;
}
x_9 = l_lean_ir_parse__var(x_4);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; obj* x_12; obj* x_14; obj* x_17; obj* x_19; 
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_9, 2);
lean::inc(x_14);
lean::dec(x_9);
x_17 = l_lean_ir_parse__typed__assignment___closed__1;
lean::inc(x_17);
x_19 = l_lean_ir_symbol(x_17, x_12);
if (lean::obj_tag(x_19) == 0)
{
obj* x_20; obj* x_22; obj* x_25; obj* x_26; obj* x_29; 
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_19, 2);
lean::inc(x_22);
lean::dec(x_19);
x_25 = l_lean_ir_parse__typed__assignment___closed__2;
x_26 = l_lean_ir_str2type;
lean::inc(x_26);
lean::inc(x_25);
x_29 = l_lean_ir_parse__key2val___main___rarg(x_25, x_26, x_20);
if (lean::obj_tag(x_29) == 0)
{
obj* x_30; obj* x_32; obj* x_34; obj* x_37; obj* x_39; 
x_30 = lean::cnstr_get(x_29, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_29, 1);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_29, 2);
lean::inc(x_34);
lean::dec(x_29);
x_37 = l_option_has__repr___rarg___closed__3;
lean::inc(x_37);
x_39 = l_lean_ir_symbol(x_37, x_32);
if (lean::obj_tag(x_39) == 0)
{
obj* x_40; obj* x_42; obj* x_45; unsigned char x_46; obj* x_48; obj* x_49; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; 
x_40 = lean::cnstr_get(x_39, 1);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_39, 2);
lean::inc(x_42);
lean::dec(x_39);
x_45 = lean::alloc_cnstr(0, 1, 1);
lean::cnstr_set(x_45, 0, x_10);
x_46 = lean::unbox(x_30);
lean::dec(x_30);
lean::cnstr_set_scalar(x_45, sizeof(void*)*1, x_46);
x_48 = x_45;
x_49 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_49);
if (lean::is_scalar(x_8)) {
 x_51 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_51 = x_8;
}
lean::cnstr_set(x_51, 0, x_48);
lean::cnstr_set(x_51, 1, x_40);
lean::cnstr_set(x_51, 2, x_49);
x_52 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_42, x_51);
x_53 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_34, x_52);
x_54 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_22, x_53);
x_55 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_54);
x_56 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_55);
return x_56;
}
else
{
obj* x_60; unsigned char x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; 
lean::dec(x_8);
lean::dec(x_10);
lean::dec(x_30);
x_60 = lean::cnstr_get(x_39, 0);
lean::inc(x_60);
x_62 = lean::cnstr_get_scalar<unsigned char>(x_39, sizeof(void*)*1);
if (lean::is_shared(x_39)) {
 lean::dec(x_39);
 x_63 = lean::box(0);
} else {
 lean::cnstr_release(x_39, 0);
 x_63 = x_39;
}
if (lean::is_scalar(x_63)) {
 x_64 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_64 = x_63;
}
lean::cnstr_set(x_64, 0, x_60);
lean::cnstr_set_scalar(x_64, sizeof(void*)*1, x_62);
x_65 = x_64;
x_66 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_34, x_65);
x_67 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_22, x_66);
x_68 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_67);
x_69 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_68);
return x_69;
}
}
else
{
obj* x_72; unsigned char x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; 
lean::dec(x_8);
lean::dec(x_10);
x_72 = lean::cnstr_get(x_29, 0);
lean::inc(x_72);
x_74 = lean::cnstr_get_scalar<unsigned char>(x_29, sizeof(void*)*1);
if (lean::is_shared(x_29)) {
 lean::dec(x_29);
 x_75 = lean::box(0);
} else {
 lean::cnstr_release(x_29, 0);
 x_75 = x_29;
}
if (lean::is_scalar(x_75)) {
 x_76 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_76 = x_75;
}
lean::cnstr_set(x_76, 0, x_72);
lean::cnstr_set_scalar(x_76, sizeof(void*)*1, x_74);
x_77 = x_76;
x_78 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_22, x_77);
x_79 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_78);
x_80 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_79);
return x_80;
}
}
else
{
obj* x_83; unsigned char x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; 
lean::dec(x_8);
lean::dec(x_10);
x_83 = lean::cnstr_get(x_19, 0);
lean::inc(x_83);
x_85 = lean::cnstr_get_scalar<unsigned char>(x_19, sizeof(void*)*1);
if (lean::is_shared(x_19)) {
 lean::dec(x_19);
 x_86 = lean::box(0);
} else {
 lean::cnstr_release(x_19, 0);
 x_86 = x_19;
}
if (lean::is_scalar(x_86)) {
 x_87 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_87 = x_86;
}
lean::cnstr_set(x_87, 0, x_83);
lean::cnstr_set_scalar(x_87, sizeof(void*)*1, x_85);
x_88 = x_87;
x_89 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_88);
x_90 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_89);
return x_90;
}
}
else
{
obj* x_92; unsigned char x_94; obj* x_95; obj* x_96; obj* x_97; obj* x_98; 
lean::dec(x_8);
x_92 = lean::cnstr_get(x_9, 0);
lean::inc(x_92);
x_94 = lean::cnstr_get_scalar<unsigned char>(x_9, sizeof(void*)*1);
if (lean::is_shared(x_9)) {
 lean::dec(x_9);
 x_95 = lean::box(0);
} else {
 lean::cnstr_release(x_9, 0);
 x_95 = x_9;
}
if (lean::is_scalar(x_95)) {
 x_96 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_96 = x_95;
}
lean::cnstr_set(x_96, 0, x_92);
lean::cnstr_set_scalar(x_96, sizeof(void*)*1, x_94);
x_97 = x_96;
x_98 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_97);
return x_98;
}
}
else
{
obj* x_99; unsigned char x_101; obj* x_102; obj* x_103; obj* x_104; 
x_99 = lean::cnstr_get(x_3, 0);
lean::inc(x_99);
x_101 = lean::cnstr_get_scalar<unsigned char>(x_3, sizeof(void*)*1);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_102 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 x_102 = x_3;
}
if (lean::is_scalar(x_102)) {
 x_103 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_103 = x_102;
}
lean::cnstr_set(x_103, 0, x_99);
lean::cnstr_set_scalar(x_103, sizeof(void*)*1, x_101);
x_104 = x_103;
return x_104;
}
}
}
obj* l_lean_ir_parse__header(unsigned char x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_ir_parse__fnid(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_14; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 2);
lean::inc(x_7);
if (lean::is_shared(x_2)) {
 lean::dec(x_2);
 x_9 = lean::box(0);
} else {
 lean::cnstr_release(x_2, 0);
 lean::cnstr_release(x_2, 1);
 lean::cnstr_release(x_2, 2);
 x_9 = x_2;
}
if (x_0 == 0)
{
obj* x_16; 
x_16 = lean::box(0);
x_14 = x_16;
goto lbl_15;
}
else
{
obj* x_17; obj* x_18; 
x_17 = lean::box(0);
x_18 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_18);
x_10 = x_17;
x_11 = x_5;
x_12 = x_18;
goto lbl_13;
}
lbl_13:
{
obj* x_20; obj* x_22; 
x_20 = l_lean_ir_parse__typed__assignment___closed__1;
lean::inc(x_20);
x_22 = l_lean_ir_symbol(x_20, x_11);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; obj* x_25; obj* x_27; obj* x_28; obj* x_29; obj* x_32; 
x_23 = lean::cnstr_get(x_22, 1);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_22, 2);
lean::inc(x_25);
if (lean::is_shared(x_22)) {
 lean::dec(x_22);
 x_27 = lean::box(0);
} else {
 lean::cnstr_release(x_22, 0);
 lean::cnstr_release(x_22, 1);
 lean::cnstr_release(x_22, 2);
 x_27 = x_22;
}
x_28 = l_lean_ir_parse__typed__assignment___closed__2;
x_29 = l_lean_ir_str2type;
lean::inc(x_29);
lean::inc(x_28);
x_32 = l_lean_ir_parse__key2val___main___rarg(x_28, x_29, x_23);
if (lean::obj_tag(x_32) == 0)
{
obj* x_33; obj* x_35; obj* x_37; obj* x_40; obj* x_42; obj* x_43; obj* x_44; 
x_33 = lean::cnstr_get(x_32, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_32, 1);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_32, 2);
lean::inc(x_37);
lean::dec(x_32);
x_40 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_40);
if (lean::is_scalar(x_9)) {
 x_42 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_42 = x_9;
}
lean::cnstr_set(x_42, 0, x_33);
lean::cnstr_set(x_42, 1, x_35);
lean::cnstr_set(x_42, 2, x_40);
x_43 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_37, x_42);
x_44 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_25, x_43);
if (lean::obj_tag(x_44) == 0)
{
obj* x_45; obj* x_47; obj* x_49; obj* x_52; obj* x_53; obj* x_55; obj* x_56; obj* x_57; obj* x_58; 
x_45 = lean::cnstr_get(x_44, 0);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_44, 1);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_44, 2);
lean::inc(x_49);
lean::dec(x_44);
x_52 = lean::alloc_cnstr(0, 3, 1);
lean::cnstr_set(x_52, 0, x_3);
lean::cnstr_set(x_52, 1, x_10);
lean::cnstr_set(x_52, 2, x_45);
lean::cnstr_set_scalar(x_52, sizeof(void*)*3, x_0);
x_53 = x_52;
lean::inc(x_40);
if (lean::is_scalar(x_27)) {
 x_55 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_55 = x_27;
}
lean::cnstr_set(x_55, 0, x_53);
lean::cnstr_set(x_55, 1, x_47);
lean::cnstr_set(x_55, 2, x_40);
x_56 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_49, x_55);
x_57 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_56);
x_58 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_57);
return x_58;
}
else
{
obj* x_62; unsigned char x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; 
lean::dec(x_27);
lean::dec(x_3);
lean::dec(x_10);
x_62 = lean::cnstr_get(x_44, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get_scalar<unsigned char>(x_44, sizeof(void*)*1);
if (lean::is_shared(x_44)) {
 lean::dec(x_44);
 x_65 = lean::box(0);
} else {
 lean::cnstr_release(x_44, 0);
 x_65 = x_44;
}
if (lean::is_scalar(x_65)) {
 x_66 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_66 = x_65;
}
lean::cnstr_set(x_66, 0, x_62);
lean::cnstr_set_scalar(x_66, sizeof(void*)*1, x_64);
x_67 = x_66;
x_68 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_67);
x_69 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_68);
return x_69;
}
}
else
{
obj* x_71; unsigned char x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; 
lean::dec(x_27);
x_71 = lean::cnstr_get(x_32, 0);
lean::inc(x_71);
x_73 = lean::cnstr_get_scalar<unsigned char>(x_32, sizeof(void*)*1);
if (lean::is_shared(x_32)) {
 lean::dec(x_32);
 x_74 = lean::box(0);
} else {
 lean::cnstr_release(x_32, 0);
 x_74 = x_32;
}
if (lean::is_scalar(x_74)) {
 x_75 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_75 = x_74;
}
lean::cnstr_set(x_75, 0, x_71);
lean::cnstr_set_scalar(x_75, sizeof(void*)*1, x_73);
x_76 = x_75;
x_77 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_25, x_76);
if (lean::obj_tag(x_77) == 0)
{
obj* x_78; obj* x_80; obj* x_82; obj* x_85; obj* x_86; obj* x_87; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
x_78 = lean::cnstr_get(x_77, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_77, 1);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_77, 2);
lean::inc(x_82);
lean::dec(x_77);
x_85 = lean::alloc_cnstr(0, 3, 1);
lean::cnstr_set(x_85, 0, x_3);
lean::cnstr_set(x_85, 1, x_10);
lean::cnstr_set(x_85, 2, x_78);
lean::cnstr_set_scalar(x_85, sizeof(void*)*3, x_0);
x_86 = x_85;
x_87 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_87);
if (lean::is_scalar(x_9)) {
 x_89 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_89 = x_9;
}
lean::cnstr_set(x_89, 0, x_86);
lean::cnstr_set(x_89, 1, x_80);
lean::cnstr_set(x_89, 2, x_87);
x_90 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_82, x_89);
x_91 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_90);
x_92 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_91);
return x_92;
}
else
{
obj* x_96; unsigned char x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; 
lean::dec(x_9);
lean::dec(x_3);
lean::dec(x_10);
x_96 = lean::cnstr_get(x_77, 0);
lean::inc(x_96);
x_98 = lean::cnstr_get_scalar<unsigned char>(x_77, sizeof(void*)*1);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_99 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 x_99 = x_77;
}
if (lean::is_scalar(x_99)) {
 x_100 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_100 = x_99;
}
lean::cnstr_set(x_100, 0, x_96);
lean::cnstr_set_scalar(x_100, sizeof(void*)*1, x_98);
x_101 = x_100;
x_102 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_101);
x_103 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_102);
return x_103;
}
}
}
else
{
obj* x_107; unsigned char x_109; obj* x_110; obj* x_111; obj* x_112; obj* x_113; obj* x_114; 
lean::dec(x_9);
lean::dec(x_3);
lean::dec(x_10);
x_107 = lean::cnstr_get(x_22, 0);
lean::inc(x_107);
x_109 = lean::cnstr_get_scalar<unsigned char>(x_22, sizeof(void*)*1);
if (lean::is_shared(x_22)) {
 lean::dec(x_22);
 x_110 = lean::box(0);
} else {
 lean::cnstr_release(x_22, 0);
 x_110 = x_22;
}
if (lean::is_scalar(x_110)) {
 x_111 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_111 = x_110;
}
lean::cnstr_set(x_111, 0, x_107);
lean::cnstr_set_scalar(x_111, sizeof(void*)*1, x_109);
x_112 = x_111;
x_113 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_112);
x_114 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_113);
return x_114;
}
}
lbl_15:
{
obj* x_116; 
lean::dec(x_14);
x_116 = l_lean_parser_monad__parsec_many___at_lean_ir_parse__header___spec__1(x_5);
if (lean::obj_tag(x_116) == 0)
{
obj* x_117; obj* x_119; obj* x_121; 
x_117 = lean::cnstr_get(x_116, 0);
lean::inc(x_117);
x_119 = lean::cnstr_get(x_116, 1);
lean::inc(x_119);
x_121 = lean::cnstr_get(x_116, 2);
lean::inc(x_121);
lean::dec(x_116);
x_10 = x_117;
x_11 = x_119;
x_12 = x_121;
goto lbl_13;
}
else
{
obj* x_126; unsigned char x_128; obj* x_129; obj* x_130; obj* x_131; obj* x_132; 
lean::dec(x_9);
lean::dec(x_3);
x_126 = lean::cnstr_get(x_116, 0);
lean::inc(x_126);
x_128 = lean::cnstr_get_scalar<unsigned char>(x_116, sizeof(void*)*1);
if (lean::is_shared(x_116)) {
 lean::dec(x_116);
 x_129 = lean::box(0);
} else {
 lean::cnstr_release(x_116, 0);
 x_129 = x_116;
}
if (lean::is_scalar(x_129)) {
 x_130 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_130 = x_129;
}
lean::cnstr_set(x_130, 0, x_126);
lean::cnstr_set_scalar(x_130, sizeof(void*)*1, x_128);
x_131 = x_130;
x_132 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_131);
return x_132;
}
}
}
else
{
obj* x_133; unsigned char x_135; obj* x_136; obj* x_137; obj* x_138; 
x_133 = lean::cnstr_get(x_2, 0);
lean::inc(x_133);
x_135 = lean::cnstr_get_scalar<unsigned char>(x_2, sizeof(void*)*1);
if (lean::is_shared(x_2)) {
 lean::dec(x_2);
 x_136 = lean::box(0);
} else {
 lean::cnstr_release(x_2, 0);
 x_136 = x_2;
}
if (lean::is_scalar(x_136)) {
 x_137 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_137 = x_136;
}
lean::cnstr_set(x_137, 0, x_133);
lean::cnstr_set_scalar(x_137, sizeof(void*)*1, x_135);
x_138 = x_137;
return x_138;
}
}
}
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__header___spec__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::nat_dec_eq(x_0, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_6; 
lean::dec(x_3);
x_6 = l_lean_ir_parse__arg(x_1);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_19; obj* x_20; 
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 2);
lean::inc(x_11);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_13 = x_6;
}
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
lean::inc(x_9);
x_19 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__header___spec__3(x_15, x_9);
if (lean::obj_tag(x_19) == 0)
{
obj* x_23; 
lean::dec(x_9);
x_23 = lean::box(0);
x_20 = x_23;
goto lbl_21;
}
else
{
obj* x_24; unsigned char x_26; 
x_24 = lean::cnstr_get(x_19, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get_scalar<unsigned char>(x_19, sizeof(void*)*1);
if (x_26 == 0)
{
obj* x_29; obj* x_30; obj* x_33; obj* x_35; obj* x_36; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
lean::dec(x_13);
lean::dec(x_19);
x_29 = lean::box(0);
x_30 = lean::cnstr_get(x_24, 2);
lean::inc(x_30);
lean::dec(x_24);
x_33 = l_mjoin___rarg___closed__1;
lean::inc(x_33);
x_35 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_35, 0, x_30);
lean::closure_set(x_35, 1, x_33);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_7);
lean::cnstr_set(x_36, 1, x_29);
lean::inc(x_33);
x_38 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_38, 0, x_35);
lean::closure_set(x_38, 1, x_33);
x_39 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_39, 0, x_38);
x_40 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_40, 0, x_36);
lean::cnstr_set(x_40, 1, x_9);
lean::cnstr_set(x_40, 2, x_39);
x_41 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_40);
return x_41;
}
else
{
obj* x_44; 
lean::dec(x_9);
lean::dec(x_24);
x_44 = lean::box(0);
x_20 = x_44;
goto lbl_21;
}
}
lbl_21:
{
lean::dec(x_20);
if (lean::obj_tag(x_19) == 0)
{
obj* x_46; obj* x_48; obj* x_50; obj* x_53; obj* x_54; obj* x_56; obj* x_57; obj* x_58; 
x_46 = lean::cnstr_get(x_19, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_19, 1);
lean::inc(x_48);
x_50 = lean::cnstr_get(x_19, 2);
lean::inc(x_50);
lean::dec(x_19);
x_53 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_53, 0, x_7);
lean::cnstr_set(x_53, 1, x_46);
x_54 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_54);
if (lean::is_scalar(x_13)) {
 x_56 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_56 = x_13;
}
lean::cnstr_set(x_56, 0, x_53);
lean::cnstr_set(x_56, 1, x_48);
lean::cnstr_set(x_56, 2, x_54);
x_57 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_50, x_56);
x_58 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_57);
return x_58;
}
else
{
obj* x_61; unsigned char x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
lean::dec(x_13);
lean::dec(x_7);
x_61 = lean::cnstr_get(x_19, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get_scalar<unsigned char>(x_19, sizeof(void*)*1);
if (lean::is_shared(x_19)) {
 lean::dec(x_19);
 x_64 = lean::box(0);
} else {
 lean::cnstr_release(x_19, 0);
 x_64 = x_19;
}
if (lean::is_scalar(x_64)) {
 x_65 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_65 = x_64;
}
lean::cnstr_set(x_65, 0, x_61);
lean::cnstr_set_scalar(x_65, sizeof(void*)*1, x_63);
x_66 = x_65;
x_67 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_66);
return x_67;
}
}
}
else
{
obj* x_69; unsigned char x_71; obj* x_72; obj* x_73; obj* x_74; 
lean::dec(x_0);
x_69 = lean::cnstr_get(x_6, 0);
lean::inc(x_69);
x_71 = lean::cnstr_get_scalar<unsigned char>(x_6, sizeof(void*)*1);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_72 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 x_72 = x_6;
}
if (lean::is_scalar(x_72)) {
 x_73 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_73 = x_72;
}
lean::cnstr_set(x_73, 0, x_69);
lean::cnstr_set_scalar(x_73, sizeof(void*)*1, x_71);
x_74 = x_73;
return x_74;
}
}
else
{
obj* x_77; 
lean::dec(x_0);
lean::dec(x_3);
x_77 = l_lean_ir_parse__arg(x_1);
if (lean::obj_tag(x_77) == 0)
{
obj* x_78; obj* x_80; obj* x_82; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_89; obj* x_90; 
x_78 = lean::cnstr_get(x_77, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_77, 1);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_77, 2);
lean::inc(x_82);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_84 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 lean::cnstr_release(x_77, 1);
 lean::cnstr_release(x_77, 2);
 x_84 = x_77;
}
x_85 = lean::box(0);
x_86 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_86, 0, x_78);
lean::cnstr_set(x_86, 1, x_85);
x_87 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_87);
if (lean::is_scalar(x_84)) {
 x_89 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_89 = x_84;
}
lean::cnstr_set(x_89, 0, x_86);
lean::cnstr_set(x_89, 1, x_80);
lean::cnstr_set(x_89, 2, x_87);
x_90 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_82, x_89);
return x_90;
}
else
{
obj* x_91; unsigned char x_93; obj* x_94; obj* x_95; obj* x_96; 
x_91 = lean::cnstr_get(x_77, 0);
lean::inc(x_91);
x_93 = lean::cnstr_get_scalar<unsigned char>(x_77, sizeof(void*)*1);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_94 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 x_94 = x_77;
}
if (lean::is_scalar(x_94)) {
 x_95 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_95 = x_94;
}
lean::cnstr_set(x_95, 0, x_91);
lean::cnstr_set_scalar(x_95, sizeof(void*)*1, x_93);
x_96 = x_95;
return x_96;
}
}
}
}
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__header___spec__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; 
x_1 = lean::string_iterator_remaining(x_0);
x_2 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__header___spec__3(x_1, x_0);
x_3 = l_lean_ir_keyword___closed__1;
lean::inc(x_3);
x_5 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_many___at_lean_ir_parse__header___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::inc(x_0);
x_2 = l_lean_parser_monad__parsec_many1___at_lean_ir_parse__header___spec__2(x_0);
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_0);
return x_2;
}
else
{
obj* x_4; unsigned char x_6; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get_scalar<unsigned char>(x_2, sizeof(void*)*1);
if (x_6 == 0)
{
obj* x_8; obj* x_9; obj* x_12; obj* x_14; obj* x_15; obj* x_16; 
lean::dec(x_2);
x_8 = lean::box(0);
x_9 = lean::cnstr_get(x_4, 2);
lean::inc(x_9);
lean::dec(x_4);
x_12 = l_mjoin___rarg___closed__1;
lean::inc(x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_14, 0, x_9);
lean::closure_set(x_14, 1, x_12);
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_14);
x_16 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_16, 0, x_8);
lean::cnstr_set(x_16, 1, x_0);
lean::cnstr_set(x_16, 2, x_15);
return x_16;
}
else
{
lean::dec(x_0);
lean::dec(x_4);
return x_2;
}
}
}
}
obj* l_lean_ir_parse__header___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned char x_2; obj* x_3; 
x_2 = lean::unbox(x_0);
x_3 = l_lean_ir_parse__header(x_2, x_1);
return x_3;
}
}
obj* l_lean_ir_parse__def(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; obj* x_7; 
x_5 = l_lean_ir_parse__def___closed__1;
lean::inc(x_5);
x_7 = l_lean_ir_keyword(x_5, x_0);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_10; obj* x_12; unsigned char x_13; obj* x_14; 
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 2);
lean::inc(x_10);
if (lean::is_shared(x_7)) {
 lean::dec(x_7);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 lean::cnstr_release(x_7, 2);
 x_12 = x_7;
}
x_13 = 0;
x_14 = l_lean_ir_parse__header(x_13, x_8);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_17; obj* x_19; obj* x_22; obj* x_23; obj* x_25; obj* x_26; obj* x_27; 
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_14, 2);
lean::inc(x_19);
lean::dec(x_14);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_parse__def___lambda__1), 2, 1);
lean::closure_set(x_22, 0, x_15);
x_23 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_23);
if (lean::is_scalar(x_12)) {
 x_25 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_25 = x_12;
}
lean::cnstr_set(x_25, 0, x_22);
lean::cnstr_set(x_25, 1, x_17);
lean::cnstr_set(x_25, 2, x_23);
x_26 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_25);
x_27 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_10, x_26);
if (lean::obj_tag(x_27) == 0)
{
obj* x_28; obj* x_30; obj* x_32; 
x_28 = lean::cnstr_get(x_27, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_27, 1);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_27, 2);
lean::inc(x_32);
lean::dec(x_27);
x_1 = x_28;
x_2 = x_30;
x_3 = x_32;
goto lbl_4;
}
else
{
obj* x_35; unsigned char x_37; obj* x_38; obj* x_39; obj* x_40; 
x_35 = lean::cnstr_get(x_27, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get_scalar<unsigned char>(x_27, sizeof(void*)*1);
if (lean::is_shared(x_27)) {
 lean::dec(x_27);
 x_38 = lean::box(0);
} else {
 lean::cnstr_release(x_27, 0);
 x_38 = x_27;
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_35);
lean::cnstr_set_scalar(x_39, sizeof(void*)*1, x_37);
x_40 = x_39;
return x_40;
}
}
else
{
obj* x_42; unsigned char x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; 
lean::dec(x_12);
x_42 = lean::cnstr_get(x_14, 0);
lean::inc(x_42);
x_44 = lean::cnstr_get_scalar<unsigned char>(x_14, sizeof(void*)*1);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_45 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_45 = x_14;
}
if (lean::is_scalar(x_45)) {
 x_46 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_46 = x_45;
}
lean::cnstr_set(x_46, 0, x_42);
lean::cnstr_set_scalar(x_46, sizeof(void*)*1, x_44);
x_47 = x_46;
x_48 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_10, x_47);
if (lean::obj_tag(x_48) == 0)
{
obj* x_49; obj* x_51; obj* x_53; 
x_49 = lean::cnstr_get(x_48, 0);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_48, 1);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_48, 2);
lean::inc(x_53);
lean::dec(x_48);
x_1 = x_49;
x_2 = x_51;
x_3 = x_53;
goto lbl_4;
}
else
{
obj* x_56; unsigned char x_58; obj* x_59; obj* x_60; obj* x_61; 
x_56 = lean::cnstr_get(x_48, 0);
lean::inc(x_56);
x_58 = lean::cnstr_get_scalar<unsigned char>(x_48, sizeof(void*)*1);
if (lean::is_shared(x_48)) {
 lean::dec(x_48);
 x_59 = lean::box(0);
} else {
 lean::cnstr_release(x_48, 0);
 x_59 = x_48;
}
if (lean::is_scalar(x_59)) {
 x_60 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_60 = x_59;
}
lean::cnstr_set(x_60, 0, x_56);
lean::cnstr_set_scalar(x_60, sizeof(void*)*1, x_58);
x_61 = x_60;
return x_61;
}
}
}
else
{
obj* x_62; unsigned char x_64; obj* x_65; obj* x_66; obj* x_67; 
x_62 = lean::cnstr_get(x_7, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get_scalar<unsigned char>(x_7, sizeof(void*)*1);
if (lean::is_shared(x_7)) {
 lean::dec(x_7);
 x_65 = lean::box(0);
} else {
 lean::cnstr_release(x_7, 0);
 x_65 = x_7;
}
if (lean::is_scalar(x_65)) {
 x_66 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_66 = x_65;
}
lean::cnstr_set(x_66, 0, x_62);
lean::cnstr_set_scalar(x_66, sizeof(void*)*1, x_64);
x_67 = x_66;
return x_67;
}
lbl_4:
{
obj* x_68; obj* x_70; 
x_68 = l_lean_ir_parse__typed__assignment___closed__3;
lean::inc(x_68);
x_70 = l_lean_ir_symbol(x_68, x_2);
if (lean::obj_tag(x_70) == 0)
{
obj* x_71; obj* x_73; obj* x_75; obj* x_76; obj* x_77; 
x_71 = lean::cnstr_get(x_70, 1);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_70, 2);
lean::inc(x_73);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_75 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 lean::cnstr_release(x_70, 1);
 lean::cnstr_release(x_70, 2);
 x_75 = x_70;
}
x_76 = l_lean_parser_monad__parsec_many___at_lean_ir_parse__def___spec__1(x_71);
x_77 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_73, x_76);
if (lean::obj_tag(x_77) == 0)
{
obj* x_78; obj* x_80; obj* x_82; obj* x_85; obj* x_86; obj* x_88; obj* x_89; obj* x_90; 
x_78 = lean::cnstr_get(x_77, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_77, 1);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_77, 2);
lean::inc(x_82);
lean::dec(x_77);
x_85 = lean::apply_1(x_1, x_78);
x_86 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_86);
if (lean::is_scalar(x_75)) {
 x_88 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_88 = x_75;
}
lean::cnstr_set(x_88, 0, x_85);
lean::cnstr_set(x_88, 1, x_80);
lean::cnstr_set(x_88, 2, x_86);
x_89 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_82, x_88);
x_90 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_89);
return x_90;
}
else
{
obj* x_93; unsigned char x_95; obj* x_96; obj* x_97; obj* x_98; obj* x_99; 
lean::dec(x_75);
lean::dec(x_1);
x_93 = lean::cnstr_get(x_77, 0);
lean::inc(x_93);
x_95 = lean::cnstr_get_scalar<unsigned char>(x_77, sizeof(void*)*1);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_96 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 x_96 = x_77;
}
if (lean::is_scalar(x_96)) {
 x_97 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_97 = x_96;
}
lean::cnstr_set(x_97, 0, x_93);
lean::cnstr_set_scalar(x_97, sizeof(void*)*1, x_95);
x_98 = x_97;
x_99 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_98);
return x_99;
}
}
else
{
obj* x_101; unsigned char x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; 
lean::dec(x_1);
x_101 = lean::cnstr_get(x_70, 0);
lean::inc(x_101);
x_103 = lean::cnstr_get_scalar<unsigned char>(x_70, sizeof(void*)*1);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_104 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_104 = x_70;
}
if (lean::is_scalar(x_104)) {
 x_105 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_105 = x_104;
}
lean::cnstr_set(x_105, 0, x_101);
lean::cnstr_set_scalar(x_105, sizeof(void*)*1, x_103);
x_106 = x_105;
x_107 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_106);
return x_107;
}
}
}
}
obj* _init_l_lean_ir_parse__def___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("def");
return x_0;
}
}
obj* l_lean_ir_parse__def___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__def___spec__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::nat_dec_eq(x_0, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_6; 
lean::dec(x_3);
x_6 = l_lean_ir_parse__block(x_1);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_19; obj* x_20; 
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 2);
lean::inc(x_11);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_13 = x_6;
}
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
lean::inc(x_9);
x_19 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__def___spec__3(x_15, x_9);
if (lean::obj_tag(x_19) == 0)
{
obj* x_23; 
lean::dec(x_9);
x_23 = lean::box(0);
x_20 = x_23;
goto lbl_21;
}
else
{
obj* x_24; unsigned char x_26; 
x_24 = lean::cnstr_get(x_19, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get_scalar<unsigned char>(x_19, sizeof(void*)*1);
if (x_26 == 0)
{
obj* x_29; obj* x_30; obj* x_33; obj* x_35; obj* x_36; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
lean::dec(x_13);
lean::dec(x_19);
x_29 = lean::box(0);
x_30 = lean::cnstr_get(x_24, 2);
lean::inc(x_30);
lean::dec(x_24);
x_33 = l_mjoin___rarg___closed__1;
lean::inc(x_33);
x_35 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_35, 0, x_30);
lean::closure_set(x_35, 1, x_33);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_7);
lean::cnstr_set(x_36, 1, x_29);
lean::inc(x_33);
x_38 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_38, 0, x_35);
lean::closure_set(x_38, 1, x_33);
x_39 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_39, 0, x_38);
x_40 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_40, 0, x_36);
lean::cnstr_set(x_40, 1, x_9);
lean::cnstr_set(x_40, 2, x_39);
x_41 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_40);
return x_41;
}
else
{
obj* x_44; 
lean::dec(x_9);
lean::dec(x_24);
x_44 = lean::box(0);
x_20 = x_44;
goto lbl_21;
}
}
lbl_21:
{
lean::dec(x_20);
if (lean::obj_tag(x_19) == 0)
{
obj* x_46; obj* x_48; obj* x_50; obj* x_53; obj* x_54; obj* x_56; obj* x_57; obj* x_58; 
x_46 = lean::cnstr_get(x_19, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_19, 1);
lean::inc(x_48);
x_50 = lean::cnstr_get(x_19, 2);
lean::inc(x_50);
lean::dec(x_19);
x_53 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_53, 0, x_7);
lean::cnstr_set(x_53, 1, x_46);
x_54 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_54);
if (lean::is_scalar(x_13)) {
 x_56 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_56 = x_13;
}
lean::cnstr_set(x_56, 0, x_53);
lean::cnstr_set(x_56, 1, x_48);
lean::cnstr_set(x_56, 2, x_54);
x_57 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_50, x_56);
x_58 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_57);
return x_58;
}
else
{
obj* x_61; unsigned char x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
lean::dec(x_13);
lean::dec(x_7);
x_61 = lean::cnstr_get(x_19, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get_scalar<unsigned char>(x_19, sizeof(void*)*1);
if (lean::is_shared(x_19)) {
 lean::dec(x_19);
 x_64 = lean::box(0);
} else {
 lean::cnstr_release(x_19, 0);
 x_64 = x_19;
}
if (lean::is_scalar(x_64)) {
 x_65 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_65 = x_64;
}
lean::cnstr_set(x_65, 0, x_61);
lean::cnstr_set_scalar(x_65, sizeof(void*)*1, x_63);
x_66 = x_65;
x_67 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_66);
return x_67;
}
}
}
else
{
obj* x_69; unsigned char x_71; obj* x_72; obj* x_73; obj* x_74; 
lean::dec(x_0);
x_69 = lean::cnstr_get(x_6, 0);
lean::inc(x_69);
x_71 = lean::cnstr_get_scalar<unsigned char>(x_6, sizeof(void*)*1);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_72 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 x_72 = x_6;
}
if (lean::is_scalar(x_72)) {
 x_73 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_73 = x_72;
}
lean::cnstr_set(x_73, 0, x_69);
lean::cnstr_set_scalar(x_73, sizeof(void*)*1, x_71);
x_74 = x_73;
return x_74;
}
}
else
{
obj* x_77; 
lean::dec(x_0);
lean::dec(x_3);
x_77 = l_lean_ir_parse__block(x_1);
if (lean::obj_tag(x_77) == 0)
{
obj* x_78; obj* x_80; obj* x_82; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_89; obj* x_90; 
x_78 = lean::cnstr_get(x_77, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_77, 1);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_77, 2);
lean::inc(x_82);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_84 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 lean::cnstr_release(x_77, 1);
 lean::cnstr_release(x_77, 2);
 x_84 = x_77;
}
x_85 = lean::box(0);
x_86 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_86, 0, x_78);
lean::cnstr_set(x_86, 1, x_85);
x_87 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_87);
if (lean::is_scalar(x_84)) {
 x_89 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_89 = x_84;
}
lean::cnstr_set(x_89, 0, x_86);
lean::cnstr_set(x_89, 1, x_80);
lean::cnstr_set(x_89, 2, x_87);
x_90 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_82, x_89);
return x_90;
}
else
{
obj* x_91; unsigned char x_93; obj* x_94; obj* x_95; obj* x_96; 
x_91 = lean::cnstr_get(x_77, 0);
lean::inc(x_91);
x_93 = lean::cnstr_get_scalar<unsigned char>(x_77, sizeof(void*)*1);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_94 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 x_94 = x_77;
}
if (lean::is_scalar(x_94)) {
 x_95 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_95 = x_94;
}
lean::cnstr_set(x_95, 0, x_91);
lean::cnstr_set_scalar(x_95, sizeof(void*)*1, x_93);
x_96 = x_95;
return x_96;
}
}
}
}
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__def___spec__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; 
x_1 = lean::string_iterator_remaining(x_0);
x_2 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__def___spec__3(x_1, x_0);
x_3 = l_lean_ir_keyword___closed__1;
lean::inc(x_3);
x_5 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_many___at_lean_ir_parse__def___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::inc(x_0);
x_2 = l_lean_parser_monad__parsec_many1___at_lean_ir_parse__def___spec__2(x_0);
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_0);
return x_2;
}
else
{
obj* x_4; unsigned char x_6; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get_scalar<unsigned char>(x_2, sizeof(void*)*1);
if (x_6 == 0)
{
obj* x_8; obj* x_9; obj* x_12; obj* x_14; obj* x_15; obj* x_16; 
lean::dec(x_2);
x_8 = lean::box(0);
x_9 = lean::cnstr_get(x_4, 2);
lean::inc(x_9);
lean::dec(x_4);
x_12 = l_mjoin___rarg___closed__1;
lean::inc(x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_14, 0, x_9);
lean::closure_set(x_14, 1, x_12);
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_14);
x_16 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_16, 0, x_8);
lean::cnstr_set(x_16, 1, x_0);
lean::cnstr_set(x_16, 2, x_15);
return x_16;
}
else
{
lean::dec(x_0);
lean::dec(x_4);
return x_2;
}
}
}
}
obj* l_lean_ir_parse__defconst(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; obj* x_7; 
x_5 = l_lean_ir_parse__defconst___closed__1;
lean::inc(x_5);
x_7 = l_lean_ir_keyword(x_5, x_0);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_10; obj* x_12; unsigned char x_13; obj* x_14; 
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 2);
lean::inc(x_10);
if (lean::is_shared(x_7)) {
 lean::dec(x_7);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 lean::cnstr_release(x_7, 2);
 x_12 = x_7;
}
x_13 = 1;
x_14 = l_lean_ir_parse__header(x_13, x_8);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_17; obj* x_19; obj* x_22; obj* x_23; obj* x_25; obj* x_26; obj* x_27; 
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_14, 2);
lean::inc(x_19);
lean::dec(x_14);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_ir_parse__def___lambda__1), 2, 1);
lean::closure_set(x_22, 0, x_15);
x_23 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_23);
if (lean::is_scalar(x_12)) {
 x_25 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_25 = x_12;
}
lean::cnstr_set(x_25, 0, x_22);
lean::cnstr_set(x_25, 1, x_17);
lean::cnstr_set(x_25, 2, x_23);
x_26 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_25);
x_27 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_10, x_26);
if (lean::obj_tag(x_27) == 0)
{
obj* x_28; obj* x_30; obj* x_32; 
x_28 = lean::cnstr_get(x_27, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_27, 1);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_27, 2);
lean::inc(x_32);
lean::dec(x_27);
x_1 = x_28;
x_2 = x_30;
x_3 = x_32;
goto lbl_4;
}
else
{
obj* x_35; unsigned char x_37; obj* x_38; obj* x_39; obj* x_40; 
x_35 = lean::cnstr_get(x_27, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get_scalar<unsigned char>(x_27, sizeof(void*)*1);
if (lean::is_shared(x_27)) {
 lean::dec(x_27);
 x_38 = lean::box(0);
} else {
 lean::cnstr_release(x_27, 0);
 x_38 = x_27;
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_35);
lean::cnstr_set_scalar(x_39, sizeof(void*)*1, x_37);
x_40 = x_39;
return x_40;
}
}
else
{
obj* x_42; unsigned char x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; 
lean::dec(x_12);
x_42 = lean::cnstr_get(x_14, 0);
lean::inc(x_42);
x_44 = lean::cnstr_get_scalar<unsigned char>(x_14, sizeof(void*)*1);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_45 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_45 = x_14;
}
if (lean::is_scalar(x_45)) {
 x_46 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_46 = x_45;
}
lean::cnstr_set(x_46, 0, x_42);
lean::cnstr_set_scalar(x_46, sizeof(void*)*1, x_44);
x_47 = x_46;
x_48 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_10, x_47);
if (lean::obj_tag(x_48) == 0)
{
obj* x_49; obj* x_51; obj* x_53; 
x_49 = lean::cnstr_get(x_48, 0);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_48, 1);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_48, 2);
lean::inc(x_53);
lean::dec(x_48);
x_1 = x_49;
x_2 = x_51;
x_3 = x_53;
goto lbl_4;
}
else
{
obj* x_56; unsigned char x_58; obj* x_59; obj* x_60; obj* x_61; 
x_56 = lean::cnstr_get(x_48, 0);
lean::inc(x_56);
x_58 = lean::cnstr_get_scalar<unsigned char>(x_48, sizeof(void*)*1);
if (lean::is_shared(x_48)) {
 lean::dec(x_48);
 x_59 = lean::box(0);
} else {
 lean::cnstr_release(x_48, 0);
 x_59 = x_48;
}
if (lean::is_scalar(x_59)) {
 x_60 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_60 = x_59;
}
lean::cnstr_set(x_60, 0, x_56);
lean::cnstr_set_scalar(x_60, sizeof(void*)*1, x_58);
x_61 = x_60;
return x_61;
}
}
}
else
{
obj* x_62; unsigned char x_64; obj* x_65; obj* x_66; obj* x_67; 
x_62 = lean::cnstr_get(x_7, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get_scalar<unsigned char>(x_7, sizeof(void*)*1);
if (lean::is_shared(x_7)) {
 lean::dec(x_7);
 x_65 = lean::box(0);
} else {
 lean::cnstr_release(x_7, 0);
 x_65 = x_7;
}
if (lean::is_scalar(x_65)) {
 x_66 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_66 = x_65;
}
lean::cnstr_set(x_66, 0, x_62);
lean::cnstr_set_scalar(x_66, sizeof(void*)*1, x_64);
x_67 = x_66;
return x_67;
}
lbl_4:
{
obj* x_68; obj* x_70; 
x_68 = l_lean_ir_parse__typed__assignment___closed__3;
lean::inc(x_68);
x_70 = l_lean_ir_symbol(x_68, x_2);
if (lean::obj_tag(x_70) == 0)
{
obj* x_71; obj* x_73; obj* x_75; obj* x_76; obj* x_77; 
x_71 = lean::cnstr_get(x_70, 1);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_70, 2);
lean::inc(x_73);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_75 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 lean::cnstr_release(x_70, 1);
 lean::cnstr_release(x_70, 2);
 x_75 = x_70;
}
x_76 = l_lean_parser_monad__parsec_many___at_lean_ir_parse__defconst___spec__1(x_71);
x_77 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_73, x_76);
if (lean::obj_tag(x_77) == 0)
{
obj* x_78; obj* x_80; obj* x_82; obj* x_85; obj* x_86; obj* x_88; obj* x_89; obj* x_90; 
x_78 = lean::cnstr_get(x_77, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_77, 1);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_77, 2);
lean::inc(x_82);
lean::dec(x_77);
x_85 = lean::apply_1(x_1, x_78);
x_86 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_86);
if (lean::is_scalar(x_75)) {
 x_88 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_88 = x_75;
}
lean::cnstr_set(x_88, 0, x_85);
lean::cnstr_set(x_88, 1, x_80);
lean::cnstr_set(x_88, 2, x_86);
x_89 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_82, x_88);
x_90 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_89);
return x_90;
}
else
{
obj* x_93; unsigned char x_95; obj* x_96; obj* x_97; obj* x_98; obj* x_99; 
lean::dec(x_75);
lean::dec(x_1);
x_93 = lean::cnstr_get(x_77, 0);
lean::inc(x_93);
x_95 = lean::cnstr_get_scalar<unsigned char>(x_77, sizeof(void*)*1);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_96 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 x_96 = x_77;
}
if (lean::is_scalar(x_96)) {
 x_97 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_97 = x_96;
}
lean::cnstr_set(x_97, 0, x_93);
lean::cnstr_set_scalar(x_97, sizeof(void*)*1, x_95);
x_98 = x_97;
x_99 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_98);
return x_99;
}
}
else
{
obj* x_101; unsigned char x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; 
lean::dec(x_1);
x_101 = lean::cnstr_get(x_70, 0);
lean::inc(x_101);
x_103 = lean::cnstr_get_scalar<unsigned char>(x_70, sizeof(void*)*1);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_104 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_104 = x_70;
}
if (lean::is_scalar(x_104)) {
 x_105 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_105 = x_104;
}
lean::cnstr_set(x_105, 0, x_101);
lean::cnstr_set_scalar(x_105, sizeof(void*)*1, x_103);
x_106 = x_105;
x_107 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_106);
return x_107;
}
}
}
}
obj* _init_l_lean_ir_parse__defconst___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("defconst");
return x_0;
}
}
obj* l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__defconst___spec__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::nat_dec_eq(x_0, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_6; 
lean::dec(x_3);
x_6 = l_lean_ir_parse__block(x_1);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_19; obj* x_20; 
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 2);
lean::inc(x_11);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_13 = x_6;
}
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_0, x_14);
lean::dec(x_14);
lean::dec(x_0);
lean::inc(x_9);
x_19 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__defconst___spec__3(x_15, x_9);
if (lean::obj_tag(x_19) == 0)
{
obj* x_23; 
lean::dec(x_9);
x_23 = lean::box(0);
x_20 = x_23;
goto lbl_21;
}
else
{
obj* x_24; unsigned char x_26; 
x_24 = lean::cnstr_get(x_19, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get_scalar<unsigned char>(x_19, sizeof(void*)*1);
if (x_26 == 0)
{
obj* x_29; obj* x_30; obj* x_33; obj* x_35; obj* x_36; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
lean::dec(x_13);
lean::dec(x_19);
x_29 = lean::box(0);
x_30 = lean::cnstr_get(x_24, 2);
lean::inc(x_30);
lean::dec(x_24);
x_33 = l_mjoin___rarg___closed__1;
lean::inc(x_33);
x_35 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_35, 0, x_30);
lean::closure_set(x_35, 1, x_33);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_7);
lean::cnstr_set(x_36, 1, x_29);
lean::inc(x_33);
x_38 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_38, 0, x_35);
lean::closure_set(x_38, 1, x_33);
x_39 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_39, 0, x_38);
x_40 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_40, 0, x_36);
lean::cnstr_set(x_40, 1, x_9);
lean::cnstr_set(x_40, 2, x_39);
x_41 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_40);
return x_41;
}
else
{
obj* x_44; 
lean::dec(x_9);
lean::dec(x_24);
x_44 = lean::box(0);
x_20 = x_44;
goto lbl_21;
}
}
lbl_21:
{
lean::dec(x_20);
if (lean::obj_tag(x_19) == 0)
{
obj* x_46; obj* x_48; obj* x_50; obj* x_53; obj* x_54; obj* x_56; obj* x_57; obj* x_58; 
x_46 = lean::cnstr_get(x_19, 0);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_19, 1);
lean::inc(x_48);
x_50 = lean::cnstr_get(x_19, 2);
lean::inc(x_50);
lean::dec(x_19);
x_53 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_53, 0, x_7);
lean::cnstr_set(x_53, 1, x_46);
x_54 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_54);
if (lean::is_scalar(x_13)) {
 x_56 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_56 = x_13;
}
lean::cnstr_set(x_56, 0, x_53);
lean::cnstr_set(x_56, 1, x_48);
lean::cnstr_set(x_56, 2, x_54);
x_57 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_50, x_56);
x_58 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_57);
return x_58;
}
else
{
obj* x_61; unsigned char x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
lean::dec(x_13);
lean::dec(x_7);
x_61 = lean::cnstr_get(x_19, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get_scalar<unsigned char>(x_19, sizeof(void*)*1);
if (lean::is_shared(x_19)) {
 lean::dec(x_19);
 x_64 = lean::box(0);
} else {
 lean::cnstr_release(x_19, 0);
 x_64 = x_19;
}
if (lean::is_scalar(x_64)) {
 x_65 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_65 = x_64;
}
lean::cnstr_set(x_65, 0, x_61);
lean::cnstr_set_scalar(x_65, sizeof(void*)*1, x_63);
x_66 = x_65;
x_67 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_66);
return x_67;
}
}
}
else
{
obj* x_69; unsigned char x_71; obj* x_72; obj* x_73; obj* x_74; 
lean::dec(x_0);
x_69 = lean::cnstr_get(x_6, 0);
lean::inc(x_69);
x_71 = lean::cnstr_get_scalar<unsigned char>(x_6, sizeof(void*)*1);
if (lean::is_shared(x_6)) {
 lean::dec(x_6);
 x_72 = lean::box(0);
} else {
 lean::cnstr_release(x_6, 0);
 x_72 = x_6;
}
if (lean::is_scalar(x_72)) {
 x_73 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_73 = x_72;
}
lean::cnstr_set(x_73, 0, x_69);
lean::cnstr_set_scalar(x_73, sizeof(void*)*1, x_71);
x_74 = x_73;
return x_74;
}
}
else
{
obj* x_77; 
lean::dec(x_0);
lean::dec(x_3);
x_77 = l_lean_ir_parse__block(x_1);
if (lean::obj_tag(x_77) == 0)
{
obj* x_78; obj* x_80; obj* x_82; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_89; obj* x_90; 
x_78 = lean::cnstr_get(x_77, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_77, 1);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_77, 2);
lean::inc(x_82);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_84 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 lean::cnstr_release(x_77, 1);
 lean::cnstr_release(x_77, 2);
 x_84 = x_77;
}
x_85 = lean::box(0);
x_86 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_86, 0, x_78);
lean::cnstr_set(x_86, 1, x_85);
x_87 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_87);
if (lean::is_scalar(x_84)) {
 x_89 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_89 = x_84;
}
lean::cnstr_set(x_89, 0, x_86);
lean::cnstr_set(x_89, 1, x_80);
lean::cnstr_set(x_89, 2, x_87);
x_90 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_82, x_89);
return x_90;
}
else
{
obj* x_91; unsigned char x_93; obj* x_94; obj* x_95; obj* x_96; 
x_91 = lean::cnstr_get(x_77, 0);
lean::inc(x_91);
x_93 = lean::cnstr_get_scalar<unsigned char>(x_77, sizeof(void*)*1);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_94 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 x_94 = x_77;
}
if (lean::is_scalar(x_94)) {
 x_95 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_95 = x_94;
}
lean::cnstr_set(x_95, 0, x_91);
lean::cnstr_set_scalar(x_95, sizeof(void*)*1, x_93);
x_96 = x_95;
return x_96;
}
}
}
}
obj* l_lean_parser_monad__parsec_many1___at_lean_ir_parse__defconst___spec__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; 
x_1 = lean::string_iterator_remaining(x_0);
x_2 = l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__defconst___spec__3(x_1, x_0);
x_3 = l_lean_ir_keyword___closed__1;
lean::inc(x_3);
x_5 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_3, x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_many___at_lean_ir_parse__defconst___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::inc(x_0);
x_2 = l_lean_parser_monad__parsec_many1___at_lean_ir_parse__defconst___spec__2(x_0);
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_0);
return x_2;
}
else
{
obj* x_4; unsigned char x_6; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get_scalar<unsigned char>(x_2, sizeof(void*)*1);
if (x_6 == 0)
{
obj* x_8; obj* x_9; obj* x_12; obj* x_14; obj* x_15; obj* x_16; 
lean::dec(x_2);
x_8 = lean::box(0);
x_9 = lean::cnstr_get(x_4, 2);
lean::inc(x_9);
lean::dec(x_4);
x_12 = l_mjoin___rarg___closed__1;
lean::inc(x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_14, 0, x_9);
lean::closure_set(x_14, 1, x_12);
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_14);
x_16 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_16, 0, x_8);
lean::cnstr_set(x_16, 1, x_0);
lean::cnstr_set(x_16, 2, x_15);
return x_16;
}
else
{
lean::dec(x_0);
lean::dec(x_4);
return x_2;
}
}
}
}
obj* l_lean_ir_parse__external(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; 
x_1 = l_lean_ir_parse__external___closed__1;
lean::inc(x_1);
x_3 = l_lean_ir_keyword(x_1, x_0);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_8; unsigned char x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 2);
lean::inc(x_6);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_release(x_3, 1);
 lean::cnstr_release(x_3, 2);
 x_8 = x_3;
}
x_9 = 0;
x_10 = l_lean_ir_parse__header(x_9, x_4);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_13; obj* x_15; obj* x_18; obj* x_19; obj* x_21; obj* x_22; obj* x_23; 
x_11 = lean::cnstr_get(x_10, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_10, 2);
lean::inc(x_15);
lean::dec(x_10);
x_18 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_18, 0, x_11);
x_19 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_19);
if (lean::is_scalar(x_8)) {
 x_21 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_21 = x_8;
}
lean::cnstr_set(x_21, 0, x_18);
lean::cnstr_set(x_21, 1, x_13);
lean::cnstr_set(x_21, 2, x_19);
x_22 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_21);
x_23 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_22);
return x_23;
}
else
{
obj* x_25; unsigned char x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
lean::dec(x_8);
x_25 = lean::cnstr_get(x_10, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get_scalar<unsigned char>(x_10, sizeof(void*)*1);
if (lean::is_shared(x_10)) {
 lean::dec(x_10);
 x_28 = lean::box(0);
} else {
 lean::cnstr_release(x_10, 0);
 x_28 = x_10;
}
if (lean::is_scalar(x_28)) {
 x_29 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_29 = x_28;
}
lean::cnstr_set(x_29, 0, x_25);
lean::cnstr_set_scalar(x_29, sizeof(void*)*1, x_27);
x_30 = x_29;
x_31 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_30);
return x_31;
}
}
else
{
obj* x_32; unsigned char x_34; obj* x_35; obj* x_36; obj* x_37; 
x_32 = lean::cnstr_get(x_3, 0);
lean::inc(x_32);
x_34 = lean::cnstr_get_scalar<unsigned char>(x_3, sizeof(void*)*1);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_35 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 x_35 = x_3;
}
if (lean::is_scalar(x_35)) {
 x_36 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_36 = x_35;
}
lean::cnstr_set(x_36, 0, x_32);
lean::cnstr_set_scalar(x_36, sizeof(void*)*1, x_34);
x_37 = x_36;
return x_37;
}
}
}
obj* _init_l_lean_ir_parse__external___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("external");
return x_0;
}
}
obj* l_lean_ir_parse__decl(obj* x_0) {
_start:
{
obj* x_2; 
lean::inc(x_0);
x_2 = l_lean_ir_parse__def(x_0);
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_0);
return x_2;
}
else
{
obj* x_4; unsigned char x_6; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get_scalar<unsigned char>(x_2, sizeof(void*)*1);
if (x_6 == 0)
{
obj* x_9; 
lean::dec(x_2);
lean::inc(x_0);
x_9 = l_lean_ir_parse__defconst(x_0);
if (lean::obj_tag(x_9) == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_4, x_9);
return x_11;
}
else
{
obj* x_12; unsigned char x_14; 
x_12 = lean::cnstr_get(x_9, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get_scalar<unsigned char>(x_9, sizeof(void*)*1);
if (x_14 == 0)
{
obj* x_16; obj* x_17; obj* x_18; 
lean::dec(x_9);
x_16 = l_lean_ir_parse__external(x_0);
x_17 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_12, x_16);
x_18 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_4, x_17);
return x_18;
}
else
{
obj* x_21; 
lean::dec(x_12);
lean::dec(x_0);
x_21 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_4, x_9);
return x_21;
}
}
}
else
{
lean::dec(x_0);
lean::dec(x_4);
return x_2;
}
}
}
}
void initialize_init_lean_ir_ir();
void initialize_init_lean_parser_parsec();
void initialize_init_lean_parser_identifier();
void initialize_init_lean_parser_string__literal();
void initialize_init_lean_ir_reserved();
static bool _G_initialized = false;
void initialize_init_lean_ir_parser() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_lean_ir_ir();
 initialize_init_lean_parser_parsec();
 initialize_init_lean_parser_identifier();
 initialize_init_lean_parser_string__literal();
 initialize_init_lean_ir_reserved();
 l_lean_ir_keyword___closed__1 = _init_l_lean_ir_keyword___closed__1();
 l_lean_ir_str2type = _init_l_lean_ir_str2type();
 l_lean_ir_str2aunop = _init_l_lean_ir_str2aunop();
 l_lean_ir_str2abinop = _init_l_lean_ir_str2abinop();
 l_lean_ir_str2unop = _init_l_lean_ir_str2unop();
 l_lean_ir_parse__literal___closed__1 = _init_l_lean_ir_parse__literal___closed__1();
 l_lean_ir_parse__literal___closed__2 = _init_l_lean_ir_parse__literal___closed__2();
 l_lean_ir_parse__literal___closed__3 = _init_l_lean_ir_parse__literal___closed__3();
 l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1 = _init_l_lean_parser_parse__hex__digit___at_lean_ir_parse__literal___spec__6___closed__1();
 l_lean_ir_parse__uint16___closed__1 = _init_l_lean_ir_parse__uint16___closed__1();
 l_lean_ir_parse__uint16___closed__2 = _init_l_lean_ir_parse__uint16___closed__2();
 l_lean_ir_parse__usize___closed__1 = _init_l_lean_ir_parse__usize___closed__1();
 l_lean_ir_parse__usize___closed__2 = _init_l_lean_ir_parse__usize___closed__2();
 l_lean_ir_identifier___closed__1 = _init_l_lean_ir_identifier___closed__1();
 l_lean_ir_identifier___closed__2 = _init_l_lean_ir_identifier___closed__2();
 l_lean_ir_parse__var___closed__1 = _init_l_lean_ir_parse__var___closed__1();
 l_lean_ir_parse__fnid___closed__1 = _init_l_lean_ir_parse__fnid___closed__1();
 l_lean_ir_parse__blockid___closed__1 = _init_l_lean_ir_parse__blockid___closed__1();
 l_lean_ir_parse__typed__assignment___closed__1 = _init_l_lean_ir_parse__typed__assignment___closed__1();
 l_lean_ir_parse__typed__assignment___closed__2 = _init_l_lean_ir_parse__typed__assignment___closed__2();
 l_lean_ir_parse__typed__assignment___closed__3 = _init_l_lean_ir_parse__typed__assignment___closed__3();
 l_lean_ir_parse__typed__assignment___closed__4 = _init_l_lean_ir_parse__typed__assignment___closed__4();
 l_lean_ir_parse__typed__assignment___closed__5 = _init_l_lean_ir_parse__typed__assignment___closed__5();
 l_lean_ir_parse__typed__assignment___closed__6 = _init_l_lean_ir_parse__typed__assignment___closed__6();
 l_lean_ir_parse__untyped__assignment___closed__1 = _init_l_lean_ir_parse__untyped__assignment___closed__1();
 l_lean_ir_parse__untyped__assignment___closed__2 = _init_l_lean_ir_parse__untyped__assignment___closed__2();
 l_lean_ir_parse__untyped__assignment___closed__3 = _init_l_lean_ir_parse__untyped__assignment___closed__3();
 l_lean_ir_parse__untyped__assignment___closed__4 = _init_l_lean_ir_parse__untyped__assignment___closed__4();
 l_lean_ir_parse__untyped__assignment___closed__5 = _init_l_lean_ir_parse__untyped__assignment___closed__5();
 l_lean_ir_parse__untyped__assignment___closed__6 = _init_l_lean_ir_parse__untyped__assignment___closed__6();
 l_lean_ir_parse__untyped__assignment___closed__7 = _init_l_lean_ir_parse__untyped__assignment___closed__7();
 l_lean_ir_parse__instr___closed__1 = _init_l_lean_ir_parse__instr___closed__1();
 l_lean_ir_parse__instr___closed__2 = _init_l_lean_ir_parse__instr___closed__2();
 l_lean_ir_parse__instr___closed__3 = _init_l_lean_ir_parse__instr___closed__3();
 l_lean_ir_parse__phi___closed__1 = _init_l_lean_ir_parse__phi___closed__1();
 l_lean_ir_parse__terminator___closed__1 = _init_l_lean_ir_parse__terminator___closed__1();
 l_lean_ir_parse__terminator___closed__2 = _init_l_lean_ir_parse__terminator___closed__2();
 l_lean_ir_parse__terminator___closed__3 = _init_l_lean_ir_parse__terminator___closed__3();
 l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__terminator___spec__4___closed__1 = _init_l_lean_parser_monad__parsec_many1__aux___main___at_lean_ir_parse__terminator___spec__4___closed__1();
 l_lean_ir_parse__block___closed__1 = _init_l_lean_ir_parse__block___closed__1();
 l_lean_ir_parse__def___closed__1 = _init_l_lean_ir_parse__def___closed__1();
 l_lean_ir_parse__defconst___closed__1 = _init_l_lean_ir_parse__defconst___closed__1();
 l_lean_ir_parse__external___closed__1 = _init_l_lean_ir_parse__external___closed__1();
}