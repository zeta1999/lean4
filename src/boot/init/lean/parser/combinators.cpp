// Lean compiler output
// Module: init.lean.parser.combinators
// Imports: init.lean.parser.basic init.data.list.instances
#include "runtime/object.h"
#include "runtime/apply.h"
#include "runtime/io.h"
#include "kernel/builtin.h"
typedef lean::object obj;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#endif
extern obj* l_lean_parser_choice;
obj* l_lean_parser_combinators_sep__by___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*, obj*, unsigned char, obj*);
obj* l_lean_parser_combinators_many1___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_many1_tokens___rarg(obj*);
obj* l_lean_parser_combinators_sep__by_view___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_optional_view___rarg___lambda__1(obj*, obj*);
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_coe_tokens(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_node_view___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_4028586963__sep__by__aux___main___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, unsigned char, obj*, obj*);
obj* l_lean_parser_combinators_many1_tokens(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_choice_tokens___rarg(obj*);
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, unsigned char, obj*, obj*);
obj* l_lean_parser_combinators_sep__by1_tokens___rarg(obj*, obj*);
extern obj* l_lean_parser_no__kind;
obj* l_lean_parser_combinators_longest__match_view(obj*);
obj* l___private_1079072079__sep__by_view__aux___main(obj*, obj*, obj*);
obj* l___private_1079072079__sep__by_view__aux(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_optional___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_combinators_choice__aux(obj*);
obj* l_lean_parser_combinators_many___rarg___closed__1;
obj* l_lean_parser_combinators_sep__by___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at___private_1297690757__many1__aux___main___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_4028586963__sep__by__aux___main___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, unsigned char, obj*, obj*);
obj* l_lean_parser_combinators_optional_view(obj*, obj*);
obj* l_lean_parser_combinators_node_tokens(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_longest__match___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_syntax_as__node___main(obj*);
obj* l_lean_parser_combinators_coe_tokens___rarg(obj*, obj*);
obj* l_lean_parser_combinators_sep__by1_view___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, unsigned char, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_sep__by1___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_1079072079__sep__by_view__aux___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_recurse_view___rarg(obj*, obj*);
obj* l_lean_parser_combinators_many_view(obj*, obj*);
obj* l_lean_parser_combinators_label_view(obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_optional_tokens___rarg(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_sep__by___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_label_view___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_monad__lift_tokens(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_seq__right_view___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_monad__lift_view(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_4028586963__sep__by__aux___main___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*, obj*, obj*, unsigned char, obj*, obj*, obj*);
obj* l_lean_parser_combinators_sep__by(obj*);
obj* l_lean_parser_combinators_any__of_tokens___rarg(obj*);
obj* l_lean_parser_combinators_node_tokens___rarg(obj*);
obj* l_lean_parser_combinators_coe_view__default___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_option_get___main___at_lean_parser_run___spec__2(obj*);
obj* l_list_mfoldl___main___at_lean_parser_combinators_node___spec__1(obj*);
obj* l_lean_parser_combinators_try_view(obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_seq__left_view___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_sep__by_tokens___rarg(obj*, obj*);
obj* l_lean_parser_combinators_longest__choice_tokens___rarg(obj*);
obj* l_lean_parser_combinators_choice_tokens(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_optional_view___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_mjoin___rarg___closed__1;
obj* l_lean_parser_combinators_sep__by_tokens___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_any__of___spec__1(obj*, obj*);
obj* l_list_map___main___at_lean_parser_combinators_longest__choice___spec__1___rarg(obj*, obj*, obj*);
obj* l_lean_parser_combinators_sep__by1_tokens___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_4028586963__sep__by__aux(obj*);
obj* l_lean_parser_combinators_sep__by1_view___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_seq__left_view(obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_sep__by_elem_view_item__coe(obj*, obj*);
obj* l_lean_parser_combinators_sep__by1_view(obj*);
obj* l_lean_parser_combinators_optional(obj*);
extern obj* l_optional___rarg___closed__1;
obj* l_lean_parser_combinators_seq___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_recurse_tokens(obj*, obj*, obj*, obj*, obj*);
obj* l___private_1297690757__many1__aux(obj*);
obj* l_lean_parser_combinators_optional___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_many_tokens(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_1079072079__sep__by_view__aux___main___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_sep__by___rarg(obj*, obj*, obj*, obj*, obj*, obj*, unsigned char);
obj* l___private_1297690757__many1__aux___main___rarg___closed__1;
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_sep__by1___spec__2(obj*, obj*);
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*, obj*, obj*, unsigned char, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_parser_combinators_sep__by_view___spec__1___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_any__of_view(obj*);
obj* l_lean_parser_combinators_longest__choice_tokens(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_4028586963__sep__by__aux___main(obj*);
obj* l_lean_parser_monad__parsec_error___at___private_4028586963__sep__by__aux___main___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_sep__by___spec__2(obj*, obj*);
obj* l___private_1297690757__many1__aux___main___rarg___lambda__1(obj*, obj*, obj*);
obj* l_lean_parser_combinators_seq__right_tokens___rarg(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_any__of___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_node___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_try_tokens___rarg(obj*);
obj* l_lean_parser_combinators_try_tokens(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*, obj*, obj*, unsigned char, obj*, obj*, obj*);
obj* l_lean_parser_combinators_longest__choice___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_sep__by_elem_view_item__coe___rarg(obj*);
obj* l___private_4028586963__sep__by__aux___main___rarg(obj*, obj*, obj*, obj*, obj*, obj*, unsigned char, unsigned char, obj*, obj*);
obj* l_lean_parser_combinators_choice___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_coe_view(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_many1(obj*);
obj* l_lean_parser_combinators_sep__by_tokens(obj*, obj*, obj*, obj*, obj*, obj*, obj*, unsigned char);
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_1297690757__many1__aux___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_sep__by___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_try_view___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_node_view(obj*, obj*);
obj* l_lean_parser_combinators_sep__by1___rarg(obj*, obj*, obj*, obj*, obj*, obj*, unsigned char);
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_many1_view___rarg___lambda__2(obj*, obj*);
obj* l_lean_parser_combinators_many1___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_enum__from___main___rarg(obj*, obj*);
obj* l_lean_parser_combinators_sep__by1___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_many_tokens___rarg(obj*);
obj* l_lean_parser_combinators_longest__match_tokens(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_1297690757__many1__aux___main___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_choice__aux___main(obj*);
obj* l_lean_parser_combinators_many(obj*);
obj* l_lean_parser_combinators_optional___rarg___lambda__2(obj*, obj*);
obj* l_list_mfoldl___main___at_lean_parser_combinators_node___spec__1___rarg___lambda__2(obj*, obj*, obj*);
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*, unsigned char, unsigned char, obj*, obj*);
obj* l_lean_parser_combinators_sep__by_view___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_longest__match(obj*);
obj* l_lean_parser_combinators_optional_view__default(obj*, obj*);
obj* l_lean_parser_combinators_many_view___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_node___rarg___lambda__1(obj*, obj*, obj*);
obj* l_list_map___main___at_lean_parser_combinators_sep__by1_view___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_combinators_many___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_seq__right_tokens(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_coe_view___rarg(obj*, obj*, obj*);
obj* l_lean_parser_combinators_sep__by1___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_choice__aux___main___spec__1(obj*, obj*);
obj* l_lean_parser_combinators_label_tokens(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_sep__by_view___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, unsigned char, obj*, obj*);
obj* l_lean_parser_tokens___rarg(obj*);
obj* l_list_foldl___main___rarg(obj*, obj*, obj*);
obj* l_list_mfoldl___main___at_lean_parser_combinators_node___spec__1___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_list_reverse___rarg(obj*);
obj* l_lean_parser_syntax_mk__node(obj*, obj*);
obj* l_lean_parser_combinators_sep__by_view(obj*);
obj* l_lean_parser_combinators_node(obj*);
obj* l_lean_parser_combinators_label_tokens___rarg(obj*);
obj* l_lean_parser_monad__parsec_error___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1(obj*);
obj* l_lean_parser_combinators_optional_view___rarg___lambda__2(obj*, obj*);
obj* l___private_4028586963__sep__by__aux___main___rarg___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*, unsigned char, unsigned char, obj*, obj*);
obj* l___private_4028586963__sep__by__aux___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_sep__by_view___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l___private_4028586963__sep__by__aux___rarg(obj*, obj*, obj*, obj*, obj*, obj*, unsigned char, unsigned char, obj*, obj*);
obj* l_lean_parser_combinators_sep__by1(obj*);
obj* l___private_4028586963__sep__by__aux___main___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_coe_view__default(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_choice__aux___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_optional_view__default___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_monad__parsec_remaining___rarg___closed__1;
obj* l_lean_parser_combinators_recurse_view(obj*, obj*, obj*);
obj* l_list_join___main___rarg(obj*);
obj* l_list_mfoldl___main___at_lean_parser_combinators_node___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_monad__lift_tokens___rarg(obj*);
obj* l_list_append___main___rarg(obj*, obj*);
extern obj* l_lean_parser_monad__parsec_left__over___rarg___closed__1;
obj* l_lean_parser_combinators_longest__choice(obj*);
extern obj* l_lean_parser_monad__parsec_try___rarg___closed__1;
obj* l_lean_parser_combinators_sep__by1_tokens(obj*, obj*, obj*, obj*, obj*, obj*, obj*, unsigned char);
obj* l_list_map___main___at_lean_parser_combinators_sep__by1_view___spec__1___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_longest__match_tokens___rarg(obj*);
obj* l_lean_parser_combinators_seq(obj*);
obj* l_lean_parser_combinators_longest__match_view___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_any__of___rarg___closed__1;
obj* l_lean_parser_combinators_seq__right_view(obj*, obj*, obj*, obj*);
obj* l_list_map___main___rarg(obj*, obj*);
obj* l_lean_parser_combinators_choice__aux___main___rarg___lambda__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at___private_1297690757__many1__aux___main___spec__1(obj*, obj*);
obj* l_lean_parser_combinators_monad__lift_view___rarg(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_longest__match___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_optional_tokens(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_1297690757__many1__aux___main(obj*);
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1(obj*);
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_choice__aux___main___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at___private_4028586963__sep__by__aux___main___spec__1(obj*, obj*);
obj* l_list_mfoldl___main___at_lean_parser_combinators_node___spec__1___rarg___lambda__3(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_many1_view(obj*, obj*);
obj* l_lean_parser_combinators_many1_view___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_combinators_any__of_view___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_any__of(obj*);
obj* l_lean_parser_combinators_any__of___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_longest__choice___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_1297690757__many1__aux___main___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_parser_combinators_longest__choice___spec__1(obj*);
obj* l_lean_parser_combinators_any__of_tokens(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_many1_view___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_choice__aux___main___rarg___closed__1;
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_choice__aux___main___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_longest__match___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_longest__choice___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_longest__choice___spec__2(obj*, obj*);
obj* l_lean_parser_combinators_choice(obj*);
obj* l_lean_parser_combinators_sep__by1_view___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_seq__left_tokens___rarg(obj*);
obj* l_lean_parser_combinators_sep__by1___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*, obj*, unsigned char, obj*);
obj* l_list_map___main___at_lean_parser_combinators_sep__by_view___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_combinators_seq__left_tokens(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_node___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_7; obj* x_9; obj* x_12; obj* x_13; obj* x_14; 
lean::dec(x_2);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::box(0);
lean::inc(x_4);
lean::inc(x_3);
x_12 = l_list_mfoldl___main___at_lean_parser_combinators_node___spec__1___rarg(x_0, x_1, x_3, x_4, x_9, x_5);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___rarg___lambda__1), 3, 2);
lean::closure_set(x_13, 0, x_3);
lean::closure_set(x_13, 1, x_4);
x_14 = lean::apply_4(x_7, lean::box(0), lean::box(0), x_12, x_13);
return x_14;
}
}
obj* l_lean_parser_combinators_node___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_9; obj* x_10; obj* x_11; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = l_list_reverse___rarg(x_2);
x_10 = l_lean_parser_syntax_mk__node(x_1, x_9);
x_11 = lean::apply_2(x_6, lean::box(0), x_10);
return x_11;
}
}
obj* l_lean_parser_combinators_node(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___rarg), 6, 0);
return x_2;
}
}
obj* l_list_mfoldl___main___at_lean_parser_combinators_node___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
if (lean::obj_tag(x_5) == 0)
{
obj* x_10; obj* x_13; obj* x_16; 
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
x_10 = lean::cnstr_get(x_0, 0);
lean::inc(x_10);
lean::dec(x_0);
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
lean::dec(x_10);
x_16 = lean::apply_2(x_13, lean::box(0), x_4);
return x_16;
}
else
{
obj* x_17; obj* x_19; obj* x_22; obj* x_24; obj* x_29; obj* x_30; obj* x_32; obj* x_34; obj* x_35; obj* x_36; 
x_17 = lean::cnstr_get(x_5, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_5, 1);
lean::inc(x_19);
lean::dec(x_5);
x_22 = lean::cnstr_get(x_0, 1);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_1, 1);
lean::inc(x_24);
lean::inc(x_3);
lean::inc(x_1);
lean::inc(x_4);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_list_mfoldl___main___at_lean_parser_combinators_node___spec__1___rarg___lambda__1), 4, 3);
lean::closure_set(x_29, 0, x_4);
lean::closure_set(x_29, 1, x_1);
lean::closure_set(x_29, 2, x_3);
x_30 = lean::apply_3(x_24, lean::box(0), x_17, x_29);
lean::inc(x_2);
x_32 = lean::alloc_closure(reinterpret_cast<void*>(l_list_mfoldl___main___at_lean_parser_combinators_node___spec__1___rarg___lambda__2), 3, 2);
lean::closure_set(x_32, 0, x_2);
lean::closure_set(x_32, 1, x_4);
lean::inc(x_22);
x_34 = lean::apply_4(x_22, lean::box(0), lean::box(0), x_30, x_32);
x_35 = lean::alloc_closure(reinterpret_cast<void*>(l_list_mfoldl___main___at_lean_parser_combinators_node___spec__1___rarg___lambda__3), 6, 5);
lean::closure_set(x_35, 0, x_0);
lean::closure_set(x_35, 1, x_1);
lean::closure_set(x_35, 2, x_2);
lean::closure_set(x_35, 3, x_3);
lean::closure_set(x_35, 4, x_19);
x_36 = lean::apply_4(x_22, lean::box(0), lean::box(0), x_34, x_35);
return x_36;
}
}
}
obj* l_list_mfoldl___main___at_lean_parser_combinators_node___spec__1___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_6; obj* x_9; 
lean::dec(x_0);
lean::dec(x_2);
x_6 = lean::cnstr_get(x_1, 0);
lean::inc(x_6);
lean::dec(x_1);
x_9 = lean::apply_2(x_6, lean::box(0), x_3);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_17; obj* x_19; obj* x_21; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_10 = lean::cnstr_get(x_3, 3);
lean::inc(x_10);
x_12 = l_option_get___main___at_lean_parser_run___spec__2(x_10);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_0);
x_14 = lean::cnstr_get(x_1, 0);
lean::inc(x_14);
lean::dec(x_1);
x_17 = lean::cnstr_get(x_3, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_3, 1);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_3, 2);
lean::inc(x_21);
lean::dec(x_3);
x_24 = l_list_reverse___rarg(x_13);
x_25 = l_lean_parser_syntax_mk__node(x_2, x_24);
x_26 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_26, 0, x_25);
x_27 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_27, 0, x_17);
lean::cnstr_set(x_27, 1, x_19);
lean::cnstr_set(x_27, 2, x_21);
lean::cnstr_set(x_27, 3, x_26);
x_28 = lean::apply_2(x_14, lean::box(0), x_27);
return x_28;
}
}
}
obj* l_list_mfoldl___main___at_lean_parser_combinators_node___spec__1___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_2);
lean::cnstr_set(x_9, 1, x_1);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_list_mfoldl___main___at_lean_parser_combinators_node___spec__1___rarg___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_list_mfoldl___main___at_lean_parser_combinators_node___spec__1___rarg(x_0, x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
obj* l_list_mfoldl___main___at_lean_parser_combinators_node___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_list_mfoldl___main___at_lean_parser_combinators_node___spec__1___rarg), 6, 0);
return x_2;
}
}
obj* l_lean_parser_combinators_seq___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; 
x_5 = l_lean_parser_no__kind;
lean::inc(x_5);
x_7 = l_lean_parser_combinators_node___rarg(x_0, x_1, x_2, x_3, x_5, x_4);
return x_7;
}
}
obj* l_lean_parser_combinators_seq(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_seq___rarg), 5, 0);
return x_2;
}
}
obj* l_lean_parser_combinators_node_tokens___rarg(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_tokens___rarg(x_0);
return x_1;
}
}
obj* l_lean_parser_combinators_node_tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_14; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node_tokens___rarg), 1, 0);
return x_14;
}
}
obj* l_lean_parser_combinators_node_view___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_13; obj* x_15; obj* x_18; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_13 = lean::cnstr_get(x_6, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_6, 1);
lean::inc(x_15);
lean::dec(x_6);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_13);
lean::cnstr_set(x_18, 1, x_15);
return x_18;
}
}
obj* l_lean_parser_combinators_node_view(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node_view___rarg), 7, 0);
return x_4;
}
}
obj* l___private_1297690757__many1__aux___main___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_8; 
x_7 = lean::mk_nat_obj(0u);
x_8 = lean::nat_dec_eq(x_6, x_7);
lean::dec(x_7);
if (lean::obj_tag(x_8) == 0)
{
obj* x_11; obj* x_12; obj* x_15; obj* x_17; obj* x_21; obj* x_23; obj* x_24; obj* x_25; 
lean::dec(x_8);
x_11 = lean::mk_nat_obj(1u);
x_12 = lean::nat_sub(x_6, x_11);
lean::dec(x_11);
lean::dec(x_6);
x_15 = lean::cnstr_get(x_0, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_1, 1);
lean::inc(x_17);
lean::inc(x_5);
lean::inc(x_1);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l___private_1297690757__many1__aux___main___rarg___lambda__1), 3, 2);
lean::closure_set(x_21, 0, x_1);
lean::closure_set(x_21, 1, x_5);
lean::inc(x_4);
x_23 = lean::apply_3(x_17, lean::box(0), x_4, x_21);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l___private_1297690757__many1__aux___main___rarg___lambda__2), 8, 7);
lean::closure_set(x_24, 0, x_3);
lean::closure_set(x_24, 1, x_5);
lean::closure_set(x_24, 2, x_0);
lean::closure_set(x_24, 3, x_1);
lean::closure_set(x_24, 4, x_2);
lean::closure_set(x_24, 5, x_4);
lean::closure_set(x_24, 6, x_12);
x_25 = lean::apply_4(x_15, lean::box(0), lean::box(0), x_23, x_24);
return x_25;
}
else
{
obj* x_33; obj* x_34; obj* x_35; obj* x_39; 
lean::dec(x_8);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_3);
x_33 = lean::box(0);
x_34 = l___private_1297690757__many1__aux___main___rarg___closed__1;
x_35 = l_mjoin___rarg___closed__1;
lean::inc(x_33);
lean::inc(x_35);
lean::inc(x_34);
x_39 = l_lean_parser_monad__parsec_error___at___private_1297690757__many1__aux___main___spec__1___rarg(x_2, lean::box(0), x_34, x_35, x_33, x_33);
return x_39;
}
}
}
obj* _init_l___private_1297690757__many1__aux___main___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unreachable");
return x_0;
}
}
obj* l___private_1297690757__many1__aux___main___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::cnstr_get(x_2, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_2, 1);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_2, 2);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_2, 3);
lean::inc(x_12);
lean::dec(x_2);
x_15 = l_option_get___main___at_lean_parser_run___spec__2(x_12);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_1);
x_17 = lean::box(3);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_16);
x_19 = l_list_reverse___rarg(x_18);
x_20 = l_lean_parser_no__kind;
lean::inc(x_20);
x_22 = l_lean_parser_syntax_mk__node(x_20, x_19);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_22);
x_24 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_24, 0, x_6);
lean::cnstr_set(x_24, 1, x_8);
lean::cnstr_set(x_24, 2, x_10);
lean::cnstr_set(x_24, 3, x_23);
x_25 = lean::apply_2(x_3, lean::box(0), x_24);
return x_25;
}
}
obj* l___private_1297690757__many1__aux___main___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_10; obj* x_13; obj* x_14; obj* x_17; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; 
x_8 = lean::cnstr_get(x_0, 1);
lean::inc(x_8);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_7);
lean::cnstr_set(x_10, 1, x_1);
lean::inc(x_10);
lean::inc(x_0);
x_13 = l___private_1297690757__many1__aux___main___rarg(x_2, x_3, x_4, x_0, x_5, x_10, x_6);
x_14 = lean::cnstr_get(x_0, 0);
lean::inc(x_14);
lean::dec(x_0);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
lean::dec(x_14);
x_20 = l_list_reverse___rarg(x_10);
x_21 = l_lean_parser_no__kind;
lean::inc(x_21);
x_23 = l_lean_parser_syntax_mk__node(x_21, x_20);
x_24 = lean::apply_2(x_17, lean::box(0), x_23);
x_25 = lean::apply_3(x_8, lean::box(0), x_13, x_24);
return x_25;
}
}
obj* l___private_1297690757__many1__aux___main(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l___private_1297690757__many1__aux___main___rarg), 7, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at___private_1297690757__many1__aux___main___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_7; obj* x_10; obj* x_11; 
lean::dec(x_1);
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1), 5, 4);
lean::closure_set(x_10, 0, x_4);
lean::closure_set(x_10, 1, x_2);
lean::closure_set(x_10, 2, x_3);
lean::closure_set(x_10, 3, x_5);
x_11 = lean::apply_2(x_7, lean::box(0), x_10);
return x_11;
}
}
obj* l_lean_parser_monad__parsec_error___at___private_1297690757__many1__aux___main___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at___private_1297690757__many1__aux___main___spec__1___rarg), 6, 0);
return x_4;
}
}
obj* l___private_1297690757__many1__aux___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l___private_1297690757__many1__aux___main___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
obj* l___private_1297690757__many1__aux(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l___private_1297690757__many1__aux___rarg), 7, 0);
return x_2;
}
}
obj* l_lean_parser_combinators_many1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_12; obj* x_15; obj* x_17; obj* x_19; obj* x_20; obj* x_22; obj* x_23; obj* x_24; 
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_7, 0);
lean::inc(x_9);
lean::dec(x_7);
x_12 = lean::cnstr_get(x_9, 0);
lean::inc(x_12);
lean::dec(x_9);
x_15 = lean::cnstr_get(x_2, 0);
lean::inc(x_15);
x_17 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
lean::inc(x_17);
x_19 = lean::apply_2(x_15, lean::box(0), x_17);
x_20 = l_lean_parser_monad__parsec_remaining___rarg___closed__1;
lean::inc(x_20);
x_22 = lean::apply_4(x_12, lean::box(0), lean::box(0), x_20, x_19);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_many1___rarg___lambda__1), 6, 5);
lean::closure_set(x_23, 0, x_0);
lean::closure_set(x_23, 1, x_1);
lean::closure_set(x_23, 2, x_2);
lean::closure_set(x_23, 3, x_3);
lean::closure_set(x_23, 4, x_4);
x_24 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_22, x_23);
return x_24;
}
}
obj* l_lean_parser_combinators_many1___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_11; 
x_6 = lean::box(0);
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_add(x_5, x_7);
lean::dec(x_7);
lean::dec(x_5);
x_11 = l___private_1297690757__many1__aux___main___rarg(x_0, x_1, x_2, x_3, x_4, x_6, x_8);
return x_11;
}
}
obj* l_lean_parser_combinators_many1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_many1___rarg), 5, 0);
return x_2;
}
}
obj* l_lean_parser_combinators_many1_tokens___rarg(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_tokens___rarg(x_0);
return x_1;
}
}
obj* l_lean_parser_combinators_many1_tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_12; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_many1_tokens___rarg), 1, 0);
return x_12;
}
}
obj* l_lean_parser_combinators_many1_view___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_12; obj* x_13; obj* x_14; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
lean::inc(x_5);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_many1_view___rarg___lambda__1), 2, 1);
lean::closure_set(x_12, 0, x_5);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_many1_view___rarg___lambda__2), 2, 1);
lean::closure_set(x_13, 0, x_5);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
return x_14;
}
}
obj* l_lean_parser_combinators_many1_view___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_syntax_as__node___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_4; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_2);
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
lean::dec(x_0);
x_7 = lean::box(3);
x_8 = lean::apply_1(x_4, x_7);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
else
{
obj* x_11; obj* x_14; obj* x_17; obj* x_20; 
x_11 = lean::cnstr_get(x_2, 0);
lean::inc(x_11);
lean::dec(x_2);
x_14 = lean::cnstr_get(x_0, 0);
lean::inc(x_14);
lean::dec(x_0);
x_17 = lean::cnstr_get(x_11, 1);
lean::inc(x_17);
lean::dec(x_11);
x_20 = l_list_map___main___rarg(x_14, x_17);
return x_20;
}
}
}
obj* l_lean_parser_combinators_many1_view___rarg___lambda__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_6; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_list_map___main___rarg(x_2, x_1);
x_6 = l_lean_parser_no__kind;
lean::inc(x_6);
x_8 = l_lean_parser_syntax_mk__node(x_6, x_5);
return x_8;
}
}
obj* l_lean_parser_combinators_many1_view(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_many1_view___rarg), 6, 0);
return x_4;
}
}
obj* l_lean_parser_combinators_many___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; obj* x_9; obj* x_12; obj* x_15; obj* x_17; obj* x_18; 
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
lean::inc(x_3);
x_8 = l_lean_parser_combinators_many1___rarg(x_0, x_1, x_2, x_3, x_4);
x_9 = lean::cnstr_get(x_3, 0);
lean::inc(x_9);
lean::dec(x_3);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
lean::dec(x_9);
x_15 = l_lean_parser_combinators_many___rarg___closed__1;
lean::inc(x_15);
x_17 = lean::apply_2(x_12, lean::box(0), x_15);
x_18 = lean::apply_3(x_5, lean::box(0), x_8, x_17);
return x_18;
}
}
obj* _init_l_lean_parser_combinators_many___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; 
x_0 = lean::box(0);
x_1 = l_lean_parser_no__kind;
lean::inc(x_1);
x_3 = l_lean_parser_syntax_mk__node(x_1, x_0);
return x_3;
}
}
obj* l_lean_parser_combinators_many(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_many___rarg), 5, 0);
return x_2;
}
}
obj* l_lean_parser_combinators_many_tokens___rarg(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_tokens___rarg(x_0);
return x_1;
}
}
obj* l_lean_parser_combinators_many_tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_12; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_many_tokens___rarg), 1, 0);
return x_12;
}
}
obj* l_lean_parser_combinators_many_view___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_12; obj* x_13; obj* x_14; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
lean::inc(x_5);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_many1_view___rarg___lambda__1), 2, 1);
lean::closure_set(x_12, 0, x_5);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_many1_view___rarg___lambda__2), 2, 1);
lean::closure_set(x_13, 0, x_5);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
return x_14;
}
}
obj* l_lean_parser_combinators_many_view(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_many_view___rarg), 6, 0);
return x_4;
}
}
obj* l___private_4028586963__sep__by__aux___main___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, unsigned char x_6, unsigned char x_7, obj* x_8, obj* x_9) {
_start:
{
obj* x_10; obj* x_11; 
x_10 = lean::mk_nat_obj(0u);
x_11 = lean::nat_dec_eq(x_9, x_10);
lean::dec(x_10);
if (lean::obj_tag(x_11) == 0)
{
obj* x_14; obj* x_15; obj* x_18; obj* x_20; obj* x_24; obj* x_25; obj* x_29; 
lean::dec(x_11);
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_9, x_14);
lean::dec(x_14);
lean::dec(x_9);
x_18 = lean::cnstr_get(x_0, 1);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_1, 1);
lean::inc(x_20);
lean::inc(x_8);
lean::inc(x_1);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l___private_1297690757__many1__aux___main___rarg___lambda__1), 3, 2);
lean::closure_set(x_24, 0, x_1);
lean::closure_set(x_24, 1, x_8);
x_25 = lean::box(x_6);
lean::inc(x_18);
lean::inc(x_4);
lean::inc(x_3);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l___private_4028586963__sep__by__aux___main___rarg___lambda__2___boxed), 11, 10);
lean::closure_set(x_29, 0, x_3);
lean::closure_set(x_29, 1, x_8);
lean::closure_set(x_29, 2, x_2);
lean::closure_set(x_29, 3, x_5);
lean::closure_set(x_29, 4, x_0);
lean::closure_set(x_29, 5, x_1);
lean::closure_set(x_29, 6, x_4);
lean::closure_set(x_29, 7, x_25);
lean::closure_set(x_29, 8, x_15);
lean::closure_set(x_29, 9, x_18);
if (x_7 == 0)
{
obj* x_30; obj* x_33; obj* x_36; obj* x_39; obj* x_41; obj* x_42; obj* x_43; 
x_30 = lean::cnstr_get(x_3, 0);
lean::inc(x_30);
lean::dec(x_3);
x_33 = lean::cnstr_get(x_30, 0);
lean::inc(x_33);
lean::dec(x_30);
x_36 = lean::cnstr_get(x_33, 0);
lean::inc(x_36);
lean::dec(x_33);
x_39 = l_optional___rarg___closed__1;
lean::inc(x_39);
x_41 = lean::apply_4(x_36, lean::box(0), lean::box(0), x_39, x_4);
x_42 = lean::apply_3(x_20, lean::box(0), x_41, x_24);
x_43 = lean::apply_4(x_18, lean::box(0), lean::box(0), x_42, x_29);
return x_43;
}
else
{
obj* x_44; obj* x_46; obj* x_49; obj* x_51; obj* x_54; obj* x_56; obj* x_57; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
x_44 = lean::cnstr_get(x_3, 1);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_3, 0);
lean::inc(x_46);
lean::dec(x_3);
x_49 = lean::cnstr_get(x_46, 0);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_49, 0);
lean::inc(x_51);
lean::dec(x_49);
x_54 = l_optional___rarg___closed__1;
lean::inc(x_54);
x_56 = lean::apply_4(x_51, lean::box(0), lean::box(0), x_54, x_4);
x_57 = lean::cnstr_get(x_46, 1);
lean::inc(x_57);
lean::dec(x_46);
x_60 = lean::box(0);
x_61 = lean::apply_2(x_57, lean::box(0), x_60);
x_62 = lean::apply_3(x_44, lean::box(0), x_56, x_61);
x_63 = lean::apply_3(x_20, lean::box(0), x_62, x_24);
x_64 = lean::apply_4(x_18, lean::box(0), lean::box(0), x_63, x_29);
return x_64;
}
}
else
{
obj* x_73; obj* x_74; obj* x_75; obj* x_79; 
lean::dec(x_8);
lean::dec(x_9);
lean::dec(x_11);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_3);
x_73 = lean::box(0);
x_74 = l___private_1297690757__many1__aux___main___rarg___closed__1;
x_75 = l_mjoin___rarg___closed__1;
lean::inc(x_73);
lean::inc(x_75);
lean::inc(x_74);
x_79 = l_lean_parser_monad__parsec_error___at___private_4028586963__sep__by__aux___main___spec__1___rarg(x_2, lean::box(0), x_74, x_75, x_73, x_73);
return x_79;
}
}
}
obj* l___private_4028586963__sep__by__aux___main___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, unsigned char x_9, obj* x_10, obj* x_11) {
_start:
{
if (lean::obj_tag(x_11) == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_25; 
lean::dec(x_8);
lean::dec(x_10);
lean::dec(x_11);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_7);
lean::dec(x_3);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_0);
lean::cnstr_set(x_20, 1, x_1);
x_21 = l_list_reverse___rarg(x_20);
x_22 = l_lean_parser_no__kind;
lean::inc(x_22);
x_24 = l_lean_parser_syntax_mk__node(x_22, x_21);
x_25 = lean::apply_2(x_2, lean::box(0), x_24);
return x_25;
}
else
{
obj* x_27; obj* x_30; obj* x_31; obj* x_32; 
lean::dec(x_2);
x_27 = lean::cnstr_get(x_11, 0);
lean::inc(x_27);
lean::dec(x_11);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_0);
lean::cnstr_set(x_30, 1, x_1);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_27);
lean::cnstr_set(x_31, 1, x_30);
x_32 = l___private_4028586963__sep__by__aux___main___rarg(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_9, x_31, x_10);
return x_32;
}
}
}
obj* l___private_4028586963__sep__by__aux___main___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, unsigned char x_7, obj* x_8, obj* x_9, obj* x_10) {
_start:
{
if (lean::obj_tag(x_10) == 0)
{
obj* x_19; obj* x_22; obj* x_25; obj* x_26; obj* x_28; obj* x_29; 
lean::dec(x_8);
lean::dec(x_9);
lean::dec(x_10);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_2);
lean::dec(x_3);
x_19 = lean::cnstr_get(x_0, 0);
lean::inc(x_19);
lean::dec(x_0);
x_22 = lean::cnstr_get(x_19, 1);
lean::inc(x_22);
lean::dec(x_19);
x_25 = l_list_reverse___rarg(x_1);
x_26 = l_lean_parser_no__kind;
lean::inc(x_26);
x_28 = l_lean_parser_syntax_mk__node(x_26, x_25);
x_29 = lean::apply_2(x_22, lean::box(0), x_28);
return x_29;
}
else
{
obj* x_30; obj* x_33; obj* x_35; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_45; obj* x_48; obj* x_50; obj* x_51; obj* x_54; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_30 = lean::cnstr_get(x_10, 0);
lean::inc(x_30);
lean::dec(x_10);
x_33 = lean::cnstr_get(x_2, 1);
lean::inc(x_33);
x_35 = l_lean_parser_monad__parsec_try___rarg___closed__1;
lean::inc(x_3);
lean::inc(x_35);
x_38 = lean::apply_3(x_33, lean::box(0), x_35, x_3);
x_39 = lean::cnstr_get(x_0, 1);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_0, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_41, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_43, 0);
lean::inc(x_45);
lean::dec(x_43);
x_48 = l_optional___rarg___closed__1;
lean::inc(x_48);
x_50 = lean::apply_4(x_45, lean::box(0), lean::box(0), x_48, x_38);
x_51 = lean::cnstr_get(x_41, 1);
lean::inc(x_51);
lean::dec(x_41);
x_54 = lean::box(0);
lean::inc(x_51);
x_56 = lean::apply_2(x_51, lean::box(0), x_54);
x_57 = lean::apply_3(x_39, lean::box(0), x_50, x_56);
x_58 = lean::box(x_7);
x_59 = lean::alloc_closure(reinterpret_cast<void*>(l___private_4028586963__sep__by__aux___main___rarg___lambda__1___boxed), 12, 11);
lean::closure_set(x_59, 0, x_30);
lean::closure_set(x_59, 1, x_1);
lean::closure_set(x_59, 2, x_51);
lean::closure_set(x_59, 3, x_4);
lean::closure_set(x_59, 4, x_5);
lean::closure_set(x_59, 5, x_2);
lean::closure_set(x_59, 6, x_0);
lean::closure_set(x_59, 7, x_6);
lean::closure_set(x_59, 8, x_3);
lean::closure_set(x_59, 9, x_58);
lean::closure_set(x_59, 10, x_8);
x_60 = lean::apply_4(x_9, lean::box(0), lean::box(0), x_57, x_59);
return x_60;
}
}
}
obj* l___private_4028586963__sep__by__aux___main(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l___private_4028586963__sep__by__aux___main___rarg___boxed), 10, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at___private_4028586963__sep__by__aux___main___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_7; obj* x_10; obj* x_11; 
lean::dec(x_1);
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1), 5, 4);
lean::closure_set(x_10, 0, x_4);
lean::closure_set(x_10, 1, x_2);
lean::closure_set(x_10, 2, x_3);
lean::closure_set(x_10, 3, x_5);
x_11 = lean::apply_2(x_7, lean::box(0), x_10);
return x_11;
}
}
obj* l_lean_parser_monad__parsec_error___at___private_4028586963__sep__by__aux___main___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at___private_4028586963__sep__by__aux___main___spec__1___rarg), 6, 0);
return x_4;
}
}
obj* l___private_4028586963__sep__by__aux___main___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
unsigned char x_10; unsigned char x_11; obj* x_12; 
x_10 = lean::unbox(x_6);
x_11 = lean::unbox(x_7);
x_12 = l___private_4028586963__sep__by__aux___main___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_10, x_11, x_8, x_9);
return x_12;
}
}
obj* l___private_4028586963__sep__by__aux___main___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10, obj* x_11) {
_start:
{
unsigned char x_12; obj* x_13; 
x_12 = lean::unbox(x_9);
x_13 = l___private_4028586963__sep__by__aux___main___rarg___lambda__1(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12, x_10, x_11);
return x_13;
}
}
obj* l___private_4028586963__sep__by__aux___main___rarg___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10) {
_start:
{
unsigned char x_11; obj* x_12; 
x_11 = lean::unbox(x_7);
x_12 = l___private_4028586963__sep__by__aux___main___rarg___lambda__2(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_11, x_8, x_9, x_10);
return x_12;
}
}
obj* l___private_4028586963__sep__by__aux___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, unsigned char x_6, unsigned char x_7, obj* x_8, obj* x_9) {
_start:
{
obj* x_10; 
x_10 = l___private_4028586963__sep__by__aux___main___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
obj* l___private_4028586963__sep__by__aux(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l___private_4028586963__sep__by__aux___rarg___boxed), 10, 0);
return x_2;
}
}
obj* l___private_4028586963__sep__by__aux___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
unsigned char x_10; unsigned char x_11; obj* x_12; 
x_10 = lean::unbox(x_6);
x_11 = lean::unbox(x_7);
x_12 = l___private_4028586963__sep__by__aux___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_10, x_11, x_8, x_9);
return x_12;
}
}
obj* l_lean_parser_combinators_sep__by___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, unsigned char x_6) {
_start:
{
obj* x_7; obj* x_9; obj* x_11; obj* x_14; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
lean::dec(x_9);
x_14 = lean::cnstr_get(x_11, 0);
lean::inc(x_14);
lean::dec(x_11);
x_17 = lean::cnstr_get(x_2, 0);
lean::inc(x_17);
x_19 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
lean::inc(x_19);
x_21 = lean::apply_2(x_17, lean::box(0), x_19);
x_22 = l_lean_parser_monad__parsec_remaining___rarg___closed__1;
lean::inc(x_22);
x_24 = lean::apply_4(x_14, lean::box(0), lean::box(0), x_22, x_21);
x_25 = lean::box(x_6);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_sep__by___rarg___lambda__1___boxed), 8, 7);
lean::closure_set(x_26, 0, x_0);
lean::closure_set(x_26, 1, x_1);
lean::closure_set(x_26, 2, x_2);
lean::closure_set(x_26, 3, x_3);
lean::closure_set(x_26, 4, x_4);
lean::closure_set(x_26, 5, x_5);
lean::closure_set(x_26, 6, x_25);
x_27 = lean::apply_4(x_7, lean::box(0), lean::box(0), x_24, x_26);
return x_27;
}
}
obj* l_lean_parser_combinators_sep__by___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, unsigned char x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_9; obj* x_10; unsigned char x_13; obj* x_14; 
x_8 = lean::box(0);
x_9 = lean::mk_nat_obj(1u);
x_10 = lean::nat_add(x_7, x_9);
lean::dec(x_9);
lean::dec(x_7);
x_13 = 1;
x_14 = l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_13, x_8, x_10);
return x_14;
}
}
obj* l_lean_parser_combinators_sep__by(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_sep__by___rarg___boxed), 7, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_sep__by___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_7; obj* x_10; obj* x_11; 
lean::dec(x_1);
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1), 5, 4);
lean::closure_set(x_10, 0, x_4);
lean::closure_set(x_10, 1, x_2);
lean::closure_set(x_10, 2, x_3);
lean::closure_set(x_10, 3, x_5);
x_11 = lean::apply_2(x_7, lean::box(0), x_10);
return x_11;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_sep__by___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_combinators_sep__by___spec__2___rarg), 6, 0);
return x_4;
}
}
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, unsigned char x_6, unsigned char x_7, obj* x_8, obj* x_9) {
_start:
{
obj* x_10; obj* x_11; 
x_10 = lean::mk_nat_obj(0u);
x_11 = lean::nat_dec_eq(x_9, x_10);
lean::dec(x_10);
if (lean::obj_tag(x_11) == 0)
{
obj* x_14; obj* x_15; obj* x_18; obj* x_20; obj* x_24; obj* x_25; obj* x_29; 
lean::dec(x_11);
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_9, x_14);
lean::dec(x_14);
lean::dec(x_9);
x_18 = lean::cnstr_get(x_0, 1);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_1, 1);
lean::inc(x_20);
lean::inc(x_8);
lean::inc(x_1);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l___private_1297690757__many1__aux___main___rarg___lambda__1), 3, 2);
lean::closure_set(x_24, 0, x_1);
lean::closure_set(x_24, 1, x_8);
x_25 = lean::box(x_6);
lean::inc(x_18);
lean::inc(x_4);
lean::inc(x_3);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg___lambda__2___boxed), 11, 10);
lean::closure_set(x_29, 0, x_3);
lean::closure_set(x_29, 1, x_8);
lean::closure_set(x_29, 2, x_2);
lean::closure_set(x_29, 3, x_5);
lean::closure_set(x_29, 4, x_0);
lean::closure_set(x_29, 5, x_1);
lean::closure_set(x_29, 6, x_4);
lean::closure_set(x_29, 7, x_25);
lean::closure_set(x_29, 8, x_15);
lean::closure_set(x_29, 9, x_18);
if (x_7 == 0)
{
obj* x_30; obj* x_33; obj* x_36; obj* x_39; obj* x_41; obj* x_42; obj* x_43; 
x_30 = lean::cnstr_get(x_3, 0);
lean::inc(x_30);
lean::dec(x_3);
x_33 = lean::cnstr_get(x_30, 0);
lean::inc(x_33);
lean::dec(x_30);
x_36 = lean::cnstr_get(x_33, 0);
lean::inc(x_36);
lean::dec(x_33);
x_39 = l_optional___rarg___closed__1;
lean::inc(x_39);
x_41 = lean::apply_4(x_36, lean::box(0), lean::box(0), x_39, x_4);
x_42 = lean::apply_3(x_20, lean::box(0), x_41, x_24);
x_43 = lean::apply_4(x_18, lean::box(0), lean::box(0), x_42, x_29);
return x_43;
}
else
{
obj* x_44; obj* x_46; obj* x_49; obj* x_51; obj* x_54; obj* x_56; obj* x_57; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
x_44 = lean::cnstr_get(x_3, 1);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_3, 0);
lean::inc(x_46);
lean::dec(x_3);
x_49 = lean::cnstr_get(x_46, 0);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_49, 0);
lean::inc(x_51);
lean::dec(x_49);
x_54 = l_optional___rarg___closed__1;
lean::inc(x_54);
x_56 = lean::apply_4(x_51, lean::box(0), lean::box(0), x_54, x_4);
x_57 = lean::cnstr_get(x_46, 1);
lean::inc(x_57);
lean::dec(x_46);
x_60 = lean::box(0);
x_61 = lean::apply_2(x_57, lean::box(0), x_60);
x_62 = lean::apply_3(x_44, lean::box(0), x_56, x_61);
x_63 = lean::apply_3(x_20, lean::box(0), x_62, x_24);
x_64 = lean::apply_4(x_18, lean::box(0), lean::box(0), x_63, x_29);
return x_64;
}
}
else
{
obj* x_73; obj* x_74; obj* x_75; obj* x_79; 
lean::dec(x_8);
lean::dec(x_9);
lean::dec(x_11);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_3);
x_73 = lean::box(0);
x_74 = l___private_1297690757__many1__aux___main___rarg___closed__1;
x_75 = l_mjoin___rarg___closed__1;
lean::inc(x_73);
lean::inc(x_75);
lean::inc(x_74);
x_79 = l_lean_parser_monad__parsec_error___at_lean_parser_combinators_sep__by___spec__2___rarg(x_2, lean::box(0), x_74, x_75, x_73, x_73);
return x_79;
}
}
}
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, unsigned char x_9, obj* x_10, obj* x_11) {
_start:
{
if (lean::obj_tag(x_11) == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_25; 
lean::dec(x_8);
lean::dec(x_10);
lean::dec(x_11);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_7);
lean::dec(x_3);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_0);
lean::cnstr_set(x_20, 1, x_1);
x_21 = l_list_reverse___rarg(x_20);
x_22 = l_lean_parser_no__kind;
lean::inc(x_22);
x_24 = l_lean_parser_syntax_mk__node(x_22, x_21);
x_25 = lean::apply_2(x_2, lean::box(0), x_24);
return x_25;
}
else
{
obj* x_27; obj* x_30; obj* x_31; obj* x_32; 
lean::dec(x_2);
x_27 = lean::cnstr_get(x_11, 0);
lean::inc(x_27);
lean::dec(x_11);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_0);
lean::cnstr_set(x_30, 1, x_1);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_27);
lean::cnstr_set(x_31, 1, x_30);
x_32 = l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_9, x_31, x_10);
return x_32;
}
}
}
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, unsigned char x_7, obj* x_8, obj* x_9, obj* x_10) {
_start:
{
if (lean::obj_tag(x_10) == 0)
{
obj* x_19; obj* x_22; obj* x_25; obj* x_26; obj* x_28; obj* x_29; 
lean::dec(x_8);
lean::dec(x_9);
lean::dec(x_10);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_2);
lean::dec(x_3);
x_19 = lean::cnstr_get(x_0, 0);
lean::inc(x_19);
lean::dec(x_0);
x_22 = lean::cnstr_get(x_19, 1);
lean::inc(x_22);
lean::dec(x_19);
x_25 = l_list_reverse___rarg(x_1);
x_26 = l_lean_parser_no__kind;
lean::inc(x_26);
x_28 = l_lean_parser_syntax_mk__node(x_26, x_25);
x_29 = lean::apply_2(x_22, lean::box(0), x_28);
return x_29;
}
else
{
obj* x_30; obj* x_33; obj* x_35; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_45; obj* x_48; obj* x_50; obj* x_51; obj* x_54; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_30 = lean::cnstr_get(x_10, 0);
lean::inc(x_30);
lean::dec(x_10);
x_33 = lean::cnstr_get(x_2, 1);
lean::inc(x_33);
x_35 = l_lean_parser_monad__parsec_try___rarg___closed__1;
lean::inc(x_3);
lean::inc(x_35);
x_38 = lean::apply_3(x_33, lean::box(0), x_35, x_3);
x_39 = lean::cnstr_get(x_0, 1);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_0, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_41, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_43, 0);
lean::inc(x_45);
lean::dec(x_43);
x_48 = l_optional___rarg___closed__1;
lean::inc(x_48);
x_50 = lean::apply_4(x_45, lean::box(0), lean::box(0), x_48, x_38);
x_51 = lean::cnstr_get(x_41, 1);
lean::inc(x_51);
lean::dec(x_41);
x_54 = lean::box(0);
lean::inc(x_51);
x_56 = lean::apply_2(x_51, lean::box(0), x_54);
x_57 = lean::apply_3(x_39, lean::box(0), x_50, x_56);
x_58 = lean::box(x_7);
x_59 = lean::alloc_closure(reinterpret_cast<void*>(l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg___lambda__1___boxed), 12, 11);
lean::closure_set(x_59, 0, x_30);
lean::closure_set(x_59, 1, x_1);
lean::closure_set(x_59, 2, x_51);
lean::closure_set(x_59, 3, x_4);
lean::closure_set(x_59, 4, x_5);
lean::closure_set(x_59, 5, x_2);
lean::closure_set(x_59, 6, x_0);
lean::closure_set(x_59, 7, x_6);
lean::closure_set(x_59, 8, x_3);
lean::closure_set(x_59, 9, x_58);
lean::closure_set(x_59, 10, x_8);
x_60 = lean::apply_4(x_9, lean::box(0), lean::box(0), x_57, x_59);
return x_60;
}
}
}
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg___boxed), 10, 0);
return x_2;
}
}
obj* l_lean_parser_combinators_sep__by___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
unsigned char x_7; obj* x_8; 
x_7 = lean::unbox(x_6);
x_8 = l_lean_parser_combinators_sep__by___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_7);
return x_8;
}
}
obj* l_lean_parser_combinators_sep__by___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
unsigned char x_8; obj* x_9; 
x_8 = lean::unbox(x_6);
x_9 = l_lean_parser_combinators_sep__by___rarg___lambda__1(x_0, x_1, x_2, x_3, x_4, x_5, x_8, x_7);
return x_9;
}
}
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
unsigned char x_10; unsigned char x_11; obj* x_12; 
x_10 = lean::unbox(x_6);
x_11 = lean::unbox(x_7);
x_12 = l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_10, x_11, x_8, x_9);
return x_12;
}
}
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10, obj* x_11) {
_start:
{
unsigned char x_12; obj* x_13; 
x_12 = lean::unbox(x_9);
x_13 = l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg___lambda__1(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12, x_10, x_11);
return x_13;
}
}
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10) {
_start:
{
unsigned char x_11; obj* x_12; 
x_11 = lean::unbox(x_7);
x_12 = l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by___spec__1___rarg___lambda__2(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_11, x_8, x_9, x_10);
return x_12;
}
}
obj* l_lean_parser_combinators_sep__by1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, unsigned char x_6) {
_start:
{
obj* x_7; obj* x_9; obj* x_11; obj* x_14; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
lean::dec(x_9);
x_14 = lean::cnstr_get(x_11, 0);
lean::inc(x_14);
lean::dec(x_11);
x_17 = lean::cnstr_get(x_2, 0);
lean::inc(x_17);
x_19 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
lean::inc(x_19);
x_21 = lean::apply_2(x_17, lean::box(0), x_19);
x_22 = l_lean_parser_monad__parsec_remaining___rarg___closed__1;
lean::inc(x_22);
x_24 = lean::apply_4(x_14, lean::box(0), lean::box(0), x_22, x_21);
x_25 = lean::box(x_6);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_sep__by1___rarg___lambda__1___boxed), 8, 7);
lean::closure_set(x_26, 0, x_0);
lean::closure_set(x_26, 1, x_1);
lean::closure_set(x_26, 2, x_2);
lean::closure_set(x_26, 3, x_3);
lean::closure_set(x_26, 4, x_4);
lean::closure_set(x_26, 5, x_5);
lean::closure_set(x_26, 6, x_25);
x_27 = lean::apply_4(x_7, lean::box(0), lean::box(0), x_24, x_26);
return x_27;
}
}
obj* l_lean_parser_combinators_sep__by1___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, unsigned char x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_9; obj* x_10; unsigned char x_13; obj* x_14; 
x_8 = lean::box(0);
x_9 = lean::mk_nat_obj(1u);
x_10 = lean::nat_add(x_7, x_9);
lean::dec(x_9);
lean::dec(x_7);
x_13 = 0;
x_14 = l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_13, x_8, x_10);
return x_14;
}
}
obj* l_lean_parser_combinators_sep__by1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_sep__by1___rarg___boxed), 7, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_sep__by1___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_7; obj* x_10; obj* x_11; 
lean::dec(x_1);
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1), 5, 4);
lean::closure_set(x_10, 0, x_4);
lean::closure_set(x_10, 1, x_2);
lean::closure_set(x_10, 2, x_3);
lean::closure_set(x_10, 3, x_5);
x_11 = lean::apply_2(x_7, lean::box(0), x_10);
return x_11;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_sep__by1___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_combinators_sep__by1___spec__2___rarg), 6, 0);
return x_4;
}
}
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, unsigned char x_6, unsigned char x_7, obj* x_8, obj* x_9) {
_start:
{
obj* x_10; obj* x_11; 
x_10 = lean::mk_nat_obj(0u);
x_11 = lean::nat_dec_eq(x_9, x_10);
lean::dec(x_10);
if (lean::obj_tag(x_11) == 0)
{
obj* x_14; obj* x_15; obj* x_18; obj* x_20; obj* x_24; obj* x_25; obj* x_29; 
lean::dec(x_11);
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_9, x_14);
lean::dec(x_14);
lean::dec(x_9);
x_18 = lean::cnstr_get(x_0, 1);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_1, 1);
lean::inc(x_20);
lean::inc(x_8);
lean::inc(x_1);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l___private_1297690757__many1__aux___main___rarg___lambda__1), 3, 2);
lean::closure_set(x_24, 0, x_1);
lean::closure_set(x_24, 1, x_8);
x_25 = lean::box(x_6);
lean::inc(x_18);
lean::inc(x_4);
lean::inc(x_3);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg___lambda__2___boxed), 11, 10);
lean::closure_set(x_29, 0, x_3);
lean::closure_set(x_29, 1, x_8);
lean::closure_set(x_29, 2, x_2);
lean::closure_set(x_29, 3, x_5);
lean::closure_set(x_29, 4, x_0);
lean::closure_set(x_29, 5, x_1);
lean::closure_set(x_29, 6, x_4);
lean::closure_set(x_29, 7, x_25);
lean::closure_set(x_29, 8, x_15);
lean::closure_set(x_29, 9, x_18);
if (x_7 == 0)
{
obj* x_30; obj* x_33; obj* x_36; obj* x_39; obj* x_41; obj* x_42; obj* x_43; 
x_30 = lean::cnstr_get(x_3, 0);
lean::inc(x_30);
lean::dec(x_3);
x_33 = lean::cnstr_get(x_30, 0);
lean::inc(x_33);
lean::dec(x_30);
x_36 = lean::cnstr_get(x_33, 0);
lean::inc(x_36);
lean::dec(x_33);
x_39 = l_optional___rarg___closed__1;
lean::inc(x_39);
x_41 = lean::apply_4(x_36, lean::box(0), lean::box(0), x_39, x_4);
x_42 = lean::apply_3(x_20, lean::box(0), x_41, x_24);
x_43 = lean::apply_4(x_18, lean::box(0), lean::box(0), x_42, x_29);
return x_43;
}
else
{
obj* x_44; obj* x_46; obj* x_49; obj* x_51; obj* x_54; obj* x_56; obj* x_57; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
x_44 = lean::cnstr_get(x_3, 1);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_3, 0);
lean::inc(x_46);
lean::dec(x_3);
x_49 = lean::cnstr_get(x_46, 0);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_49, 0);
lean::inc(x_51);
lean::dec(x_49);
x_54 = l_optional___rarg___closed__1;
lean::inc(x_54);
x_56 = lean::apply_4(x_51, lean::box(0), lean::box(0), x_54, x_4);
x_57 = lean::cnstr_get(x_46, 1);
lean::inc(x_57);
lean::dec(x_46);
x_60 = lean::box(0);
x_61 = lean::apply_2(x_57, lean::box(0), x_60);
x_62 = lean::apply_3(x_44, lean::box(0), x_56, x_61);
x_63 = lean::apply_3(x_20, lean::box(0), x_62, x_24);
x_64 = lean::apply_4(x_18, lean::box(0), lean::box(0), x_63, x_29);
return x_64;
}
}
else
{
obj* x_73; obj* x_74; obj* x_75; obj* x_79; 
lean::dec(x_8);
lean::dec(x_9);
lean::dec(x_11);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_3);
x_73 = lean::box(0);
x_74 = l___private_1297690757__many1__aux___main___rarg___closed__1;
x_75 = l_mjoin___rarg___closed__1;
lean::inc(x_73);
lean::inc(x_75);
lean::inc(x_74);
x_79 = l_lean_parser_monad__parsec_error___at_lean_parser_combinators_sep__by1___spec__2___rarg(x_2, lean::box(0), x_74, x_75, x_73, x_73);
return x_79;
}
}
}
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, unsigned char x_9, obj* x_10, obj* x_11) {
_start:
{
if (lean::obj_tag(x_11) == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_25; 
lean::dec(x_8);
lean::dec(x_10);
lean::dec(x_11);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_7);
lean::dec(x_3);
x_20 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_20, 0, x_0);
lean::cnstr_set(x_20, 1, x_1);
x_21 = l_list_reverse___rarg(x_20);
x_22 = l_lean_parser_no__kind;
lean::inc(x_22);
x_24 = l_lean_parser_syntax_mk__node(x_22, x_21);
x_25 = lean::apply_2(x_2, lean::box(0), x_24);
return x_25;
}
else
{
obj* x_27; obj* x_30; obj* x_31; obj* x_32; 
lean::dec(x_2);
x_27 = lean::cnstr_get(x_11, 0);
lean::inc(x_27);
lean::dec(x_11);
x_30 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_30, 0, x_0);
lean::cnstr_set(x_30, 1, x_1);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_27);
lean::cnstr_set(x_31, 1, x_30);
x_32 = l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_9, x_31, x_10);
return x_32;
}
}
}
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, unsigned char x_7, obj* x_8, obj* x_9, obj* x_10) {
_start:
{
if (lean::obj_tag(x_10) == 0)
{
obj* x_19; obj* x_22; obj* x_25; obj* x_26; obj* x_28; obj* x_29; 
lean::dec(x_8);
lean::dec(x_9);
lean::dec(x_10);
lean::dec(x_4);
lean::dec(x_5);
lean::dec(x_6);
lean::dec(x_2);
lean::dec(x_3);
x_19 = lean::cnstr_get(x_0, 0);
lean::inc(x_19);
lean::dec(x_0);
x_22 = lean::cnstr_get(x_19, 1);
lean::inc(x_22);
lean::dec(x_19);
x_25 = l_list_reverse___rarg(x_1);
x_26 = l_lean_parser_no__kind;
lean::inc(x_26);
x_28 = l_lean_parser_syntax_mk__node(x_26, x_25);
x_29 = lean::apply_2(x_22, lean::box(0), x_28);
return x_29;
}
else
{
obj* x_30; obj* x_33; obj* x_35; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_45; obj* x_48; obj* x_50; obj* x_51; obj* x_54; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_30 = lean::cnstr_get(x_10, 0);
lean::inc(x_30);
lean::dec(x_10);
x_33 = lean::cnstr_get(x_2, 1);
lean::inc(x_33);
x_35 = l_lean_parser_monad__parsec_try___rarg___closed__1;
lean::inc(x_3);
lean::inc(x_35);
x_38 = lean::apply_3(x_33, lean::box(0), x_35, x_3);
x_39 = lean::cnstr_get(x_0, 1);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_0, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_41, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_43, 0);
lean::inc(x_45);
lean::dec(x_43);
x_48 = l_optional___rarg___closed__1;
lean::inc(x_48);
x_50 = lean::apply_4(x_45, lean::box(0), lean::box(0), x_48, x_38);
x_51 = lean::cnstr_get(x_41, 1);
lean::inc(x_51);
lean::dec(x_41);
x_54 = lean::box(0);
lean::inc(x_51);
x_56 = lean::apply_2(x_51, lean::box(0), x_54);
x_57 = lean::apply_3(x_39, lean::box(0), x_50, x_56);
x_58 = lean::box(x_7);
x_59 = lean::alloc_closure(reinterpret_cast<void*>(l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg___lambda__1___boxed), 12, 11);
lean::closure_set(x_59, 0, x_30);
lean::closure_set(x_59, 1, x_1);
lean::closure_set(x_59, 2, x_51);
lean::closure_set(x_59, 3, x_4);
lean::closure_set(x_59, 4, x_5);
lean::closure_set(x_59, 5, x_2);
lean::closure_set(x_59, 6, x_0);
lean::closure_set(x_59, 7, x_6);
lean::closure_set(x_59, 8, x_3);
lean::closure_set(x_59, 9, x_58);
lean::closure_set(x_59, 10, x_8);
x_60 = lean::apply_4(x_9, lean::box(0), lean::box(0), x_57, x_59);
return x_60;
}
}
}
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg___boxed), 10, 0);
return x_2;
}
}
obj* l_lean_parser_combinators_sep__by1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
unsigned char x_7; obj* x_8; 
x_7 = lean::unbox(x_6);
x_8 = l_lean_parser_combinators_sep__by1___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_7);
return x_8;
}
}
obj* l_lean_parser_combinators_sep__by1___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
unsigned char x_8; obj* x_9; 
x_8 = lean::unbox(x_6);
x_9 = l_lean_parser_combinators_sep__by1___rarg___lambda__1(x_0, x_1, x_2, x_3, x_4, x_5, x_8, x_7);
return x_9;
}
}
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9) {
_start:
{
unsigned char x_10; unsigned char x_11; obj* x_12; 
x_10 = lean::unbox(x_6);
x_11 = lean::unbox(x_7);
x_12 = l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_10, x_11, x_8, x_9);
return x_12;
}
}
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10, obj* x_11) {
_start:
{
unsigned char x_12; obj* x_13; 
x_12 = lean::unbox(x_9);
x_13 = l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg___lambda__1(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12, x_10, x_11);
return x_13;
}
}
obj* l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10) {
_start:
{
unsigned char x_11; obj* x_12; 
x_11 = lean::unbox(x_7);
x_12 = l___private_4028586963__sep__by__aux___main___at_lean_parser_combinators_sep__by1___spec__1___rarg___lambda__2(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_11, x_8, x_9, x_10);
return x_12;
}
}
obj* l_lean_parser_combinators_sep__by_tokens___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
x_2 = l_lean_parser_tokens___rarg(x_0);
x_3 = l_lean_parser_tokens___rarg(x_1);
x_4 = l_list_append___main___rarg(x_2, x_3);
return x_4;
}
}
obj* l_lean_parser_combinators_sep__by_tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, unsigned char x_7) {
_start:
{
obj* x_15; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_sep__by_tokens___rarg), 2, 0);
return x_15;
}
}
obj* l_lean_parser_combinators_sep__by_tokens___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
unsigned char x_8; obj* x_9; 
x_8 = lean::unbox(x_7);
x_9 = l_lean_parser_combinators_sep__by_tokens(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_8);
return x_9;
}
}
obj* l_lean_parser_combinators_sep__by_elem_view_item__coe___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_lean_parser_combinators_sep__by_elem_view_item__coe(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_sep__by_elem_view_item__coe___rarg), 1, 0);
return x_4;
}
}
obj* l___private_1079072079__sep__by_view__aux___main___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_4) == 0)
{
obj* x_10; 
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
x_10 = lean::box(0);
return x_10;
}
else
{
obj* x_11; obj* x_13; obj* x_15; 
x_11 = lean::cnstr_get(x_4, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_4, 1);
lean::inc(x_13);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_15 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 x_15 = x_4;
}
if (lean::obj_tag(x_13) == 0)
{
obj* x_20; obj* x_23; obj* x_24; obj* x_26; obj* x_27; 
lean::dec(x_13);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_3);
x_20 = lean::cnstr_get(x_2, 0);
lean::inc(x_20);
lean::dec(x_2);
x_23 = lean::apply_1(x_20, x_11);
x_24 = lean::box(0);
lean::inc(x_24);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_23);
lean::cnstr_set(x_26, 1, x_24);
if (lean::is_scalar(x_15)) {
 x_27 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_27 = x_15;
}
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_24);
return x_27;
}
else
{
obj* x_28; obj* x_30; obj* x_33; obj* x_35; obj* x_36; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
x_28 = lean::cnstr_get(x_13, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_13, 1);
lean::inc(x_30);
lean::dec(x_13);
x_33 = lean::cnstr_get(x_2, 0);
lean::inc(x_33);
x_35 = lean::apply_1(x_33, x_11);
x_36 = lean::cnstr_get(x_3, 0);
lean::inc(x_36);
x_38 = lean::apply_1(x_36, x_28);
x_39 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_39, 0, x_38);
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_35);
lean::cnstr_set(x_40, 1, x_39);
x_41 = l___private_1079072079__sep__by_view__aux___main___rarg(x_0, x_1, x_2, x_3, x_30);
if (lean::is_scalar(x_15)) {
 x_42 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_42 = x_15;
}
lean::cnstr_set(x_42, 0, x_40);
lean::cnstr_set(x_42, 1, x_41);
return x_42;
}
}
}
}
obj* l___private_1079072079__sep__by_view__aux___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l___private_1079072079__sep__by_view__aux___main___rarg), 5, 0);
return x_6;
}
}
obj* l___private_1079072079__sep__by_view__aux___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l___private_1079072079__sep__by_view__aux___main___rarg(x_0, x_1, x_2, x_3, x_4);
return x_5;
}
}
obj* l___private_1079072079__sep__by_view__aux(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_14; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l___private_1079072079__sep__by_view__aux___rarg), 5, 0);
return x_14;
}
}
obj* l_lean_parser_combinators_sep__by_view___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, unsigned char x_8, obj* x_9, obj* x_10) {
_start:
{
obj* x_21; obj* x_22; obj* x_23; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
lean::inc(x_10);
lean::inc(x_7);
lean::inc(x_6);
lean::inc(x_9);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_sep__by_view___rarg___lambda__1), 5, 4);
lean::closure_set(x_21, 0, x_9);
lean::closure_set(x_21, 1, x_6);
lean::closure_set(x_21, 2, x_7);
lean::closure_set(x_21, 3, x_10);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_sep__by_view___rarg___lambda__2), 5, 4);
lean::closure_set(x_22, 0, x_6);
lean::closure_set(x_22, 1, x_7);
lean::closure_set(x_22, 2, x_9);
lean::closure_set(x_22, 3, x_10);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_22);
return x_23;
}
}
obj* l_lean_parser_combinators_sep__by_view___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_parser_syntax_as__node___main(x_4);
if (lean::obj_tag(x_5) == 0)
{
obj* x_10; obj* x_13; obj* x_14; obj* x_15; obj* x_17; obj* x_18; 
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
x_10 = lean::cnstr_get(x_0, 0);
lean::inc(x_10);
lean::dec(x_0);
x_13 = lean::box(3);
x_14 = lean::apply_1(x_10, x_13);
x_15 = lean::box(0);
lean::inc(x_15);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_14);
lean::cnstr_set(x_17, 1, x_15);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_15);
return x_18;
}
else
{
obj* x_19; obj* x_22; obj* x_25; 
x_19 = lean::cnstr_get(x_5, 0);
lean::inc(x_19);
lean::dec(x_5);
x_22 = lean::cnstr_get(x_19, 1);
lean::inc(x_22);
lean::dec(x_19);
x_25 = l___private_1079072079__sep__by_view__aux___main___rarg(x_1, x_2, x_0, x_3, x_22);
return x_25;
}
}
}
obj* l_lean_parser_combinators_sep__by_view___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_9; 
x_5 = l_list_map___main___at_lean_parser_combinators_sep__by_view___spec__1___rarg(x_0, x_1, x_2, x_3, x_4);
x_6 = l_list_join___main___rarg(x_5);
x_7 = l_lean_parser_no__kind;
lean::inc(x_7);
x_9 = l_lean_parser_syntax_mk__node(x_7, x_6);
return x_9;
}
}
obj* l_lean_parser_combinators_sep__by_view(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_sep__by_view___rarg___boxed), 11, 0);
return x_2;
}
}
obj* l_list_map___main___at_lean_parser_combinators_sep__by_view___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_4) == 0)
{
obj* x_10; 
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
x_10 = lean::box(0);
return x_10;
}
else
{
obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_18; obj* x_23; 
x_11 = lean::cnstr_get(x_4, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_4, 1);
lean::inc(x_13);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_15 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 x_15 = x_4;
}
x_16 = lean::cnstr_get(x_11, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_11, 1);
lean::inc(x_18);
lean::dec(x_11);
lean::inc(x_3);
lean::inc(x_2);
x_23 = l_list_map___main___at_lean_parser_combinators_sep__by_view___spec__1___rarg(x_0, x_1, x_2, x_3, x_13);
if (lean::obj_tag(x_18) == 0)
{
obj* x_26; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
lean::dec(x_18);
lean::dec(x_3);
x_26 = lean::cnstr_get(x_2, 1);
lean::inc(x_26);
lean::dec(x_2);
x_29 = lean::apply_1(x_26, x_16);
x_30 = lean::box(0);
if (lean::is_scalar(x_15)) {
 x_31 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_31 = x_15;
}
lean::cnstr_set(x_31, 0, x_29);
lean::cnstr_set(x_31, 1, x_30);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_23);
return x_32;
}
else
{
obj* x_33; obj* x_36; obj* x_39; obj* x_40; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
x_33 = lean::cnstr_get(x_18, 0);
lean::inc(x_33);
lean::dec(x_18);
x_36 = lean::cnstr_get(x_2, 1);
lean::inc(x_36);
lean::dec(x_2);
x_39 = lean::apply_1(x_36, x_16);
x_40 = lean::cnstr_get(x_3, 1);
lean::inc(x_40);
lean::dec(x_3);
x_43 = lean::apply_1(x_40, x_33);
x_44 = lean::box(0);
if (lean::is_scalar(x_15)) {
 x_45 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_45 = x_15;
}
lean::cnstr_set(x_45, 0, x_43);
lean::cnstr_set(x_45, 1, x_44);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_39);
lean::cnstr_set(x_46, 1, x_45);
x_47 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_23);
return x_47;
}
}
}
}
obj* l_list_map___main___at_lean_parser_combinators_sep__by_view___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_list_map___main___at_lean_parser_combinators_sep__by_view___spec__1___rarg), 5, 0);
return x_6;
}
}
obj* l_lean_parser_combinators_sep__by_view___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10) {
_start:
{
unsigned char x_11; obj* x_12; 
x_11 = lean::unbox(x_8);
x_12 = l_lean_parser_combinators_sep__by_view___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11, x_9, x_10);
return x_12;
}
}
obj* l_lean_parser_combinators_sep__by1_tokens___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = l_lean_parser_combinators_sep__by_tokens___rarg(x_0, x_1);
x_3 = l_lean_parser_tokens___rarg(x_2);
return x_3;
}
}
obj* l_lean_parser_combinators_sep__by1_tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, unsigned char x_7) {
_start:
{
obj* x_15; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_sep__by1_tokens___rarg), 2, 0);
return x_15;
}
}
obj* l_lean_parser_combinators_sep__by1_tokens___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
unsigned char x_8; obj* x_9; 
x_8 = lean::unbox(x_7);
x_9 = l_lean_parser_combinators_sep__by1_tokens(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_8);
return x_9;
}
}
obj* l_lean_parser_combinators_sep__by1_view___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, unsigned char x_8, obj* x_9, obj* x_10) {
_start:
{
obj* x_21; obj* x_22; obj* x_23; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
lean::inc(x_10);
lean::inc(x_7);
lean::inc(x_6);
lean::inc(x_9);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_sep__by_view___rarg___lambda__1), 5, 4);
lean::closure_set(x_21, 0, x_9);
lean::closure_set(x_21, 1, x_6);
lean::closure_set(x_21, 2, x_7);
lean::closure_set(x_21, 3, x_10);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_sep__by1_view___rarg___lambda__1), 5, 4);
lean::closure_set(x_22, 0, x_6);
lean::closure_set(x_22, 1, x_7);
lean::closure_set(x_22, 2, x_9);
lean::closure_set(x_22, 3, x_10);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_22);
return x_23;
}
}
obj* l_lean_parser_combinators_sep__by1_view___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_9; 
x_5 = l_list_map___main___at_lean_parser_combinators_sep__by1_view___spec__1___rarg(x_0, x_1, x_2, x_3, x_4);
x_6 = l_list_join___main___rarg(x_5);
x_7 = l_lean_parser_no__kind;
lean::inc(x_7);
x_9 = l_lean_parser_syntax_mk__node(x_7, x_6);
return x_9;
}
}
obj* l_lean_parser_combinators_sep__by1_view(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_sep__by1_view___rarg___boxed), 11, 0);
return x_2;
}
}
obj* l_list_map___main___at_lean_parser_combinators_sep__by1_view___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_4) == 0)
{
obj* x_10; 
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
x_10 = lean::box(0);
return x_10;
}
else
{
obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_18; obj* x_23; 
x_11 = lean::cnstr_get(x_4, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_4, 1);
lean::inc(x_13);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_15 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 x_15 = x_4;
}
x_16 = lean::cnstr_get(x_11, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_11, 1);
lean::inc(x_18);
lean::dec(x_11);
lean::inc(x_3);
lean::inc(x_2);
x_23 = l_list_map___main___at_lean_parser_combinators_sep__by1_view___spec__1___rarg(x_0, x_1, x_2, x_3, x_13);
if (lean::obj_tag(x_18) == 0)
{
obj* x_26; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
lean::dec(x_18);
lean::dec(x_3);
x_26 = lean::cnstr_get(x_2, 1);
lean::inc(x_26);
lean::dec(x_2);
x_29 = lean::apply_1(x_26, x_16);
x_30 = lean::box(0);
if (lean::is_scalar(x_15)) {
 x_31 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_31 = x_15;
}
lean::cnstr_set(x_31, 0, x_29);
lean::cnstr_set(x_31, 1, x_30);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_23);
return x_32;
}
else
{
obj* x_33; obj* x_36; obj* x_39; obj* x_40; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
x_33 = lean::cnstr_get(x_18, 0);
lean::inc(x_33);
lean::dec(x_18);
x_36 = lean::cnstr_get(x_2, 1);
lean::inc(x_36);
lean::dec(x_2);
x_39 = lean::apply_1(x_36, x_16);
x_40 = lean::cnstr_get(x_3, 1);
lean::inc(x_40);
lean::dec(x_3);
x_43 = lean::apply_1(x_40, x_33);
x_44 = lean::box(0);
if (lean::is_scalar(x_15)) {
 x_45 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_45 = x_15;
}
lean::cnstr_set(x_45, 0, x_43);
lean::cnstr_set(x_45, 1, x_44);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_39);
lean::cnstr_set(x_46, 1, x_45);
x_47 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_23);
return x_47;
}
}
}
}
obj* l_list_map___main___at_lean_parser_combinators_sep__by1_view___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_list_map___main___at_lean_parser_combinators_sep__by1_view___spec__1___rarg), 5, 0);
return x_6;
}
}
obj* l_lean_parser_combinators_sep__by1_view___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7, obj* x_8, obj* x_9, obj* x_10) {
_start:
{
unsigned char x_11; obj* x_12; 
x_11 = lean::unbox(x_8);
x_12 = l_lean_parser_combinators_sep__by1_view___rarg(x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11, x_9, x_10);
return x_12;
}
}
obj* l_lean_parser_combinators_optional___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_15; obj* x_18; obj* x_20; obj* x_23; obj* x_25; obj* x_26; obj* x_29; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
lean::dec(x_2);
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::cnstr_get(x_1, 1);
lean::inc(x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___rarg___lambda__1), 2, 1);
lean::closure_set(x_11, 0, x_1);
x_12 = lean::apply_3(x_9, lean::box(0), x_4, x_11);
x_13 = lean::cnstr_get(x_3, 1);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_3, 0);
lean::inc(x_15);
lean::dec(x_3);
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_18, 0);
lean::inc(x_20);
lean::dec(x_18);
x_23 = l_optional___rarg___closed__1;
lean::inc(x_23);
x_25 = lean::apply_4(x_20, lean::box(0), lean::box(0), x_23, x_12);
x_26 = lean::cnstr_get(x_15, 1);
lean::inc(x_26);
lean::dec(x_15);
x_29 = lean::box(0);
lean::inc(x_26);
x_31 = lean::apply_2(x_26, lean::box(0), x_29);
x_32 = lean::apply_3(x_13, lean::box(0), x_25, x_31);
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___rarg___lambda__2), 2, 1);
lean::closure_set(x_33, 0, x_26);
x_34 = lean::apply_4(x_6, lean::box(0), lean::box(0), x_32, x_33);
return x_34;
}
}
obj* l_lean_parser_combinators_optional___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_1, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_1, 3);
lean::inc(x_11);
lean::dec(x_1);
x_14 = l_option_get___main___at_lean_parser_run___spec__2(x_11);
x_15 = lean::box(0);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_14);
lean::cnstr_set(x_16, 1, x_15);
x_17 = l_lean_parser_no__kind;
lean::inc(x_17);
x_19 = l_lean_parser_syntax_mk__node(x_17, x_16);
x_20 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_20, 0, x_19);
x_21 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_21, 0, x_5);
lean::cnstr_set(x_21, 1, x_7);
lean::cnstr_set(x_21, 2, x_9);
lean::cnstr_set(x_21, 3, x_20);
x_22 = lean::apply_2(x_2, lean::box(0), x_21);
return x_22;
}
}
obj* l_lean_parser_combinators_optional___rarg___lambda__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; obj* x_5; 
lean::dec(x_1);
x_3 = l_lean_parser_combinators_many___rarg___closed__1;
lean::inc(x_3);
x_5 = lean::apply_2(x_0, lean::box(0), x_3);
return x_5;
}
else
{
obj* x_6; obj* x_9; obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_6 = lean::cnstr_get(x_1, 0);
lean::inc(x_6);
lean::dec(x_1);
x_9 = lean::box(0);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_6);
lean::cnstr_set(x_10, 1, x_9);
x_11 = l_lean_parser_no__kind;
lean::inc(x_11);
x_13 = l_lean_parser_syntax_mk__node(x_11, x_10);
x_14 = lean::apply_2(x_0, lean::box(0), x_13);
return x_14;
}
}
}
obj* l_lean_parser_combinators_optional(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___rarg), 5, 0);
return x_2;
}
}
obj* l_lean_parser_combinators_optional_tokens___rarg(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_tokens___rarg(x_0);
return x_1;
}
}
obj* l_lean_parser_combinators_optional_tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_12; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional_tokens___rarg), 1, 0);
return x_12;
}
}
obj* l_lean_parser_combinators_optional_view___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_12; obj* x_13; obj* x_14; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
lean::inc(x_5);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional_view___rarg___lambda__1), 2, 1);
lean::closure_set(x_12, 0, x_5);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional_view___rarg___lambda__2), 2, 1);
lean::closure_set(x_13, 0, x_5);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
return x_14;
}
}
obj* l_lean_parser_combinators_optional_view___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_parser_syntax_as__node___main(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_4; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_2);
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
lean::dec(x_0);
x_7 = lean::box(3);
x_8 = lean::apply_1(x_4, x_7);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_13; 
x_10 = lean::cnstr_get(x_2, 0);
lean::inc(x_10);
if (lean::is_shared(x_2)) {
 lean::dec(x_2);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_2, 0);
 x_12 = x_2;
}
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
lean::dec(x_10);
if (lean::obj_tag(x_13) == 0)
{
obj* x_19; 
lean::dec(x_12);
lean::dec(x_13);
lean::dec(x_0);
x_19 = lean::box(0);
return x_19;
}
else
{
obj* x_20; obj* x_22; 
x_20 = lean::cnstr_get(x_13, 0);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_13, 1);
lean::inc(x_22);
lean::dec(x_13);
if (lean::obj_tag(x_22) == 0)
{
obj* x_26; obj* x_29; obj* x_30; 
lean::dec(x_22);
x_26 = lean::cnstr_get(x_0, 0);
lean::inc(x_26);
lean::dec(x_0);
x_29 = lean::apply_1(x_26, x_20);
if (lean::is_scalar(x_12)) {
 x_30 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_30 = x_12;
}
lean::cnstr_set(x_30, 0, x_29);
return x_30;
}
else
{
obj* x_33; obj* x_36; obj* x_37; obj* x_38; 
lean::dec(x_20);
lean::dec(x_22);
x_33 = lean::cnstr_get(x_0, 0);
lean::inc(x_33);
lean::dec(x_0);
x_36 = lean::box(3);
x_37 = lean::apply_1(x_33, x_36);
if (lean::is_scalar(x_12)) {
 x_38 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_38 = x_12;
}
lean::cnstr_set(x_38, 0, x_37);
return x_38;
}
}
}
}
}
obj* l_lean_parser_combinators_optional_view___rarg___lambda__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_4; 
lean::dec(x_0);
lean::dec(x_1);
x_4 = l_lean_parser_combinators_many___rarg___closed__1;
lean::inc(x_4);
return x_4;
}
else
{
obj* x_6; obj* x_9; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_17; 
x_6 = lean::cnstr_get(x_1, 0);
lean::inc(x_6);
lean::dec(x_1);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
lean::dec(x_0);
x_12 = lean::apply_1(x_9, x_6);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
x_15 = l_lean_parser_no__kind;
lean::inc(x_15);
x_17 = l_lean_parser_syntax_mk__node(x_15, x_14);
return x_17;
}
}
}
obj* l_lean_parser_combinators_optional_view(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional_view___rarg), 6, 0);
return x_4;
}
}
obj* l_lean_parser_combinators_optional_view__default___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_12; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_12 = lean::box(0);
return x_12;
}
}
obj* l_lean_parser_combinators_optional_view__default(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional_view__default___rarg), 6, 0);
return x_4;
}
}
obj* l_lean_parser_combinators_any__of___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
lean::dec(x_1);
lean::dec(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_15; 
lean::dec(x_4);
lean::dec(x_3);
x_9 = lean::box(0);
x_10 = l_lean_parser_combinators_any__of___rarg___closed__1;
x_11 = l_mjoin___rarg___closed__1;
lean::inc(x_9);
lean::inc(x_11);
lean::inc(x_10);
x_15 = l_lean_parser_monad__parsec_error___at_lean_parser_combinators_any__of___spec__1___rarg(x_2, lean::box(0), x_10, x_11, x_9, x_9);
return x_15;
}
else
{
obj* x_17; obj* x_19; obj* x_22; obj* x_25; obj* x_26; 
lean::dec(x_2);
x_17 = lean::cnstr_get(x_4, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_4, 1);
lean::inc(x_19);
lean::dec(x_4);
x_22 = lean::cnstr_get(x_3, 1);
lean::inc(x_22);
lean::dec(x_3);
x_25 = lean::apply_1(x_22, lean::box(0));
x_26 = l_list_foldl___main___rarg(x_25, x_17, x_19);
return x_26;
}
}
}
obj* _init_l_lean_parser_combinators_any__of___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("any_of");
return x_0;
}
}
obj* l_lean_parser_combinators_any__of(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_any__of___rarg), 5, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_any__of___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_7; obj* x_10; obj* x_11; 
lean::dec(x_1);
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1), 5, 4);
lean::closure_set(x_10, 0, x_4);
lean::closure_set(x_10, 1, x_2);
lean::closure_set(x_10, 2, x_3);
lean::closure_set(x_10, 3, x_5);
x_11 = lean::apply_2(x_7, lean::box(0), x_10);
return x_11;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_any__of___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_combinators_any__of___spec__1___rarg), 6, 0);
return x_4;
}
}
obj* l_lean_parser_combinators_any__of_tokens___rarg(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_tokens___rarg(x_0);
return x_1;
}
}
obj* l_lean_parser_combinators_any__of_tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_12; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_any__of_tokens___rarg), 1, 0);
return x_12;
}
}
obj* l_lean_parser_combinators_any__of_view___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_10; obj* x_13; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_10 = l_mjoin___rarg___closed__1;
lean::inc(x_10);
lean::inc(x_10);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_10);
lean::cnstr_set(x_13, 1, x_10);
return x_13;
}
}
obj* l_lean_parser_combinators_any__of_view(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_any__of_view___rarg), 5, 0);
return x_2;
}
}
obj* l_lean_parser_combinators_longest__match___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_8; obj* x_9; 
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = l_lean_parser_monad__parsec_longest__match___rarg(x_0, x_2, lean::box(0), x_1, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_longest__match___rarg___lambda__1), 2, 1);
lean::closure_set(x_8, 0, x_3);
x_9 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_7, x_8);
return x_9;
}
}
obj* l_lean_parser_combinators_longest__match___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_4; 
x_4 = lean::box(0);
x_2 = x_4;
goto lbl_3;
}
else
{
obj* x_5; obj* x_7; 
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 1);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_11; obj* x_14; obj* x_17; 
lean::dec(x_7);
lean::dec(x_1);
x_11 = lean::cnstr_get(x_0, 0);
lean::inc(x_11);
lean::dec(x_0);
x_14 = lean::cnstr_get(x_11, 1);
lean::inc(x_14);
lean::dec(x_11);
x_17 = lean::apply_2(x_14, lean::box(0), x_5);
return x_17;
}
else
{
obj* x_20; 
lean::dec(x_5);
lean::dec(x_7);
x_20 = lean::box(0);
x_2 = x_20;
goto lbl_3;
}
}
lbl_3:
{
obj* x_22; obj* x_25; obj* x_28; obj* x_30; obj* x_31; 
lean::dec(x_2);
x_22 = lean::cnstr_get(x_0, 0);
lean::inc(x_22);
lean::dec(x_0);
x_25 = lean::cnstr_get(x_22, 1);
lean::inc(x_25);
lean::dec(x_22);
x_28 = l_lean_parser_choice;
lean::inc(x_28);
x_30 = l_lean_parser_syntax_mk__node(x_28, x_1);
x_31 = lean::apply_2(x_25, lean::box(0), x_30);
return x_31;
}
}
}
obj* l_lean_parser_combinators_longest__match(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_longest__match___rarg), 5, 0);
return x_2;
}
}
obj* l_lean_parser_combinators_longest__match_tokens___rarg(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_tokens___rarg(x_0);
return x_1;
}
}
obj* l_lean_parser_combinators_longest__match_tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_12; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_longest__match_tokens___rarg), 1, 0);
return x_12;
}
}
obj* l_lean_parser_combinators_longest__match_view___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_10; obj* x_13; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_10 = l_mjoin___rarg___closed__1;
lean::inc(x_10);
lean::inc(x_10);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_10);
lean::cnstr_set(x_13, 1, x_10);
return x_13;
}
}
obj* l_lean_parser_combinators_longest__match_view(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_longest__match_view___rarg), 5, 0);
return x_2;
}
}
obj* l_lean_parser_combinators_choice__aux___main___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_15; 
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_3);
x_9 = lean::box(0);
x_10 = l_lean_parser_combinators_choice__aux___main___rarg___closed__1;
x_11 = l_mjoin___rarg___closed__1;
lean::inc(x_9);
lean::inc(x_11);
lean::inc(x_10);
x_15 = l_lean_parser_monad__parsec_error___at_lean_parser_combinators_choice__aux___main___spec__1___rarg(x_1, lean::box(0), x_10, x_11, x_9, x_9);
return x_15;
}
else
{
obj* x_16; obj* x_18; obj* x_21; obj* x_23; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_33; obj* x_34; 
x_16 = lean::cnstr_get(x_3, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_3, 1);
lean::inc(x_18);
lean::dec(x_3);
x_21 = lean::cnstr_get(x_2, 1);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_0, 1);
lean::inc(x_23);
lean::inc(x_4);
lean::inc(x_2);
x_27 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___rarg___lambda__1), 3, 2);
lean::closure_set(x_27, 0, x_2);
lean::closure_set(x_27, 1, x_4);
x_28 = lean::apply_4(x_23, lean::box(0), lean::box(0), x_16, x_27);
x_29 = lean::mk_nat_obj(1u);
x_30 = lean::nat_add(x_4, x_29);
lean::dec(x_29);
lean::dec(x_4);
x_33 = l_lean_parser_combinators_choice__aux___main___rarg(x_0, x_1, x_2, x_18, x_30);
x_34 = lean::apply_3(x_21, lean::box(0), x_28, x_33);
return x_34;
}
}
}
obj* _init_l_lean_parser_combinators_choice__aux___main___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("choice: empty list");
return x_0;
}
}
obj* l_lean_parser_combinators_choice__aux___main___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = lean::box(0);
lean::inc(x_9);
x_11 = lean::alloc_cnstr(2, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_1);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_2);
lean::cnstr_set(x_12, 1, x_9);
x_13 = l_lean_parser_syntax_mk__node(x_11, x_12);
x_14 = lean::apply_2(x_6, lean::box(0), x_13);
return x_14;
}
}
obj* l_lean_parser_combinators_choice__aux___main(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___rarg), 5, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_choice__aux___main___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_7; obj* x_10; obj* x_11; 
lean::dec(x_1);
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1), 5, 4);
lean::closure_set(x_10, 0, x_4);
lean::closure_set(x_10, 1, x_2);
lean::closure_set(x_10, 2, x_3);
lean::closure_set(x_10, 3, x_5);
x_11 = lean::apply_2(x_7, lean::box(0), x_10);
return x_11;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_choice__aux___main___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_combinators_choice__aux___main___spec__1___rarg), 6, 0);
return x_4;
}
}
obj* l_lean_parser_combinators_choice__aux___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_7; 
lean::dec(x_1);
x_7 = l_lean_parser_combinators_choice__aux___main___rarg(x_0, x_2, x_3, x_4, x_5);
return x_7;
}
}
obj* l_lean_parser_combinators_choice__aux(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___rarg), 6, 0);
return x_2;
}
}
obj* l_lean_parser_combinators_choice___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; 
lean::dec(x_1);
x_6 = lean::mk_nat_obj(0u);
x_7 = l_lean_parser_combinators_choice__aux___main___rarg(x_0, x_2, x_3, x_4, x_6);
return x_7;
}
}
obj* l_lean_parser_combinators_choice(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice___rarg), 5, 0);
return x_2;
}
}
obj* l_lean_parser_combinators_choice_tokens___rarg(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_tokens___rarg(x_0);
return x_1;
}
}
obj* l_lean_parser_combinators_choice_tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_12; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice_tokens___rarg), 1, 0);
return x_12;
}
}
obj* l_lean_parser_combinators_longest__choice___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_8; obj* x_11; obj* x_14; obj* x_15; obj* x_16; 
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::mk_nat_obj(0u);
x_8 = l_list_enum__from___main___rarg(x_7, x_4);
lean::inc(x_3);
lean::inc(x_0);
x_11 = l_list_map___main___at_lean_parser_combinators_longest__choice___spec__1___rarg(x_0, x_3, x_8);
lean::inc(x_2);
lean::inc(x_0);
x_14 = l_lean_parser_monad__parsec_longest__match___rarg(x_0, x_2, lean::box(0), x_1, x_11);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_longest__choice___rarg___lambda__1), 4, 3);
lean::closure_set(x_15, 0, x_0);
lean::closure_set(x_15, 1, x_2);
lean::closure_set(x_15, 2, x_3);
x_16 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_14, x_15);
return x_16;
}
}
obj* l_lean_parser_combinators_longest__choice___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
lean::dec(x_0);
if (lean::obj_tag(x_3) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_13; 
lean::dec(x_2);
lean::dec(x_3);
x_7 = lean::box(0);
x_8 = l___private_1297690757__many1__aux___main___rarg___closed__1;
x_9 = l_mjoin___rarg___closed__1;
lean::inc(x_7);
lean::inc(x_9);
lean::inc(x_8);
x_13 = l_lean_parser_monad__parsec_error___at_lean_parser_combinators_longest__choice___spec__2___rarg(x_1, lean::box(0), x_8, x_9, x_7, x_7);
return x_13;
}
else
{
obj* x_15; obj* x_18; obj* x_21; obj* x_24; 
lean::dec(x_1);
x_15 = lean::cnstr_get(x_3, 0);
lean::inc(x_15);
lean::dec(x_3);
x_18 = lean::cnstr_get(x_2, 0);
lean::inc(x_18);
lean::dec(x_2);
x_21 = lean::cnstr_get(x_18, 1);
lean::inc(x_21);
lean::dec(x_18);
x_24 = lean::apply_2(x_21, lean::box(0), x_15);
return x_24;
}
}
}
obj* l_lean_parser_combinators_longest__choice(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_longest__choice___rarg), 5, 0);
return x_2;
}
}
obj* l_list_map___main___at_lean_parser_combinators_longest__choice___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_6; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
x_6 = lean::box(0);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_14; obj* x_17; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 1);
lean::inc(x_9);
if (lean::is_shared(x_2)) {
 lean::dec(x_2);
 x_11 = lean::box(0);
} else {
 lean::cnstr_release(x_2, 0);
 lean::cnstr_release(x_2, 1);
 x_11 = x_2;
}
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_7, 1);
lean::inc(x_14);
lean::dec(x_7);
x_17 = lean::cnstr_get(x_0, 1);
lean::inc(x_17);
lean::inc(x_1);
x_20 = l_list_map___main___at_lean_parser_combinators_longest__choice___spec__1___rarg(x_0, x_1, x_9);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___rarg___lambda__1), 3, 2);
lean::closure_set(x_21, 0, x_1);
lean::closure_set(x_21, 1, x_12);
x_22 = lean::apply_4(x_17, lean::box(0), lean::box(0), x_14, x_21);
if (lean::is_scalar(x_11)) {
 x_23 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_23 = x_11;
}
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_20);
return x_23;
}
}
}
obj* l_list_map___main___at_lean_parser_combinators_longest__choice___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_list_map___main___at_lean_parser_combinators_longest__choice___spec__1___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_longest__choice___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_7; obj* x_10; obj* x_11; 
lean::dec(x_1);
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___rarg___lambda__1), 5, 4);
lean::closure_set(x_10, 0, x_4);
lean::closure_set(x_10, 1, x_2);
lean::closure_set(x_10, 2, x_3);
lean::closure_set(x_10, 3, x_5);
x_11 = lean::apply_2(x_7, lean::box(0), x_10);
return x_11;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_combinators_longest__choice___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_combinators_longest__choice___spec__2___rarg), 6, 0);
return x_4;
}
}
obj* l_lean_parser_combinators_longest__choice_tokens___rarg(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_tokens___rarg(x_0);
return x_1;
}
}
obj* l_lean_parser_combinators_longest__choice_tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_12; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_longest__choice_tokens___rarg), 1, 0);
return x_12;
}
}
obj* l_lean_parser_combinators_try_tokens___rarg(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_tokens___rarg(x_0);
return x_1;
}
}
obj* l_lean_parser_combinators_try_tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_12; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_try_tokens___rarg), 1, 0);
return x_12;
}
}
obj* l_lean_parser_combinators_try_view___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_7; obj* x_9; obj* x_12; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_7 = lean::cnstr_get(x_3, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_3, 1);
lean::inc(x_9);
lean::dec(x_3);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_7);
lean::cnstr_set(x_12, 1, x_9);
return x_12;
}
}
obj* l_lean_parser_combinators_try_view(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_8; 
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_try_view___rarg), 4, 0);
return x_8;
}
}
obj* l_lean_parser_combinators_label_tokens___rarg(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_tokens___rarg(x_0);
return x_1;
}
}
obj* l_lean_parser_combinators_label_tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_14; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_label_tokens___rarg), 1, 0);
return x_14;
}
}
obj* l_lean_parser_combinators_label_view___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_9; obj* x_11; obj* x_14; 
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_4, 1);
lean::inc(x_11);
lean::dec(x_4);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_9);
lean::cnstr_set(x_14, 1, x_11);
return x_14;
}
}
obj* l_lean_parser_combinators_label_view(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_8; 
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_label_view___rarg), 5, 0);
return x_8;
}
}
obj* l_lean_parser_combinators_recurse_tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_10; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_10 = lean::box(0);
return x_10;
}
}
obj* l_lean_parser_combinators_recurse_view___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = l_mjoin___rarg___closed__1;
lean::inc(x_4);
lean::inc(x_4);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_4);
lean::cnstr_set(x_7, 1, x_4);
return x_7;
}
}
obj* l_lean_parser_combinators_recurse_view(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_recurse_view___rarg), 2, 0);
return x_6;
}
}
obj* l_lean_parser_combinators_monad__lift_tokens___rarg(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_tokens___rarg(x_0);
return x_1;
}
}
obj* l_lean_parser_combinators_monad__lift_tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_16; 
lean::dec(x_7);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_monad__lift_tokens___rarg), 1, 0);
return x_16;
}
}
obj* l_lean_parser_combinators_monad__lift_view___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_7; obj* x_10; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
lean::dec(x_2);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_5);
lean::cnstr_set(x_10, 1, x_7);
return x_10;
}
}
obj* l_lean_parser_combinators_monad__lift_view(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_14; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_monad__lift_view___rarg), 3, 0);
return x_14;
}
}
obj* l_lean_parser_combinators_seq__left_tokens___rarg(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_tokens___rarg(x_0);
return x_1;
}
}
obj* l_lean_parser_combinators_seq__left_tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_16; 
lean::dec(x_7);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_seq__left_tokens___rarg), 1, 0);
return x_16;
}
}
obj* l_lean_parser_combinators_seq__left_view___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_11; obj* x_13; obj* x_16; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_11 = lean::cnstr_get(x_5, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_5, 1);
lean::inc(x_13);
lean::dec(x_5);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_11);
lean::cnstr_set(x_16, 1, x_13);
return x_16;
}
}
obj* l_lean_parser_combinators_seq__left_view(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_8; 
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_seq__left_view___rarg), 6, 0);
return x_8;
}
}
obj* l_lean_parser_combinators_seq__right_tokens___rarg(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_tokens___rarg(x_0);
return x_1;
}
}
obj* l_lean_parser_combinators_seq__right_tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_16; 
lean::dec(x_7);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_seq__right_tokens___rarg), 1, 0);
return x_16;
}
}
obj* l_lean_parser_combinators_seq__right_view___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_11; obj* x_13; obj* x_16; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_11 = lean::cnstr_get(x_5, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_5, 1);
lean::inc(x_13);
lean::dec(x_5);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_11);
lean::cnstr_set(x_16, 1, x_13);
return x_16;
}
}
obj* l_lean_parser_combinators_seq__right_view(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_8; 
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_seq__right_view___rarg), 6, 0);
return x_8;
}
}
obj* l_lean_parser_combinators_coe_tokens___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_3; 
lean::dec(x_1);
x_3 = l_lean_parser_tokens___rarg(x_0);
return x_3;
}
}
obj* l_lean_parser_combinators_coe_tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_14; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_coe_tokens___rarg), 2, 0);
return x_14;
}
}
obj* l_lean_parser_combinators_coe_view___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_7; obj* x_10; 
lean::dec(x_2);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 1);
lean::inc(x_7);
lean::dec(x_1);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_5);
lean::cnstr_set(x_10, 1, x_7);
return x_10;
}
}
obj* l_lean_parser_combinators_coe_view(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_14; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_coe_view___rarg), 3, 0);
return x_14;
}
}
obj* l_lean_parser_combinators_coe_view__default___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_10; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_10 = lean::box(0);
return x_10;
}
}
obj* l_lean_parser_combinators_coe_view__default(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_14; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_coe_view__default___rarg), 5, 0);
return x_14;
}
}
void initialize_init_lean_parser_basic();
void initialize_init_data_list_instances();
static bool _G_initialized = false;
void initialize_init_lean_parser_combinators() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_lean_parser_basic();
 initialize_init_data_list_instances();
 l___private_1297690757__many1__aux___main___rarg___closed__1 = _init_l___private_1297690757__many1__aux___main___rarg___closed__1();
 l_lean_parser_combinators_many___rarg___closed__1 = _init_l_lean_parser_combinators_many___rarg___closed__1();
 l_lean_parser_combinators_any__of___rarg___closed__1 = _init_l_lean_parser_combinators_any__of___rarg___closed__1();
 l_lean_parser_combinators_choice__aux___main___rarg___closed__1 = _init_l_lean_parser_combinators_choice__aux___main___rarg___closed__1();
}