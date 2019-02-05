// Lean compiler output
// Module: init.lean.elaborator
// Imports: init.lean.parser.module init.lean.expander init.lean.expr init.lean.options
#include "runtime/object.h"
#include "runtime/apply.h"
#include "runtime/io.h"
#include "kernel/builtin.h"
typedef lean::object obj;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#endif
extern obj* l_lean_parser_command_include_has__view;
obj* l_lean_elaborator_notation_elaborate(obj*, obj*, obj*);
obj* l_lean_parser_syntax_to__format___main(obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_include_elaborate___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__5(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4;
obj* l_lean_elaborator_commands_elaborate___main___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__reader__adapter(obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___closed__4;
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13;
unsigned char l_lean_parser_syntax_is__of__kind___main(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1(obj*, obj*, obj*);
extern obj* l_lean_parser_command_include;
obj* l_list_foldl___main___at_lean_elaborator_elab__def__like___spec__6(obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_ident__univ__params__to__pexpr___spec__1(obj*);
obj* l_list_foldl___main___at_lean_elaborator_include_elaborate___spec__2(obj*, obj*);
obj* l_lean_elaborator_run___closed__7;
obj* l_lean_elaborator_ordered__rbmap_find___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___closed__3;
extern obj* l_lean_expander_get__opt__type___main___closed__1;
obj* l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(obj*, obj*);
extern obj* l_lean_parser_term_sort_has__view_x_27___lambda__1___closed__4;
obj* l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(obj*, obj*, obj*);
obj* l_list_foldr___main___at_lean_elaborator_match__open__spec___spec__1(obj*, obj*);
obj* l_list_filter__map___main___rarg(obj*, obj*);
obj* l_function_comp___rarg(obj*, obj*, obj*);
obj* l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__14(obj*, obj*);
obj* l_lean_elaborator_notation_elaborate___closed__2;
extern obj* l_lean_parser_command_attribute;
obj* l_lean_elaborator_mk__notation__kind___rarg___closed__1;
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3;
obj* l_lean_elaborator_to__pexpr___main___closed__32;
obj* l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3(obj*, obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_register__notation__macro___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__3(unsigned char, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_section_elaborate___lambda__1___closed__1;
obj* l_lean_elaborator_postprocess__notation__spec(obj*);
extern obj* l_lean_parser_number_has__view;
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__23(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3;
obj* l_lean_elaborator_namespace_elaborate___closed__1;
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__2(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_command_open;
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2;
extern obj* l_coroutine_monad___closed__1;
obj* l_lean_elaborator_notation_elaborate___closed__1;
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__16(obj*, obj*, obj*);
extern obj* l_lean_parser_term_sort_has__view;
obj* l_lean_elaborator_max__commands;
unsigned char l_rbnode_get__color___main___rarg(obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1;
extern obj* l_lean_options_mk;
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__4;
obj* l_lean_elaborator_to__pexpr___main___closed__18;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__1(obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__2(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_no__kind;
extern obj* l_lean_parser_term_anonymous__constructor_has__view;
obj* l_lean_elaborator_declaration_elaborate(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__reader__adapter___rarg(obj*);
obj* l_lean_elaborator_preresolve(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__25;
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_max__recursion;
obj* l_lean_elaborator_resolve__context(obj*, obj*, obj*);
obj* l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1(obj*, obj*);
obj* l_lean_elaborator_notation_elaborate__aux___closed__1;
obj* l_string_trim(obj*);
obj* l_lean_elaborator_section_elaborate___lambda__2(obj*, obj*, obj*);
obj* l_lean_elaborator_with__current__command___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_run___closed__4;
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__2(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1(obj*, obj*, obj*);
extern obj* l_lean_parser_term_show_has__view;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__22(obj*, obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__6;
obj* l_lean_elaborator_end__scope___lambda__3(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_universe_elaborate(obj*, obj*, obj*);
obj* l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__24(obj*, obj*);
obj* l_lean_parser_syntax_get__pos(obj*);
obj* l_lean_elaborator_ordered__rbmap_empty___closed__1;
extern obj* l_lean_parser_command_export;
obj* l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__7(obj*, obj*);
obj* l_lean_elaborator_end__scope___lambda__2___closed__1;
obj* l_lean_elaborator_to__pexpr___main___closed__34;
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(obj*, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__28;
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__7(obj*);
obj* l_lean_parser_term_get__leading(obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_term_app_has__view;
obj* l_lean_elaborator_attribute_elaborate___closed__1;
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__5(obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__15(obj*);
obj* l_lean_elaborator_command__parser__config_register__notation__parser(obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_syntax_as__node___main(obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
obj* l_monad__state__trans___rarg(obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4(obj*, obj*, obj*);
obj* l_lean_elaborator_match__spec___closed__1;
obj* l_lean_elaborator_to__pexpr___main___closed__9;
extern obj* l_lean_parser_command_reserve__notation;
obj* l_lean_elaborator_init__quot_elaborate___closed__1;
obj* l_lean_elaborator_ordered__rbmap_of__list___rarg(obj*, obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2(obj*, obj*);
extern obj* l_lean_parser_level_leading_has__view;
obj* l_rbtree_of__list___main___at_lean_elaborator_old__elab__command___spec__15(obj*);
obj* l_lean_elaborator_locally___rarg___lambda__3(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__19(obj*, obj*);
obj* l_lean_elaborator_elab__def__like(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_names__to__pexpr___spec__1(obj*);
obj* l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__1(obj*);
obj* l_lean_elaborator_variables_elaborate___closed__2;
obj* l_lean_parser_substring_of__string(obj*);
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg(obj*, obj*, obj*, obj*);
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__40;
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg(obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_term_match_has__view;
obj* l_lean_elaborator_elaborator__coe__coelaborator(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___boxed(obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_term_struct__inst__item_has__view;
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__18(obj*);
obj* l_lean_parser_term_binders_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_attrs__to__pexpr(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__26(obj*, obj*, obj*);
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_term_lambda_has__view;
obj* l_lean_parser_number_view_to__nat___main(obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3(obj*, obj*);
extern obj* l_lean_parser_command_set__option_has__view;
obj* l_lean_elaborator_run___lambda__6(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1(obj*, obj*, obj*, obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_no__kind_elaborate___lambda__2(obj*, obj*, obj*);
obj* l_rbnode_balance2__node___main___rarg(obj*, obj*, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(obj*, obj*, obj*);
obj* l_lean_elaborator_run___lambda__4___closed__1;
obj* l_lean_elaborator_match__precedence___main___boxed(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2;
obj* l_lean_elaborator_run___lambda__1___closed__1;
obj* l_lean_elaborator_to__pexpr___main___closed__36;
obj* l_lean_elaborator_ordered__rbmap_of__list(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__21(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1;
obj* l_lean_elaborator_to__pexpr___main___closed__39;
unsigned char l_option_is__some___main___rarg(obj*);
obj* l___private_3693562977__run__aux___at_lean_elaborator_run___spec__6(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m(obj*);
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2(obj*, obj*);
extern obj* l_lean_parser_term_inaccessible_has__view;
obj* l_lean_elaborator_decl__modifiers__to__pexpr(obj*, obj*, obj*);
extern obj* l_lean_parser_number_has__view_x_27___lambda__1___closed__6;
obj* l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1___rarg(obj*);
extern obj* l_lean_parser_command_init__quot;
obj* l_lean_elaborator_mk__eqns___closed__1;
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__9(obj*, obj*, obj*);
obj* l_lean_elaborator_mangle__ident(obj*);
extern obj* l_lean_parser_command_open_has__view;
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2(obj*);
unsigned char l_lean_elaborator_match__precedence___main(obj*, obj*);
obj* l_option_map___rarg(obj*, obj*);
obj* l_rbnode_balance1__node___main___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_reserve__notation_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__2;
extern obj* l_lean_parser_command_check;
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(obj*, obj*, obj*);
obj* l_lean_elaborator_infer__mod__to__pexpr___closed__3;
obj* l_lean_parser_term_parser(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_prec__to__nat___main(obj*);
obj* l_lean_elaborator_command__parser__config_register__notation__tokens(obj*, obj*);
obj* l_lean_elaborator_elaborator__coe__coelaborator___lambda__1(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__13(obj*, obj*);
obj* l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1;
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6;
obj* l_lean_elaborator_to__pexpr___main___closed__41;
obj* l_lean_elaborator_run___lambda__8(obj*);
obj* l_lean_elaborator_run___lambda__2(obj*, obj*, obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__2(obj*, obj*, obj*);
unsigned char l_lean_elaborator_is__open__namespace(obj*, obj*);
obj* l_rbnode_insert___at_lean_elaborator_elaborators___spec__3(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1;
extern obj* l_lean_parser_command_namespace;
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__4(obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__11(obj*);
obj* l_lean_elaborator_to__level___main___closed__1;
obj* l_lean_kvmap_set__nat(obj*, obj*, obj*);
obj* l_lean_parser_term_simple__binder_view_to__binder__info___main(obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__9(obj*, obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__10(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__config__coe__frontend__config(obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__5;
obj* l_lean_elaborator_to__pexpr___main___closed__45;
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__4(obj*);
obj* l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___lambda__1(obj*);
obj* l_lean_elaborator_commands_elaborate___main(unsigned char, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_set__option_elaborate(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__3(obj*, obj*);
obj* l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1___lambda__1(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__35;
obj* l_lean_elaborator_to__pexpr___main___closed__38;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__14(obj*, obj*, obj*);
obj* l_lean_elaborator_postprocess__notation__spec___closed__1;
obj* l_lean_elaborator_to__pexpr___main___closed__27;
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_preresolve___main(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7;
obj* l_lean_elaborator_to__pexpr(obj*, obj*, obj*);
obj* l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__6___rarg(obj*, obj*, obj*);
obj* l_state__t_monad__state___rarg(obj*);
extern obj* l_lean_parser_term_struct__inst_has__view;
extern obj* l_lean_parser_command_variables;
obj* l_lean_elaborator_get__namespace(obj*);
obj* l_lean_elaborator_run___lambda__5(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_current__command___rarg___closed__1;
obj* l_lean_elaborator_run___lambda__2___closed__1;
obj* l_lean_elaborator_to__pexpr___main___closed__23;
obj* l_rbmap_find___main___at_lean_elaborator_run___spec__4(obj*, obj*);
obj* l_list_mfilter___main___at_lean_elaborator_variables_elaborate___spec__4(obj*, obj*, obj*);
obj* l_state__t_monad__except___rarg(obj*, obj*, obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2(obj*, obj*, obj*);
obj* l_lean_elaborator_include_elaborate(obj*, obj*, obj*);
unsigned char l_lean_elaborator_is__open__namespace___main(obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__7(obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__12(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__10(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__11;
obj* l_rbmap_find___main___at_lean_elaborator_to__level___main___spec__6(obj*, obj*);
obj* l_lean_elaborator_coelaborator;
obj* l_rbmap_find___main___at_lean_elaborator_variables_elaborate___spec__2(obj*, obj*);
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1(obj*);
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1;
obj* l_lean_elaborator_dummy;
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__20(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___rarg___lambda__2(obj*, obj*);
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg(obj*, obj*, obj*, obj*);
obj* l_reader__t_monad___rarg(obj*);
obj* l_list_foldl___main___at_lean_elaborator_mangle__ident___spec__1(obj*, obj*);
obj* l_except__t_monad__except___rarg(obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__24(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__15(obj*, obj*);
extern obj* l_lean_parser_term_pi_has__view;
extern obj* l_lean_parser_term_explicit_has__view;
unsigned char l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(obj*);
obj* l_reader__t_lift(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_run(obj*);
extern obj* l_lean_parser_ident__univs_has__view;
obj* l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__6(obj*, obj*, obj*);
obj* l_lean_elaborator_is__open__namespace___main___boxed(obj*, obj*);
obj* l_except__t_lift___rarg___lambda__1(obj*);
obj* l_lean_elaborator_yield__to__outside___rarg(obj*);
obj* l_lean_parser_token__map_insert___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__3;
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_match__precedence___boxed(obj*, obj*);
obj* l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1___rarg(obj*, obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1;
extern obj* l_lean_expander_binding__annotation__update;
obj* l_option_get__or__else___main___rarg(obj*, obj*);
obj* l_lean_elaborator_level__get__app__args___main___closed__1;
obj* l_lean_elaborator_to__pexpr___main___closed__2;
obj* l_lean_elaborator_elaborator__t_monad__reader___rarg(obj*);
obj* l_lean_elaborator_coelaborator__m;
obj* l_lean_elaborator_run___closed__5;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__8(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__11(obj*, obj*);
extern obj* l_lean_parser_term_have_has__view;
obj* l_state__t_monad___rarg(obj*);
obj* l_lean_elaborator_infer__mod__to__pexpr___closed__1;
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_ordered__rbmap_of__list___spec__5(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_attribute_elaborate___closed__2;
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_match__open__spec(obj*, obj*);
obj* l_lean_elaborator_resolve__context___main(obj*, obj*, obj*);
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3(obj*, obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__3(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2(obj*, obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__3(obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5;
obj* l_lean_elaborator_elab__def__like___closed__2;
obj* l_list_mmap___main___at_lean_elaborator_match__spec___spec__1(obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__2;
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_module_yield__command___lambda__3(obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_module_header_has__view;
obj* l_coe__decidable__eq(unsigned char);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1;
obj* l_lean_elaborator_locally___rarg___closed__1;
obj* l_lean_elaborator_to__pexpr___main___closed__46;
obj* l_lean_elaborator_elaborator__t_monad__except___rarg(obj*);
obj* l_lean_name_quick__lt___main(obj*, obj*);
obj* l_lean_elaborator_expr_mk__annotation___closed__1;
obj* l_list_zip___rarg___lambda__1(obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2;
obj* l_lean_parser_rec__t_run___at_lean_elaborator_run___spec__5(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__5(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__24;
obj* l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1(obj*, obj*);
obj* l_lean_elaborator_current__command(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__1(obj*, obj*, obj*, obj*);
extern obj* l_char_has__repr___closed__1;
obj* l_lean_elaborator_end__scope___lambda__2(obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_name_to__string___closed__1;
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg___lambda__1(obj*, obj*, obj*);
extern obj* l_lean_parser_command_export_has__view;
obj* l_list_enum__from___main___rarg(obj*, obj*);
obj* l_lean_elaborator_coelaborator__m_monad__coroutine;
obj* l_lean_elaborator_notation_elaborate__aux(obj*, obj*, obj*);
obj* l_lean_elaborator_register__notation__macro(obj*, obj*, obj*);
obj* l_lean_elaborator_run___lambda__4(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_universe_elaborate___closed__1;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__18(obj*, obj*, obj*);
extern obj* l_lean_parser_command_variables_has__view;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__5(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__7(obj*, obj*, obj*);
obj* l_lean_parser_string__lit_view_value(obj*);
extern obj* l_lean_parser_command_declaration;
extern obj* l_lean_parser_term_sort__app_has__view;
obj* l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2(obj*, obj*);
obj* l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___rarg___lambda__4(obj*, obj*, obj*, obj*);
obj* l_lean_parser_term_binder__ident_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator;
obj* l_lean_elaborator_to__pexpr___main___closed__16;
obj* l_lean_elaborator_to__level___main___closed__2;
obj* l_lean_elaborator_run___closed__1;
obj* l___private_3693562977__run__aux___main___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__33;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__4(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__13;
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(obj*, obj*, obj*, obj*);
obj* l_coroutine_bind___main___rarg(obj*, obj*, obj*);
extern obj* l_lean_parser_module_header;
obj* l_lean_kvmap_set__string(obj*, obj*, obj*);
obj* l_lean_elaborator_level__add___main(obj*, obj*);
obj* l_lean_elaborator_end__scope___lambda__1(obj*, obj*);
obj* l_lean_elaborator_export_elaborate(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__31;
obj* l_reader__t_read___rarg(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__37;
obj* l_lean_elaborator_to__pexpr___main___closed__26;
obj* l_lean_elaborator_to__pexpr___main___closed__15;
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__3(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__20;
extern obj* l_lean_parser_command_notation;
extern obj* l_lean_parser_command_end_has__view;
obj* l_lean_elaborator_elaborator__t;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__16(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__3(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__17;
extern obj* l_lean_parser_command_section_has__view;
extern obj* l_lean_parser_command_attribute_has__view;
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__12(obj*);
obj* l_lean_elaborator_module_header_elaborate___closed__1;
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__10(obj*);
obj* l_lean_elaborator_no__kind_elaborate___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1;
obj* l_monad__coroutine__trans___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__42;
obj* l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(obj*);
obj* l_lean_kvmap_set__bool(obj*, obj*, unsigned char);
obj* l_list_foldl___main___at_lean_expr_mk__app___spec__1(obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__6(obj*);
obj* l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__22(obj*, obj*);
obj* l_lean_elaborator_old__elab__command(obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___closed__1;
obj* l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__21(obj*);
obj* l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_variables_elaborate___spec__3(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___rarg(obj*, obj*, obj*, obj*);
obj* l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1___boxed(obj*);
obj* l_lean_elaborator_ordered__rbmap_insert(obj*, obj*, obj*);
obj* l_lean_expander_get__opt__type___main(obj*);
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1;
obj* l_lean_parser_number_view_of__nat(obj*);
obj* l_lean_elaborator_universe_elaborate___closed__2;
obj* l_lean_elaborator_elaborator__t_monad__state(obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(obj*, obj*, obj*, obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9(obj*);
extern obj* l_lean_expander_builtin__transformers;
obj* l_lean_elaborator_run___lambda__7(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_command_namespace_has__view;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__17(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__2(obj*, obj*, obj*);
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__1(obj*, obj*);
obj* l_list_reverse___rarg(obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__20(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__29;
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__6(obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__6(obj*, obj*, obj*);
obj* l_state__t_lift___rarg(obj*, obj*, obj*, obj*);
obj* l_reader__t_monad__reader__adapter(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_run___lambda__1(obj*, obj*, obj*);
obj* l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1;
obj* l_lean_elaborator_expr_mk__annotation(obj*, obj*);
obj* l_lean_elaborator_check_elaborate(obj*, obj*, obj*);
obj* l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(obj*, obj*);
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(obj*, obj*, obj*, obj*, obj*);
extern obj* l_string_join___closed__1;
obj* l_lean_elaborator_ident__univ__params__to__pexpr(obj*);
obj* l_lean_elaborator_command__parser__config_register__notation__parser___closed__2;
obj* l_lean_elaborator_end__scope___lambda__2___closed__2;
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__8(obj*);
obj* l_lean_elaborator_to__pexpr___main(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__2(obj*);
obj* l_lean_elaborator_resolve__context___main___closed__1;
obj* l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1;
obj* l_lean_elaborator_commands_elaborate___main___lambda__3___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1(obj*, obj*);
obj* l_lean_elaborator_run___closed__3;
obj* l_lean_elaborator_elaborator__m;
obj* l_list_zip__with___main___rarg(obj*, obj*, obj*);
obj* l_reader__t_monad__except___rarg(obj*);
unsigned char l_lean_elaborator_match__precedence(obj*, obj*);
obj* l_lean_elaborator_command_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_to__level___main___closed__3;
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__5(obj*, obj*, obj*);
obj* l_lean_elaborator_level__add(obj*, obj*);
obj* l_lean_elaborator_section_elaborate___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_current__command___rarg___lambda__1(obj*, obj*);
obj* l_lean_elaborator_simple__binders__to__pexpr(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___lambda__2(obj*);
obj* l_lean_level_of__nat___main(obj*);
obj* l_lean_elaborator_variables_elaborate___closed__1;
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__3;
obj* l_lean_elaborator_locally(obj*);
obj* l_lean_elaborator_ordered__rbmap_empty(obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_node___at_lean_parser_term_sort__app_parser___spec__2(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_infer__mod__to__pexpr(obj*);
obj* l_lean_parser_trie_insert___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_yield__to__outside___rarg___closed__1;
obj* l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_simple__binders__to__pexpr___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1;
obj* l_lean_elaborator_mk__eqns(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__22;
obj* l_lean_elaborator_open_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_to__level(obj*, obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__5(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__10;
obj* l_lean_elaborator_to__pexpr___main___closed__8;
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5(obj*, obj*);
obj* l_lean_elaborator_locally___rarg___lambda__1(obj*);
extern obj* l_lean_parser_term_projection_has__view;
obj* l_rbmap_insert___main___at_lean_elaborator_elaborators___spec__2(obj*, obj*, obj*);
obj* l_lean_elaborator_level__get__app__args___main(obj*, obj*, obj*);
obj* l_list_join___main___rarg(obj*);
obj* l_coroutine_pure___rarg(obj*, obj*);
obj* l_lean_elaborator_yield__to__outside(obj*, obj*);
obj* l_lean_name_to__string__with__sep___main(obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1(obj*);
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4;
extern obj* l_lean_parser_term_let_has__view;
obj* l_lean_elaborator_to__pexpr___main___closed__14;
obj* l_lean_elaborator_update__parser__config(obj*, obj*);
extern obj* l_lean_parser_command_universe_has__view;
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__2(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__12;
obj* l_lean_elaborator_commands_elaborate(unsigned char, obj*, obj*, obj*, obj*);
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(obj*, obj*, obj*);
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1(obj*);
obj* l_lean_elaborator_prec__to__nat(obj*);
obj* l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(obj*, obj*, obj*);
obj* l_lean_elaborator_module_header_elaborate(obj*, obj*, obj*);
obj* l_list_append___main___rarg(obj*, obj*);
obj* l_lean_elaborator_section_elaborate___closed__1;
obj* l_rbtree_to__list___rarg(obj*);
obj* l_lean_elaborator_namespace_elaborate___lambda__2(obj*, obj*, obj*);
extern obj* l_lean_expander_expand__bracketed__binder___main___closed__4;
obj* l_lean_elaborator_names__to__pexpr(obj*);
obj* l_lean_elaborator_end__scope(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad(obj*);
obj* l_list_foldr___main___at_lean_elaborator_is__open__namespace___main___spec__2(obj*, obj*);
obj* l_lean_format_pretty(obj*, obj*);
obj* l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_elaborators;
extern obj* l_lean_parser_command_set__option;
obj* l_lean_name_append___main(obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_export_elaborate___spec__1(obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__30;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__25(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__4;
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_resolve__context___main___lambda__1(obj*, obj*);
obj* l_lean_elaborator_check_elaborate___closed__1;
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1(obj*, obj*);
extern obj* l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__2;
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3(obj*);
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__2(obj*);
obj* l_list_foldl___main___at_lean_elaborator_elaborators___spec__5(obj*, obj*);
obj* l_lean_elaborator_elab__def__like___closed__1;
obj* l_list_map___main___at_lean_elaborator_mk__eqns___spec__1(obj*, obj*);
obj* l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__12(obj*, obj*);
obj* l_lean_elaborator_run___closed__6;
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__21;
obj* l_lean_elaborator_to__pexpr___main___closed__19;
obj* l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2;
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___closed__2;
obj* l_lean_elaborator_level__get__app__args(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__7;
obj* l_lean_elaborator_elaborator__t_monad__reader(obj*);
extern obj* l_lean_parser_level_trailing_has__view;
obj* l_lean_elaborator_section_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__4(obj*, obj*, unsigned char, obj*, obj*);
obj* l_lean_elaborator_init__quot_elaborate(obj*, obj*, obj*);
obj* l_lean_parser_syntax_kind___main(obj*);
obj* l_lean_elaborator_match__spec(obj*, obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4(obj*, obj*);
obj* l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(obj*);
obj* l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1(obj*, obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__13(obj*);
obj* l_lean_elaborator_mk__eqns___closed__2;
obj* l_lean_elaborator_notation_elaborate__aux___lambda__1(obj*, obj*);
extern obj* l_lean_parser_syntax_reprint__lst___main___closed__1;
obj* l_lean_kvmap_insert__core___main(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__5;
obj* l_list_mmap___main___at_lean_elaborator_to__level___main___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___closed__5;
obj* l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1(obj*);
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6;
obj* l_lean_elaborator_commands_elaborate___main___lambda__5___closed__1;
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__2(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__44;
obj* l_lean_elaborator_no__kind_elaborate(obj*, obj*, obj*);
extern obj* l_lean_parser_command_declaration_has__view;
obj* l_lean_elaborator_current__command___rarg(obj*);
obj* l_lean_elaborator_elaborator__t_monad___rarg(obj*);
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8(obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__7;
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__3(obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__5(obj*, obj*, obj*);
obj* l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___closed__1;
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__1(obj*, obj*, obj*);
obj* l_lean_name_replace__prefix___main(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__except(obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(obj*, obj*, obj*, obj*);
obj* l_except__t_lift___rarg(obj*, obj*, obj*);
extern obj* l_lean_parser_max__prec;
obj* l_lean_elaborator_commands_elaborate___main___lambda__2(unsigned char, obj*, obj*, obj*, obj*);
obj* l_coroutine_yield___rarg(obj*, obj*);
obj* l_lean_elaborator_elaborator__t___at_lean_elaborator_command_elaborate___spec__2;
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__1;
obj* l_lean_elaborator_commands_elaborate___main___lambda__1(obj*);
obj* l_lean_elaborator_end__scope___lambda__3___closed__1;
extern obj* l_lean_expander_no__expansion___closed__1;
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2(obj*, obj*, obj*);
obj* l_lean_elaborator_mk__notation__kind___rarg(obj*);
obj* l_except__t_monad___rarg(obj*);
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__2___closed__1;
extern obj* l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__5;
extern obj* l_lean_parser_command_notation_has__view;
obj* l_lean_elaborator_namespace_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__1;
obj* l_lean_elaborator_to__pexpr___main___closed__43;
obj* l_lean_file__map_to__position(obj*, obj*);
obj* l_lean_name_has__dec__eq___main(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__level___main___spec__3(obj*, obj*, obj*);
obj* l_rbnode_mk__insert__result___main___rarg(unsigned char, obj*);
obj* l_lean_elaborator_to__level___main___closed__4;
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1(obj*, obj*);
obj* l_lean_elaborator_attribute_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_is__open__namespace___boxed(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1;
obj* l_lean_elaborator_infer__mod__to__pexpr___closed__2;
obj* l_lean_expr_mk__capp(obj*, obj*);
obj* l_lean_expander_mk__notation__transformer(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__2(obj*, obj*, obj*);
obj* l_lean_elaborator_mk__notation__kind(obj*);
obj* l_list_length___main___rarg(obj*);
obj* l_lean_elaborator_ordered__rbmap_find(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__state___rarg(obj*);
extern obj* l_lean_parser_command_section;
obj* l_lean_elaborator_to__level___main(obj*, obj*, obj*);
obj* l_lean_elaborator_namespace_elaborate___lambda__1___closed__1;
obj* l_lean_elaborator_to__pexpr___main___lambda__1(obj*);
obj* l_lean_elaborator_namespace_elaborate___lambda__1(obj*, obj*, obj*, obj*);
obj* l_dlist_singleton___rarg(obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__3(obj*);
extern obj* l_lean_message__log_empty;
obj* l_lean_elaborator_get__namespace___rarg(obj*);
obj* l_lean_elaborator_with__current__command(obj*);
extern obj* l_lean_parser_command_check_has__view;
extern obj* l_lean_parser_command_reserve__notation_has__view;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__23(obj*, obj*);
obj* l_lean_elaborator_run___closed__2;
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1;
obj* l_lean_elaborator_variables_elaborate(obj*, obj*, obj*);
obj* l_lean_kvmap_set__name(obj*, obj*, obj*);
obj* l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg(obj*, obj*);
obj* l_lean_elaborator_run___lambda__3(obj*, obj*);
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2(obj*, obj*, obj*, obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2___rarg(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_command_universe;
obj* l_lean_elaborator_to__pexpr___main___closed__6;
obj* l_lean_elaborator_command__parser__config_register__notation__parser___closed__1;
obj* l_lean_elaborator_ordered__rbmap_empty(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_8; 
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_8 = l_lean_elaborator_ordered__rbmap_empty___closed__1;
lean::inc(x_8);
return x_8;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(0u);
lean::inc(x_0);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_0);
lean::cnstr_set(x_3, 2, x_1);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_22; 
lean::inc(x_3);
lean::inc(x_2);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_2);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_6);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::cnstr_get(x_1, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 2);
lean::inc(x_12);
lean::dec(x_1);
lean::inc(x_12);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_12);
lean::cnstr_set(x_16, 1, x_3);
x_17 = l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg(x_0, x_10, x_2, x_16);
x_18 = lean::mk_nat_obj(1u);
x_19 = lean::nat_add(x_12, x_18);
lean::dec(x_18);
lean::dec(x_12);
x_22 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_22, 0, x_9);
lean::cnstr_set(x_22, 1, x_17);
lean::cnstr_set(x_22, 2, x_19);
return x_22;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_ordered__rbmap_insert___rarg), 4, 0);
return x_6;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_6; 
lean::dec(x_0);
lean::inc(x_1);
x_6 = lean::alloc_cnstr(1, 4, 0);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_2);
lean::cnstr_set(x_6, 2, x_3);
lean::cnstr_set(x_6, 3, x_1);
return x_6;
}
case 1:
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_19; 
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_1, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_1, 2);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_1, 3);
lean::inc(x_13);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_15 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 lean::cnstr_release(x_1, 2);
 lean::cnstr_release(x_1, 3);
 x_15 = x_1;
}
lean::inc(x_9);
lean::inc(x_2);
lean::inc(x_0);
x_19 = lean::apply_2(x_0, x_2, x_9);
if (lean::obj_tag(x_19) == 0)
{
obj* x_24; 
lean::dec(x_19);
lean::inc(x_2);
lean::inc(x_9);
lean::inc(x_0);
x_24 = lean::apply_2(x_0, x_9, x_2);
if (lean::obj_tag(x_24) == 0)
{
obj* x_29; 
lean::dec(x_11);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_24);
if (lean::is_scalar(x_15)) {
 x_29 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_29 = x_15;
}
lean::cnstr_set(x_29, 0, x_7);
lean::cnstr_set(x_29, 1, x_2);
lean::cnstr_set(x_29, 2, x_3);
lean::cnstr_set(x_29, 3, x_13);
return x_29;
}
else
{
obj* x_31; obj* x_32; 
lean::dec(x_24);
x_31 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_13, x_2, x_3);
if (lean::is_scalar(x_15)) {
 x_32 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_32 = x_15;
}
lean::cnstr_set(x_32, 0, x_7);
lean::cnstr_set(x_32, 1, x_9);
lean::cnstr_set(x_32, 2, x_11);
lean::cnstr_set(x_32, 3, x_31);
return x_32;
}
}
else
{
obj* x_34; obj* x_35; 
lean::dec(x_19);
x_34 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_7, x_2, x_3);
if (lean::is_scalar(x_15)) {
 x_35 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_35 = x_15;
}
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_9);
lean::cnstr_set(x_35, 2, x_11);
lean::cnstr_set(x_35, 3, x_13);
return x_35;
}
}
default:
{
obj* x_36; obj* x_38; obj* x_40; obj* x_42; obj* x_44; obj* x_48; 
x_36 = lean::cnstr_get(x_1, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_1, 1);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_1, 2);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_1, 3);
lean::inc(x_42);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_44 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 lean::cnstr_release(x_1, 2);
 lean::cnstr_release(x_1, 3);
 x_44 = x_1;
}
lean::inc(x_38);
lean::inc(x_2);
lean::inc(x_0);
x_48 = lean::apply_2(x_0, x_2, x_38);
if (lean::obj_tag(x_48) == 0)
{
obj* x_53; 
lean::dec(x_48);
lean::inc(x_2);
lean::inc(x_38);
lean::inc(x_0);
x_53 = lean::apply_2(x_0, x_38, x_2);
if (lean::obj_tag(x_53) == 0)
{
obj* x_58; 
lean::dec(x_53);
lean::dec(x_0);
lean::dec(x_38);
lean::dec(x_40);
if (lean::is_scalar(x_44)) {
 x_58 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_58 = x_44;
}
lean::cnstr_set(x_58, 0, x_36);
lean::cnstr_set(x_58, 1, x_2);
lean::cnstr_set(x_58, 2, x_3);
lean::cnstr_set(x_58, 3, x_42);
return x_58;
}
else
{
unsigned char x_61; 
lean::dec(x_53);
lean::inc(x_42);
x_61 = l_rbnode_get__color___main___rarg(x_42);
if (x_61 == 0)
{
obj* x_63; obj* x_64; 
lean::dec(x_44);
x_63 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_42, x_2, x_3);
x_64 = l_rbnode_balance2__node___main___rarg(x_63, x_38, x_40, x_36);
return x_64;
}
else
{
obj* x_65; obj* x_66; 
x_65 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_42, x_2, x_3);
if (lean::is_scalar(x_44)) {
 x_66 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_66 = x_44;
}
lean::cnstr_set(x_66, 0, x_36);
lean::cnstr_set(x_66, 1, x_38);
lean::cnstr_set(x_66, 2, x_40);
lean::cnstr_set(x_66, 3, x_65);
return x_66;
}
}
}
else
{
unsigned char x_69; 
lean::dec(x_48);
lean::inc(x_36);
x_69 = l_rbnode_get__color___main___rarg(x_36);
if (x_69 == 0)
{
obj* x_71; obj* x_72; 
lean::dec(x_44);
x_71 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_36, x_2, x_3);
x_72 = l_rbnode_balance1__node___main___rarg(x_71, x_38, x_40, x_42);
return x_72;
}
else
{
obj* x_73; obj* x_74; 
x_73 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_36, x_2, x_3);
if (lean::is_scalar(x_44)) {
 x_74 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_74 = x_44;
}
lean::cnstr_set(x_74, 0, x_73);
lean::cnstr_set(x_74, 1, x_38);
lean::cnstr_set(x_74, 2, x_40);
lean::cnstr_set(x_74, 3, x_42);
return x_74;
}
}
}
}
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg), 4, 0);
return x_6;
}
}
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
unsigned char x_5; obj* x_6; obj* x_7; 
lean::inc(x_1);
x_5 = l_rbnode_get__color___main___rarg(x_1);
x_6 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_1, x_2, x_3);
x_7 = l_rbnode_mk__insert__result___main___rarg(x_5, x_6);
return x_7;
}
}
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg), 4, 0);
return x_6;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1___rarg), 4, 0);
return x_6;
}
}
obj* l_lean_elaborator_ordered__rbmap_find___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; 
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
lean::dec(x_1);
x_6 = l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg(x_0, lean::box(0), x_3, x_2);
return x_6;
}
}
obj* l_lean_elaborator_ordered__rbmap_find(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_ordered__rbmap_find___rarg), 3, 0);
return x_6;
}
}
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
lean::dec(x_1);
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_8; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_3);
x_8 = lean::box(0);
return x_8;
}
case 1:
{
obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_21; 
x_9 = lean::cnstr_get(x_2, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_2, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_2, 2);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_2, 3);
lean::inc(x_15);
lean::dec(x_2);
lean::inc(x_11);
lean::inc(x_3);
lean::inc(x_0);
x_21 = lean::apply_2(x_0, x_3, x_11);
if (lean::obj_tag(x_21) == 0)
{
obj* x_26; 
lean::dec(x_21);
lean::dec(x_9);
lean::inc(x_3);
lean::inc(x_0);
x_26 = lean::apply_2(x_0, x_11, x_3);
if (lean::obj_tag(x_26) == 0)
{
obj* x_31; 
lean::dec(x_15);
lean::dec(x_26);
lean::dec(x_0);
lean::dec(x_3);
x_31 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_31, 0, x_13);
return x_31;
}
else
{
lean::dec(x_26);
lean::dec(x_13);
x_1 = x_0;
x_2 = x_15;
goto _start;
}
}
else
{
lean::dec(x_15);
lean::dec(x_21);
lean::dec(x_11);
lean::dec(x_13);
x_1 = x_0;
x_2 = x_9;
goto _start;
}
}
default:
{
obj* x_40; obj* x_42; obj* x_44; obj* x_46; obj* x_52; 
x_40 = lean::cnstr_get(x_2, 0);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_2, 1);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_2, 2);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_2, 3);
lean::inc(x_46);
lean::dec(x_2);
lean::inc(x_42);
lean::inc(x_3);
lean::inc(x_0);
x_52 = lean::apply_2(x_0, x_3, x_42);
if (lean::obj_tag(x_52) == 0)
{
obj* x_57; 
lean::dec(x_40);
lean::dec(x_52);
lean::inc(x_3);
lean::inc(x_0);
x_57 = lean::apply_2(x_0, x_42, x_3);
if (lean::obj_tag(x_57) == 0)
{
obj* x_62; 
lean::dec(x_46);
lean::dec(x_0);
lean::dec(x_3);
lean::dec(x_57);
x_62 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_62, 0, x_44);
return x_62;
}
else
{
lean::dec(x_44);
lean::dec(x_57);
x_1 = x_0;
x_2 = x_46;
goto _start;
}
}
else
{
lean::dec(x_42);
lean::dec(x_44);
lean::dec(x_46);
lean::dec(x_52);
x_1 = x_0;
x_2 = x_40;
goto _start;
}
}
}
}
}
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg), 4, 0);
return x_4;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg(x_0, lean::box(0), x_1, x_2);
return x_3;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1___rarg), 3, 0);
return x_6;
}
}
obj* l_lean_elaborator_ordered__rbmap_of__list___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; 
x_2 = l_lean_elaborator_ordered__rbmap_empty___closed__1;
lean::inc(x_2);
x_4 = l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__6___rarg(x_0, x_2, x_1);
return x_4;
}
}
obj* l_lean_elaborator_ordered__rbmap_of__list(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_ordered__rbmap_of__list___rarg), 2, 0);
return x_6;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_6; 
lean::dec(x_0);
lean::inc(x_1);
x_6 = lean::alloc_cnstr(1, 4, 0);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_2);
lean::cnstr_set(x_6, 2, x_3);
lean::cnstr_set(x_6, 3, x_1);
return x_6;
}
case 1:
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_19; 
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_1, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_1, 2);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_1, 3);
lean::inc(x_13);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_15 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 lean::cnstr_release(x_1, 2);
 lean::cnstr_release(x_1, 3);
 x_15 = x_1;
}
lean::inc(x_9);
lean::inc(x_2);
lean::inc(x_0);
x_19 = lean::apply_2(x_0, x_2, x_9);
if (lean::obj_tag(x_19) == 0)
{
obj* x_24; 
lean::dec(x_19);
lean::inc(x_2);
lean::inc(x_9);
lean::inc(x_0);
x_24 = lean::apply_2(x_0, x_9, x_2);
if (lean::obj_tag(x_24) == 0)
{
obj* x_29; 
lean::dec(x_11);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_24);
if (lean::is_scalar(x_15)) {
 x_29 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_29 = x_15;
}
lean::cnstr_set(x_29, 0, x_7);
lean::cnstr_set(x_29, 1, x_2);
lean::cnstr_set(x_29, 2, x_3);
lean::cnstr_set(x_29, 3, x_13);
return x_29;
}
else
{
obj* x_31; obj* x_32; 
lean::dec(x_24);
x_31 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_13, x_2, x_3);
if (lean::is_scalar(x_15)) {
 x_32 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_32 = x_15;
}
lean::cnstr_set(x_32, 0, x_7);
lean::cnstr_set(x_32, 1, x_9);
lean::cnstr_set(x_32, 2, x_11);
lean::cnstr_set(x_32, 3, x_31);
return x_32;
}
}
else
{
obj* x_34; obj* x_35; 
lean::dec(x_19);
x_34 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_7, x_2, x_3);
if (lean::is_scalar(x_15)) {
 x_35 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_35 = x_15;
}
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_9);
lean::cnstr_set(x_35, 2, x_11);
lean::cnstr_set(x_35, 3, x_13);
return x_35;
}
}
default:
{
obj* x_36; obj* x_38; obj* x_40; obj* x_42; obj* x_44; obj* x_48; 
x_36 = lean::cnstr_get(x_1, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_1, 1);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_1, 2);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_1, 3);
lean::inc(x_42);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_44 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 lean::cnstr_release(x_1, 2);
 lean::cnstr_release(x_1, 3);
 x_44 = x_1;
}
lean::inc(x_38);
lean::inc(x_2);
lean::inc(x_0);
x_48 = lean::apply_2(x_0, x_2, x_38);
if (lean::obj_tag(x_48) == 0)
{
obj* x_53; 
lean::dec(x_48);
lean::inc(x_2);
lean::inc(x_38);
lean::inc(x_0);
x_53 = lean::apply_2(x_0, x_38, x_2);
if (lean::obj_tag(x_53) == 0)
{
obj* x_58; 
lean::dec(x_53);
lean::dec(x_0);
lean::dec(x_38);
lean::dec(x_40);
if (lean::is_scalar(x_44)) {
 x_58 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_58 = x_44;
}
lean::cnstr_set(x_58, 0, x_36);
lean::cnstr_set(x_58, 1, x_2);
lean::cnstr_set(x_58, 2, x_3);
lean::cnstr_set(x_58, 3, x_42);
return x_58;
}
else
{
unsigned char x_61; 
lean::dec(x_53);
lean::inc(x_42);
x_61 = l_rbnode_get__color___main___rarg(x_42);
if (x_61 == 0)
{
obj* x_63; obj* x_64; 
lean::dec(x_44);
x_63 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_42, x_2, x_3);
x_64 = l_rbnode_balance2__node___main___rarg(x_63, x_38, x_40, x_36);
return x_64;
}
else
{
obj* x_65; obj* x_66; 
x_65 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_42, x_2, x_3);
if (lean::is_scalar(x_44)) {
 x_66 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_66 = x_44;
}
lean::cnstr_set(x_66, 0, x_36);
lean::cnstr_set(x_66, 1, x_38);
lean::cnstr_set(x_66, 2, x_40);
lean::cnstr_set(x_66, 3, x_65);
return x_66;
}
}
}
else
{
unsigned char x_69; 
lean::dec(x_48);
lean::inc(x_36);
x_69 = l_rbnode_get__color___main___rarg(x_36);
if (x_69 == 0)
{
obj* x_71; obj* x_72; 
lean::dec(x_44);
x_71 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_36, x_2, x_3);
x_72 = l_rbnode_balance1__node___main___rarg(x_71, x_38, x_40, x_42);
return x_72;
}
else
{
obj* x_73; obj* x_74; 
x_73 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_36, x_2, x_3);
if (lean::is_scalar(x_44)) {
 x_74 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_74 = x_44;
}
lean::cnstr_set(x_74, 0, x_73);
lean::cnstr_set(x_74, 1, x_38);
lean::cnstr_set(x_74, 2, x_40);
lean::cnstr_set(x_74, 3, x_42);
return x_74;
}
}
}
}
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg), 4, 0);
return x_6;
}
}
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
unsigned char x_5; obj* x_6; obj* x_7; 
lean::inc(x_1);
x_5 = l_rbnode_get__color___main___rarg(x_1);
x_6 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_1, x_2, x_3);
x_7 = l_rbnode_mk__insert__result___main___rarg(x_5, x_6);
return x_7;
}
}
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg), 4, 0);
return x_6;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2___rarg), 4, 0);
return x_6;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_22; 
lean::inc(x_3);
lean::inc(x_2);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_2);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_6);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::cnstr_get(x_1, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 2);
lean::inc(x_12);
lean::dec(x_1);
lean::inc(x_12);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_12);
lean::cnstr_set(x_16, 1, x_3);
x_17 = l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg(x_0, x_10, x_2, x_16);
x_18 = lean::mk_nat_obj(1u);
x_19 = lean::nat_add(x_12, x_18);
lean::dec(x_18);
lean::dec(x_12);
x_22 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_22, 0, x_9);
lean::cnstr_set(x_22, 1, x_17);
lean::cnstr_set(x_22, 2, x_19);
return x_22;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1___rarg), 4, 0);
return x_6;
}
}
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_ordered__rbmap_of__list___spec__5(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_8; 
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_8 = l_lean_elaborator_ordered__rbmap_empty___closed__1;
lean::inc(x_8);
return x_8;
}
}
obj* l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__6___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_0);
lean::dec(x_2);
return x_1;
}
else
{
obj* x_5; obj* x_7; obj* x_10; obj* x_12; obj* x_16; 
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
lean::dec(x_2);
x_10 = lean::cnstr_get(x_5, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_5, 1);
lean::inc(x_12);
lean::dec(x_5);
lean::inc(x_0);
x_16 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1___rarg(x_0, x_1, x_10, x_12);
x_1 = x_16;
x_2 = x_7;
goto _start;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__6(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__6___rarg), 3, 0);
return x_6;
}
}
obj* l_lean_elaborator_elaborator__config__coe__frontend__config(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_elaborator__t() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
lean::inc(x_0);
return x_0;
}
}
obj* l_lean_elaborator_elaborator__t_monad__except___rarg(obj* x_0) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
lean::inc(x_0);
x_2 = l_except__t_monad___rarg(x_0);
x_3 = l_except__t_monad__except___rarg(x_0);
x_4 = l_state__t_monad__except___rarg(x_2, lean::box(0), x_3);
x_5 = l_reader__t_monad__except___rarg(x_4);
return x_5;
}
}
obj* l_lean_elaborator_elaborator__t_monad__except(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad__except___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__t_monad__state___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_1 = l_except__t_monad___rarg(x_0);
lean::inc(x_1);
x_3 = l_state__t_monad___rarg(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift), 4, 3);
lean::closure_set(x_4, 0, lean::box(0));
lean::closure_set(x_4, 1, lean::box(0));
lean::closure_set(x_4, 2, x_3);
x_5 = l_state__t_monad__state___rarg(x_1);
x_6 = l_monad__state__trans___rarg(x_4, x_5);
return x_6;
}
}
obj* l_lean_elaborator_elaborator__t_monad__state(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad__state___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__t_monad__reader___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_except__t_monad___rarg(x_0);
x_2 = l_state__t_monad___rarg(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_read___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
return x_3;
}
}
obj* l_lean_elaborator_elaborator__t_monad__reader(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad__reader___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__t_monad___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_except__t_monad___rarg(x_0);
x_2 = l_state__t_monad___rarg(x_1);
x_3 = l_reader__t_monad___rarg(x_2);
return x_3;
}
}
obj* l_lean_elaborator_elaborator__t_monad(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad___rarg), 1, 0);
return x_2;
}
}
obj* _init_l_lean_elaborator_elaborator__m() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_elaborator_elaborator() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_elaborator_coelaborator__m() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_elaborator_coelaborator() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
lean::inc(x_0);
return x_0;
}
}
obj* l_lean_elaborator_command_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1(x_3, x_0, x_1, x_2);
return x_4;
}
}
obj* _init_l_lean_elaborator_elaborator__t___at_lean_elaborator_command_elaborate___spec__2() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
lean::inc(x_0);
return x_0;
}
}
obj* l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_5 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 x_5 = x_1;
}
if (lean::is_scalar(x_5)) {
 x_6 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_6 = x_5;
}
lean::cnstr_set(x_6, 0, x_3);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_11; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
lean::dec(x_1);
x_11 = lean::apply_1(x_0, x_8);
return x_11;
}
}
}
obj* l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 0);
return x_4;
}
}
obj* l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_1);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1___lambda__1), 3, 2);
lean::closure_set(x_7, 0, x_0);
lean::closure_set(x_7, 1, x_2);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_9, 0, x_6);
lean::closure_set(x_9, 1, x_8);
return x_9;
}
}
obj* l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::apply_3(x_3, x_0, x_1, x_5);
return x_8;
}
}
obj* _init_l_lean_elaborator_coelaborator__m_monad__coroutine() {
_start:
{
obj* x_0; obj* x_2; obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_0 = l_coroutine_monad___closed__1;
lean::inc(x_0);
x_2 = l_lean_elaborator_elaborator__t_monad___rarg(x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift), 4, 3);
lean::closure_set(x_3, 0, lean::box(0));
lean::closure_set(x_3, 1, lean::box(0));
lean::closure_set(x_3, 2, x_2);
lean::inc(x_0);
x_5 = l_except__t_monad___rarg(x_0);
lean::inc(x_5);
x_7 = l_state__t_monad___rarg(x_5);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift), 4, 3);
lean::closure_set(x_8, 0, lean::box(0));
lean::closure_set(x_8, 1, lean::box(0));
lean::closure_set(x_8, 2, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_state__t_lift___rarg), 4, 1);
lean::closure_set(x_9, 0, x_5);
lean::inc(x_0);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_lift___rarg), 3, 1);
lean::closure_set(x_11, 0, x_0);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_yield___rarg), 2, 0);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_monad__coroutine__trans___rarg), 3, 2);
lean::closure_set(x_13, 0, x_11);
lean::closure_set(x_13, 1, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_monad__coroutine__trans___rarg), 3, 2);
lean::closure_set(x_14, 0, x_9);
lean::closure_set(x_14, 1, x_13);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_monad__coroutine__trans___rarg), 3, 2);
lean::closure_set(x_15, 0, x_8);
lean::closure_set(x_15, 1, x_14);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_monad__coroutine__trans___rarg), 3, 2);
lean::closure_set(x_16, 0, x_3);
lean::closure_set(x_16, 1, x_15);
return x_16;
}
}
obj* l_lean_elaborator_elaborator__t_monad__reader__adapter___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_except__t_monad___rarg(x_0);
x_2 = l_state__t_monad___rarg(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_monad__reader__adapter), 5, 4);
lean::closure_set(x_3, 0, lean::box(0));
lean::closure_set(x_3, 1, lean::box(0));
lean::closure_set(x_3, 2, lean::box(0));
lean::closure_set(x_3, 3, x_2);
return x_3;
}
}
obj* l_lean_elaborator_elaborator__t_monad__reader__adapter(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad__reader__adapter___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_elaborator_current__command___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg___lambda__1), 2, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_2, 0, x_1);
x_3 = l_lean_elaborator_current__command___rarg___closed__1;
lean::inc(x_3);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_5, 0, x_3);
lean::closure_set(x_5, 1, x_2);
return x_5;
}
}
obj* _init_l_lean_elaborator_current__command___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_pure___rarg), 2, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_lift___rarg___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_2, 0, x_0);
lean::closure_set(x_2, 1, x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__1), 1, 0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_4, 0, x_3);
lean::closure_set(x_4, 1, x_2);
return x_4;
}
}
obj* l_lean_elaborator_current__command___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set(x_2, 1, x_0);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_4, 0, x_3);
return x_4;
}
}
obj* l_lean_elaborator_current__command(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 1, 0);
return x_4;
}
}
obj* l_lean_elaborator_with__current__command___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_7; 
lean::dec(x_5);
x_7 = lean::apply_4(x_1, x_2, x_3, x_4, x_0);
return x_7;
}
}
obj* l_lean_elaborator_with__current__command(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_with__current__command___rarg), 6, 0);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; 
lean::dec(x_1);
x_5 = lean::apply_2(x_0, x_2, x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_6, 0, x_5);
return x_6;
}
}
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg), 4, 0);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__coe__coelaborator(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_1);
x_5 = l_lean_elaborator_current__command___rarg(x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__coe__coelaborator___lambda__1), 3, 2);
lean::closure_set(x_6, 0, x_0);
lean::closure_set(x_6, 1, x_2);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_8, 0, x_5);
lean::closure_set(x_8, 1, x_7);
return x_8;
}
}
obj* l_lean_elaborator_elaborator__coe__coelaborator___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::apply_3(x_0, x_3, x_1, x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_9, 0, x_8);
return x_9;
}
}
obj* l_lean_elaborator_mangle__ident(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; 
x_1 = lean::cnstr_get(x_0, 2);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 4);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_list_foldl___main___at_lean_elaborator_mangle__ident___spec__1(x_1, x_3);
return x_6;
}
}
obj* l_list_foldl___main___at_lean_elaborator_mangle__ident___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean::alloc_cnstr(2, 2, 0);
lean::cnstr_set(x_8, 0, x_0);
lean::cnstr_set(x_8, 1, x_3);
x_0 = x_8;
x_1 = x_5;
goto _start;
}
}
}
obj* l_lean_elaborator_level__get__app__args___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; 
lean::inc(x_0);
x_4 = l_lean_parser_syntax_kind___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_12; obj* x_14; 
lean::dec(x_4);
lean::inc(x_0);
x_7 = l_lean_parser_syntax_to__format___main(x_0);
x_8 = lean::mk_nat_obj(80u);
x_9 = l_lean_format_pretty(x_7, x_8);
x_10 = l_lean_elaborator_level__get__app__args___main___closed__1;
lean::inc(x_10);
x_12 = lean::string_append(x_10, x_9);
lean::dec(x_9);
x_14 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_12, x_1, x_2);
return x_14;
}
else
{
obj* x_15; obj* x_18; obj* x_21; 
x_15 = lean::cnstr_get(x_4, 0);
lean::inc(x_15);
lean::dec(x_4);
x_18 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__5;
lean::inc(x_18);
lean::inc(x_15);
x_21 = l_lean_name_has__dec__eq___main(x_15, x_18);
if (lean::obj_tag(x_21) == 0)
{
obj* x_23; obj* x_25; 
lean::dec(x_21);
x_23 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__2;
lean::inc(x_23);
x_25 = l_lean_name_has__dec__eq___main(x_15, x_23);
if (lean::obj_tag(x_25) == 0)
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_33; obj* x_35; 
lean::dec(x_25);
lean::inc(x_0);
x_28 = l_lean_parser_syntax_to__format___main(x_0);
x_29 = lean::mk_nat_obj(80u);
x_30 = l_lean_format_pretty(x_28, x_29);
x_31 = l_lean_elaborator_level__get__app__args___main___closed__1;
lean::inc(x_31);
x_33 = lean::string_append(x_31, x_30);
lean::dec(x_30);
x_35 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_33, x_1, x_2);
return x_35;
}
else
{
obj* x_37; obj* x_38; obj* x_41; 
lean::dec(x_25);
x_37 = l_lean_parser_level_trailing_has__view;
x_38 = lean::cnstr_get(x_37, 0);
lean::inc(x_38);
lean::inc(x_0);
x_41 = lean::apply_1(x_38, x_0);
if (lean::obj_tag(x_41) == 0)
{
obj* x_43; obj* x_46; obj* x_48; 
lean::dec(x_0);
x_43 = lean::cnstr_get(x_41, 0);
lean::inc(x_43);
lean::dec(x_41);
x_46 = lean::cnstr_get(x_43, 0);
lean::inc(x_46);
x_48 = l_lean_elaborator_level__get__app__args___main(x_46, x_1, x_2);
if (lean::obj_tag(x_48) == 0)
{
obj* x_50; obj* x_52; obj* x_53; 
lean::dec(x_43);
x_50 = lean::cnstr_get(x_48, 0);
lean::inc(x_50);
if (lean::is_shared(x_48)) {
 lean::dec(x_48);
 x_52 = lean::box(0);
} else {
 lean::cnstr_release(x_48, 0);
 x_52 = x_48;
}
if (lean::is_scalar(x_52)) {
 x_53 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_53 = x_52;
}
lean::cnstr_set(x_53, 0, x_50);
return x_53;
}
else
{
obj* x_54; obj* x_56; obj* x_57; obj* x_59; obj* x_61; obj* x_62; obj* x_64; obj* x_66; obj* x_67; obj* x_70; obj* x_71; obj* x_72; obj* x_73; 
x_54 = lean::cnstr_get(x_48, 0);
lean::inc(x_54);
if (lean::is_shared(x_48)) {
 lean::dec(x_48);
 x_56 = lean::box(0);
} else {
 lean::cnstr_release(x_48, 0);
 x_56 = x_48;
}
x_57 = lean::cnstr_get(x_54, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_54, 1);
lean::inc(x_59);
if (lean::is_shared(x_54)) {
 lean::dec(x_54);
 x_61 = lean::box(0);
} else {
 lean::cnstr_release(x_54, 0);
 lean::cnstr_release(x_54, 1);
 x_61 = x_54;
}
x_62 = lean::cnstr_get(x_57, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_57, 1);
lean::inc(x_64);
if (lean::is_shared(x_57)) {
 lean::dec(x_57);
 x_66 = lean::box(0);
} else {
 lean::cnstr_release(x_57, 0);
 lean::cnstr_release(x_57, 1);
 x_66 = x_57;
}
x_67 = lean::cnstr_get(x_43, 1);
lean::inc(x_67);
lean::dec(x_43);
x_70 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_70, 0, x_67);
lean::cnstr_set(x_70, 1, x_64);
if (lean::is_scalar(x_61)) {
 x_71 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_71 = x_61;
}
lean::cnstr_set(x_71, 0, x_62);
lean::cnstr_set(x_71, 1, x_70);
if (lean::is_scalar(x_66)) {
 x_72 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_72 = x_66;
}
lean::cnstr_set(x_72, 0, x_71);
lean::cnstr_set(x_72, 1, x_59);
if (lean::is_scalar(x_56)) {
 x_73 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_73 = x_56;
}
lean::cnstr_set(x_73, 0, x_72);
return x_73;
}
}
else
{
obj* x_76; obj* x_77; obj* x_78; obj* x_79; 
lean::dec(x_1);
lean::dec(x_41);
x_76 = lean::box(0);
x_77 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_77, 0, x_0);
lean::cnstr_set(x_77, 1, x_76);
x_78 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_78, 0, x_77);
lean::cnstr_set(x_78, 1, x_2);
x_79 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_79, 0, x_78);
return x_79;
}
}
}
else
{
obj* x_83; obj* x_84; obj* x_85; obj* x_86; 
lean::dec(x_21);
lean::dec(x_1);
lean::dec(x_15);
x_83 = lean::box(0);
x_84 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_84, 0, x_0);
lean::cnstr_set(x_84, 1, x_83);
x_85 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_85, 0, x_84);
lean::cnstr_set(x_85, 1, x_2);
x_86 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_86, 0, x_85);
return x_86;
}
}
}
}
obj* _init_l_lean_elaborator_level__get__app__args___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("level_get_app_args: unexpected input: ");
return x_0;
}
}
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_8; obj* x_10; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; unsigned char x_18; obj* x_19; obj* x_21; obj* x_22; obj* x_23; 
lean::dec(x_3);
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_5, 2);
lean::inc(x_10);
lean::dec(x_5);
x_13 = l_lean_parser_syntax_get__pos(x_0);
x_14 = lean::mk_nat_obj(0u);
x_15 = l_option_get__or__else___main___rarg(x_13, x_14);
x_16 = l_lean_file__map_to__position(x_10, x_15);
x_17 = lean::box(0);
x_18 = 2;
x_19 = l_string_join___closed__1;
lean::inc(x_19);
x_21 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_21, 0, x_8);
lean::cnstr_set(x_21, 1, x_16);
lean::cnstr_set(x_21, 2, x_17);
lean::cnstr_set(x_21, 3, x_19);
lean::cnstr_set(x_21, 4, x_1);
lean::cnstr_set_scalar(x_21, sizeof(void*)*5, x_18);
x_22 = x_21;
x_23 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_23, 0, x_22);
return x_23;
}
}
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg), 4, 0);
return x_2;
}
}
obj* l_lean_elaborator_level__get__app__args(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_level__get__app__args___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_level__add___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::nat_dec_eq(x_1, x_2);
lean::dec(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_6; obj* x_7; obj* x_10; obj* x_11; 
lean::dec(x_3);
x_6 = lean::mk_nat_obj(1u);
x_7 = lean::nat_sub(x_1, x_6);
lean::dec(x_6);
lean::dec(x_1);
x_10 = l_lean_elaborator_level__add___main(x_0, x_7);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
return x_11;
}
else
{
lean::dec(x_1);
lean::dec(x_3);
return x_0;
}
}
}
obj* l_lean_elaborator_level__add(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_elaborator_level__add___main(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_to__level___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; 
lean::inc(x_1);
lean::inc(x_0);
x_5 = l_lean_elaborator_level__get__app__args___main(x_0, x_1, x_2);
if (lean::obj_tag(x_5) == 0)
{
obj* x_8; obj* x_10; obj* x_11; 
lean::dec(x_0);
lean::dec(x_1);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
if (lean::is_shared(x_5)) {
 lean::dec(x_5);
 x_10 = lean::box(0);
} else {
 lean::cnstr_release(x_5, 0);
 x_10 = x_5;
}
if (lean::is_scalar(x_10)) {
 x_11 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_11 = x_10;
}
lean::cnstr_set(x_11, 0, x_8);
return x_11;
}
else
{
obj* x_12; obj* x_14; obj* x_15; obj* x_17; obj* x_19; obj* x_20; obj* x_22; obj* x_26; 
x_12 = lean::cnstr_get(x_5, 0);
lean::inc(x_12);
if (lean::is_shared(x_5)) {
 lean::dec(x_5);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_5, 0);
 x_14 = x_5;
}
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_12, 1);
lean::inc(x_17);
if (lean::is_shared(x_12)) {
 lean::dec(x_12);
 x_19 = lean::box(0);
} else {
 lean::cnstr_release(x_12, 0);
 lean::cnstr_release(x_12, 1);
 x_19 = x_12;
}
x_20 = lean::cnstr_get(x_15, 0);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_15, 1);
lean::inc(x_22);
lean::dec(x_15);
lean::inc(x_20);
x_26 = l_lean_parser_syntax_kind___main(x_20);
if (lean::obj_tag(x_26) == 0)
{
obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_38; obj* x_40; 
lean::dec(x_26);
lean::dec(x_14);
lean::dec(x_19);
lean::dec(x_20);
lean::dec(x_22);
lean::inc(x_0);
x_33 = l_lean_parser_syntax_to__format___main(x_0);
x_34 = lean::mk_nat_obj(80u);
x_35 = l_lean_format_pretty(x_33, x_34);
x_36 = l_lean_elaborator_to__level___main___closed__1;
lean::inc(x_36);
x_38 = lean::string_append(x_36, x_35);
lean::dec(x_35);
x_40 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_38, x_1, x_17);
return x_40;
}
else
{
obj* x_41; obj* x_44; obj* x_47; 
x_41 = lean::cnstr_get(x_26, 0);
lean::inc(x_41);
lean::dec(x_26);
x_44 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__5;
lean::inc(x_44);
lean::inc(x_41);
x_47 = l_lean_name_has__dec__eq___main(x_41, x_44);
if (lean::obj_tag(x_47) == 0)
{
obj* x_49; obj* x_51; 
lean::dec(x_47);
x_49 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__2;
lean::inc(x_49);
x_51 = l_lean_name_has__dec__eq___main(x_41, x_49);
if (lean::obj_tag(x_51) == 0)
{
obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_63; obj* x_65; 
lean::dec(x_14);
lean::dec(x_19);
lean::dec(x_20);
lean::dec(x_22);
lean::dec(x_51);
lean::inc(x_0);
x_58 = l_lean_parser_syntax_to__format___main(x_0);
x_59 = lean::mk_nat_obj(80u);
x_60 = l_lean_format_pretty(x_58, x_59);
x_61 = l_lean_elaborator_to__level___main___closed__1;
lean::inc(x_61);
x_63 = lean::string_append(x_61, x_60);
lean::dec(x_60);
x_65 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_63, x_1, x_17);
return x_65;
}
else
{
obj* x_67; obj* x_68; obj* x_70; 
lean::dec(x_51);
x_67 = l_lean_parser_level_trailing_has__view;
x_68 = lean::cnstr_get(x_67, 0);
lean::inc(x_68);
x_70 = lean::apply_1(x_68, x_20);
if (lean::obj_tag(x_70) == 0)
{
obj* x_75; obj* x_77; 
lean::dec(x_14);
lean::dec(x_19);
lean::dec(x_22);
lean::dec(x_70);
x_75 = l_lean_elaborator_to__level___main___closed__2;
lean::inc(x_75);
x_77 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_75, x_1, x_17);
return x_77;
}
else
{
obj* x_78; 
x_78 = lean::cnstr_get(x_70, 0);
lean::inc(x_78);
lean::dec(x_70);
if (lean::obj_tag(x_22) == 0)
{
obj* x_83; obj* x_85; 
lean::dec(x_0);
lean::dec(x_22);
x_83 = lean::cnstr_get(x_78, 0);
lean::inc(x_83);
x_85 = l_lean_elaborator_to__level___main(x_83, x_1, x_17);
if (lean::obj_tag(x_85) == 0)
{
obj* x_88; obj* x_91; 
lean::dec(x_78);
lean::dec(x_19);
x_88 = lean::cnstr_get(x_85, 0);
lean::inc(x_88);
lean::dec(x_85);
if (lean::is_scalar(x_14)) {
 x_91 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_91 = x_14;
}
lean::cnstr_set(x_91, 0, x_88);
return x_91;
}
else
{
obj* x_92; obj* x_95; obj* x_97; obj* x_100; obj* x_103; obj* x_104; obj* x_105; obj* x_106; 
x_92 = lean::cnstr_get(x_85, 0);
lean::inc(x_92);
lean::dec(x_85);
x_95 = lean::cnstr_get(x_92, 0);
lean::inc(x_95);
x_97 = lean::cnstr_get(x_92, 1);
lean::inc(x_97);
lean::dec(x_92);
x_100 = lean::cnstr_get(x_78, 2);
lean::inc(x_100);
lean::dec(x_78);
x_103 = l_lean_parser_number_view_to__nat___main(x_100);
x_104 = l_lean_elaborator_level__add___main(x_95, x_103);
if (lean::is_scalar(x_19)) {
 x_105 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_105 = x_19;
}
lean::cnstr_set(x_105, 0, x_104);
lean::cnstr_set(x_105, 1, x_97);
if (lean::is_scalar(x_14)) {
 x_106 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_106 = x_14;
}
lean::cnstr_set(x_106, 0, x_105);
return x_106;
}
}
else
{
obj* x_111; obj* x_113; 
lean::dec(x_14);
lean::dec(x_78);
lean::dec(x_19);
lean::dec(x_22);
x_111 = l_lean_elaborator_to__level___main___closed__2;
lean::inc(x_111);
x_113 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_111, x_1, x_17);
return x_113;
}
}
}
}
else
{
obj* x_116; obj* x_117; obj* x_119; 
lean::dec(x_41);
lean::dec(x_47);
x_116 = l_lean_parser_level_leading_has__view;
x_117 = lean::cnstr_get(x_116, 0);
lean::inc(x_117);
x_119 = lean::apply_1(x_117, x_20);
switch (lean::obj_tag(x_119)) {
case 0:
{
lean::dec(x_119);
if (lean::obj_tag(x_22) == 0)
{
obj* x_124; obj* x_126; 
lean::dec(x_14);
lean::dec(x_19);
lean::dec(x_22);
x_124 = l_lean_elaborator_to__level___main___closed__2;
lean::inc(x_124);
x_126 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_124, x_1, x_17);
return x_126;
}
else
{
obj* x_128; obj* x_130; obj* x_134; 
lean::dec(x_0);
x_128 = lean::cnstr_get(x_22, 0);
lean::inc(x_128);
x_130 = lean::cnstr_get(x_22, 1);
lean::inc(x_130);
lean::dec(x_22);
lean::inc(x_1);
x_134 = l_lean_elaborator_to__level___main(x_128, x_1, x_17);
if (lean::obj_tag(x_134) == 0)
{
obj* x_138; obj* x_141; 
lean::dec(x_130);
lean::dec(x_1);
lean::dec(x_19);
x_138 = lean::cnstr_get(x_134, 0);
lean::inc(x_138);
lean::dec(x_134);
if (lean::is_scalar(x_14)) {
 x_141 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_141 = x_14;
}
lean::cnstr_set(x_141, 0, x_138);
return x_141;
}
else
{
obj* x_142; obj* x_145; obj* x_147; obj* x_150; 
x_142 = lean::cnstr_get(x_134, 0);
lean::inc(x_142);
lean::dec(x_134);
x_145 = lean::cnstr_get(x_142, 0);
lean::inc(x_145);
x_147 = lean::cnstr_get(x_142, 1);
lean::inc(x_147);
lean::dec(x_142);
x_150 = l_list_mmap___main___at_lean_elaborator_to__level___main___spec__1(x_130, x_1, x_147);
if (lean::obj_tag(x_150) == 0)
{
obj* x_153; obj* x_156; 
lean::dec(x_145);
lean::dec(x_19);
x_153 = lean::cnstr_get(x_150, 0);
lean::inc(x_153);
lean::dec(x_150);
if (lean::is_scalar(x_14)) {
 x_156 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_156 = x_14;
}
lean::cnstr_set(x_156, 0, x_153);
return x_156;
}
else
{
obj* x_157; obj* x_160; obj* x_162; obj* x_165; obj* x_166; obj* x_167; 
x_157 = lean::cnstr_get(x_150, 0);
lean::inc(x_157);
lean::dec(x_150);
x_160 = lean::cnstr_get(x_157, 0);
lean::inc(x_160);
x_162 = lean::cnstr_get(x_157, 1);
lean::inc(x_162);
lean::dec(x_157);
x_165 = l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2(x_145, x_160);
if (lean::is_scalar(x_19)) {
 x_166 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_166 = x_19;
}
lean::cnstr_set(x_166, 0, x_165);
lean::cnstr_set(x_166, 1, x_162);
if (lean::is_scalar(x_14)) {
 x_167 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_167 = x_14;
}
lean::cnstr_set(x_167, 0, x_166);
return x_167;
}
}
}
}
case 1:
{
lean::dec(x_119);
if (lean::obj_tag(x_22) == 0)
{
obj* x_172; obj* x_174; 
lean::dec(x_14);
lean::dec(x_19);
lean::dec(x_22);
x_172 = l_lean_elaborator_to__level___main___closed__2;
lean::inc(x_172);
x_174 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_172, x_1, x_17);
return x_174;
}
else
{
obj* x_176; obj* x_178; obj* x_182; 
lean::dec(x_0);
x_176 = lean::cnstr_get(x_22, 0);
lean::inc(x_176);
x_178 = lean::cnstr_get(x_22, 1);
lean::inc(x_178);
lean::dec(x_22);
lean::inc(x_1);
x_182 = l_lean_elaborator_to__level___main(x_176, x_1, x_17);
if (lean::obj_tag(x_182) == 0)
{
obj* x_186; obj* x_189; 
lean::dec(x_178);
lean::dec(x_1);
lean::dec(x_19);
x_186 = lean::cnstr_get(x_182, 0);
lean::inc(x_186);
lean::dec(x_182);
if (lean::is_scalar(x_14)) {
 x_189 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_189 = x_14;
}
lean::cnstr_set(x_189, 0, x_186);
return x_189;
}
else
{
obj* x_190; obj* x_193; obj* x_195; obj* x_198; 
x_190 = lean::cnstr_get(x_182, 0);
lean::inc(x_190);
lean::dec(x_182);
x_193 = lean::cnstr_get(x_190, 0);
lean::inc(x_193);
x_195 = lean::cnstr_get(x_190, 1);
lean::inc(x_195);
lean::dec(x_190);
x_198 = l_list_mmap___main___at_lean_elaborator_to__level___main___spec__3(x_178, x_1, x_195);
if (lean::obj_tag(x_198) == 0)
{
obj* x_201; obj* x_204; 
lean::dec(x_193);
lean::dec(x_19);
x_201 = lean::cnstr_get(x_198, 0);
lean::inc(x_201);
lean::dec(x_198);
if (lean::is_scalar(x_14)) {
 x_204 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_204 = x_14;
}
lean::cnstr_set(x_204, 0, x_201);
return x_204;
}
else
{
obj* x_205; obj* x_208; obj* x_210; obj* x_213; obj* x_214; obj* x_215; 
x_205 = lean::cnstr_get(x_198, 0);
lean::inc(x_205);
lean::dec(x_198);
x_208 = lean::cnstr_get(x_205, 0);
lean::inc(x_208);
x_210 = lean::cnstr_get(x_205, 1);
lean::inc(x_210);
lean::dec(x_205);
x_213 = l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4(x_193, x_208);
if (lean::is_scalar(x_19)) {
 x_214 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_214 = x_19;
}
lean::cnstr_set(x_214, 0, x_213);
lean::cnstr_set(x_214, 1, x_210);
if (lean::is_scalar(x_14)) {
 x_215 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_215 = x_14;
}
lean::cnstr_set(x_215, 0, x_214);
return x_215;
}
}
}
}
case 2:
{
lean::dec(x_119);
if (lean::obj_tag(x_22) == 0)
{
obj* x_220; obj* x_222; obj* x_223; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_22);
x_220 = l_lean_elaborator_to__level___main___closed__3;
lean::inc(x_220);
if (lean::is_scalar(x_19)) {
 x_222 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_222 = x_19;
}
lean::cnstr_set(x_222, 0, x_220);
lean::cnstr_set(x_222, 1, x_17);
if (lean::is_scalar(x_14)) {
 x_223 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_223 = x_14;
}
lean::cnstr_set(x_223, 0, x_222);
return x_223;
}
else
{
obj* x_227; obj* x_229; 
lean::dec(x_14);
lean::dec(x_19);
lean::dec(x_22);
x_227 = l_lean_elaborator_to__level___main___closed__2;
lean::inc(x_227);
x_229 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_227, x_1, x_17);
return x_229;
}
}
case 3:
{
obj* x_234; obj* x_236; 
lean::dec(x_14);
lean::dec(x_119);
lean::dec(x_19);
lean::dec(x_22);
x_234 = l_lean_elaborator_to__level___main___closed__2;
lean::inc(x_234);
x_236 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_234, x_1, x_17);
return x_236;
}
case 4:
{
obj* x_237; 
x_237 = lean::cnstr_get(x_119, 0);
lean::inc(x_237);
lean::dec(x_119);
if (lean::obj_tag(x_22) == 0)
{
obj* x_243; obj* x_244; obj* x_245; obj* x_246; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_22);
x_243 = l_lean_parser_number_view_to__nat___main(x_237);
x_244 = l_lean_level_of__nat___main(x_243);
if (lean::is_scalar(x_19)) {
 x_245 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_245 = x_19;
}
lean::cnstr_set(x_245, 0, x_244);
lean::cnstr_set(x_245, 1, x_17);
if (lean::is_scalar(x_14)) {
 x_246 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_246 = x_14;
}
lean::cnstr_set(x_246, 0, x_245);
return x_246;
}
else
{
obj* x_251; obj* x_253; 
lean::dec(x_237);
lean::dec(x_14);
lean::dec(x_19);
lean::dec(x_22);
x_251 = l_lean_elaborator_to__level___main___closed__2;
lean::inc(x_251);
x_253 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_251, x_1, x_17);
return x_253;
}
}
default:
{
obj* x_254; 
x_254 = lean::cnstr_get(x_119, 0);
lean::inc(x_254);
lean::dec(x_119);
if (lean::obj_tag(x_22) == 0)
{
obj* x_258; obj* x_259; obj* x_261; obj* x_265; 
lean::dec(x_22);
x_258 = l_lean_elaborator_mangle__ident(x_254);
x_259 = lean::cnstr_get(x_17, 4);
lean::inc(x_259);
x_261 = lean::cnstr_get(x_259, 1);
lean::inc(x_261);
lean::dec(x_259);
lean::inc(x_258);
x_265 = l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5(x_261, x_258);
if (lean::obj_tag(x_265) == 0)
{
obj* x_269; obj* x_271; obj* x_272; obj* x_274; obj* x_276; obj* x_277; obj* x_278; 
lean::dec(x_265);
lean::dec(x_14);
lean::dec(x_19);
x_269 = l_lean_name_to__string___closed__1;
lean::inc(x_269);
x_271 = l_lean_name_to__string__with__sep___main(x_269, x_258);
x_272 = l_lean_elaborator_to__level___main___closed__4;
lean::inc(x_272);
x_274 = lean::string_append(x_272, x_271);
lean::dec(x_271);
x_276 = l_char_has__repr___closed__1;
x_277 = lean::string_append(x_274, x_276);
x_278 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_277, x_1, x_17);
return x_278;
}
else
{
obj* x_282; obj* x_283; obj* x_284; 
lean::dec(x_265);
lean::dec(x_0);
lean::dec(x_1);
x_282 = lean::alloc_cnstr(4, 1, 0);
lean::cnstr_set(x_282, 0, x_258);
if (lean::is_scalar(x_19)) {
 x_283 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_283 = x_19;
}
lean::cnstr_set(x_283, 0, x_282);
lean::cnstr_set(x_283, 1, x_17);
if (lean::is_scalar(x_14)) {
 x_284 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_284 = x_14;
}
lean::cnstr_set(x_284, 0, x_283);
return x_284;
}
}
else
{
obj* x_289; obj* x_291; 
lean::dec(x_254);
lean::dec(x_14);
lean::dec(x_19);
lean::dec(x_22);
x_289 = l_lean_elaborator_to__level___main___closed__2;
lean::inc(x_289);
x_291 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_289, x_1, x_17);
return x_291;
}
}
}
}
}
}
}
}
obj* _init_l_lean_elaborator_to__level___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("to_level: unexpected input: ");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__level___main___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed universe level");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__level___main___closed__3() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(5, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_to__level___main___closed__4() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unknown universe variable '");
return x_0;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__level___main___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
lean::inc(x_1);
x_14 = l_lean_elaborator_to__level___main(x_8, x_1, x_2);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_18 = lean::cnstr_get(x_14, 0);
lean::inc(x_18);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_20 = x_14;
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_24; obj* x_25; obj* x_27; obj* x_29; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_24 = x_14;
}
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
if (lean::is_shared(x_22)) {
 lean::dec(x_22);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_22, 0);
 lean::cnstr_release(x_22, 1);
 x_29 = x_22;
}
x_30 = l_list_mmap___main___at_lean_elaborator_to__level___main___spec__1(x_10, x_1, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_34; obj* x_37; 
lean::dec(x_12);
lean::dec(x_25);
lean::dec(x_29);
x_34 = lean::cnstr_get(x_30, 0);
lean::inc(x_34);
lean::dec(x_30);
if (lean::is_scalar(x_24)) {
 x_37 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_37 = x_24;
}
lean::cnstr_set(x_37, 0, x_34);
return x_37;
}
else
{
obj* x_38; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_48; 
x_38 = lean::cnstr_get(x_30, 0);
lean::inc(x_38);
lean::dec(x_30);
x_41 = lean::cnstr_get(x_38, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_38, 1);
lean::inc(x_43);
lean::dec(x_38);
if (lean::is_scalar(x_12)) {
 x_46 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_46 = x_12;
}
lean::cnstr_set(x_46, 0, x_25);
lean::cnstr_set(x_46, 1, x_41);
if (lean::is_scalar(x_29)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_29;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_43);
if (lean::is_scalar(x_24)) {
 x_48 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_48 = x_24;
}
lean::cnstr_set(x_48, 0, x_47);
return x_48;
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2(x_0, x_5);
x_9 = lean::alloc_cnstr(2, 2, 0);
lean::cnstr_set(x_9, 0, x_3);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__level___main___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
lean::inc(x_1);
x_14 = l_lean_elaborator_to__level___main(x_8, x_1, x_2);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_18 = lean::cnstr_get(x_14, 0);
lean::inc(x_18);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_20 = x_14;
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_24; obj* x_25; obj* x_27; obj* x_29; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_24 = x_14;
}
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
if (lean::is_shared(x_22)) {
 lean::dec(x_22);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_22, 0);
 lean::cnstr_release(x_22, 1);
 x_29 = x_22;
}
x_30 = l_list_mmap___main___at_lean_elaborator_to__level___main___spec__3(x_10, x_1, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_34; obj* x_37; 
lean::dec(x_12);
lean::dec(x_25);
lean::dec(x_29);
x_34 = lean::cnstr_get(x_30, 0);
lean::inc(x_34);
lean::dec(x_30);
if (lean::is_scalar(x_24)) {
 x_37 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_37 = x_24;
}
lean::cnstr_set(x_37, 0, x_34);
return x_37;
}
else
{
obj* x_38; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_48; 
x_38 = lean::cnstr_get(x_30, 0);
lean::inc(x_38);
lean::dec(x_30);
x_41 = lean::cnstr_get(x_38, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_38, 1);
lean::inc(x_43);
lean::dec(x_38);
if (lean::is_scalar(x_12)) {
 x_46 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_46 = x_12;
}
lean::cnstr_set(x_46, 0, x_25);
lean::cnstr_set(x_46, 1, x_41);
if (lean::is_scalar(x_29)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_29;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_43);
if (lean::is_scalar(x_24)) {
 x_48 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_48 = x_24;
}
lean::cnstr_set(x_48, 0, x_47);
return x_48;
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4(x_0, x_5);
x_9 = lean::alloc_cnstr(3, 2, 0);
lean::cnstr_set(x_9, 0, x_3);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_rbmap_find___main___at_lean_elaborator_to__level___main___spec__6(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_2, x_1);
return x_5;
}
}
obj* l_lean_elaborator_to__level(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_to__level___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_expr_mk__annotation(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; obj* x_6; 
x_2 = lean::box(0);
x_3 = l_lean_elaborator_expr_mk__annotation___closed__1;
lean::inc(x_3);
x_5 = l_lean_kvmap_set__name(x_2, x_3, x_0);
x_6 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
return x_6;
}
}
obj* _init_l_lean_elaborator_expr_mk__annotation___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("annotation");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_dummy() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Prop");
lean::inc(x_0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::alloc_cnstr(4, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_0);
return x_4;
}
}
obj* l_lean_elaborator_mk__eqns(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_8; 
x_2 = l_list_map___main___at_lean_elaborator_mk__eqns___spec__1(x_0, x_1);
x_3 = l_lean_elaborator_mk__eqns___closed__1;
lean::inc(x_3);
x_5 = l_lean_expr_mk__capp(x_3, x_2);
x_6 = l_lean_elaborator_mk__eqns___closed__2;
lean::inc(x_6);
x_8 = l_lean_elaborator_expr_mk__annotation(x_6, x_5);
return x_8;
}
}
obj* _init_l_lean_elaborator_mk__eqns___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_mk__eqns___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("pre_equations");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_list_map___main___at_lean_elaborator_mk__eqns___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_4; 
lean::dec(x_0);
lean::dec(x_1);
x_4 = lean::box(0);
return x_4;
}
else
{
obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_15; obj* x_17; obj* x_21; unsigned char x_22; obj* x_23; obj* x_25; obj* x_26; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 1);
lean::inc(x_7);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_9 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_9 = x_1;
}
x_10 = lean::cnstr_get(x_5, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_5, 1);
lean::inc(x_12);
lean::dec(x_5);
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_12, 1);
lean::inc(x_17);
lean::dec(x_12);
lean::inc(x_0);
x_21 = l_list_map___main___at_lean_elaborator_mk__eqns___spec__1(x_0, x_7);
x_22 = 4;
x_23 = lean::box(x_22);
lean::inc(x_10);
x_25 = lean_expr_local(x_10, x_10, x_0, x_23);
x_26 = l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1;
lean::inc(x_26);
x_28 = l_lean_elaborator_expr_mk__annotation(x_26, x_25);
x_29 = l_list_foldl___main___at_lean_expr_mk__app___spec__1(x_28, x_15);
x_30 = lean::alloc_cnstr(5, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_17);
if (lean::is_scalar(x_9)) {
 x_31 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_31 = x_9;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_21);
return x_31;
}
}
}
obj* _init_l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("@");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_lean_elaborator_to__pexpr___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_5; 
x_5 = lean::box(0);
x_3 = x_5;
goto lbl_4;
}
case 1:
{
obj* x_6; 
x_6 = lean::box(0);
x_3 = x_6;
goto lbl_4;
}
case 2:
{
obj* x_7; obj* x_9; obj* x_11; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_23; 
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_7, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_7, 1);
lean::inc(x_11);
lean::dec(x_7);
x_20 = l_lean_elaborator_to__pexpr___main___closed__7;
lean::inc(x_20);
lean::inc(x_9);
x_23 = l_lean_name_has__dec__eq___main(x_9, x_20);
if (lean::obj_tag(x_23) == 0)
{
obj* x_25; obj* x_28; 
lean::dec(x_23);
x_25 = l_lean_elaborator_to__pexpr___main___closed__2;
lean::inc(x_25);
lean::inc(x_9);
x_28 = l_lean_name_has__dec__eq___main(x_9, x_25);
if (lean::obj_tag(x_28) == 0)
{
obj* x_29; obj* x_32; 
x_29 = l_lean_elaborator_to__pexpr___main___closed__8;
lean::inc(x_29);
lean::inc(x_9);
x_32 = l_lean_name_has__dec__eq___main(x_9, x_29);
if (lean::obj_tag(x_32) == 0)
{
obj* x_34; obj* x_37; 
lean::dec(x_32);
x_34 = l_lean_elaborator_to__pexpr___main___closed__9;
lean::inc(x_34);
lean::inc(x_9);
x_37 = l_lean_name_has__dec__eq___main(x_9, x_34);
if (lean::obj_tag(x_37) == 0)
{
obj* x_39; obj* x_42; 
lean::dec(x_37);
x_39 = l_lean_parser_term_sort_has__view_x_27___lambda__1___closed__4;
lean::inc(x_39);
lean::inc(x_9);
x_42 = l_lean_name_has__dec__eq___main(x_9, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_44; obj* x_47; 
lean::dec(x_42);
x_44 = l_lean_elaborator_to__pexpr___main___closed__10;
lean::inc(x_44);
lean::inc(x_9);
x_47 = l_lean_name_has__dec__eq___main(x_9, x_44);
if (lean::obj_tag(x_47) == 0)
{
obj* x_49; obj* x_52; 
lean::dec(x_47);
x_49 = l_lean_elaborator_to__pexpr___main___closed__11;
lean::inc(x_49);
lean::inc(x_9);
x_52 = l_lean_name_has__dec__eq___main(x_9, x_49);
if (lean::obj_tag(x_52) == 0)
{
obj* x_54; obj* x_57; 
lean::dec(x_52);
x_54 = l_lean_elaborator_to__pexpr___main___closed__12;
lean::inc(x_54);
lean::inc(x_9);
x_57 = l_lean_name_has__dec__eq___main(x_9, x_54);
if (lean::obj_tag(x_57) == 0)
{
obj* x_59; obj* x_62; 
lean::dec(x_57);
x_59 = l_lean_elaborator_to__pexpr___main___closed__13;
lean::inc(x_59);
lean::inc(x_9);
x_62 = l_lean_name_has__dec__eq___main(x_9, x_59);
if (lean::obj_tag(x_62) == 0)
{
obj* x_64; obj* x_67; 
lean::dec(x_62);
x_64 = l_lean_elaborator_to__pexpr___main___closed__14;
lean::inc(x_64);
lean::inc(x_9);
x_67 = l_lean_name_has__dec__eq___main(x_9, x_64);
if (lean::obj_tag(x_67) == 0)
{
obj* x_69; obj* x_72; 
lean::dec(x_67);
x_69 = l_lean_elaborator_to__pexpr___main___closed__15;
lean::inc(x_69);
lean::inc(x_9);
x_72 = l_lean_name_has__dec__eq___main(x_9, x_69);
if (lean::obj_tag(x_72) == 0)
{
obj* x_74; obj* x_77; 
lean::dec(x_72);
x_74 = l_lean_elaborator_to__pexpr___main___closed__16;
lean::inc(x_74);
lean::inc(x_9);
x_77 = l_lean_name_has__dec__eq___main(x_9, x_74);
if (lean::obj_tag(x_77) == 0)
{
obj* x_79; obj* x_82; 
lean::dec(x_77);
x_79 = l_lean_elaborator_to__pexpr___main___closed__17;
lean::inc(x_79);
lean::inc(x_9);
x_82 = l_lean_name_has__dec__eq___main(x_9, x_79);
if (lean::obj_tag(x_82) == 0)
{
obj* x_84; obj* x_87; 
lean::dec(x_82);
x_84 = l_lean_elaborator_to__pexpr___main___closed__18;
lean::inc(x_84);
lean::inc(x_9);
x_87 = l_lean_name_has__dec__eq___main(x_9, x_84);
if (lean::obj_tag(x_87) == 0)
{
obj* x_89; obj* x_92; 
lean::dec(x_87);
x_89 = l_lean_parser_number_has__view_x_27___lambda__1___closed__6;
lean::inc(x_89);
lean::inc(x_9);
x_92 = l_lean_name_has__dec__eq___main(x_9, x_89);
if (lean::obj_tag(x_92) == 0)
{
obj* x_94; obj* x_97; 
lean::dec(x_92);
x_94 = l_lean_elaborator_to__pexpr___main___closed__19;
lean::inc(x_94);
lean::inc(x_9);
x_97 = l_lean_name_has__dec__eq___main(x_9, x_94);
if (lean::obj_tag(x_97) == 0)
{
obj* x_100; obj* x_103; 
lean::dec(x_11);
lean::dec(x_97);
x_100 = l_lean_elaborator_to__pexpr___main___closed__20;
lean::inc(x_100);
lean::inc(x_9);
x_103 = l_lean_name_has__dec__eq___main(x_9, x_100);
if (lean::obj_tag(x_103) == 0)
{
obj* x_105; obj* x_108; 
lean::dec(x_103);
x_105 = l_lean_elaborator_to__pexpr___main___closed__21;
lean::inc(x_105);
lean::inc(x_9);
x_108 = l_lean_name_has__dec__eq___main(x_9, x_105);
if (lean::obj_tag(x_108) == 0)
{
obj* x_110; obj* x_112; obj* x_113; obj* x_115; obj* x_119; 
lean::dec(x_108);
x_110 = l_lean_name_to__string___closed__1;
lean::inc(x_110);
x_112 = l_lean_name_to__string__with__sep___main(x_110, x_9);
x_113 = l_lean_elaborator_to__pexpr___main___closed__22;
lean::inc(x_113);
x_115 = lean::string_append(x_113, x_112);
lean::dec(x_112);
lean::inc(x_1);
lean::inc(x_0);
x_119 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_115, x_1, x_2);
if (lean::obj_tag(x_119) == 0)
{
obj* x_123; obj* x_125; obj* x_126; 
lean::dec(x_28);
lean::dec(x_0);
lean::dec(x_1);
x_123 = lean::cnstr_get(x_119, 0);
lean::inc(x_123);
if (lean::is_shared(x_119)) {
 lean::dec(x_119);
 x_125 = lean::box(0);
} else {
 lean::cnstr_release(x_119, 0);
 x_125 = x_119;
}
if (lean::is_scalar(x_125)) {
 x_126 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_126 = x_125;
}
lean::cnstr_set(x_126, 0, x_123);
return x_126;
}
else
{
obj* x_127; obj* x_129; obj* x_130; obj* x_132; obj* x_134; 
x_127 = lean::cnstr_get(x_119, 0);
lean::inc(x_127);
if (lean::is_shared(x_119)) {
 lean::dec(x_119);
 x_129 = lean::box(0);
} else {
 lean::cnstr_release(x_119, 0);
 x_129 = x_119;
}
x_130 = lean::cnstr_get(x_127, 0);
lean::inc(x_130);
x_132 = lean::cnstr_get(x_127, 1);
lean::inc(x_132);
if (lean::is_shared(x_127)) {
 lean::dec(x_127);
 x_134 = lean::box(0);
} else {
 lean::cnstr_release(x_127, 0);
 lean::cnstr_release(x_127, 1);
 x_134 = x_127;
}
if (lean::obj_tag(x_28) == 0)
{
obj* x_136; 
lean::dec(x_28);
x_136 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_136) == 0)
{
obj* x_139; obj* x_140; 
lean::dec(x_136);
lean::dec(x_1);
if (lean::is_scalar(x_134)) {
 x_139 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_139 = x_134;
}
lean::cnstr_set(x_139, 0, x_130);
lean::cnstr_set(x_139, 1, x_132);
if (lean::is_scalar(x_129)) {
 x_140 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_140 = x_129;
}
lean::cnstr_set(x_140, 0, x_139);
return x_140;
}
else
{
obj* x_141; obj* x_144; obj* x_147; obj* x_150; obj* x_151; obj* x_152; obj* x_154; obj* x_156; obj* x_157; obj* x_160; obj* x_162; obj* x_163; obj* x_164; obj* x_165; 
x_141 = lean::cnstr_get(x_136, 0);
lean::inc(x_141);
lean::dec(x_136);
x_144 = lean::cnstr_get(x_1, 0);
lean::inc(x_144);
lean::dec(x_1);
x_147 = lean::cnstr_get(x_144, 2);
lean::inc(x_147);
lean::dec(x_144);
x_150 = l_lean_file__map_to__position(x_147, x_141);
x_151 = lean::box(0);
x_152 = lean::cnstr_get(x_150, 1);
lean::inc(x_152);
x_154 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_154);
x_156 = l_lean_kvmap_set__nat(x_151, x_154, x_152);
x_157 = lean::cnstr_get(x_150, 0);
lean::inc(x_157);
lean::dec(x_150);
x_160 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_160);
x_162 = l_lean_kvmap_set__nat(x_156, x_160, x_157);
x_163 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_163, 0, x_162);
lean::cnstr_set(x_163, 1, x_130);
if (lean::is_scalar(x_134)) {
 x_164 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_164 = x_134;
}
lean::cnstr_set(x_164, 0, x_163);
lean::cnstr_set(x_164, 1, x_132);
if (lean::is_scalar(x_129)) {
 x_165 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_165 = x_129;
}
lean::cnstr_set(x_165, 0, x_164);
return x_165;
}
}
else
{
obj* x_169; obj* x_170; 
lean::dec(x_28);
lean::dec(x_0);
lean::dec(x_1);
if (lean::is_scalar(x_134)) {
 x_169 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_169 = x_134;
}
lean::cnstr_set(x_169, 0, x_130);
lean::cnstr_set(x_169, 1, x_132);
if (lean::is_scalar(x_129)) {
 x_170 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_170 = x_129;
}
lean::cnstr_set(x_170, 0, x_169);
return x_170;
}
}
}
else
{
obj* x_173; obj* x_174; obj* x_177; obj* x_178; obj* x_180; obj* x_182; 
lean::dec(x_28);
lean::dec(x_108);
x_173 = l_lean_parser_term_match_has__view;
x_174 = lean::cnstr_get(x_173, 0);
lean::inc(x_174);
lean::inc(x_0);
x_177 = lean::apply_1(x_174, x_0);
x_178 = lean::cnstr_get(x_177, 5);
lean::inc(x_178);
x_180 = l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__3(x_178);
lean::inc(x_1);
x_182 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4(x_180, x_1, x_2);
if (lean::obj_tag(x_182) == 0)
{
obj* x_184; obj* x_186; obj* x_187; 
lean::dec(x_177);
x_184 = lean::cnstr_get(x_182, 0);
lean::inc(x_184);
if (lean::is_shared(x_182)) {
 lean::dec(x_182);
 x_186 = lean::box(0);
} else {
 lean::cnstr_release(x_182, 0);
 x_186 = x_182;
}
if (lean::is_scalar(x_186)) {
 x_187 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_187 = x_186;
}
lean::cnstr_set(x_187, 0, x_184);
x_14 = x_187;
goto lbl_15;
}
else
{
obj* x_188; obj* x_190; obj* x_191; obj* x_193; obj* x_195; obj* x_196; obj* x_198; obj* x_200; 
x_188 = lean::cnstr_get(x_182, 0);
lean::inc(x_188);
if (lean::is_shared(x_182)) {
 lean::dec(x_182);
 x_190 = lean::box(0);
} else {
 lean::cnstr_release(x_182, 0);
 x_190 = x_182;
}
x_191 = lean::cnstr_get(x_188, 0);
lean::inc(x_191);
x_193 = lean::cnstr_get(x_188, 1);
lean::inc(x_193);
if (lean::is_shared(x_188)) {
 lean::dec(x_188);
 x_195 = lean::box(0);
} else {
 lean::cnstr_release(x_188, 0);
 lean::cnstr_release(x_188, 1);
 x_195 = x_188;
}
x_196 = lean::cnstr_get(x_177, 2);
lean::inc(x_196);
x_198 = l_lean_expander_get__opt__type___main(x_196);
lean::inc(x_1);
x_200 = l_lean_elaborator_to__pexpr___main(x_198, x_1, x_193);
if (lean::obj_tag(x_200) == 0)
{
obj* x_204; obj* x_207; 
lean::dec(x_195);
lean::dec(x_191);
lean::dec(x_177);
x_204 = lean::cnstr_get(x_200, 0);
lean::inc(x_204);
lean::dec(x_200);
if (lean::is_scalar(x_190)) {
 x_207 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_207 = x_190;
}
lean::cnstr_set(x_207, 0, x_204);
x_14 = x_207;
goto lbl_15;
}
else
{
obj* x_208; obj* x_211; obj* x_213; obj* x_216; 
x_208 = lean::cnstr_get(x_200, 0);
lean::inc(x_208);
lean::dec(x_200);
x_211 = lean::cnstr_get(x_208, 0);
lean::inc(x_211);
x_213 = lean::cnstr_get(x_208, 1);
lean::inc(x_213);
lean::dec(x_208);
x_216 = l_lean_elaborator_mk__eqns(x_211, x_191);
switch (lean::obj_tag(x_216)) {
case 0:
{
obj* x_221; obj* x_225; 
lean::dec(x_195);
lean::dec(x_216);
lean::dec(x_190);
lean::dec(x_177);
x_221 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_1);
lean::inc(x_221);
lean::inc(x_0);
x_225 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_221, x_1, x_213);
x_14 = x_225;
goto lbl_15;
}
case 1:
{
obj* x_230; obj* x_234; 
lean::dec(x_195);
lean::dec(x_216);
lean::dec(x_190);
lean::dec(x_177);
x_230 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_1);
lean::inc(x_230);
lean::inc(x_0);
x_234 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_230, x_1, x_213);
x_14 = x_234;
goto lbl_15;
}
case 2:
{
obj* x_239; obj* x_243; 
lean::dec(x_195);
lean::dec(x_216);
lean::dec(x_190);
lean::dec(x_177);
x_239 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_1);
lean::inc(x_239);
lean::inc(x_0);
x_243 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_239, x_1, x_213);
x_14 = x_243;
goto lbl_15;
}
case 3:
{
obj* x_248; obj* x_252; 
lean::dec(x_195);
lean::dec(x_216);
lean::dec(x_190);
lean::dec(x_177);
x_248 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_1);
lean::inc(x_248);
lean::inc(x_0);
x_252 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_248, x_1, x_213);
x_14 = x_252;
goto lbl_15;
}
case 4:
{
obj* x_257; obj* x_261; 
lean::dec(x_195);
lean::dec(x_216);
lean::dec(x_190);
lean::dec(x_177);
x_257 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_1);
lean::inc(x_257);
lean::inc(x_0);
x_261 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_257, x_1, x_213);
x_14 = x_261;
goto lbl_15;
}
case 5:
{
obj* x_266; obj* x_270; 
lean::dec(x_195);
lean::dec(x_216);
lean::dec(x_190);
lean::dec(x_177);
x_266 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_1);
lean::inc(x_266);
lean::inc(x_0);
x_270 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_266, x_1, x_213);
x_14 = x_270;
goto lbl_15;
}
case 6:
{
obj* x_275; obj* x_279; 
lean::dec(x_195);
lean::dec(x_216);
lean::dec(x_190);
lean::dec(x_177);
x_275 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_1);
lean::inc(x_275);
lean::inc(x_0);
x_279 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_275, x_1, x_213);
x_14 = x_279;
goto lbl_15;
}
case 7:
{
obj* x_284; obj* x_288; 
lean::dec(x_195);
lean::dec(x_216);
lean::dec(x_190);
lean::dec(x_177);
x_284 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_1);
lean::inc(x_284);
lean::inc(x_0);
x_288 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_284, x_1, x_213);
x_14 = x_288;
goto lbl_15;
}
case 8:
{
obj* x_293; obj* x_297; 
lean::dec(x_195);
lean::dec(x_216);
lean::dec(x_190);
lean::dec(x_177);
x_293 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_1);
lean::inc(x_293);
lean::inc(x_0);
x_297 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_293, x_1, x_213);
x_14 = x_297;
goto lbl_15;
}
case 9:
{
obj* x_302; obj* x_306; 
lean::dec(x_195);
lean::dec(x_216);
lean::dec(x_190);
lean::dec(x_177);
x_302 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_1);
lean::inc(x_302);
lean::inc(x_0);
x_306 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_302, x_1, x_213);
x_14 = x_306;
goto lbl_15;
}
case 10:
{
obj* x_307; obj* x_309; obj* x_311; obj* x_312; obj* x_316; 
x_307 = lean::cnstr_get(x_216, 0);
lean::inc(x_307);
x_309 = lean::cnstr_get(x_216, 1);
lean::inc(x_309);
if (lean::is_shared(x_216)) {
 lean::dec(x_216);
 x_311 = lean::box(0);
} else {
 lean::cnstr_release(x_216, 0);
 lean::cnstr_release(x_216, 1);
 x_311 = x_216;
}
x_312 = lean::cnstr_get(x_177, 1);
lean::inc(x_312);
lean::dec(x_177);
lean::inc(x_1);
x_316 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__5(x_312, x_1, x_213);
if (lean::obj_tag(x_316) == 0)
{
obj* x_321; obj* x_324; 
lean::dec(x_311);
lean::dec(x_309);
lean::dec(x_307);
lean::dec(x_195);
x_321 = lean::cnstr_get(x_316, 0);
lean::inc(x_321);
lean::dec(x_316);
if (lean::is_scalar(x_190)) {
 x_324 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_324 = x_190;
}
lean::cnstr_set(x_324, 0, x_321);
x_14 = x_324;
goto lbl_15;
}
else
{
obj* x_325; obj* x_328; obj* x_330; obj* x_333; unsigned char x_334; obj* x_336; obj* x_337; obj* x_338; obj* x_339; obj* x_340; 
x_325 = lean::cnstr_get(x_316, 0);
lean::inc(x_325);
lean::dec(x_316);
x_328 = lean::cnstr_get(x_325, 0);
lean::inc(x_328);
x_330 = lean::cnstr_get(x_325, 1);
lean::inc(x_330);
lean::dec(x_325);
x_333 = l_lean_elaborator_to__pexpr___main___closed__24;
x_334 = 1;
lean::inc(x_333);
x_336 = l_lean_kvmap_set__bool(x_307, x_333, x_334);
if (lean::is_scalar(x_311)) {
 x_337 = lean::alloc_cnstr(10, 2, 0);
} else {
 x_337 = x_311;
}
lean::cnstr_set(x_337, 0, x_336);
lean::cnstr_set(x_337, 1, x_309);
x_338 = l_list_foldl___main___at_lean_expr_mk__app___spec__1(x_337, x_328);
if (lean::is_scalar(x_195)) {
 x_339 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_339 = x_195;
}
lean::cnstr_set(x_339, 0, x_338);
lean::cnstr_set(x_339, 1, x_330);
if (lean::is_scalar(x_190)) {
 x_340 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_340 = x_190;
}
lean::cnstr_set(x_340, 0, x_339);
x_14 = x_340;
goto lbl_15;
}
}
default:
{
obj* x_345; obj* x_349; 
lean::dec(x_195);
lean::dec(x_216);
lean::dec(x_190);
lean::dec(x_177);
x_345 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_1);
lean::inc(x_345);
lean::inc(x_0);
x_349 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_345, x_1, x_213);
x_14 = x_349;
goto lbl_15;
}
}
}
}
}
}
else
{
obj* x_352; obj* x_353; obj* x_356; obj* x_357; obj* x_359; obj* x_360; obj* x_362; obj* x_364; obj* x_365; obj* x_366; obj* x_368; obj* x_370; 
lean::dec(x_28);
lean::dec(x_103);
x_352 = l_lean_parser_term_struct__inst_has__view;
x_353 = lean::cnstr_get(x_352, 0);
lean::inc(x_353);
lean::inc(x_0);
x_356 = lean::apply_1(x_353, x_0);
x_357 = lean::cnstr_get(x_356, 3);
lean::inc(x_357);
x_359 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(x_357);
x_360 = lean::cnstr_get(x_359, 0);
lean::inc(x_360);
x_362 = lean::cnstr_get(x_359, 1);
lean::inc(x_362);
if (lean::is_shared(x_359)) {
 lean::dec(x_359);
 x_364 = lean::box(0);
} else {
 lean::cnstr_release(x_359, 0);
 lean::cnstr_release(x_359, 1);
 x_364 = x_359;
}
x_365 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(x_362);
x_366 = lean::cnstr_get(x_365, 0);
lean::inc(x_366);
x_368 = lean::cnstr_get(x_365, 1);
lean::inc(x_368);
if (lean::is_shared(x_365)) {
 lean::dec(x_365);
 x_370 = lean::box(0);
} else {
 lean::cnstr_release(x_365, 0);
 lean::cnstr_release(x_365, 1);
 x_370 = x_365;
}
if (lean::obj_tag(x_368) == 0)
{
obj* x_374; 
lean::dec(x_368);
lean::inc(x_1);
lean::inc(x_0);
x_374 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(x_0, x_360, x_1, x_2);
if (lean::obj_tag(x_374) == 0)
{
obj* x_382; obj* x_384; obj* x_385; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_370);
lean::dec(x_356);
lean::dec(x_364);
lean::dec(x_366);
x_382 = lean::cnstr_get(x_374, 0);
lean::inc(x_382);
if (lean::is_shared(x_374)) {
 lean::dec(x_374);
 x_384 = lean::box(0);
} else {
 lean::cnstr_release(x_374, 0);
 x_384 = x_374;
}
if (lean::is_scalar(x_384)) {
 x_385 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_385 = x_384;
}
lean::cnstr_set(x_385, 0, x_382);
return x_385;
}
else
{
obj* x_386; obj* x_388; obj* x_389; obj* x_391; obj* x_394; obj* x_398; 
x_386 = lean::cnstr_get(x_374, 0);
lean::inc(x_386);
if (lean::is_shared(x_374)) {
 lean::dec(x_374);
 x_388 = lean::box(0);
} else {
 lean::cnstr_release(x_374, 0);
 x_388 = x_374;
}
x_389 = lean::cnstr_get(x_386, 0);
lean::inc(x_389);
x_391 = lean::cnstr_get(x_386, 1);
lean::inc(x_391);
lean::dec(x_386);
lean::inc(x_1);
lean::inc(x_0);
x_398 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(x_0, x_366, x_1, x_391);
if (lean::obj_tag(x_398) == 0)
{
obj* x_406; obj* x_409; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_370);
lean::dec(x_389);
lean::dec(x_356);
lean::dec(x_364);
x_406 = lean::cnstr_get(x_398, 0);
lean::inc(x_406);
lean::dec(x_398);
if (lean::is_scalar(x_388)) {
 x_409 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_409 = x_388;
}
lean::cnstr_set(x_409, 0, x_406);
return x_409;
}
else
{
obj* x_410; obj* x_413; obj* x_415; obj* x_418; 
x_410 = lean::cnstr_get(x_398, 0);
lean::inc(x_410);
lean::dec(x_398);
x_413 = lean::cnstr_get(x_410, 0);
lean::inc(x_413);
x_415 = lean::cnstr_get(x_410, 1);
lean::inc(x_415);
lean::dec(x_410);
x_418 = lean::cnstr_get(x_356, 2);
lean::inc(x_418);
if (lean::obj_tag(x_418) == 0)
{
obj* x_422; 
lean::dec(x_418);
lean::dec(x_388);
if (lean::is_scalar(x_370)) {
 x_422 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_422 = x_370;
}
lean::cnstr_set(x_422, 0, x_413);
lean::cnstr_set(x_422, 1, x_415);
x_394 = x_422;
goto lbl_395;
}
else
{
obj* x_423; obj* x_426; obj* x_430; 
x_423 = lean::cnstr_get(x_418, 0);
lean::inc(x_423);
lean::dec(x_418);
x_426 = lean::cnstr_get(x_423, 0);
lean::inc(x_426);
lean::dec(x_423);
lean::inc(x_1);
x_430 = l_lean_elaborator_to__pexpr___main(x_426, x_1, x_415);
if (lean::obj_tag(x_430) == 0)
{
obj* x_439; obj* x_442; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_413);
lean::dec(x_370);
lean::dec(x_389);
lean::dec(x_356);
lean::dec(x_364);
x_439 = lean::cnstr_get(x_430, 0);
lean::inc(x_439);
lean::dec(x_430);
if (lean::is_scalar(x_388)) {
 x_442 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_442 = x_388;
}
lean::cnstr_set(x_442, 0, x_439);
return x_442;
}
else
{
obj* x_444; obj* x_447; obj* x_449; obj* x_452; obj* x_453; obj* x_454; obj* x_455; 
lean::dec(x_388);
x_444 = lean::cnstr_get(x_430, 0);
lean::inc(x_444);
lean::dec(x_430);
x_447 = lean::cnstr_get(x_444, 0);
lean::inc(x_447);
x_449 = lean::cnstr_get(x_444, 1);
lean::inc(x_449);
lean::dec(x_444);
x_452 = lean::box(0);
x_453 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_453, 0, x_447);
lean::cnstr_set(x_453, 1, x_452);
x_454 = l_list_append___main___rarg(x_413, x_453);
if (lean::is_scalar(x_370)) {
 x_455 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_455 = x_370;
}
lean::cnstr_set(x_455, 0, x_454);
lean::cnstr_set(x_455, 1, x_449);
x_394 = x_455;
goto lbl_395;
}
}
}
lbl_395:
{
obj* x_456; obj* x_458; obj* x_461; obj* x_463; obj* x_464; obj* x_467; obj* x_468; unsigned char x_469; obj* x_471; obj* x_472; obj* x_475; obj* x_477; obj* x_478; obj* x_480; obj* x_481; obj* x_482; obj* x_484; obj* x_485; obj* x_486; obj* x_487; obj* x_488; 
x_456 = lean::cnstr_get(x_394, 0);
lean::inc(x_456);
x_458 = lean::cnstr_get(x_394, 1);
lean::inc(x_458);
lean::dec(x_394);
x_461 = lean::box(0);
lean::inc(x_389);
x_463 = l_list_length___main___rarg(x_389);
x_464 = l_lean_elaborator_to__pexpr___main___closed__25;
lean::inc(x_464);
lean::inc(x_461);
x_467 = l_lean_kvmap_set__nat(x_461, x_464, x_463);
x_468 = l_lean_elaborator_to__pexpr___main___closed__26;
x_469 = 0;
lean::inc(x_468);
x_471 = l_lean_kvmap_set__bool(x_467, x_468, x_469);
x_472 = lean::cnstr_get(x_356, 1);
lean::inc(x_472);
lean::dec(x_356);
x_475 = l_lean_elaborator_to__pexpr___main___closed__27;
lean::inc(x_475);
x_477 = l_option_map___rarg(x_475, x_472);
x_478 = l_lean_elaborator_to__pexpr___main___closed__28;
lean::inc(x_478);
x_480 = l_option_map___rarg(x_478, x_477);
x_481 = l_option_get__or__else___main___rarg(x_480, x_461);
x_482 = l_lean_elaborator_to__pexpr___main___closed__29;
lean::inc(x_482);
x_484 = l_lean_kvmap_set__name(x_471, x_482, x_481);
x_485 = l_list_append___main___rarg(x_389, x_456);
x_486 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9(x_485);
x_487 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_487, 0, x_484);
lean::cnstr_set(x_487, 1, x_486);
if (lean::is_scalar(x_364)) {
 x_488 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_488 = x_364;
}
lean::cnstr_set(x_488, 0, x_487);
lean::cnstr_set(x_488, 1, x_458);
x_16 = x_488;
goto lbl_17;
}
}
}
else
{
obj* x_489; obj* x_491; obj* x_493; obj* x_494; 
x_489 = lean::cnstr_get(x_368, 0);
lean::inc(x_489);
x_491 = lean::cnstr_get(x_368, 1);
lean::inc(x_491);
if (lean::is_shared(x_368)) {
 lean::dec(x_368);
 x_493 = lean::box(0);
} else {
 lean::cnstr_release(x_368, 0);
 lean::cnstr_release(x_368, 1);
 x_493 = x_368;
}
x_494 = lean::cnstr_get(x_489, 0);
lean::inc(x_494);
lean::dec(x_489);
if (lean::obj_tag(x_494) == 0)
{
obj* x_498; obj* x_499; obj* x_501; obj* x_502; obj* x_505; 
lean::dec(x_491);
x_498 = l_lean_parser_term_struct__inst__item_has__view;
x_499 = lean::cnstr_get(x_498, 1);
lean::inc(x_499);
x_501 = lean::apply_1(x_499, x_494);
x_502 = l_lean_elaborator_to__pexpr___main___closed__30;
lean::inc(x_1);
lean::inc(x_502);
x_505 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_501, x_502, x_1, x_2);
if (lean::obj_tag(x_505) == 0)
{
obj* x_515; obj* x_517; obj* x_518; 
lean::dec(x_493);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_370);
lean::dec(x_356);
lean::dec(x_364);
lean::dec(x_366);
lean::dec(x_360);
x_515 = lean::cnstr_get(x_505, 0);
lean::inc(x_515);
if (lean::is_shared(x_505)) {
 lean::dec(x_505);
 x_517 = lean::box(0);
} else {
 lean::cnstr_release(x_505, 0);
 x_517 = x_505;
}
if (lean::is_scalar(x_517)) {
 x_518 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_518 = x_517;
}
lean::cnstr_set(x_518, 0, x_515);
return x_518;
}
else
{
obj* x_519; obj* x_521; obj* x_522; obj* x_524; obj* x_529; 
x_519 = lean::cnstr_get(x_505, 0);
lean::inc(x_519);
if (lean::is_shared(x_505)) {
 lean::dec(x_505);
 x_521 = lean::box(0);
} else {
 lean::cnstr_release(x_505, 0);
 x_521 = x_505;
}
x_522 = lean::cnstr_get(x_519, 0);
lean::inc(x_522);
x_524 = lean::cnstr_get(x_519, 1);
lean::inc(x_524);
lean::dec(x_519);
lean::inc(x_1);
lean::inc(x_0);
x_529 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(x_0, x_360, x_1, x_524);
if (lean::obj_tag(x_529) == 0)
{
obj* x_539; obj* x_542; 
lean::dec(x_522);
lean::dec(x_493);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_370);
lean::dec(x_356);
lean::dec(x_364);
lean::dec(x_366);
x_539 = lean::cnstr_get(x_529, 0);
lean::inc(x_539);
lean::dec(x_529);
if (lean::is_scalar(x_521)) {
 x_542 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_542 = x_521;
}
lean::cnstr_set(x_542, 0, x_539);
return x_542;
}
else
{
obj* x_543; obj* x_546; obj* x_548; obj* x_551; obj* x_555; 
x_543 = lean::cnstr_get(x_529, 0);
lean::inc(x_543);
lean::dec(x_529);
x_546 = lean::cnstr_get(x_543, 0);
lean::inc(x_546);
x_548 = lean::cnstr_get(x_543, 1);
lean::inc(x_548);
lean::dec(x_543);
lean::inc(x_1);
lean::inc(x_0);
x_555 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(x_0, x_366, x_1, x_548);
if (lean::obj_tag(x_555) == 0)
{
obj* x_565; obj* x_568; 
lean::dec(x_546);
lean::dec(x_522);
lean::dec(x_493);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_370);
lean::dec(x_356);
lean::dec(x_364);
x_565 = lean::cnstr_get(x_555, 0);
lean::inc(x_565);
lean::dec(x_555);
if (lean::is_scalar(x_521)) {
 x_568 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_568 = x_521;
}
lean::cnstr_set(x_568, 0, x_565);
return x_568;
}
else
{
obj* x_569; obj* x_572; obj* x_574; obj* x_577; 
x_569 = lean::cnstr_get(x_555, 0);
lean::inc(x_569);
lean::dec(x_555);
x_572 = lean::cnstr_get(x_569, 0);
lean::inc(x_572);
x_574 = lean::cnstr_get(x_569, 1);
lean::inc(x_574);
lean::dec(x_569);
x_577 = lean::cnstr_get(x_356, 2);
lean::inc(x_577);
if (lean::obj_tag(x_577) == 0)
{
obj* x_582; 
lean::dec(x_521);
lean::dec(x_577);
lean::dec(x_493);
if (lean::is_scalar(x_370)) {
 x_582 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_582 = x_370;
}
lean::cnstr_set(x_582, 0, x_572);
lean::cnstr_set(x_582, 1, x_574);
x_551 = x_582;
goto lbl_552;
}
else
{
obj* x_583; obj* x_586; obj* x_590; 
x_583 = lean::cnstr_get(x_577, 0);
lean::inc(x_583);
lean::dec(x_577);
x_586 = lean::cnstr_get(x_583, 0);
lean::inc(x_586);
lean::dec(x_583);
lean::inc(x_1);
x_590 = l_lean_elaborator_to__pexpr___main(x_586, x_1, x_574);
if (lean::obj_tag(x_590) == 0)
{
obj* x_601; obj* x_604; 
lean::dec(x_546);
lean::dec(x_522);
lean::dec(x_572);
lean::dec(x_493);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_370);
lean::dec(x_356);
lean::dec(x_364);
x_601 = lean::cnstr_get(x_590, 0);
lean::inc(x_601);
lean::dec(x_590);
if (lean::is_scalar(x_521)) {
 x_604 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_604 = x_521;
}
lean::cnstr_set(x_604, 0, x_601);
return x_604;
}
else
{
obj* x_606; obj* x_609; obj* x_611; obj* x_614; obj* x_615; obj* x_616; obj* x_617; 
lean::dec(x_521);
x_606 = lean::cnstr_get(x_590, 0);
lean::inc(x_606);
lean::dec(x_590);
x_609 = lean::cnstr_get(x_606, 0);
lean::inc(x_609);
x_611 = lean::cnstr_get(x_606, 1);
lean::inc(x_611);
lean::dec(x_606);
x_614 = lean::box(0);
if (lean::is_scalar(x_493)) {
 x_615 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_615 = x_493;
}
lean::cnstr_set(x_615, 0, x_609);
lean::cnstr_set(x_615, 1, x_614);
x_616 = l_list_append___main___rarg(x_572, x_615);
if (lean::is_scalar(x_370)) {
 x_617 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_617 = x_370;
}
lean::cnstr_set(x_617, 0, x_616);
lean::cnstr_set(x_617, 1, x_611);
x_551 = x_617;
goto lbl_552;
}
}
}
lbl_552:
{
obj* x_618; obj* x_620; obj* x_623; obj* x_625; obj* x_626; obj* x_629; obj* x_630; unsigned char x_631; obj* x_634; obj* x_635; obj* x_638; obj* x_640; obj* x_641; obj* x_643; obj* x_644; obj* x_645; obj* x_647; obj* x_648; obj* x_649; obj* x_650; obj* x_651; 
x_618 = lean::cnstr_get(x_551, 0);
lean::inc(x_618);
x_620 = lean::cnstr_get(x_551, 1);
lean::inc(x_620);
lean::dec(x_551);
x_623 = lean::box(0);
lean::inc(x_546);
x_625 = l_list_length___main___rarg(x_546);
x_626 = l_lean_elaborator_to__pexpr___main___closed__25;
lean::inc(x_626);
lean::inc(x_623);
x_629 = l_lean_kvmap_set__nat(x_623, x_626, x_625);
x_630 = l_lean_elaborator_to__pexpr___main___closed__26;
x_631 = lean::unbox(x_522);
lean::dec(x_522);
lean::inc(x_630);
x_634 = l_lean_kvmap_set__bool(x_629, x_630, x_631);
x_635 = lean::cnstr_get(x_356, 1);
lean::inc(x_635);
lean::dec(x_356);
x_638 = l_lean_elaborator_to__pexpr___main___closed__27;
lean::inc(x_638);
x_640 = l_option_map___rarg(x_638, x_635);
x_641 = l_lean_elaborator_to__pexpr___main___closed__28;
lean::inc(x_641);
x_643 = l_option_map___rarg(x_641, x_640);
x_644 = l_option_get__or__else___main___rarg(x_643, x_623);
x_645 = l_lean_elaborator_to__pexpr___main___closed__29;
lean::inc(x_645);
x_647 = l_lean_kvmap_set__name(x_634, x_645, x_644);
x_648 = l_list_append___main___rarg(x_546, x_618);
x_649 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__12(x_648);
x_650 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_650, 0, x_647);
lean::cnstr_set(x_650, 1, x_649);
if (lean::is_scalar(x_364)) {
 x_651 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_651 = x_364;
}
lean::cnstr_set(x_651, 0, x_650);
lean::cnstr_set(x_651, 1, x_620);
x_16 = x_651;
goto lbl_17;
}
}
}
}
else
{
if (lean::obj_tag(x_491) == 0)
{
obj* x_656; 
lean::dec(x_494);
lean::dec(x_491);
lean::inc(x_1);
lean::inc(x_0);
x_656 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(x_0, x_360, x_1, x_2);
if (lean::obj_tag(x_656) == 0)
{
obj* x_665; obj* x_667; obj* x_668; 
lean::dec(x_493);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_370);
lean::dec(x_356);
lean::dec(x_364);
lean::dec(x_366);
x_665 = lean::cnstr_get(x_656, 0);
lean::inc(x_665);
if (lean::is_shared(x_656)) {
 lean::dec(x_656);
 x_667 = lean::box(0);
} else {
 lean::cnstr_release(x_656, 0);
 x_667 = x_656;
}
if (lean::is_scalar(x_667)) {
 x_668 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_668 = x_667;
}
lean::cnstr_set(x_668, 0, x_665);
return x_668;
}
else
{
obj* x_669; obj* x_671; obj* x_672; obj* x_674; obj* x_677; obj* x_681; 
x_669 = lean::cnstr_get(x_656, 0);
lean::inc(x_669);
if (lean::is_shared(x_656)) {
 lean::dec(x_656);
 x_671 = lean::box(0);
} else {
 lean::cnstr_release(x_656, 0);
 x_671 = x_656;
}
x_672 = lean::cnstr_get(x_669, 0);
lean::inc(x_672);
x_674 = lean::cnstr_get(x_669, 1);
lean::inc(x_674);
lean::dec(x_669);
lean::inc(x_1);
lean::inc(x_0);
x_681 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(x_0, x_366, x_1, x_674);
if (lean::obj_tag(x_681) == 0)
{
obj* x_690; obj* x_693; 
lean::dec(x_493);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_370);
lean::dec(x_672);
lean::dec(x_356);
lean::dec(x_364);
x_690 = lean::cnstr_get(x_681, 0);
lean::inc(x_690);
lean::dec(x_681);
if (lean::is_scalar(x_671)) {
 x_693 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_693 = x_671;
}
lean::cnstr_set(x_693, 0, x_690);
return x_693;
}
else
{
obj* x_694; obj* x_697; obj* x_699; obj* x_702; 
x_694 = lean::cnstr_get(x_681, 0);
lean::inc(x_694);
lean::dec(x_681);
x_697 = lean::cnstr_get(x_694, 0);
lean::inc(x_697);
x_699 = lean::cnstr_get(x_694, 1);
lean::inc(x_699);
lean::dec(x_694);
x_702 = lean::cnstr_get(x_356, 2);
lean::inc(x_702);
if (lean::obj_tag(x_702) == 0)
{
obj* x_707; 
lean::dec(x_493);
lean::dec(x_671);
lean::dec(x_702);
if (lean::is_scalar(x_370)) {
 x_707 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_707 = x_370;
}
lean::cnstr_set(x_707, 0, x_697);
lean::cnstr_set(x_707, 1, x_699);
x_677 = x_707;
goto lbl_678;
}
else
{
obj* x_708; obj* x_711; obj* x_715; 
x_708 = lean::cnstr_get(x_702, 0);
lean::inc(x_708);
lean::dec(x_702);
x_711 = lean::cnstr_get(x_708, 0);
lean::inc(x_711);
lean::dec(x_708);
lean::inc(x_1);
x_715 = l_lean_elaborator_to__pexpr___main(x_711, x_1, x_699);
if (lean::obj_tag(x_715) == 0)
{
obj* x_725; obj* x_728; 
lean::dec(x_493);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_370);
lean::dec(x_672);
lean::dec(x_356);
lean::dec(x_697);
lean::dec(x_364);
x_725 = lean::cnstr_get(x_715, 0);
lean::inc(x_725);
lean::dec(x_715);
if (lean::is_scalar(x_671)) {
 x_728 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_728 = x_671;
}
lean::cnstr_set(x_728, 0, x_725);
return x_728;
}
else
{
obj* x_730; obj* x_733; obj* x_735; obj* x_738; obj* x_739; obj* x_740; obj* x_741; 
lean::dec(x_671);
x_730 = lean::cnstr_get(x_715, 0);
lean::inc(x_730);
lean::dec(x_715);
x_733 = lean::cnstr_get(x_730, 0);
lean::inc(x_733);
x_735 = lean::cnstr_get(x_730, 1);
lean::inc(x_735);
lean::dec(x_730);
x_738 = lean::box(0);
if (lean::is_scalar(x_493)) {
 x_739 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_739 = x_493;
}
lean::cnstr_set(x_739, 0, x_733);
lean::cnstr_set(x_739, 1, x_738);
x_740 = l_list_append___main___rarg(x_697, x_739);
if (lean::is_scalar(x_370)) {
 x_741 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_741 = x_370;
}
lean::cnstr_set(x_741, 0, x_740);
lean::cnstr_set(x_741, 1, x_735);
x_677 = x_741;
goto lbl_678;
}
}
}
lbl_678:
{
obj* x_742; obj* x_744; obj* x_747; obj* x_749; obj* x_750; obj* x_753; obj* x_754; unsigned char x_755; obj* x_757; obj* x_758; obj* x_761; obj* x_763; obj* x_764; obj* x_766; obj* x_767; obj* x_768; obj* x_770; obj* x_771; obj* x_772; obj* x_773; obj* x_774; 
x_742 = lean::cnstr_get(x_677, 0);
lean::inc(x_742);
x_744 = lean::cnstr_get(x_677, 1);
lean::inc(x_744);
lean::dec(x_677);
x_747 = lean::box(0);
lean::inc(x_672);
x_749 = l_list_length___main___rarg(x_672);
x_750 = l_lean_elaborator_to__pexpr___main___closed__25;
lean::inc(x_750);
lean::inc(x_747);
x_753 = l_lean_kvmap_set__nat(x_747, x_750, x_749);
x_754 = l_lean_elaborator_to__pexpr___main___closed__26;
x_755 = 1;
lean::inc(x_754);
x_757 = l_lean_kvmap_set__bool(x_753, x_754, x_755);
x_758 = lean::cnstr_get(x_356, 1);
lean::inc(x_758);
lean::dec(x_356);
x_761 = l_lean_elaborator_to__pexpr___main___closed__27;
lean::inc(x_761);
x_763 = l_option_map___rarg(x_761, x_758);
x_764 = l_lean_elaborator_to__pexpr___main___closed__28;
lean::inc(x_764);
x_766 = l_option_map___rarg(x_764, x_763);
x_767 = l_option_get__or__else___main___rarg(x_766, x_747);
x_768 = l_lean_elaborator_to__pexpr___main___closed__29;
lean::inc(x_768);
x_770 = l_lean_kvmap_set__name(x_757, x_768, x_767);
x_771 = l_list_append___main___rarg(x_672, x_742);
x_772 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__15(x_771);
x_773 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_773, 0, x_770);
lean::cnstr_set(x_773, 1, x_772);
if (lean::is_scalar(x_364)) {
 x_774 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_774 = x_364;
}
lean::cnstr_set(x_774, 0, x_773);
lean::cnstr_set(x_774, 1, x_744);
x_16 = x_774;
goto lbl_17;
}
}
}
else
{
obj* x_776; obj* x_777; obj* x_779; obj* x_780; obj* x_783; 
lean::dec(x_491);
x_776 = l_lean_parser_term_struct__inst__item_has__view;
x_777 = lean::cnstr_get(x_776, 1);
lean::inc(x_777);
x_779 = lean::apply_1(x_777, x_494);
x_780 = l_lean_elaborator_to__pexpr___main___closed__30;
lean::inc(x_1);
lean::inc(x_780);
x_783 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_779, x_780, x_1, x_2);
if (lean::obj_tag(x_783) == 0)
{
obj* x_793; obj* x_795; obj* x_796; 
lean::dec(x_493);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_370);
lean::dec(x_356);
lean::dec(x_364);
lean::dec(x_366);
lean::dec(x_360);
x_793 = lean::cnstr_get(x_783, 0);
lean::inc(x_793);
if (lean::is_shared(x_783)) {
 lean::dec(x_783);
 x_795 = lean::box(0);
} else {
 lean::cnstr_release(x_783, 0);
 x_795 = x_783;
}
if (lean::is_scalar(x_795)) {
 x_796 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_796 = x_795;
}
lean::cnstr_set(x_796, 0, x_793);
return x_796;
}
else
{
obj* x_797; obj* x_799; obj* x_800; obj* x_802; obj* x_807; 
x_797 = lean::cnstr_get(x_783, 0);
lean::inc(x_797);
if (lean::is_shared(x_783)) {
 lean::dec(x_783);
 x_799 = lean::box(0);
} else {
 lean::cnstr_release(x_783, 0);
 x_799 = x_783;
}
x_800 = lean::cnstr_get(x_797, 0);
lean::inc(x_800);
x_802 = lean::cnstr_get(x_797, 1);
lean::inc(x_802);
lean::dec(x_797);
lean::inc(x_1);
lean::inc(x_0);
x_807 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(x_0, x_360, x_1, x_802);
if (lean::obj_tag(x_807) == 0)
{
obj* x_817; obj* x_820; 
lean::dec(x_800);
lean::dec(x_493);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_370);
lean::dec(x_356);
lean::dec(x_364);
lean::dec(x_366);
x_817 = lean::cnstr_get(x_807, 0);
lean::inc(x_817);
lean::dec(x_807);
if (lean::is_scalar(x_799)) {
 x_820 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_820 = x_799;
}
lean::cnstr_set(x_820, 0, x_817);
return x_820;
}
else
{
obj* x_821; obj* x_824; obj* x_826; obj* x_829; obj* x_833; 
x_821 = lean::cnstr_get(x_807, 0);
lean::inc(x_821);
lean::dec(x_807);
x_824 = lean::cnstr_get(x_821, 0);
lean::inc(x_824);
x_826 = lean::cnstr_get(x_821, 1);
lean::inc(x_826);
lean::dec(x_821);
lean::inc(x_1);
lean::inc(x_0);
x_833 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(x_0, x_366, x_1, x_826);
if (lean::obj_tag(x_833) == 0)
{
obj* x_843; obj* x_846; 
lean::dec(x_800);
lean::dec(x_493);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_824);
lean::dec(x_370);
lean::dec(x_356);
lean::dec(x_364);
x_843 = lean::cnstr_get(x_833, 0);
lean::inc(x_843);
lean::dec(x_833);
if (lean::is_scalar(x_799)) {
 x_846 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_846 = x_799;
}
lean::cnstr_set(x_846, 0, x_843);
return x_846;
}
else
{
obj* x_847; obj* x_850; obj* x_852; obj* x_855; 
x_847 = lean::cnstr_get(x_833, 0);
lean::inc(x_847);
lean::dec(x_833);
x_850 = lean::cnstr_get(x_847, 0);
lean::inc(x_850);
x_852 = lean::cnstr_get(x_847, 1);
lean::inc(x_852);
lean::dec(x_847);
x_855 = lean::cnstr_get(x_356, 2);
lean::inc(x_855);
if (lean::obj_tag(x_855) == 0)
{
obj* x_860; 
lean::dec(x_855);
lean::dec(x_799);
lean::dec(x_493);
if (lean::is_scalar(x_370)) {
 x_860 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_860 = x_370;
}
lean::cnstr_set(x_860, 0, x_850);
lean::cnstr_set(x_860, 1, x_852);
x_829 = x_860;
goto lbl_830;
}
else
{
obj* x_861; obj* x_864; obj* x_868; 
x_861 = lean::cnstr_get(x_855, 0);
lean::inc(x_861);
lean::dec(x_855);
x_864 = lean::cnstr_get(x_861, 0);
lean::inc(x_864);
lean::dec(x_861);
lean::inc(x_1);
x_868 = l_lean_elaborator_to__pexpr___main(x_864, x_1, x_852);
if (lean::obj_tag(x_868) == 0)
{
obj* x_879; obj* x_882; 
lean::dec(x_800);
lean::dec(x_850);
lean::dec(x_493);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_824);
lean::dec(x_370);
lean::dec(x_356);
lean::dec(x_364);
x_879 = lean::cnstr_get(x_868, 0);
lean::inc(x_879);
lean::dec(x_868);
if (lean::is_scalar(x_799)) {
 x_882 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_882 = x_799;
}
lean::cnstr_set(x_882, 0, x_879);
return x_882;
}
else
{
obj* x_884; obj* x_887; obj* x_889; obj* x_892; obj* x_893; obj* x_894; obj* x_895; 
lean::dec(x_799);
x_884 = lean::cnstr_get(x_868, 0);
lean::inc(x_884);
lean::dec(x_868);
x_887 = lean::cnstr_get(x_884, 0);
lean::inc(x_887);
x_889 = lean::cnstr_get(x_884, 1);
lean::inc(x_889);
lean::dec(x_884);
x_892 = lean::box(0);
if (lean::is_scalar(x_493)) {
 x_893 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_893 = x_493;
}
lean::cnstr_set(x_893, 0, x_887);
lean::cnstr_set(x_893, 1, x_892);
x_894 = l_list_append___main___rarg(x_850, x_893);
if (lean::is_scalar(x_370)) {
 x_895 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_895 = x_370;
}
lean::cnstr_set(x_895, 0, x_894);
lean::cnstr_set(x_895, 1, x_889);
x_829 = x_895;
goto lbl_830;
}
}
}
lbl_830:
{
obj* x_896; obj* x_898; obj* x_901; obj* x_903; obj* x_904; obj* x_907; obj* x_908; unsigned char x_909; obj* x_912; obj* x_913; obj* x_916; obj* x_918; obj* x_919; obj* x_921; obj* x_922; obj* x_923; obj* x_925; obj* x_926; obj* x_927; obj* x_928; obj* x_929; 
x_896 = lean::cnstr_get(x_829, 0);
lean::inc(x_896);
x_898 = lean::cnstr_get(x_829, 1);
lean::inc(x_898);
lean::dec(x_829);
x_901 = lean::box(0);
lean::inc(x_824);
x_903 = l_list_length___main___rarg(x_824);
x_904 = l_lean_elaborator_to__pexpr___main___closed__25;
lean::inc(x_904);
lean::inc(x_901);
x_907 = l_lean_kvmap_set__nat(x_901, x_904, x_903);
x_908 = l_lean_elaborator_to__pexpr___main___closed__26;
x_909 = lean::unbox(x_800);
lean::dec(x_800);
lean::inc(x_908);
x_912 = l_lean_kvmap_set__bool(x_907, x_908, x_909);
x_913 = lean::cnstr_get(x_356, 1);
lean::inc(x_913);
lean::dec(x_356);
x_916 = l_lean_elaborator_to__pexpr___main___closed__27;
lean::inc(x_916);
x_918 = l_option_map___rarg(x_916, x_913);
x_919 = l_lean_elaborator_to__pexpr___main___closed__28;
lean::inc(x_919);
x_921 = l_option_map___rarg(x_919, x_918);
x_922 = l_option_get__or__else___main___rarg(x_921, x_901);
x_923 = l_lean_elaborator_to__pexpr___main___closed__29;
lean::inc(x_923);
x_925 = l_lean_kvmap_set__name(x_912, x_923, x_922);
x_926 = l_list_append___main___rarg(x_824, x_896);
x_927 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__18(x_926);
x_928 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_928, 0, x_925);
lean::cnstr_set(x_928, 1, x_927);
if (lean::is_scalar(x_364)) {
 x_929 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_929 = x_364;
}
lean::cnstr_set(x_929, 0, x_928);
lean::cnstr_set(x_929, 1, x_898);
x_16 = x_929;
goto lbl_17;
}
}
}
}
}
}
}
}
else
{
obj* x_934; 
lean::dec(x_28);
lean::dec(x_97);
lean::inc(x_1);
lean::inc(x_11);
x_934 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__20(x_11, x_1, x_2);
if (lean::obj_tag(x_934) == 0)
{
obj* x_939; obj* x_941; obj* x_942; 
lean::dec(x_11);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_939 = lean::cnstr_get(x_934, 0);
lean::inc(x_939);
if (lean::is_shared(x_934)) {
 lean::dec(x_934);
 x_941 = lean::box(0);
} else {
 lean::cnstr_release(x_934, 0);
 x_941 = x_934;
}
if (lean::is_scalar(x_941)) {
 x_942 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_942 = x_941;
}
lean::cnstr_set(x_942, 0, x_939);
return x_942;
}
else
{
obj* x_943; obj* x_946; obj* x_948; obj* x_950; obj* x_951; obj* x_952; 
x_943 = lean::cnstr_get(x_934, 0);
lean::inc(x_943);
lean::dec(x_934);
x_946 = lean::cnstr_get(x_943, 0);
lean::inc(x_946);
x_948 = lean::cnstr_get(x_943, 1);
lean::inc(x_948);
if (lean::is_shared(x_943)) {
 lean::dec(x_943);
 x_950 = lean::box(0);
} else {
 lean::cnstr_release(x_943, 0);
 lean::cnstr_release(x_943, 1);
 x_950 = x_943;
}
x_951 = l_list_reverse___rarg(x_946);
if (lean::is_scalar(x_950)) {
 x_952 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_952 = x_950;
}
lean::cnstr_set(x_952, 0, x_951);
lean::cnstr_set(x_952, 1, x_948);
x_18 = x_952;
goto lbl_19;
}
}
}
else
{
obj* x_956; obj* x_957; obj* x_960; obj* x_961; obj* x_962; obj* x_963; 
lean::dec(x_11);
lean::dec(x_9);
lean::dec(x_92);
x_956 = l_lean_parser_number_has__view;
x_957 = lean::cnstr_get(x_956, 0);
lean::inc(x_957);
lean::inc(x_0);
x_960 = lean::apply_1(x_957, x_0);
x_961 = l_lean_parser_number_view_to__nat___main(x_960);
x_962 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_962, 0, x_961);
x_963 = lean::alloc_cnstr(9, 1, 0);
lean::cnstr_set(x_963, 0, x_962);
if (lean::obj_tag(x_28) == 0)
{
obj* x_965; 
lean::dec(x_28);
x_965 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_965) == 0)
{
obj* x_968; obj* x_969; 
lean::dec(x_965);
lean::dec(x_1);
x_968 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_968, 0, x_963);
lean::cnstr_set(x_968, 1, x_2);
x_969 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_969, 0, x_968);
return x_969;
}
else
{
obj* x_970; obj* x_973; obj* x_976; obj* x_979; obj* x_980; obj* x_981; obj* x_983; obj* x_985; obj* x_986; obj* x_989; obj* x_991; obj* x_992; obj* x_993; obj* x_994; 
x_970 = lean::cnstr_get(x_965, 0);
lean::inc(x_970);
lean::dec(x_965);
x_973 = lean::cnstr_get(x_1, 0);
lean::inc(x_973);
lean::dec(x_1);
x_976 = lean::cnstr_get(x_973, 2);
lean::inc(x_976);
lean::dec(x_973);
x_979 = l_lean_file__map_to__position(x_976, x_970);
x_980 = lean::box(0);
x_981 = lean::cnstr_get(x_979, 1);
lean::inc(x_981);
x_983 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_983);
x_985 = l_lean_kvmap_set__nat(x_980, x_983, x_981);
x_986 = lean::cnstr_get(x_979, 0);
lean::inc(x_986);
lean::dec(x_979);
x_989 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_989);
x_991 = l_lean_kvmap_set__nat(x_985, x_989, x_986);
x_992 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_992, 0, x_991);
lean::cnstr_set(x_992, 1, x_963);
x_993 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_993, 0, x_992);
lean::cnstr_set(x_993, 1, x_2);
x_994 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_994, 0, x_993);
return x_994;
}
}
else
{
obj* x_998; obj* x_999; 
lean::dec(x_28);
lean::dec(x_0);
lean::dec(x_1);
x_998 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_998, 0, x_963);
lean::cnstr_set(x_998, 1, x_2);
x_999 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_999, 0, x_998);
return x_999;
}
}
}
else
{
obj* x_1003; obj* x_1004; obj* x_1007; obj* x_1008; obj* x_1012; 
lean::dec(x_28);
lean::dec(x_11);
lean::dec(x_87);
x_1003 = l_lean_parser_term_inaccessible_has__view;
x_1004 = lean::cnstr_get(x_1003, 0);
lean::inc(x_1004);
lean::inc(x_0);
x_1007 = lean::apply_1(x_1004, x_0);
x_1008 = lean::cnstr_get(x_1007, 1);
lean::inc(x_1008);
lean::dec(x_1007);
lean::inc(x_1);
x_1012 = l_lean_elaborator_to__pexpr___main(x_1008, x_1, x_2);
if (lean::obj_tag(x_1012) == 0)
{
obj* x_1016; obj* x_1018; obj* x_1019; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1016 = lean::cnstr_get(x_1012, 0);
lean::inc(x_1016);
if (lean::is_shared(x_1012)) {
 lean::dec(x_1012);
 x_1018 = lean::box(0);
} else {
 lean::cnstr_release(x_1012, 0);
 x_1018 = x_1012;
}
if (lean::is_scalar(x_1018)) {
 x_1019 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1019 = x_1018;
}
lean::cnstr_set(x_1019, 0, x_1016);
return x_1019;
}
else
{
obj* x_1020; obj* x_1023; obj* x_1025; obj* x_1027; obj* x_1028; obj* x_1030; obj* x_1031; 
x_1020 = lean::cnstr_get(x_1012, 0);
lean::inc(x_1020);
lean::dec(x_1012);
x_1023 = lean::cnstr_get(x_1020, 0);
lean::inc(x_1023);
x_1025 = lean::cnstr_get(x_1020, 1);
lean::inc(x_1025);
if (lean::is_shared(x_1020)) {
 lean::dec(x_1020);
 x_1027 = lean::box(0);
} else {
 lean::cnstr_release(x_1020, 0);
 lean::cnstr_release(x_1020, 1);
 x_1027 = x_1020;
}
x_1028 = l_lean_elaborator_to__pexpr___main___closed__31;
lean::inc(x_1028);
x_1030 = l_lean_elaborator_expr_mk__annotation(x_1028, x_1023);
if (lean::is_scalar(x_1027)) {
 x_1031 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1031 = x_1027;
}
lean::cnstr_set(x_1031, 0, x_1030);
lean::cnstr_set(x_1031, 1, x_1025);
x_16 = x_1031;
goto lbl_17;
}
}
}
else
{
obj* x_1035; obj* x_1036; obj* x_1039; obj* x_1040; obj* x_1042; obj* x_1043; obj* x_1045; obj* x_1048; 
lean::dec(x_28);
lean::dec(x_11);
lean::dec(x_82);
x_1035 = l_lean_parser_term_explicit_has__view;
x_1036 = lean::cnstr_get(x_1035, 0);
lean::inc(x_1036);
lean::inc(x_0);
x_1039 = lean::apply_1(x_1036, x_0);
x_1040 = lean::cnstr_get(x_1039, 0);
lean::inc(x_1040);
x_1042 = l_lean_parser_ident__univs_has__view;
x_1043 = lean::cnstr_get(x_1042, 1);
lean::inc(x_1043);
x_1045 = lean::cnstr_get(x_1039, 1);
lean::inc(x_1045);
lean::dec(x_1039);
x_1048 = lean::apply_1(x_1043, x_1045);
if (lean::obj_tag(x_1040) == 0)
{
obj* x_1051; 
lean::dec(x_1040);
lean::inc(x_1);
x_1051 = l_lean_elaborator_to__pexpr___main(x_1048, x_1, x_2);
if (lean::obj_tag(x_1051) == 0)
{
obj* x_1055; obj* x_1057; obj* x_1058; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1055 = lean::cnstr_get(x_1051, 0);
lean::inc(x_1055);
if (lean::is_shared(x_1051)) {
 lean::dec(x_1051);
 x_1057 = lean::box(0);
} else {
 lean::cnstr_release(x_1051, 0);
 x_1057 = x_1051;
}
if (lean::is_scalar(x_1057)) {
 x_1058 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1058 = x_1057;
}
lean::cnstr_set(x_1058, 0, x_1055);
return x_1058;
}
else
{
obj* x_1059; obj* x_1062; obj* x_1064; obj* x_1066; obj* x_1067; obj* x_1069; obj* x_1070; 
x_1059 = lean::cnstr_get(x_1051, 0);
lean::inc(x_1059);
lean::dec(x_1051);
x_1062 = lean::cnstr_get(x_1059, 0);
lean::inc(x_1062);
x_1064 = lean::cnstr_get(x_1059, 1);
lean::inc(x_1064);
if (lean::is_shared(x_1059)) {
 lean::dec(x_1059);
 x_1066 = lean::box(0);
} else {
 lean::cnstr_release(x_1059, 0);
 lean::cnstr_release(x_1059, 1);
 x_1066 = x_1059;
}
x_1067 = l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1;
lean::inc(x_1067);
x_1069 = l_lean_elaborator_expr_mk__annotation(x_1067, x_1062);
if (lean::is_scalar(x_1066)) {
 x_1070 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1070 = x_1066;
}
lean::cnstr_set(x_1070, 0, x_1069);
lean::cnstr_set(x_1070, 1, x_1064);
x_16 = x_1070;
goto lbl_17;
}
}
else
{
obj* x_1073; 
lean::dec(x_1040);
lean::inc(x_1);
x_1073 = l_lean_elaborator_to__pexpr___main(x_1048, x_1, x_2);
if (lean::obj_tag(x_1073) == 0)
{
obj* x_1077; obj* x_1079; obj* x_1080; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1077 = lean::cnstr_get(x_1073, 0);
lean::inc(x_1077);
if (lean::is_shared(x_1073)) {
 lean::dec(x_1073);
 x_1079 = lean::box(0);
} else {
 lean::cnstr_release(x_1073, 0);
 x_1079 = x_1073;
}
if (lean::is_scalar(x_1079)) {
 x_1080 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1080 = x_1079;
}
lean::cnstr_set(x_1080, 0, x_1077);
return x_1080;
}
else
{
obj* x_1081; obj* x_1084; obj* x_1086; obj* x_1088; obj* x_1089; obj* x_1091; obj* x_1092; 
x_1081 = lean::cnstr_get(x_1073, 0);
lean::inc(x_1081);
lean::dec(x_1073);
x_1084 = lean::cnstr_get(x_1081, 0);
lean::inc(x_1084);
x_1086 = lean::cnstr_get(x_1081, 1);
lean::inc(x_1086);
if (lean::is_shared(x_1081)) {
 lean::dec(x_1081);
 x_1088 = lean::box(0);
} else {
 lean::cnstr_release(x_1081, 0);
 lean::cnstr_release(x_1081, 1);
 x_1088 = x_1081;
}
x_1089 = l_lean_elaborator_to__pexpr___main___closed__32;
lean::inc(x_1089);
x_1091 = l_lean_elaborator_expr_mk__annotation(x_1089, x_1084);
if (lean::is_scalar(x_1088)) {
 x_1092 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1092 = x_1088;
}
lean::cnstr_set(x_1092, 0, x_1091);
lean::cnstr_set(x_1092, 1, x_1086);
x_16 = x_1092;
goto lbl_17;
}
}
}
}
else
{
obj* x_1096; obj* x_1097; obj* x_1100; obj* x_1101; obj* x_1103; 
lean::dec(x_28);
lean::dec(x_11);
lean::dec(x_77);
x_1096 = l_lean_parser_term_projection_has__view;
x_1097 = lean::cnstr_get(x_1096, 0);
lean::inc(x_1097);
lean::inc(x_0);
x_1100 = lean::apply_1(x_1097, x_0);
x_1101 = lean::cnstr_get(x_1100, 2);
lean::inc(x_1101);
x_1103 = lean::cnstr_get(x_1100, 0);
lean::inc(x_1103);
lean::dec(x_1100);
if (lean::obj_tag(x_1101) == 0)
{
obj* x_1106; obj* x_1110; 
x_1106 = lean::cnstr_get(x_1101, 0);
lean::inc(x_1106);
lean::dec(x_1101);
lean::inc(x_1);
x_1110 = l_lean_elaborator_to__pexpr___main(x_1103, x_1, x_2);
if (lean::obj_tag(x_1110) == 0)
{
obj* x_1115; obj* x_1117; obj* x_1118; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_1106);
x_1115 = lean::cnstr_get(x_1110, 0);
lean::inc(x_1115);
if (lean::is_shared(x_1110)) {
 lean::dec(x_1110);
 x_1117 = lean::box(0);
} else {
 lean::cnstr_release(x_1110, 0);
 x_1117 = x_1110;
}
if (lean::is_scalar(x_1117)) {
 x_1118 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1118 = x_1117;
}
lean::cnstr_set(x_1118, 0, x_1115);
return x_1118;
}
else
{
obj* x_1119; obj* x_1122; obj* x_1124; obj* x_1126; obj* x_1127; obj* x_1130; obj* x_1131; obj* x_1132; obj* x_1134; obj* x_1135; obj* x_1136; 
x_1119 = lean::cnstr_get(x_1110, 0);
lean::inc(x_1119);
lean::dec(x_1110);
x_1122 = lean::cnstr_get(x_1119, 0);
lean::inc(x_1122);
x_1124 = lean::cnstr_get(x_1119, 1);
lean::inc(x_1124);
if (lean::is_shared(x_1119)) {
 lean::dec(x_1119);
 x_1126 = lean::box(0);
} else {
 lean::cnstr_release(x_1119, 0);
 lean::cnstr_release(x_1119, 1);
 x_1126 = x_1119;
}
x_1127 = lean::cnstr_get(x_1106, 2);
lean::inc(x_1127);
lean::dec(x_1106);
x_1130 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_1130, 0, x_1127);
x_1131 = lean::box(0);
x_1132 = l_lean_elaborator_to__pexpr___main___closed__33;
lean::inc(x_1132);
x_1134 = l_lean_kvmap_insert__core___main(x_1131, x_1132, x_1130);
x_1135 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_1135, 0, x_1134);
lean::cnstr_set(x_1135, 1, x_1122);
if (lean::is_scalar(x_1126)) {
 x_1136 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1136 = x_1126;
}
lean::cnstr_set(x_1136, 0, x_1135);
lean::cnstr_set(x_1136, 1, x_1124);
x_16 = x_1136;
goto lbl_17;
}
}
else
{
obj* x_1137; obj* x_1141; 
x_1137 = lean::cnstr_get(x_1101, 0);
lean::inc(x_1137);
lean::dec(x_1101);
lean::inc(x_1);
x_1141 = l_lean_elaborator_to__pexpr___main(x_1103, x_1, x_2);
if (lean::obj_tag(x_1141) == 0)
{
obj* x_1146; obj* x_1148; obj* x_1149; 
lean::dec(x_1137);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1146 = lean::cnstr_get(x_1141, 0);
lean::inc(x_1146);
if (lean::is_shared(x_1141)) {
 lean::dec(x_1141);
 x_1148 = lean::box(0);
} else {
 lean::cnstr_release(x_1141, 0);
 x_1148 = x_1141;
}
if (lean::is_scalar(x_1148)) {
 x_1149 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1149 = x_1148;
}
lean::cnstr_set(x_1149, 0, x_1146);
return x_1149;
}
else
{
obj* x_1150; obj* x_1153; obj* x_1155; obj* x_1157; obj* x_1158; obj* x_1159; obj* x_1160; obj* x_1161; obj* x_1163; obj* x_1164; obj* x_1165; 
x_1150 = lean::cnstr_get(x_1141, 0);
lean::inc(x_1150);
lean::dec(x_1141);
x_1153 = lean::cnstr_get(x_1150, 0);
lean::inc(x_1153);
x_1155 = lean::cnstr_get(x_1150, 1);
lean::inc(x_1155);
if (lean::is_shared(x_1150)) {
 lean::dec(x_1150);
 x_1157 = lean::box(0);
} else {
 lean::cnstr_release(x_1150, 0);
 lean::cnstr_release(x_1150, 1);
 x_1157 = x_1150;
}
x_1158 = l_lean_parser_number_view_to__nat___main(x_1137);
x_1159 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1159, 0, x_1158);
x_1160 = lean::box(0);
x_1161 = l_lean_elaborator_to__pexpr___main___closed__33;
lean::inc(x_1161);
x_1163 = l_lean_kvmap_insert__core___main(x_1160, x_1161, x_1159);
x_1164 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_1164, 0, x_1163);
lean::cnstr_set(x_1164, 1, x_1153);
if (lean::is_scalar(x_1157)) {
 x_1165 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1165 = x_1157;
}
lean::cnstr_set(x_1165, 0, x_1164);
lean::cnstr_set(x_1165, 1, x_1155);
x_16 = x_1165;
goto lbl_17;
}
}
}
}
else
{
obj* x_1169; obj* x_1170; obj* x_1173; obj* x_1174; 
lean::dec(x_28);
lean::dec(x_11);
lean::dec(x_72);
x_1169 = l_lean_parser_term_let_has__view;
x_1170 = lean::cnstr_get(x_1169, 0);
lean::inc(x_1170);
lean::inc(x_0);
x_1173 = lean::apply_1(x_1170, x_0);
x_1174 = lean::cnstr_get(x_1173, 1);
lean::inc(x_1174);
if (lean::obj_tag(x_1174) == 0)
{
obj* x_1176; obj* x_1179; obj* x_1181; obj* x_1183; 
x_1176 = lean::cnstr_get(x_1174, 0);
lean::inc(x_1176);
lean::dec(x_1174);
x_1179 = lean::cnstr_get(x_1176, 0);
lean::inc(x_1179);
x_1181 = lean::cnstr_get(x_1176, 1);
lean::inc(x_1181);
x_1183 = lean::cnstr_get(x_1176, 2);
lean::inc(x_1183);
lean::dec(x_1176);
if (lean::obj_tag(x_1181) == 0)
{
lean::dec(x_1181);
if (lean::obj_tag(x_1183) == 0)
{
obj* x_1190; obj* x_1194; 
lean::dec(x_1183);
lean::dec(x_1173);
lean::dec(x_1179);
x_1190 = l_lean_elaborator_to__pexpr___main___closed__34;
lean::inc(x_1);
lean::inc(x_1190);
lean::inc(x_0);
x_1194 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1190, x_1, x_2);
if (lean::obj_tag(x_1194) == 0)
{
obj* x_1198; obj* x_1200; obj* x_1201; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1198 = lean::cnstr_get(x_1194, 0);
lean::inc(x_1198);
if (lean::is_shared(x_1194)) {
 lean::dec(x_1194);
 x_1200 = lean::box(0);
} else {
 lean::cnstr_release(x_1194, 0);
 x_1200 = x_1194;
}
if (lean::is_scalar(x_1200)) {
 x_1201 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1201 = x_1200;
}
lean::cnstr_set(x_1201, 0, x_1198);
return x_1201;
}
else
{
obj* x_1202; 
x_1202 = lean::cnstr_get(x_1194, 0);
lean::inc(x_1202);
lean::dec(x_1194);
x_16 = x_1202;
goto lbl_17;
}
}
else
{
obj* x_1205; obj* x_1208; obj* x_1212; 
x_1205 = lean::cnstr_get(x_1183, 0);
lean::inc(x_1205);
lean::dec(x_1183);
x_1208 = lean::cnstr_get(x_1205, 1);
lean::inc(x_1208);
lean::dec(x_1205);
lean::inc(x_1);
x_1212 = l_lean_elaborator_to__pexpr___main(x_1208, x_1, x_2);
if (lean::obj_tag(x_1212) == 0)
{
obj* x_1218; obj* x_1220; obj* x_1221; 
lean::dec(x_1173);
lean::dec(x_1179);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1218 = lean::cnstr_get(x_1212, 0);
lean::inc(x_1218);
if (lean::is_shared(x_1212)) {
 lean::dec(x_1212);
 x_1220 = lean::box(0);
} else {
 lean::cnstr_release(x_1212, 0);
 x_1220 = x_1212;
}
if (lean::is_scalar(x_1220)) {
 x_1221 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1221 = x_1220;
}
lean::cnstr_set(x_1221, 0, x_1218);
return x_1221;
}
else
{
obj* x_1222; obj* x_1224; obj* x_1225; obj* x_1227; obj* x_1229; obj* x_1230; obj* x_1233; 
x_1222 = lean::cnstr_get(x_1212, 0);
lean::inc(x_1222);
if (lean::is_shared(x_1212)) {
 lean::dec(x_1212);
 x_1224 = lean::box(0);
} else {
 lean::cnstr_release(x_1212, 0);
 x_1224 = x_1212;
}
x_1225 = lean::cnstr_get(x_1222, 0);
lean::inc(x_1225);
x_1227 = lean::cnstr_get(x_1222, 1);
lean::inc(x_1227);
if (lean::is_shared(x_1222)) {
 lean::dec(x_1222);
 x_1229 = lean::box(0);
} else {
 lean::cnstr_release(x_1222, 0);
 lean::cnstr_release(x_1222, 1);
 x_1229 = x_1222;
}
x_1230 = lean::cnstr_get(x_1173, 3);
lean::inc(x_1230);
lean::inc(x_1);
x_1233 = l_lean_elaborator_to__pexpr___main(x_1230, x_1, x_1227);
if (lean::obj_tag(x_1233) == 0)
{
obj* x_1241; obj* x_1244; 
lean::dec(x_1229);
lean::dec(x_1173);
lean::dec(x_1179);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_1225);
x_1241 = lean::cnstr_get(x_1233, 0);
lean::inc(x_1241);
lean::dec(x_1233);
if (lean::is_scalar(x_1224)) {
 x_1244 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1244 = x_1224;
}
lean::cnstr_set(x_1244, 0, x_1241);
return x_1244;
}
else
{
obj* x_1245; obj* x_1248; obj* x_1250; obj* x_1253; obj* x_1257; 
x_1245 = lean::cnstr_get(x_1233, 0);
lean::inc(x_1245);
lean::dec(x_1233);
x_1248 = lean::cnstr_get(x_1245, 0);
lean::inc(x_1248);
x_1250 = lean::cnstr_get(x_1245, 1);
lean::inc(x_1250);
lean::dec(x_1245);
x_1253 = lean::cnstr_get(x_1173, 5);
lean::inc(x_1253);
lean::dec(x_1173);
lean::inc(x_1);
x_1257 = l_lean_elaborator_to__pexpr___main(x_1253, x_1, x_1250);
if (lean::obj_tag(x_1257) == 0)
{
obj* x_1265; obj* x_1268; 
lean::dec(x_1248);
lean::dec(x_1229);
lean::dec(x_1179);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_1225);
x_1265 = lean::cnstr_get(x_1257, 0);
lean::inc(x_1265);
lean::dec(x_1257);
if (lean::is_scalar(x_1224)) {
 x_1268 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1268 = x_1224;
}
lean::cnstr_set(x_1268, 0, x_1265);
return x_1268;
}
else
{
obj* x_1270; obj* x_1273; obj* x_1275; obj* x_1278; obj* x_1279; obj* x_1280; 
lean::dec(x_1224);
x_1270 = lean::cnstr_get(x_1257, 0);
lean::inc(x_1270);
lean::dec(x_1257);
x_1273 = lean::cnstr_get(x_1270, 0);
lean::inc(x_1273);
x_1275 = lean::cnstr_get(x_1270, 1);
lean::inc(x_1275);
lean::dec(x_1270);
x_1278 = l_lean_elaborator_mangle__ident(x_1179);
x_1279 = lean::alloc_cnstr(8, 4, 0);
lean::cnstr_set(x_1279, 0, x_1278);
lean::cnstr_set(x_1279, 1, x_1225);
lean::cnstr_set(x_1279, 2, x_1248);
lean::cnstr_set(x_1279, 3, x_1273);
if (lean::is_scalar(x_1229)) {
 x_1280 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1280 = x_1229;
}
lean::cnstr_set(x_1280, 0, x_1279);
lean::cnstr_set(x_1280, 1, x_1275);
x_16 = x_1280;
goto lbl_17;
}
}
}
}
}
else
{
obj* x_1285; obj* x_1289; 
lean::dec(x_1183);
lean::dec(x_1173);
lean::dec(x_1179);
lean::dec(x_1181);
x_1285 = l_lean_elaborator_to__pexpr___main___closed__34;
lean::inc(x_1);
lean::inc(x_1285);
lean::inc(x_0);
x_1289 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1285, x_1, x_2);
if (lean::obj_tag(x_1289) == 0)
{
obj* x_1293; obj* x_1295; obj* x_1296; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1293 = lean::cnstr_get(x_1289, 0);
lean::inc(x_1293);
if (lean::is_shared(x_1289)) {
 lean::dec(x_1289);
 x_1295 = lean::box(0);
} else {
 lean::cnstr_release(x_1289, 0);
 x_1295 = x_1289;
}
if (lean::is_scalar(x_1295)) {
 x_1296 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1296 = x_1295;
}
lean::cnstr_set(x_1296, 0, x_1293);
return x_1296;
}
else
{
obj* x_1297; 
x_1297 = lean::cnstr_get(x_1289, 0);
lean::inc(x_1297);
lean::dec(x_1289);
x_16 = x_1297;
goto lbl_17;
}
}
}
else
{
obj* x_1302; obj* x_1306; 
lean::dec(x_1173);
lean::dec(x_1174);
x_1302 = l_lean_elaborator_to__pexpr___main___closed__34;
lean::inc(x_1);
lean::inc(x_1302);
lean::inc(x_0);
x_1306 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1302, x_1, x_2);
if (lean::obj_tag(x_1306) == 0)
{
obj* x_1310; obj* x_1312; obj* x_1313; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1310 = lean::cnstr_get(x_1306, 0);
lean::inc(x_1310);
if (lean::is_shared(x_1306)) {
 lean::dec(x_1306);
 x_1312 = lean::box(0);
} else {
 lean::cnstr_release(x_1306, 0);
 x_1312 = x_1306;
}
if (lean::is_scalar(x_1312)) {
 x_1313 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1313 = x_1312;
}
lean::cnstr_set(x_1313, 0, x_1310);
return x_1313;
}
else
{
obj* x_1314; 
x_1314 = lean::cnstr_get(x_1306, 0);
lean::inc(x_1314);
lean::dec(x_1306);
x_16 = x_1314;
goto lbl_17;
}
}
}
}
else
{
obj* x_1320; obj* x_1321; obj* x_1324; obj* x_1325; obj* x_1328; 
lean::dec(x_28);
lean::dec(x_11);
lean::dec(x_67);
x_1320 = l_lean_parser_term_show_has__view;
x_1321 = lean::cnstr_get(x_1320, 0);
lean::inc(x_1321);
lean::inc(x_0);
x_1324 = lean::apply_1(x_1321, x_0);
x_1325 = lean::cnstr_get(x_1324, 1);
lean::inc(x_1325);
lean::inc(x_1);
x_1328 = l_lean_elaborator_to__pexpr___main(x_1325, x_1, x_2);
if (lean::obj_tag(x_1328) == 0)
{
obj* x_1333; obj* x_1335; obj* x_1336; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_1324);
x_1333 = lean::cnstr_get(x_1328, 0);
lean::inc(x_1333);
if (lean::is_shared(x_1328)) {
 lean::dec(x_1328);
 x_1335 = lean::box(0);
} else {
 lean::cnstr_release(x_1328, 0);
 x_1335 = x_1328;
}
if (lean::is_scalar(x_1335)) {
 x_1336 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1336 = x_1335;
}
lean::cnstr_set(x_1336, 0, x_1333);
return x_1336;
}
else
{
obj* x_1337; obj* x_1339; obj* x_1340; obj* x_1342; obj* x_1344; obj* x_1345; obj* x_1348; obj* x_1352; 
x_1337 = lean::cnstr_get(x_1328, 0);
lean::inc(x_1337);
if (lean::is_shared(x_1328)) {
 lean::dec(x_1328);
 x_1339 = lean::box(0);
} else {
 lean::cnstr_release(x_1328, 0);
 x_1339 = x_1328;
}
x_1340 = lean::cnstr_get(x_1337, 0);
lean::inc(x_1340);
x_1342 = lean::cnstr_get(x_1337, 1);
lean::inc(x_1342);
if (lean::is_shared(x_1337)) {
 lean::dec(x_1337);
 x_1344 = lean::box(0);
} else {
 lean::cnstr_release(x_1337, 0);
 lean::cnstr_release(x_1337, 1);
 x_1344 = x_1337;
}
x_1345 = lean::cnstr_get(x_1324, 3);
lean::inc(x_1345);
lean::dec(x_1324);
x_1348 = lean::cnstr_get(x_1345, 1);
lean::inc(x_1348);
lean::dec(x_1345);
lean::inc(x_1);
x_1352 = l_lean_elaborator_to__pexpr___main(x_1348, x_1, x_1342);
if (lean::obj_tag(x_1352) == 0)
{
obj* x_1358; obj* x_1361; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_1340);
lean::dec(x_1344);
x_1358 = lean::cnstr_get(x_1352, 0);
lean::inc(x_1358);
lean::dec(x_1352);
if (lean::is_scalar(x_1339)) {
 x_1361 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1361 = x_1339;
}
lean::cnstr_set(x_1361, 0, x_1358);
return x_1361;
}
else
{
obj* x_1363; obj* x_1366; obj* x_1368; obj* x_1371; unsigned char x_1372; obj* x_1373; obj* x_1376; obj* x_1377; obj* x_1378; obj* x_1379; obj* x_1381; obj* x_1382; 
lean::dec(x_1339);
x_1363 = lean::cnstr_get(x_1352, 0);
lean::inc(x_1363);
lean::dec(x_1352);
x_1366 = lean::cnstr_get(x_1363, 0);
lean::inc(x_1366);
x_1368 = lean::cnstr_get(x_1363, 1);
lean::inc(x_1368);
lean::dec(x_1363);
x_1371 = l_lean_elaborator_to__pexpr___main___closed__35;
x_1372 = 0;
x_1373 = l_lean_elaborator_to__pexpr___main___closed__36;
lean::inc(x_1373);
lean::inc(x_1371);
x_1376 = lean::alloc_cnstr(6, 3, 1);
lean::cnstr_set(x_1376, 0, x_1371);
lean::cnstr_set(x_1376, 1, x_1340);
lean::cnstr_set(x_1376, 2, x_1373);
lean::cnstr_set_scalar(x_1376, sizeof(void*)*3, x_1372);
x_1377 = x_1376;
x_1378 = lean::alloc_cnstr(5, 2, 0);
lean::cnstr_set(x_1378, 0, x_1377);
lean::cnstr_set(x_1378, 1, x_1366);
x_1379 = l_lean_elaborator_to__pexpr___main___closed__37;
lean::inc(x_1379);
x_1381 = l_lean_elaborator_expr_mk__annotation(x_1379, x_1378);
if (lean::is_scalar(x_1344)) {
 x_1382 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1382 = x_1344;
}
lean::cnstr_set(x_1382, 0, x_1381);
lean::cnstr_set(x_1382, 1, x_1368);
x_16 = x_1382;
goto lbl_17;
}
}
}
}
else
{
obj* x_1386; obj* x_1387; obj* x_1390; obj* x_1391; obj* x_1393; obj* x_1396; 
lean::dec(x_28);
lean::dec(x_11);
lean::dec(x_62);
x_1386 = l_lean_parser_term_have_has__view;
x_1387 = lean::cnstr_get(x_1386, 0);
lean::inc(x_1387);
lean::inc(x_0);
x_1390 = lean::apply_1(x_1387, x_0);
x_1393 = lean::cnstr_get(x_1390, 2);
lean::inc(x_1393);
lean::inc(x_1);
x_1396 = l_lean_elaborator_to__pexpr___main(x_1393, x_1, x_2);
if (lean::obj_tag(x_1396) == 0)
{
obj* x_1401; obj* x_1403; obj* x_1404; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_1390);
x_1401 = lean::cnstr_get(x_1396, 0);
lean::inc(x_1401);
if (lean::is_shared(x_1396)) {
 lean::dec(x_1396);
 x_1403 = lean::box(0);
} else {
 lean::cnstr_release(x_1396, 0);
 x_1403 = x_1396;
}
if (lean::is_scalar(x_1403)) {
 x_1404 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1404 = x_1403;
}
lean::cnstr_set(x_1404, 0, x_1401);
return x_1404;
}
else
{
obj* x_1405; obj* x_1407; obj* x_1408; obj* x_1410; obj* x_1412; obj* x_1413; obj* x_1416; 
x_1405 = lean::cnstr_get(x_1396, 0);
lean::inc(x_1405);
if (lean::is_shared(x_1396)) {
 lean::dec(x_1396);
 x_1407 = lean::box(0);
} else {
 lean::cnstr_release(x_1396, 0);
 x_1407 = x_1396;
}
x_1408 = lean::cnstr_get(x_1405, 0);
lean::inc(x_1408);
x_1410 = lean::cnstr_get(x_1405, 1);
lean::inc(x_1410);
if (lean::is_shared(x_1405)) {
 lean::dec(x_1405);
 x_1412 = lean::box(0);
} else {
 lean::cnstr_release(x_1405, 0);
 lean::cnstr_release(x_1405, 1);
 x_1412 = x_1405;
}
x_1413 = lean::cnstr_get(x_1390, 5);
lean::inc(x_1413);
lean::inc(x_1);
x_1416 = l_lean_elaborator_to__pexpr___main(x_1413, x_1, x_1410);
if (lean::obj_tag(x_1416) == 0)
{
obj* x_1423; obj* x_1426; 
lean::dec(x_1408);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_1412);
lean::dec(x_1390);
x_1423 = lean::cnstr_get(x_1416, 0);
lean::inc(x_1423);
lean::dec(x_1416);
if (lean::is_scalar(x_1407)) {
 x_1426 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1426 = x_1407;
}
lean::cnstr_set(x_1426, 0, x_1423);
return x_1426;
}
else
{
obj* x_1428; obj* x_1431; obj* x_1433; obj* x_1436; obj* x_1438; obj* x_1440; obj* x_1441; obj* x_1443; obj* x_1444; obj* x_1446; unsigned char x_1447; obj* x_1448; obj* x_1449; obj* x_1450; 
lean::dec(x_1407);
x_1428 = lean::cnstr_get(x_1416, 0);
lean::inc(x_1428);
lean::dec(x_1416);
x_1431 = lean::cnstr_get(x_1428, 0);
lean::inc(x_1431);
x_1433 = lean::cnstr_get(x_1428, 1);
lean::inc(x_1433);
lean::dec(x_1428);
x_1436 = lean::cnstr_get(x_1390, 1);
lean::inc(x_1436);
x_1438 = l_lean_elaborator_to__pexpr___main___closed__39;
lean::inc(x_1438);
x_1440 = l_option_map___rarg(x_1438, x_1436);
x_1441 = l_lean_elaborator_to__pexpr___main___closed__28;
lean::inc(x_1441);
x_1443 = l_option_map___rarg(x_1441, x_1440);
x_1444 = l_lean_elaborator_to__pexpr___main___closed__35;
lean::inc(x_1444);
x_1446 = l_option_get__or__else___main___rarg(x_1443, x_1444);
x_1447 = 0;
x_1448 = lean::alloc_cnstr(6, 3, 1);
lean::cnstr_set(x_1448, 0, x_1446);
lean::cnstr_set(x_1448, 1, x_1408);
lean::cnstr_set(x_1448, 2, x_1431);
lean::cnstr_set_scalar(x_1448, sizeof(void*)*3, x_1447);
x_1449 = x_1448;
if (lean::is_scalar(x_1412)) {
 x_1450 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1450 = x_1412;
}
lean::cnstr_set(x_1450, 0, x_1449);
lean::cnstr_set(x_1450, 1, x_1433);
x_1391 = x_1450;
goto lbl_1392;
}
}
lbl_1392:
{
obj* x_1451; obj* x_1453; obj* x_1455; obj* x_1456; 
x_1451 = lean::cnstr_get(x_1391, 0);
lean::inc(x_1451);
x_1453 = lean::cnstr_get(x_1391, 1);
lean::inc(x_1453);
if (lean::is_shared(x_1391)) {
 lean::dec(x_1391);
 x_1455 = lean::box(0);
} else {
 lean::cnstr_release(x_1391, 0);
 lean::cnstr_release(x_1391, 1);
 x_1455 = x_1391;
}
x_1456 = lean::cnstr_get(x_1390, 3);
lean::inc(x_1456);
lean::dec(x_1390);
if (lean::obj_tag(x_1456) == 0)
{
obj* x_1459; obj* x_1462; obj* x_1466; 
x_1459 = lean::cnstr_get(x_1456, 0);
lean::inc(x_1459);
lean::dec(x_1456);
x_1462 = lean::cnstr_get(x_1459, 1);
lean::inc(x_1462);
lean::dec(x_1459);
lean::inc(x_1);
x_1466 = l_lean_elaborator_to__pexpr___main(x_1462, x_1, x_1453);
if (lean::obj_tag(x_1466) == 0)
{
obj* x_1472; obj* x_1474; obj* x_1475; 
lean::dec(x_1455);
lean::dec(x_1451);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1472 = lean::cnstr_get(x_1466, 0);
lean::inc(x_1472);
if (lean::is_shared(x_1466)) {
 lean::dec(x_1466);
 x_1474 = lean::box(0);
} else {
 lean::cnstr_release(x_1466, 0);
 x_1474 = x_1466;
}
if (lean::is_scalar(x_1474)) {
 x_1475 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1475 = x_1474;
}
lean::cnstr_set(x_1475, 0, x_1472);
return x_1475;
}
else
{
obj* x_1476; obj* x_1479; obj* x_1481; obj* x_1484; obj* x_1486; obj* x_1487; obj* x_1488; 
x_1476 = lean::cnstr_get(x_1466, 0);
lean::inc(x_1476);
lean::dec(x_1466);
x_1479 = lean::cnstr_get(x_1476, 0);
lean::inc(x_1479);
x_1481 = lean::cnstr_get(x_1476, 1);
lean::inc(x_1481);
lean::dec(x_1476);
x_1484 = l_lean_elaborator_to__pexpr___main___closed__38;
lean::inc(x_1484);
x_1486 = l_lean_elaborator_expr_mk__annotation(x_1484, x_1451);
x_1487 = lean::alloc_cnstr(5, 2, 0);
lean::cnstr_set(x_1487, 0, x_1486);
lean::cnstr_set(x_1487, 1, x_1479);
if (lean::is_scalar(x_1455)) {
 x_1488 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1488 = x_1455;
}
lean::cnstr_set(x_1488, 0, x_1487);
lean::cnstr_set(x_1488, 1, x_1481);
x_16 = x_1488;
goto lbl_17;
}
}
else
{
obj* x_1489; obj* x_1492; obj* x_1495; obj* x_1499; 
x_1489 = lean::cnstr_get(x_1456, 0);
lean::inc(x_1489);
lean::dec(x_1456);
x_1492 = lean::cnstr_get(x_1489, 1);
lean::inc(x_1492);
lean::dec(x_1489);
x_1495 = lean::cnstr_get(x_1492, 1);
lean::inc(x_1495);
lean::dec(x_1492);
lean::inc(x_1);
x_1499 = l_lean_elaborator_to__pexpr___main(x_1495, x_1, x_1453);
if (lean::obj_tag(x_1499) == 0)
{
obj* x_1505; obj* x_1507; obj* x_1508; 
lean::dec(x_1455);
lean::dec(x_1451);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1505 = lean::cnstr_get(x_1499, 0);
lean::inc(x_1505);
if (lean::is_shared(x_1499)) {
 lean::dec(x_1499);
 x_1507 = lean::box(0);
} else {
 lean::cnstr_release(x_1499, 0);
 x_1507 = x_1499;
}
if (lean::is_scalar(x_1507)) {
 x_1508 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1508 = x_1507;
}
lean::cnstr_set(x_1508, 0, x_1505);
return x_1508;
}
else
{
obj* x_1509; obj* x_1512; obj* x_1514; obj* x_1517; obj* x_1519; obj* x_1520; obj* x_1521; 
x_1509 = lean::cnstr_get(x_1499, 0);
lean::inc(x_1509);
lean::dec(x_1499);
x_1512 = lean::cnstr_get(x_1509, 0);
lean::inc(x_1512);
x_1514 = lean::cnstr_get(x_1509, 1);
lean::inc(x_1514);
lean::dec(x_1509);
x_1517 = l_lean_elaborator_to__pexpr___main___closed__38;
lean::inc(x_1517);
x_1519 = l_lean_elaborator_expr_mk__annotation(x_1517, x_1451);
x_1520 = lean::alloc_cnstr(5, 2, 0);
lean::cnstr_set(x_1520, 0, x_1519);
lean::cnstr_set(x_1520, 1, x_1512);
if (lean::is_scalar(x_1455)) {
 x_1521 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1521 = x_1455;
}
lean::cnstr_set(x_1521, 0, x_1520);
lean::cnstr_set(x_1521, 1, x_1514);
x_16 = x_1521;
goto lbl_17;
}
}
}
}
}
else
{
lean::dec(x_11);
lean::dec(x_57);
lean::dec(x_9);
if (lean::obj_tag(x_28) == 0)
{
obj* x_1526; 
lean::dec(x_28);
x_1526 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_1526) == 0)
{
obj* x_1529; obj* x_1531; obj* x_1532; 
lean::dec(x_1);
lean::dec(x_1526);
x_1529 = l_lean_elaborator_to__pexpr___main___closed__40;
lean::inc(x_1529);
x_1531 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1531, 0, x_1529);
lean::cnstr_set(x_1531, 1, x_2);
x_1532 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1532, 0, x_1531);
return x_1532;
}
else
{
obj* x_1533; obj* x_1536; obj* x_1539; obj* x_1542; obj* x_1543; obj* x_1544; obj* x_1546; obj* x_1548; obj* x_1549; obj* x_1552; obj* x_1554; obj* x_1555; obj* x_1557; obj* x_1558; obj* x_1559; 
x_1533 = lean::cnstr_get(x_1526, 0);
lean::inc(x_1533);
lean::dec(x_1526);
x_1536 = lean::cnstr_get(x_1, 0);
lean::inc(x_1536);
lean::dec(x_1);
x_1539 = lean::cnstr_get(x_1536, 2);
lean::inc(x_1539);
lean::dec(x_1536);
x_1542 = l_lean_file__map_to__position(x_1539, x_1533);
x_1543 = lean::box(0);
x_1544 = lean::cnstr_get(x_1542, 1);
lean::inc(x_1544);
x_1546 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_1546);
x_1548 = l_lean_kvmap_set__nat(x_1543, x_1546, x_1544);
x_1549 = lean::cnstr_get(x_1542, 0);
lean::inc(x_1549);
lean::dec(x_1542);
x_1552 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_1552);
x_1554 = l_lean_kvmap_set__nat(x_1548, x_1552, x_1549);
x_1555 = l_lean_elaborator_to__pexpr___main___closed__40;
lean::inc(x_1555);
x_1557 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_1557, 0, x_1554);
lean::cnstr_set(x_1557, 1, x_1555);
x_1558 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1558, 0, x_1557);
lean::cnstr_set(x_1558, 1, x_2);
x_1559 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1559, 0, x_1558);
return x_1559;
}
}
else
{
obj* x_1563; obj* x_1565; obj* x_1566; 
lean::dec(x_28);
lean::dec(x_0);
lean::dec(x_1);
x_1563 = l_lean_elaborator_to__pexpr___main___closed__40;
lean::inc(x_1563);
x_1565 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1565, 0, x_1563);
lean::cnstr_set(x_1565, 1, x_2);
x_1566 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1566, 0, x_1565);
return x_1566;
}
}
}
else
{
obj* x_1570; obj* x_1571; obj* x_1574; obj* x_1575; obj* x_1578; obj* x_1579; obj* x_1581; obj* x_1583; 
lean::dec(x_28);
lean::dec(x_11);
lean::dec(x_52);
x_1570 = l_lean_parser_term_anonymous__constructor_has__view;
x_1571 = lean::cnstr_get(x_1570, 0);
lean::inc(x_1571);
lean::inc(x_0);
x_1574 = lean::apply_1(x_1571, x_0);
x_1575 = lean::cnstr_get(x_1574, 1);
lean::inc(x_1575);
lean::dec(x_1574);
x_1578 = l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__21(x_1575);
x_1579 = l_lean_expander_get__opt__type___main___closed__1;
lean::inc(x_1579);
x_1581 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_1579, x_1578);
lean::inc(x_1);
x_1583 = l_lean_elaborator_to__pexpr___main(x_1581, x_1, x_2);
if (lean::obj_tag(x_1583) == 0)
{
obj* x_1587; obj* x_1589; obj* x_1590; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1587 = lean::cnstr_get(x_1583, 0);
lean::inc(x_1587);
if (lean::is_shared(x_1583)) {
 lean::dec(x_1583);
 x_1589 = lean::box(0);
} else {
 lean::cnstr_release(x_1583, 0);
 x_1589 = x_1583;
}
if (lean::is_scalar(x_1589)) {
 x_1590 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1590 = x_1589;
}
lean::cnstr_set(x_1590, 0, x_1587);
return x_1590;
}
else
{
obj* x_1591; obj* x_1594; obj* x_1596; obj* x_1598; obj* x_1599; obj* x_1601; obj* x_1602; 
x_1591 = lean::cnstr_get(x_1583, 0);
lean::inc(x_1591);
lean::dec(x_1583);
x_1594 = lean::cnstr_get(x_1591, 0);
lean::inc(x_1594);
x_1596 = lean::cnstr_get(x_1591, 1);
lean::inc(x_1596);
if (lean::is_shared(x_1591)) {
 lean::dec(x_1591);
 x_1598 = lean::box(0);
} else {
 lean::cnstr_release(x_1591, 0);
 lean::cnstr_release(x_1591, 1);
 x_1598 = x_1591;
}
x_1599 = l_lean_elaborator_to__pexpr___main___closed__41;
lean::inc(x_1599);
x_1601 = l_lean_elaborator_expr_mk__annotation(x_1599, x_1594);
if (lean::is_scalar(x_1598)) {
 x_1602 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1602 = x_1598;
}
lean::cnstr_set(x_1602, 0, x_1601);
lean::cnstr_set(x_1602, 1, x_1596);
x_16 = x_1602;
goto lbl_17;
}
}
}
else
{
obj* x_1606; obj* x_1607; obj* x_1610; obj* x_1611; obj* x_1612; obj* x_1614; obj* x_1616; 
lean::dec(x_28);
lean::dec(x_11);
lean::dec(x_47);
x_1606 = l_lean_parser_term_sort__app_has__view;
x_1607 = lean::cnstr_get(x_1606, 0);
lean::inc(x_1607);
lean::inc(x_0);
x_1610 = lean::apply_1(x_1607, x_0);
x_1611 = l_lean_parser_term_sort_has__view;
x_1612 = lean::cnstr_get(x_1611, 0);
lean::inc(x_1612);
x_1614 = lean::cnstr_get(x_1610, 0);
lean::inc(x_1614);
x_1616 = lean::apply_1(x_1612, x_1614);
if (lean::obj_tag(x_1616) == 0)
{
obj* x_1618; obj* x_1622; 
lean::dec(x_1616);
x_1618 = lean::cnstr_get(x_1610, 1);
lean::inc(x_1618);
lean::dec(x_1610);
lean::inc(x_1);
x_1622 = l_lean_elaborator_to__level___main(x_1618, x_1, x_2);
if (lean::obj_tag(x_1622) == 0)
{
obj* x_1626; obj* x_1628; obj* x_1629; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1626 = lean::cnstr_get(x_1622, 0);
lean::inc(x_1626);
if (lean::is_shared(x_1622)) {
 lean::dec(x_1622);
 x_1628 = lean::box(0);
} else {
 lean::cnstr_release(x_1622, 0);
 x_1628 = x_1622;
}
if (lean::is_scalar(x_1628)) {
 x_1629 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1629 = x_1628;
}
lean::cnstr_set(x_1629, 0, x_1626);
return x_1629;
}
else
{
obj* x_1630; obj* x_1633; obj* x_1635; obj* x_1637; obj* x_1638; obj* x_1639; 
x_1630 = lean::cnstr_get(x_1622, 0);
lean::inc(x_1630);
lean::dec(x_1622);
x_1633 = lean::cnstr_get(x_1630, 0);
lean::inc(x_1633);
x_1635 = lean::cnstr_get(x_1630, 1);
lean::inc(x_1635);
if (lean::is_shared(x_1630)) {
 lean::dec(x_1630);
 x_1637 = lean::box(0);
} else {
 lean::cnstr_release(x_1630, 0);
 lean::cnstr_release(x_1630, 1);
 x_1637 = x_1630;
}
x_1638 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_1638, 0, x_1633);
if (lean::is_scalar(x_1637)) {
 x_1639 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1639 = x_1637;
}
lean::cnstr_set(x_1639, 0, x_1638);
lean::cnstr_set(x_1639, 1, x_1635);
x_16 = x_1639;
goto lbl_17;
}
}
else
{
obj* x_1641; obj* x_1645; 
lean::dec(x_1616);
x_1641 = lean::cnstr_get(x_1610, 1);
lean::inc(x_1641);
lean::dec(x_1610);
lean::inc(x_1);
x_1645 = l_lean_elaborator_to__level___main(x_1641, x_1, x_2);
if (lean::obj_tag(x_1645) == 0)
{
obj* x_1649; obj* x_1651; obj* x_1652; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1649 = lean::cnstr_get(x_1645, 0);
lean::inc(x_1649);
if (lean::is_shared(x_1645)) {
 lean::dec(x_1645);
 x_1651 = lean::box(0);
} else {
 lean::cnstr_release(x_1645, 0);
 x_1651 = x_1645;
}
if (lean::is_scalar(x_1651)) {
 x_1652 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1652 = x_1651;
}
lean::cnstr_set(x_1652, 0, x_1649);
return x_1652;
}
else
{
obj* x_1653; obj* x_1656; obj* x_1658; obj* x_1660; obj* x_1661; obj* x_1662; obj* x_1663; 
x_1653 = lean::cnstr_get(x_1645, 0);
lean::inc(x_1653);
lean::dec(x_1645);
x_1656 = lean::cnstr_get(x_1653, 0);
lean::inc(x_1656);
x_1658 = lean::cnstr_get(x_1653, 1);
lean::inc(x_1658);
if (lean::is_shared(x_1653)) {
 lean::dec(x_1653);
 x_1660 = lean::box(0);
} else {
 lean::cnstr_release(x_1653, 0);
 lean::cnstr_release(x_1653, 1);
 x_1660 = x_1653;
}
x_1661 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1661, 0, x_1656);
x_1662 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_1662, 0, x_1661);
if (lean::is_scalar(x_1660)) {
 x_1663 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1663 = x_1660;
}
lean::cnstr_set(x_1663, 0, x_1662);
lean::cnstr_set(x_1663, 1, x_1658);
x_16 = x_1663;
goto lbl_17;
}
}
}
}
else
{
obj* x_1667; obj* x_1668; obj* x_1671; 
lean::dec(x_11);
lean::dec(x_9);
lean::dec(x_42);
x_1667 = l_lean_parser_term_sort_has__view;
x_1668 = lean::cnstr_get(x_1667, 0);
lean::inc(x_1668);
lean::inc(x_0);
x_1671 = lean::apply_1(x_1668, x_0);
if (lean::obj_tag(x_1671) == 0)
{
lean::dec(x_1671);
if (lean::obj_tag(x_28) == 0)
{
obj* x_1674; 
lean::dec(x_28);
x_1674 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_1674) == 0)
{
obj* x_1677; obj* x_1679; obj* x_1680; 
lean::dec(x_1);
lean::dec(x_1674);
x_1677 = l_lean_elaborator_to__pexpr___main___closed__42;
lean::inc(x_1677);
x_1679 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1679, 0, x_1677);
lean::cnstr_set(x_1679, 1, x_2);
x_1680 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1680, 0, x_1679);
return x_1680;
}
else
{
obj* x_1681; obj* x_1684; obj* x_1687; obj* x_1690; obj* x_1691; obj* x_1692; obj* x_1694; obj* x_1696; obj* x_1697; obj* x_1700; obj* x_1702; obj* x_1703; obj* x_1705; obj* x_1706; obj* x_1707; 
x_1681 = lean::cnstr_get(x_1674, 0);
lean::inc(x_1681);
lean::dec(x_1674);
x_1684 = lean::cnstr_get(x_1, 0);
lean::inc(x_1684);
lean::dec(x_1);
x_1687 = lean::cnstr_get(x_1684, 2);
lean::inc(x_1687);
lean::dec(x_1684);
x_1690 = l_lean_file__map_to__position(x_1687, x_1681);
x_1691 = lean::box(0);
x_1692 = lean::cnstr_get(x_1690, 1);
lean::inc(x_1692);
x_1694 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_1694);
x_1696 = l_lean_kvmap_set__nat(x_1691, x_1694, x_1692);
x_1697 = lean::cnstr_get(x_1690, 0);
lean::inc(x_1697);
lean::dec(x_1690);
x_1700 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_1700);
x_1702 = l_lean_kvmap_set__nat(x_1696, x_1700, x_1697);
x_1703 = l_lean_elaborator_to__pexpr___main___closed__42;
lean::inc(x_1703);
x_1705 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_1705, 0, x_1702);
lean::cnstr_set(x_1705, 1, x_1703);
x_1706 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1706, 0, x_1705);
lean::cnstr_set(x_1706, 1, x_2);
x_1707 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1707, 0, x_1706);
return x_1707;
}
}
else
{
obj* x_1711; obj* x_1713; obj* x_1714; 
lean::dec(x_28);
lean::dec(x_0);
lean::dec(x_1);
x_1711 = l_lean_elaborator_to__pexpr___main___closed__42;
lean::inc(x_1711);
x_1713 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1713, 0, x_1711);
lean::cnstr_set(x_1713, 1, x_2);
x_1714 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1714, 0, x_1713);
return x_1714;
}
}
else
{
lean::dec(x_1671);
if (lean::obj_tag(x_28) == 0)
{
obj* x_1717; 
lean::dec(x_28);
x_1717 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_1717) == 0)
{
obj* x_1720; obj* x_1722; obj* x_1723; 
lean::dec(x_1717);
lean::dec(x_1);
x_1720 = l_lean_elaborator_to__pexpr___main___closed__43;
lean::inc(x_1720);
x_1722 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1722, 0, x_1720);
lean::cnstr_set(x_1722, 1, x_2);
x_1723 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1723, 0, x_1722);
return x_1723;
}
else
{
obj* x_1724; obj* x_1727; obj* x_1730; obj* x_1733; obj* x_1734; obj* x_1735; obj* x_1737; obj* x_1739; obj* x_1740; obj* x_1743; obj* x_1745; obj* x_1746; obj* x_1748; obj* x_1749; obj* x_1750; 
x_1724 = lean::cnstr_get(x_1717, 0);
lean::inc(x_1724);
lean::dec(x_1717);
x_1727 = lean::cnstr_get(x_1, 0);
lean::inc(x_1727);
lean::dec(x_1);
x_1730 = lean::cnstr_get(x_1727, 2);
lean::inc(x_1730);
lean::dec(x_1727);
x_1733 = l_lean_file__map_to__position(x_1730, x_1724);
x_1734 = lean::box(0);
x_1735 = lean::cnstr_get(x_1733, 1);
lean::inc(x_1735);
x_1737 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_1737);
x_1739 = l_lean_kvmap_set__nat(x_1734, x_1737, x_1735);
x_1740 = lean::cnstr_get(x_1733, 0);
lean::inc(x_1740);
lean::dec(x_1733);
x_1743 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_1743);
x_1745 = l_lean_kvmap_set__nat(x_1739, x_1743, x_1740);
x_1746 = l_lean_elaborator_to__pexpr___main___closed__43;
lean::inc(x_1746);
x_1748 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_1748, 0, x_1745);
lean::cnstr_set(x_1748, 1, x_1746);
x_1749 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1749, 0, x_1748);
lean::cnstr_set(x_1749, 1, x_2);
x_1750 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1750, 0, x_1749);
return x_1750;
}
}
else
{
obj* x_1754; obj* x_1756; obj* x_1757; 
lean::dec(x_28);
lean::dec(x_0);
lean::dec(x_1);
x_1754 = l_lean_elaborator_to__pexpr___main___closed__43;
lean::inc(x_1754);
x_1756 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1756, 0, x_1754);
lean::cnstr_set(x_1756, 1, x_2);
x_1757 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1757, 0, x_1756);
return x_1757;
}
}
}
}
else
{
obj* x_1761; obj* x_1762; obj* x_1765; obj* x_1766; 
lean::dec(x_28);
lean::dec(x_11);
lean::dec(x_37);
x_1761 = l_lean_parser_term_pi_has__view;
x_1762 = lean::cnstr_get(x_1761, 0);
lean::inc(x_1762);
lean::inc(x_0);
x_1765 = lean::apply_1(x_1762, x_0);
x_1766 = lean::cnstr_get(x_1765, 1);
lean::inc(x_1766);
if (lean::obj_tag(x_1766) == 0)
{
obj* x_1770; obj* x_1774; 
lean::dec(x_1766);
lean::dec(x_1765);
x_1770 = l_lean_elaborator_to__pexpr___main___closed__44;
lean::inc(x_1);
lean::inc(x_1770);
lean::inc(x_0);
x_1774 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1770, x_1, x_2);
if (lean::obj_tag(x_1774) == 0)
{
obj* x_1778; obj* x_1780; obj* x_1781; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1778 = lean::cnstr_get(x_1774, 0);
lean::inc(x_1778);
if (lean::is_shared(x_1774)) {
 lean::dec(x_1774);
 x_1780 = lean::box(0);
} else {
 lean::cnstr_release(x_1774, 0);
 x_1780 = x_1774;
}
if (lean::is_scalar(x_1780)) {
 x_1781 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1781 = x_1780;
}
lean::cnstr_set(x_1781, 0, x_1778);
return x_1781;
}
else
{
obj* x_1782; 
x_1782 = lean::cnstr_get(x_1774, 0);
lean::inc(x_1782);
lean::dec(x_1774);
x_16 = x_1782;
goto lbl_17;
}
}
else
{
obj* x_1785; obj* x_1788; obj* x_1789; obj* x_1791; obj* x_1793; obj* x_1794; obj* x_1796; obj* x_1800; 
x_1785 = lean::cnstr_get(x_1766, 0);
lean::inc(x_1785);
lean::dec(x_1766);
x_1788 = l_lean_parser_term_simple__binder_view_to__binder__info___main(x_1785);
x_1789 = lean::cnstr_get(x_1788, 0);
lean::inc(x_1789);
x_1791 = lean::cnstr_get(x_1788, 1);
lean::inc(x_1791);
if (lean::is_shared(x_1788)) {
 lean::dec(x_1788);
 x_1793 = lean::box(0);
} else {
 lean::cnstr_release(x_1788, 0);
 lean::cnstr_release(x_1788, 1);
 x_1793 = x_1788;
}
x_1794 = lean::cnstr_get(x_1791, 0);
lean::inc(x_1794);
x_1796 = lean::cnstr_get(x_1791, 1);
lean::inc(x_1796);
lean::dec(x_1791);
lean::inc(x_1);
x_1800 = l_lean_elaborator_to__pexpr___main(x_1796, x_1, x_2);
if (lean::obj_tag(x_1800) == 0)
{
obj* x_1808; obj* x_1810; obj* x_1811; 
lean::dec(x_1794);
lean::dec(x_1789);
lean::dec(x_1793);
lean::dec(x_1765);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1808 = lean::cnstr_get(x_1800, 0);
lean::inc(x_1808);
if (lean::is_shared(x_1800)) {
 lean::dec(x_1800);
 x_1810 = lean::box(0);
} else {
 lean::cnstr_release(x_1800, 0);
 x_1810 = x_1800;
}
if (lean::is_scalar(x_1810)) {
 x_1811 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1811 = x_1810;
}
lean::cnstr_set(x_1811, 0, x_1808);
return x_1811;
}
else
{
obj* x_1812; obj* x_1814; obj* x_1815; obj* x_1817; obj* x_1820; obj* x_1824; 
x_1812 = lean::cnstr_get(x_1800, 0);
lean::inc(x_1812);
if (lean::is_shared(x_1800)) {
 lean::dec(x_1800);
 x_1814 = lean::box(0);
} else {
 lean::cnstr_release(x_1800, 0);
 x_1814 = x_1800;
}
x_1815 = lean::cnstr_get(x_1812, 0);
lean::inc(x_1815);
x_1817 = lean::cnstr_get(x_1812, 1);
lean::inc(x_1817);
lean::dec(x_1812);
x_1820 = lean::cnstr_get(x_1765, 3);
lean::inc(x_1820);
lean::dec(x_1765);
lean::inc(x_1);
x_1824 = l_lean_elaborator_to__pexpr___main(x_1820, x_1, x_1817);
if (lean::obj_tag(x_1824) == 0)
{
obj* x_1832; obj* x_1835; 
lean::dec(x_1815);
lean::dec(x_1794);
lean::dec(x_1789);
lean::dec(x_1793);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1832 = lean::cnstr_get(x_1824, 0);
lean::inc(x_1832);
lean::dec(x_1824);
if (lean::is_scalar(x_1814)) {
 x_1835 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1835 = x_1814;
}
lean::cnstr_set(x_1835, 0, x_1832);
return x_1835;
}
else
{
obj* x_1837; obj* x_1840; obj* x_1842; obj* x_1845; obj* x_1846; unsigned char x_1847; obj* x_1849; obj* x_1850; 
lean::dec(x_1814);
x_1837 = lean::cnstr_get(x_1824, 0);
lean::inc(x_1837);
lean::dec(x_1824);
x_1840 = lean::cnstr_get(x_1837, 0);
lean::inc(x_1840);
x_1842 = lean::cnstr_get(x_1837, 1);
lean::inc(x_1842);
lean::dec(x_1837);
x_1845 = l_lean_elaborator_mangle__ident(x_1794);
x_1846 = lean::alloc_cnstr(7, 3, 1);
lean::cnstr_set(x_1846, 0, x_1845);
lean::cnstr_set(x_1846, 1, x_1815);
lean::cnstr_set(x_1846, 2, x_1840);
x_1847 = lean::unbox(x_1789);
lean::dec(x_1789);
lean::cnstr_set_scalar(x_1846, sizeof(void*)*3, x_1847);
x_1849 = x_1846;
if (lean::is_scalar(x_1793)) {
 x_1850 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1850 = x_1793;
}
lean::cnstr_set(x_1850, 0, x_1849);
lean::cnstr_set(x_1850, 1, x_1842);
x_16 = x_1850;
goto lbl_17;
}
}
}
}
}
else
{
obj* x_1854; obj* x_1855; obj* x_1858; obj* x_1859; 
lean::dec(x_28);
lean::dec(x_11);
lean::dec(x_32);
x_1854 = l_lean_parser_term_lambda_has__view;
x_1855 = lean::cnstr_get(x_1854, 0);
lean::inc(x_1855);
lean::inc(x_0);
x_1858 = lean::apply_1(x_1855, x_0);
x_1859 = lean::cnstr_get(x_1858, 1);
lean::inc(x_1859);
if (lean::obj_tag(x_1859) == 0)
{
obj* x_1863; obj* x_1867; 
lean::dec(x_1859);
lean::dec(x_1858);
x_1863 = l_lean_elaborator_to__pexpr___main___closed__45;
lean::inc(x_1);
lean::inc(x_1863);
lean::inc(x_0);
x_1867 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1863, x_1, x_2);
if (lean::obj_tag(x_1867) == 0)
{
obj* x_1871; obj* x_1873; obj* x_1874; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1871 = lean::cnstr_get(x_1867, 0);
lean::inc(x_1871);
if (lean::is_shared(x_1867)) {
 lean::dec(x_1867);
 x_1873 = lean::box(0);
} else {
 lean::cnstr_release(x_1867, 0);
 x_1873 = x_1867;
}
if (lean::is_scalar(x_1873)) {
 x_1874 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1874 = x_1873;
}
lean::cnstr_set(x_1874, 0, x_1871);
return x_1874;
}
else
{
obj* x_1875; 
x_1875 = lean::cnstr_get(x_1867, 0);
lean::inc(x_1875);
lean::dec(x_1867);
x_16 = x_1875;
goto lbl_17;
}
}
else
{
obj* x_1878; obj* x_1881; obj* x_1882; obj* x_1884; obj* x_1886; obj* x_1887; obj* x_1889; obj* x_1893; 
x_1878 = lean::cnstr_get(x_1859, 0);
lean::inc(x_1878);
lean::dec(x_1859);
x_1881 = l_lean_parser_term_simple__binder_view_to__binder__info___main(x_1878);
x_1882 = lean::cnstr_get(x_1881, 0);
lean::inc(x_1882);
x_1884 = lean::cnstr_get(x_1881, 1);
lean::inc(x_1884);
if (lean::is_shared(x_1881)) {
 lean::dec(x_1881);
 x_1886 = lean::box(0);
} else {
 lean::cnstr_release(x_1881, 0);
 lean::cnstr_release(x_1881, 1);
 x_1886 = x_1881;
}
x_1887 = lean::cnstr_get(x_1884, 0);
lean::inc(x_1887);
x_1889 = lean::cnstr_get(x_1884, 1);
lean::inc(x_1889);
lean::dec(x_1884);
lean::inc(x_1);
x_1893 = l_lean_elaborator_to__pexpr___main(x_1889, x_1, x_2);
if (lean::obj_tag(x_1893) == 0)
{
obj* x_1901; obj* x_1903; obj* x_1904; 
lean::dec(x_1886);
lean::dec(x_1887);
lean::dec(x_1882);
lean::dec(x_1858);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1901 = lean::cnstr_get(x_1893, 0);
lean::inc(x_1901);
if (lean::is_shared(x_1893)) {
 lean::dec(x_1893);
 x_1903 = lean::box(0);
} else {
 lean::cnstr_release(x_1893, 0);
 x_1903 = x_1893;
}
if (lean::is_scalar(x_1903)) {
 x_1904 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1904 = x_1903;
}
lean::cnstr_set(x_1904, 0, x_1901);
return x_1904;
}
else
{
obj* x_1905; obj* x_1907; obj* x_1908; obj* x_1910; obj* x_1913; obj* x_1917; 
x_1905 = lean::cnstr_get(x_1893, 0);
lean::inc(x_1905);
if (lean::is_shared(x_1893)) {
 lean::dec(x_1893);
 x_1907 = lean::box(0);
} else {
 lean::cnstr_release(x_1893, 0);
 x_1907 = x_1893;
}
x_1908 = lean::cnstr_get(x_1905, 0);
lean::inc(x_1908);
x_1910 = lean::cnstr_get(x_1905, 1);
lean::inc(x_1910);
lean::dec(x_1905);
x_1913 = lean::cnstr_get(x_1858, 3);
lean::inc(x_1913);
lean::dec(x_1858);
lean::inc(x_1);
x_1917 = l_lean_elaborator_to__pexpr___main(x_1913, x_1, x_1910);
if (lean::obj_tag(x_1917) == 0)
{
obj* x_1925; obj* x_1928; 
lean::dec(x_1886);
lean::dec(x_1908);
lean::dec(x_1887);
lean::dec(x_1882);
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_1925 = lean::cnstr_get(x_1917, 0);
lean::inc(x_1925);
lean::dec(x_1917);
if (lean::is_scalar(x_1907)) {
 x_1928 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1928 = x_1907;
}
lean::cnstr_set(x_1928, 0, x_1925);
return x_1928;
}
else
{
obj* x_1930; obj* x_1933; obj* x_1935; obj* x_1938; obj* x_1939; unsigned char x_1940; obj* x_1942; obj* x_1943; 
lean::dec(x_1907);
x_1930 = lean::cnstr_get(x_1917, 0);
lean::inc(x_1930);
lean::dec(x_1917);
x_1933 = lean::cnstr_get(x_1930, 0);
lean::inc(x_1933);
x_1935 = lean::cnstr_get(x_1930, 1);
lean::inc(x_1935);
lean::dec(x_1930);
x_1938 = l_lean_elaborator_mangle__ident(x_1887);
x_1939 = lean::alloc_cnstr(6, 3, 1);
lean::cnstr_set(x_1939, 0, x_1938);
lean::cnstr_set(x_1939, 1, x_1908);
lean::cnstr_set(x_1939, 2, x_1933);
x_1940 = lean::unbox(x_1882);
lean::dec(x_1882);
lean::cnstr_set_scalar(x_1939, sizeof(void*)*3, x_1940);
x_1942 = x_1939;
if (lean::is_scalar(x_1886)) {
 x_1943 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1943 = x_1886;
}
lean::cnstr_set(x_1943, 0, x_1942);
lean::cnstr_set(x_1943, 1, x_1935);
x_16 = x_1943;
goto lbl_17;
}
}
}
}
}
else
{
obj* x_1946; obj* x_1947; obj* x_1950; obj* x_1951; obj* x_1954; 
lean::dec(x_28);
lean::dec(x_11);
x_1946 = l_lean_parser_term_app_has__view;
x_1947 = lean::cnstr_get(x_1946, 0);
lean::inc(x_1947);
lean::inc(x_0);
x_1950 = lean::apply_1(x_1947, x_0);
x_1951 = lean::cnstr_get(x_1950, 0);
lean::inc(x_1951);
lean::inc(x_1);
x_1954 = l_lean_elaborator_to__pexpr___main(x_1951, x_1, x_2);
if (lean::obj_tag(x_1954) == 0)
{
obj* x_1959; obj* x_1961; obj* x_1962; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_1950);
x_1959 = lean::cnstr_get(x_1954, 0);
lean::inc(x_1959);
if (lean::is_shared(x_1954)) {
 lean::dec(x_1954);
 x_1961 = lean::box(0);
} else {
 lean::cnstr_release(x_1954, 0);
 x_1961 = x_1954;
}
if (lean::is_scalar(x_1961)) {
 x_1962 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1962 = x_1961;
}
lean::cnstr_set(x_1962, 0, x_1959);
return x_1962;
}
else
{
obj* x_1963; obj* x_1965; obj* x_1966; obj* x_1968; obj* x_1970; obj* x_1971; obj* x_1975; 
x_1963 = lean::cnstr_get(x_1954, 0);
lean::inc(x_1963);
if (lean::is_shared(x_1954)) {
 lean::dec(x_1954);
 x_1965 = lean::box(0);
} else {
 lean::cnstr_release(x_1954, 0);
 x_1965 = x_1954;
}
x_1966 = lean::cnstr_get(x_1963, 0);
lean::inc(x_1966);
x_1968 = lean::cnstr_get(x_1963, 1);
lean::inc(x_1968);
if (lean::is_shared(x_1963)) {
 lean::dec(x_1963);
 x_1970 = lean::box(0);
} else {
 lean::cnstr_release(x_1963, 0);
 lean::cnstr_release(x_1963, 1);
 x_1970 = x_1963;
}
x_1971 = lean::cnstr_get(x_1950, 1);
lean::inc(x_1971);
lean::dec(x_1950);
lean::inc(x_1);
x_1975 = l_lean_elaborator_to__pexpr___main(x_1971, x_1, x_1968);
if (lean::obj_tag(x_1975) == 0)
{
obj* x_1981; obj* x_1984; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_1970);
lean::dec(x_1966);
x_1981 = lean::cnstr_get(x_1975, 0);
lean::inc(x_1981);
lean::dec(x_1975);
if (lean::is_scalar(x_1965)) {
 x_1984 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1984 = x_1965;
}
lean::cnstr_set(x_1984, 0, x_1981);
return x_1984;
}
else
{
obj* x_1986; obj* x_1989; obj* x_1991; obj* x_1994; obj* x_1995; 
lean::dec(x_1965);
x_1986 = lean::cnstr_get(x_1975, 0);
lean::inc(x_1986);
lean::dec(x_1975);
x_1989 = lean::cnstr_get(x_1986, 0);
lean::inc(x_1989);
x_1991 = lean::cnstr_get(x_1986, 1);
lean::inc(x_1991);
lean::dec(x_1986);
x_1994 = lean::alloc_cnstr(5, 2, 0);
lean::cnstr_set(x_1994, 0, x_1966);
lean::cnstr_set(x_1994, 1, x_1989);
if (lean::is_scalar(x_1970)) {
 x_1995 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1995 = x_1970;
}
lean::cnstr_set(x_1995, 0, x_1994);
lean::cnstr_set(x_1995, 1, x_1991);
x_16 = x_1995;
goto lbl_17;
}
}
}
}
else
{
obj* x_1998; obj* x_1999; obj* x_2002; obj* x_2003; obj* x_2005; 
lean::dec(x_11);
lean::dec(x_23);
x_1998 = l_lean_parser_ident__univs_has__view;
x_1999 = lean::cnstr_get(x_1998, 0);
lean::inc(x_1999);
lean::inc(x_0);
x_2002 = lean::apply_1(x_1999, x_0);
x_2003 = lean::cnstr_get(x_2002, 0);
lean::inc(x_2003);
x_2005 = lean::cnstr_get(x_2002, 1);
lean::inc(x_2005);
lean::dec(x_2002);
if (lean::obj_tag(x_2005) == 0)
{
obj* x_2010; obj* x_2011; obj* x_2013; obj* x_2014; obj* x_2017; obj* x_2018; obj* x_2019; obj* x_2021; obj* x_2022; obj* x_2023; obj* x_2025; 
lean::dec(x_2005);
lean::inc(x_2003);
x_2010 = l_lean_elaborator_mangle__ident(x_2003);
x_2011 = lean::box(0);
lean::inc(x_2011);
x_2013 = lean::alloc_cnstr(4, 2, 0);
lean::cnstr_set(x_2013, 0, x_2010);
lean::cnstr_set(x_2013, 1, x_2011);
x_2014 = lean::cnstr_get(x_2003, 3);
lean::inc(x_2014);
lean::dec(x_2003);
x_2017 = lean::mk_nat_obj(0u);
x_2018 = l_list_enum__from___main___rarg(x_2017, x_2014);
x_2019 = l_lean_elaborator_to__pexpr___main___closed__46;
lean::inc(x_2019);
x_2021 = l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__22(x_2019, x_2018);
x_2022 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_2022, 0, x_2021);
lean::cnstr_set(x_2022, 1, x_2013);
x_2023 = l_lean_elaborator_to__pexpr___main___closed__2;
lean::inc(x_2023);
x_2025 = l_lean_name_has__dec__eq___main(x_9, x_2023);
if (lean::obj_tag(x_2025) == 0)
{
obj* x_2027; 
lean::dec(x_2025);
x_2027 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_2027) == 0)
{
obj* x_2031; obj* x_2032; 
lean::dec(x_1);
lean::dec(x_2027);
lean::dec(x_2011);
x_2031 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2031, 0, x_2022);
lean::cnstr_set(x_2031, 1, x_2);
x_2032 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2032, 0, x_2031);
return x_2032;
}
else
{
obj* x_2033; obj* x_2036; obj* x_2039; obj* x_2042; obj* x_2043; obj* x_2045; obj* x_2047; obj* x_2048; obj* x_2051; obj* x_2053; obj* x_2054; obj* x_2055; obj* x_2056; 
x_2033 = lean::cnstr_get(x_2027, 0);
lean::inc(x_2033);
lean::dec(x_2027);
x_2036 = lean::cnstr_get(x_1, 0);
lean::inc(x_2036);
lean::dec(x_1);
x_2039 = lean::cnstr_get(x_2036, 2);
lean::inc(x_2039);
lean::dec(x_2036);
x_2042 = l_lean_file__map_to__position(x_2039, x_2033);
x_2043 = lean::cnstr_get(x_2042, 1);
lean::inc(x_2043);
x_2045 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_2045);
x_2047 = l_lean_kvmap_set__nat(x_2011, x_2045, x_2043);
x_2048 = lean::cnstr_get(x_2042, 0);
lean::inc(x_2048);
lean::dec(x_2042);
x_2051 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_2051);
x_2053 = l_lean_kvmap_set__nat(x_2047, x_2051, x_2048);
x_2054 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_2054, 0, x_2053);
lean::cnstr_set(x_2054, 1, x_2022);
x_2055 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2055, 0, x_2054);
lean::cnstr_set(x_2055, 1, x_2);
x_2056 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2056, 0, x_2055);
return x_2056;
}
}
else
{
obj* x_2061; obj* x_2062; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2025);
lean::dec(x_2011);
x_2061 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2061, 0, x_2022);
lean::cnstr_set(x_2061, 1, x_2);
x_2062 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2062, 0, x_2061);
return x_2062;
}
}
else
{
obj* x_2063; obj* x_2066; obj* x_2070; 
x_2063 = lean::cnstr_get(x_2005, 0);
lean::inc(x_2063);
lean::dec(x_2005);
x_2066 = lean::cnstr_get(x_2063, 1);
lean::inc(x_2066);
lean::dec(x_2063);
lean::inc(x_1);
x_2070 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__23(x_2066, x_1, x_2);
if (lean::obj_tag(x_2070) == 0)
{
obj* x_2075; obj* x_2077; obj* x_2078; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2003);
x_2075 = lean::cnstr_get(x_2070, 0);
lean::inc(x_2075);
if (lean::is_shared(x_2070)) {
 lean::dec(x_2070);
 x_2077 = lean::box(0);
} else {
 lean::cnstr_release(x_2070, 0);
 x_2077 = x_2070;
}
if (lean::is_scalar(x_2077)) {
 x_2078 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2078 = x_2077;
}
lean::cnstr_set(x_2078, 0, x_2075);
return x_2078;
}
else
{
obj* x_2079; obj* x_2082; obj* x_2084; obj* x_2086; obj* x_2088; obj* x_2089; obj* x_2090; obj* x_2093; obj* x_2094; obj* x_2095; obj* x_2097; obj* x_2098; obj* x_2099; 
x_2079 = lean::cnstr_get(x_2070, 0);
lean::inc(x_2079);
lean::dec(x_2070);
x_2082 = lean::cnstr_get(x_2079, 0);
lean::inc(x_2082);
x_2084 = lean::cnstr_get(x_2079, 1);
lean::inc(x_2084);
if (lean::is_shared(x_2079)) {
 lean::dec(x_2079);
 x_2086 = lean::box(0);
} else {
 lean::cnstr_release(x_2079, 0);
 lean::cnstr_release(x_2079, 1);
 x_2086 = x_2079;
}
lean::inc(x_2003);
x_2088 = l_lean_elaborator_mangle__ident(x_2003);
x_2089 = lean::alloc_cnstr(4, 2, 0);
lean::cnstr_set(x_2089, 0, x_2088);
lean::cnstr_set(x_2089, 1, x_2082);
x_2090 = lean::cnstr_get(x_2003, 3);
lean::inc(x_2090);
lean::dec(x_2003);
x_2093 = lean::mk_nat_obj(0u);
x_2094 = l_list_enum__from___main___rarg(x_2093, x_2090);
x_2095 = l_lean_elaborator_to__pexpr___main___closed__46;
lean::inc(x_2095);
x_2097 = l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__24(x_2095, x_2094);
x_2098 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_2098, 0, x_2097);
lean::cnstr_set(x_2098, 1, x_2089);
if (lean::is_scalar(x_2086)) {
 x_2099 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2099 = x_2086;
}
lean::cnstr_set(x_2099, 0, x_2098);
lean::cnstr_set(x_2099, 1, x_2084);
x_16 = x_2099;
goto lbl_17;
}
}
}
lbl_15:
{
if (lean::obj_tag(x_14) == 0)
{
obj* x_2103; obj* x_2105; obj* x_2106; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_2103 = lean::cnstr_get(x_14, 0);
lean::inc(x_2103);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_2105 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_2105 = x_14;
}
if (lean::is_scalar(x_2105)) {
 x_2106 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2106 = x_2105;
}
lean::cnstr_set(x_2106, 0, x_2103);
return x_2106;
}
else
{
obj* x_2107; obj* x_2109; obj* x_2110; obj* x_2112; obj* x_2114; obj* x_2115; obj* x_2117; 
x_2107 = lean::cnstr_get(x_14, 0);
lean::inc(x_2107);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_2109 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_2109 = x_14;
}
x_2110 = lean::cnstr_get(x_2107, 0);
lean::inc(x_2110);
x_2112 = lean::cnstr_get(x_2107, 1);
lean::inc(x_2112);
if (lean::is_shared(x_2107)) {
 lean::dec(x_2107);
 x_2114 = lean::box(0);
} else {
 lean::cnstr_release(x_2107, 0);
 lean::cnstr_release(x_2107, 1);
 x_2114 = x_2107;
}
x_2115 = l_lean_elaborator_to__pexpr___main___closed__2;
lean::inc(x_2115);
x_2117 = l_lean_name_has__dec__eq___main(x_9, x_2115);
if (lean::obj_tag(x_2117) == 0)
{
obj* x_2119; 
lean::dec(x_2117);
x_2119 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_2119) == 0)
{
obj* x_2122; obj* x_2123; 
lean::dec(x_2119);
lean::dec(x_1);
if (lean::is_scalar(x_2114)) {
 x_2122 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2122 = x_2114;
}
lean::cnstr_set(x_2122, 0, x_2110);
lean::cnstr_set(x_2122, 1, x_2112);
if (lean::is_scalar(x_2109)) {
 x_2123 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_2123 = x_2109;
}
lean::cnstr_set(x_2123, 0, x_2122);
return x_2123;
}
else
{
obj* x_2124; obj* x_2127; obj* x_2130; obj* x_2133; obj* x_2134; obj* x_2135; obj* x_2137; obj* x_2139; obj* x_2140; obj* x_2143; obj* x_2145; obj* x_2146; obj* x_2147; obj* x_2148; 
x_2124 = lean::cnstr_get(x_2119, 0);
lean::inc(x_2124);
lean::dec(x_2119);
x_2127 = lean::cnstr_get(x_1, 0);
lean::inc(x_2127);
lean::dec(x_1);
x_2130 = lean::cnstr_get(x_2127, 2);
lean::inc(x_2130);
lean::dec(x_2127);
x_2133 = l_lean_file__map_to__position(x_2130, x_2124);
x_2134 = lean::box(0);
x_2135 = lean::cnstr_get(x_2133, 1);
lean::inc(x_2135);
x_2137 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_2137);
x_2139 = l_lean_kvmap_set__nat(x_2134, x_2137, x_2135);
x_2140 = lean::cnstr_get(x_2133, 0);
lean::inc(x_2140);
lean::dec(x_2133);
x_2143 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_2143);
x_2145 = l_lean_kvmap_set__nat(x_2139, x_2143, x_2140);
x_2146 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_2146, 0, x_2145);
lean::cnstr_set(x_2146, 1, x_2110);
if (lean::is_scalar(x_2114)) {
 x_2147 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2147 = x_2114;
}
lean::cnstr_set(x_2147, 0, x_2146);
lean::cnstr_set(x_2147, 1, x_2112);
if (lean::is_scalar(x_2109)) {
 x_2148 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_2148 = x_2109;
}
lean::cnstr_set(x_2148, 0, x_2147);
return x_2148;
}
}
else
{
obj* x_2152; obj* x_2153; 
lean::dec(x_2117);
lean::dec(x_0);
lean::dec(x_1);
if (lean::is_scalar(x_2114)) {
 x_2152 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2152 = x_2114;
}
lean::cnstr_set(x_2152, 0, x_2110);
lean::cnstr_set(x_2152, 1, x_2112);
if (lean::is_scalar(x_2109)) {
 x_2153 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_2153 = x_2109;
}
lean::cnstr_set(x_2153, 0, x_2152);
return x_2153;
}
}
}
lbl_17:
{
obj* x_2154; obj* x_2156; obj* x_2158; obj* x_2159; obj* x_2161; 
x_2154 = lean::cnstr_get(x_16, 0);
lean::inc(x_2154);
x_2156 = lean::cnstr_get(x_16, 1);
lean::inc(x_2156);
if (lean::is_shared(x_16)) {
 lean::dec(x_16);
 x_2158 = lean::box(0);
} else {
 lean::cnstr_release(x_16, 0);
 lean::cnstr_release(x_16, 1);
 x_2158 = x_16;
}
x_2159 = l_lean_elaborator_to__pexpr___main___closed__2;
lean::inc(x_2159);
x_2161 = l_lean_name_has__dec__eq___main(x_9, x_2159);
if (lean::obj_tag(x_2161) == 0)
{
obj* x_2163; 
lean::dec(x_2161);
x_2163 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_2163) == 0)
{
obj* x_2166; obj* x_2167; 
lean::dec(x_1);
lean::dec(x_2163);
if (lean::is_scalar(x_2158)) {
 x_2166 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2166 = x_2158;
}
lean::cnstr_set(x_2166, 0, x_2154);
lean::cnstr_set(x_2166, 1, x_2156);
x_2167 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2167, 0, x_2166);
return x_2167;
}
else
{
obj* x_2168; obj* x_2171; obj* x_2174; obj* x_2177; obj* x_2178; obj* x_2179; obj* x_2181; obj* x_2183; obj* x_2184; obj* x_2187; obj* x_2189; obj* x_2190; obj* x_2191; obj* x_2192; 
x_2168 = lean::cnstr_get(x_2163, 0);
lean::inc(x_2168);
lean::dec(x_2163);
x_2171 = lean::cnstr_get(x_1, 0);
lean::inc(x_2171);
lean::dec(x_1);
x_2174 = lean::cnstr_get(x_2171, 2);
lean::inc(x_2174);
lean::dec(x_2171);
x_2177 = l_lean_file__map_to__position(x_2174, x_2168);
x_2178 = lean::box(0);
x_2179 = lean::cnstr_get(x_2177, 1);
lean::inc(x_2179);
x_2181 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_2181);
x_2183 = l_lean_kvmap_set__nat(x_2178, x_2181, x_2179);
x_2184 = lean::cnstr_get(x_2177, 0);
lean::inc(x_2184);
lean::dec(x_2177);
x_2187 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_2187);
x_2189 = l_lean_kvmap_set__nat(x_2183, x_2187, x_2184);
x_2190 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_2190, 0, x_2189);
lean::cnstr_set(x_2190, 1, x_2154);
if (lean::is_scalar(x_2158)) {
 x_2191 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2191 = x_2158;
}
lean::cnstr_set(x_2191, 0, x_2190);
lean::cnstr_set(x_2191, 1, x_2156);
x_2192 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2192, 0, x_2191);
return x_2192;
}
}
else
{
obj* x_2196; obj* x_2197; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2161);
if (lean::is_scalar(x_2158)) {
 x_2196 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2196 = x_2158;
}
lean::cnstr_set(x_2196, 0, x_2154);
lean::cnstr_set(x_2196, 1, x_2156);
x_2197 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2197, 0, x_2196);
return x_2197;
}
}
lbl_19:
{
obj* x_2198; obj* x_2200; obj* x_2202; 
x_2198 = lean::cnstr_get(x_18, 0);
lean::inc(x_2198);
x_2200 = lean::cnstr_get(x_18, 1);
lean::inc(x_2200);
if (lean::is_shared(x_18)) {
 lean::dec(x_18);
 x_2202 = lean::box(0);
} else {
 lean::cnstr_release(x_18, 0);
 lean::cnstr_release(x_18, 1);
 x_2202 = x_18;
}
if (lean::obj_tag(x_2198) == 0)
{
obj* x_2206; obj* x_2210; 
lean::dec(x_11);
lean::dec(x_2202);
lean::dec(x_2198);
x_2206 = l_lean_elaborator_to__pexpr___main___closed__5;
lean::inc(x_1);
lean::inc(x_2206);
lean::inc(x_0);
x_2210 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_2206, x_1, x_2200);
if (lean::obj_tag(x_2210) == 0)
{
obj* x_2214; obj* x_2216; obj* x_2217; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_1);
x_2214 = lean::cnstr_get(x_2210, 0);
lean::inc(x_2214);
if (lean::is_shared(x_2210)) {
 lean::dec(x_2210);
 x_2216 = lean::box(0);
} else {
 lean::cnstr_release(x_2210, 0);
 x_2216 = x_2210;
}
if (lean::is_scalar(x_2216)) {
 x_2217 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2217 = x_2216;
}
lean::cnstr_set(x_2217, 0, x_2214);
return x_2217;
}
else
{
obj* x_2218; 
x_2218 = lean::cnstr_get(x_2210, 0);
lean::inc(x_2218);
lean::dec(x_2210);
x_16 = x_2218;
goto lbl_17;
}
}
else
{
obj* x_2221; obj* x_2223; obj* x_2226; obj* x_2227; obj* x_2228; obj* x_2230; obj* x_2231; obj* x_2232; obj* x_2233; obj* x_2234; 
x_2221 = lean::cnstr_get(x_2198, 0);
lean::inc(x_2221);
x_2223 = lean::cnstr_get(x_2198, 1);
lean::inc(x_2223);
lean::dec(x_2198);
x_2226 = lean::box(0);
x_2227 = l_list_length___main___rarg(x_11);
x_2228 = l_lean_elaborator_to__pexpr___main___closed__6;
lean::inc(x_2228);
x_2230 = l_lean_kvmap_set__nat(x_2226, x_2228, x_2227);
x_2231 = l_list_reverse___rarg(x_2223);
x_2232 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1(x_2221, x_2231);
x_2233 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_2233, 0, x_2230);
lean::cnstr_set(x_2233, 1, x_2232);
if (lean::is_scalar(x_2202)) {
 x_2234 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2234 = x_2202;
}
lean::cnstr_set(x_2234, 0, x_2233);
lean::cnstr_set(x_2234, 1, x_2200);
x_16 = x_2234;
goto lbl_17;
}
}
}
default:
{
obj* x_2235; 
x_2235 = lean::box(0);
x_3 = x_2235;
goto lbl_4;
}
}
lbl_4:
{
obj* x_2238; obj* x_2239; obj* x_2240; obj* x_2241; obj* x_2243; obj* x_2245; 
lean::dec(x_3);
lean::inc(x_0);
x_2238 = l_lean_parser_syntax_to__format___main(x_0);
x_2239 = lean::mk_nat_obj(80u);
x_2240 = l_lean_format_pretty(x_2238, x_2239);
x_2241 = l_lean_elaborator_to__pexpr___main___closed__1;
lean::inc(x_2241);
x_2243 = lean::string_append(x_2241, x_2240);
lean::dec(x_2240);
x_2245 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_2243, x_1, x_2);
return x_2245;
}
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("to_pexpr: unexpected: ");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_string("term");
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = lean::mk_string("app");
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("column");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("row");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__5() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed choice");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("choice");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__7() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_string("ident_univs");
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__8() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_string("term");
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = lean::mk_string("lambda");
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__9() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_string("term");
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = lean::mk_string("pi");
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__10() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_string("term");
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = lean::mk_string("sort_app");
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__11() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_string("term");
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = lean::mk_string("anonymous_constructor");
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__12() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_string("term");
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = lean::mk_string("hole");
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__13() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_string("term");
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = lean::mk_string("have");
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__14() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_string("term");
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = lean::mk_string("show");
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__15() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_string("term");
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = lean::mk_string("let");
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__16() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_string("term");
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = lean::mk_string("projection");
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__17() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_string("term");
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = lean::mk_string("explicit");
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__18() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_string("term");
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = lean::mk_string("inaccessible");
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__19() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_string("choice");
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__20() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_string("term");
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = lean::mk_string("struct_inst");
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__21() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_string("term");
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = lean::mk_string("match");
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__22() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("to_pexpr: unexpected node: ");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__23() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("to_pexpr: unreachable");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__24() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("match");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__25() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("structure instance");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__26() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("catchall");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__27() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_to__pexpr___main___lambda__1), 1, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__28() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_mangle__ident), 1, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__29() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("struct");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__30() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unexpected item in structure instance notation");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__31() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("innaccessible");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__32() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("@@");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__33() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("field_notation");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__34() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed let");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__35() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("this");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__36() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_nat_obj(0u);
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__37() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("show");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__38() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("have");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__39() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_to__pexpr___main___lambda__2), 1, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__40() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; 
x_0 = lean::box(0);
x_1 = l_lean_elaborator_dummy;
lean::inc(x_1);
x_3 = lean::alloc_cnstr(2, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__41() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("anonymous_constructor");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__42() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__43() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__44() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed pi");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__45() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed lambda");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__46() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("annotation");
lean::inc(x_0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::mk_string("preresolved");
lean::inc(x_0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_4);
x_7 = l_lean_kvmap_set__name(x_0, x_3, x_6);
return x_7;
}
}
obj* l_lean_elaborator_to__pexpr___main___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_to__pexpr___main___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1(x_0, x_5);
x_9 = lean::alloc_cnstr(5, 2, 0);
lean::cnstr_set(x_9, 0, x_3);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_17; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
lean::dec(x_8);
lean::inc(x_1);
x_17 = l_lean_elaborator_to__pexpr___main(x_13, x_1, x_2);
if (lean::obj_tag(x_17) == 0)
{
obj* x_21; obj* x_23; obj* x_24; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_21 = lean::cnstr_get(x_17, 0);
lean::inc(x_21);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_23 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 x_23 = x_17;
}
if (lean::is_scalar(x_23)) {
 x_24 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_24 = x_23;
}
lean::cnstr_set(x_24, 0, x_21);
return x_24;
}
else
{
obj* x_25; obj* x_27; obj* x_28; obj* x_30; obj* x_32; obj* x_33; 
x_25 = lean::cnstr_get(x_17, 0);
lean::inc(x_25);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_27 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 x_27 = x_17;
}
x_28 = lean::cnstr_get(x_25, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_25, 1);
lean::inc(x_30);
if (lean::is_shared(x_25)) {
 lean::dec(x_25);
 x_32 = lean::box(0);
} else {
 lean::cnstr_release(x_25, 0);
 lean::cnstr_release(x_25, 1);
 x_32 = x_25;
}
x_33 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__2(x_10, x_1, x_30);
if (lean::obj_tag(x_33) == 0)
{
obj* x_37; obj* x_40; 
lean::dec(x_12);
lean::dec(x_28);
lean::dec(x_32);
x_37 = lean::cnstr_get(x_33, 0);
lean::inc(x_37);
lean::dec(x_33);
if (lean::is_scalar(x_27)) {
 x_40 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_40 = x_27;
}
lean::cnstr_set(x_40, 0, x_37);
return x_40;
}
else
{
obj* x_41; obj* x_44; obj* x_46; obj* x_49; obj* x_50; obj* x_51; 
x_41 = lean::cnstr_get(x_33, 0);
lean::inc(x_41);
lean::dec(x_33);
x_44 = lean::cnstr_get(x_41, 0);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_41, 1);
lean::inc(x_46);
lean::dec(x_41);
if (lean::is_scalar(x_12)) {
 x_49 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_49 = x_12;
}
lean::cnstr_set(x_49, 0, x_28);
lean::cnstr_set(x_49, 1, x_44);
if (lean::is_scalar(x_32)) {
 x_50 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_50 = x_32;
}
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_46);
if (lean::is_scalar(x_27)) {
 x_51 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_51 = x_27;
}
lean::cnstr_set(x_51, 0, x_50);
return x_51;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_11; obj* x_12; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
lean::dec(x_3);
x_11 = l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__3(x_5);
if (lean::is_scalar(x_7)) {
 x_12 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_12 = x_7;
}
lean::cnstr_set(x_12, 0, x_8);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_16; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
lean::inc(x_1);
x_16 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__2(x_13, x_1, x_2);
if (lean::obj_tag(x_16) == 0)
{
obj* x_21; obj* x_23; obj* x_24; 
lean::dec(x_12);
lean::dec(x_8);
lean::dec(x_10);
lean::dec(x_1);
x_21 = lean::cnstr_get(x_16, 0);
lean::inc(x_21);
if (lean::is_shared(x_16)) {
 lean::dec(x_16);
 x_23 = lean::box(0);
} else {
 lean::cnstr_release(x_16, 0);
 x_23 = x_16;
}
if (lean::is_scalar(x_23)) {
 x_24 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_24 = x_23;
}
lean::cnstr_set(x_24, 0, x_21);
return x_24;
}
else
{
obj* x_25; obj* x_27; obj* x_28; obj* x_30; obj* x_32; obj* x_33; obj* x_37; 
x_25 = lean::cnstr_get(x_16, 0);
lean::inc(x_25);
if (lean::is_shared(x_16)) {
 lean::dec(x_16);
 x_27 = lean::box(0);
} else {
 lean::cnstr_release(x_16, 0);
 x_27 = x_16;
}
x_28 = lean::cnstr_get(x_25, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_25, 1);
lean::inc(x_30);
if (lean::is_shared(x_25)) {
 lean::dec(x_25);
 x_32 = lean::box(0);
} else {
 lean::cnstr_release(x_25, 0);
 lean::cnstr_release(x_25, 1);
 x_32 = x_25;
}
x_33 = lean::cnstr_get(x_8, 2);
lean::inc(x_33);
lean::dec(x_8);
lean::inc(x_1);
x_37 = l_lean_elaborator_to__pexpr___main(x_33, x_1, x_30);
if (lean::obj_tag(x_37) == 0)
{
obj* x_43; obj* x_46; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
lean::dec(x_28);
lean::dec(x_32);
x_43 = lean::cnstr_get(x_37, 0);
lean::inc(x_43);
lean::dec(x_37);
if (lean::is_scalar(x_27)) {
 x_46 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_46 = x_27;
}
lean::cnstr_set(x_46, 0, x_43);
return x_46;
}
else
{
obj* x_47; obj* x_50; obj* x_52; obj* x_54; obj* x_55; 
x_47 = lean::cnstr_get(x_37, 0);
lean::inc(x_47);
lean::dec(x_37);
x_50 = lean::cnstr_get(x_47, 0);
lean::inc(x_50);
x_52 = lean::cnstr_get(x_47, 1);
lean::inc(x_52);
if (lean::is_shared(x_47)) {
 lean::dec(x_47);
 x_54 = lean::box(0);
} else {
 lean::cnstr_release(x_47, 0);
 lean::cnstr_release(x_47, 1);
 x_54 = x_47;
}
x_55 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4(x_10, x_1, x_52);
if (lean::obj_tag(x_55) == 0)
{
obj* x_61; obj* x_64; 
lean::dec(x_12);
lean::dec(x_50);
lean::dec(x_28);
lean::dec(x_32);
lean::dec(x_54);
x_61 = lean::cnstr_get(x_55, 0);
lean::inc(x_61);
lean::dec(x_55);
if (lean::is_scalar(x_27)) {
 x_64 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_64 = x_27;
}
lean::cnstr_set(x_64, 0, x_61);
return x_64;
}
else
{
obj* x_65; obj* x_68; obj* x_70; obj* x_72; obj* x_73; obj* x_74; obj* x_76; obj* x_77; obj* x_78; obj* x_79; 
x_65 = lean::cnstr_get(x_55, 0);
lean::inc(x_65);
lean::dec(x_55);
x_68 = lean::cnstr_get(x_65, 0);
lean::inc(x_68);
x_70 = lean::cnstr_get(x_65, 1);
lean::inc(x_70);
if (lean::is_shared(x_65)) {
 lean::dec(x_65);
 x_72 = lean::box(0);
} else {
 lean::cnstr_release(x_65, 0);
 lean::cnstr_release(x_65, 1);
 x_72 = x_65;
}
if (lean::is_scalar(x_32)) {
 x_73 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_73 = x_32;
}
lean::cnstr_set(x_73, 0, x_28);
lean::cnstr_set(x_73, 1, x_50);
x_74 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1;
lean::inc(x_74);
if (lean::is_scalar(x_54)) {
 x_76 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_76 = x_54;
}
lean::cnstr_set(x_76, 0, x_74);
lean::cnstr_set(x_76, 1, x_73);
if (lean::is_scalar(x_12)) {
 x_77 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_77 = x_12;
}
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_68);
if (lean::is_scalar(x_72)) {
 x_78 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_78 = x_72;
}
lean::cnstr_set(x_78, 0, x_77);
lean::cnstr_set(x_78, 1, x_70);
if (lean::is_scalar(x_27)) {
 x_79 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_79 = x_27;
}
lean::cnstr_set(x_79, 0, x_78);
return x_79;
}
}
}
}
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_match_fn");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_17; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
lean::dec(x_8);
lean::inc(x_1);
x_17 = l_lean_elaborator_to__pexpr___main(x_13, x_1, x_2);
if (lean::obj_tag(x_17) == 0)
{
obj* x_21; obj* x_23; obj* x_24; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_21 = lean::cnstr_get(x_17, 0);
lean::inc(x_21);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_23 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 x_23 = x_17;
}
if (lean::is_scalar(x_23)) {
 x_24 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_24 = x_23;
}
lean::cnstr_set(x_24, 0, x_21);
return x_24;
}
else
{
obj* x_25; obj* x_27; obj* x_28; obj* x_30; obj* x_32; obj* x_33; 
x_25 = lean::cnstr_get(x_17, 0);
lean::inc(x_25);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_27 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 x_27 = x_17;
}
x_28 = lean::cnstr_get(x_25, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_25, 1);
lean::inc(x_30);
if (lean::is_shared(x_25)) {
 lean::dec(x_25);
 x_32 = lean::box(0);
} else {
 lean::cnstr_release(x_25, 0);
 lean::cnstr_release(x_25, 1);
 x_32 = x_25;
}
x_33 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__5(x_10, x_1, x_30);
if (lean::obj_tag(x_33) == 0)
{
obj* x_37; obj* x_40; 
lean::dec(x_12);
lean::dec(x_28);
lean::dec(x_32);
x_37 = lean::cnstr_get(x_33, 0);
lean::inc(x_37);
lean::dec(x_33);
if (lean::is_scalar(x_27)) {
 x_40 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_40 = x_27;
}
lean::cnstr_set(x_40, 0, x_37);
return x_40;
}
else
{
obj* x_41; obj* x_44; obj* x_46; obj* x_49; obj* x_50; obj* x_51; 
x_41 = lean::cnstr_get(x_33, 0);
lean::inc(x_41);
lean::dec(x_33);
x_44 = lean::cnstr_get(x_41, 0);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_41, 1);
lean::inc(x_46);
lean::dec(x_41);
if (lean::is_scalar(x_12)) {
 x_49 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_49 = x_12;
}
lean::cnstr_set(x_49, 0, x_28);
lean::cnstr_set(x_49, 1, x_44);
if (lean::is_scalar(x_32)) {
 x_50 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_50 = x_32;
}
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_46);
if (lean::is_scalar(x_27)) {
 x_51 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_51 = x_27;
}
lean::cnstr_set(x_51, 0, x_50);
return x_51;
}
}
}
}
}
obj* l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::inc(x_0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_3, 0);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
unsigned char x_10; obj* x_11; 
lean::dec(x_7);
x_10 = 1;
x_11 = l_coe__decidable__eq(x_10);
if (lean::obj_tag(x_11) == 0)
{
obj* x_15; obj* x_16; 
lean::dec(x_5);
lean::dec(x_11);
lean::dec(x_3);
x_15 = lean::box(0);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_0);
return x_16;
}
else
{
obj* x_19; obj* x_20; obj* x_22; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_11);
lean::dec(x_0);
x_19 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(x_5);
x_20 = lean::cnstr_get(x_19, 0);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_19, 1);
lean::inc(x_22);
if (lean::is_shared(x_19)) {
 lean::dec(x_19);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_19, 0);
 lean::cnstr_release(x_19, 1);
 x_24 = x_19;
}
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_3);
lean::cnstr_set(x_25, 1, x_20);
if (lean::is_scalar(x_24)) {
 x_26 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_26 = x_24;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_22);
return x_26;
}
}
else
{
unsigned char x_28; obj* x_29; 
lean::dec(x_7);
x_28 = 0;
x_29 = l_coe__decidable__eq(x_28);
if (lean::obj_tag(x_29) == 0)
{
obj* x_33; obj* x_34; 
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_29);
x_33 = lean::box(0);
x_34 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_0);
return x_34;
}
else
{
obj* x_37; obj* x_38; obj* x_40; obj* x_42; obj* x_43; obj* x_44; 
lean::dec(x_0);
lean::dec(x_29);
x_37 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(x_5);
x_38 = lean::cnstr_get(x_37, 0);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_37, 1);
lean::inc(x_40);
if (lean::is_shared(x_37)) {
 lean::dec(x_37);
 x_42 = lean::box(0);
} else {
 lean::cnstr_release(x_37, 0);
 lean::cnstr_release(x_37, 1);
 x_42 = x_37;
}
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_3);
lean::cnstr_set(x_43, 1, x_38);
if (lean::is_scalar(x_42)) {
 x_44 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_44 = x_42;
}
lean::cnstr_set(x_44, 0, x_43);
lean::cnstr_set(x_44, 1, x_40);
return x_44;
}
}
}
}
}
obj* l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::inc(x_0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_3, 0);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
unsigned char x_10; obj* x_11; 
lean::dec(x_7);
x_10 = 0;
x_11 = l_coe__decidable__eq(x_10);
if (lean::obj_tag(x_11) == 0)
{
obj* x_15; obj* x_16; 
lean::dec(x_5);
lean::dec(x_11);
lean::dec(x_3);
x_15 = lean::box(0);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_0);
return x_16;
}
else
{
obj* x_19; obj* x_20; obj* x_22; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_11);
lean::dec(x_0);
x_19 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(x_5);
x_20 = lean::cnstr_get(x_19, 0);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_19, 1);
lean::inc(x_22);
if (lean::is_shared(x_19)) {
 lean::dec(x_19);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_19, 0);
 lean::cnstr_release(x_19, 1);
 x_24 = x_19;
}
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_3);
lean::cnstr_set(x_25, 1, x_20);
if (lean::is_scalar(x_24)) {
 x_26 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_26 = x_24;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_22);
return x_26;
}
}
else
{
obj* x_27; obj* x_30; 
x_27 = lean::cnstr_get(x_7, 0);
lean::inc(x_27);
lean::dec(x_7);
x_30 = lean::cnstr_get(x_27, 1);
lean::inc(x_30);
lean::dec(x_27);
if (lean::obj_tag(x_30) == 0)
{
unsigned char x_34; obj* x_35; 
lean::dec(x_30);
x_34 = 0;
x_35 = l_coe__decidable__eq(x_34);
if (lean::obj_tag(x_35) == 0)
{
obj* x_39; obj* x_40; 
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_35);
x_39 = lean::box(0);
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_39);
lean::cnstr_set(x_40, 1, x_0);
return x_40;
}
else
{
obj* x_43; obj* x_44; obj* x_46; obj* x_48; obj* x_49; obj* x_50; 
lean::dec(x_0);
lean::dec(x_35);
x_43 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(x_5);
x_44 = lean::cnstr_get(x_43, 0);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_43, 1);
lean::inc(x_46);
if (lean::is_shared(x_43)) {
 lean::dec(x_43);
 x_48 = lean::box(0);
} else {
 lean::cnstr_release(x_43, 0);
 lean::cnstr_release(x_43, 1);
 x_48 = x_43;
}
x_49 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_49, 0, x_3);
lean::cnstr_set(x_49, 1, x_44);
if (lean::is_scalar(x_48)) {
 x_50 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_50 = x_48;
}
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_46);
return x_50;
}
}
else
{
unsigned char x_52; obj* x_53; 
lean::dec(x_30);
x_52 = 1;
x_53 = l_coe__decidable__eq(x_52);
if (lean::obj_tag(x_53) == 0)
{
obj* x_57; obj* x_58; 
lean::dec(x_53);
lean::dec(x_5);
lean::dec(x_3);
x_57 = lean::box(0);
x_58 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_0);
return x_58;
}
else
{
obj* x_61; obj* x_62; obj* x_64; obj* x_66; obj* x_67; obj* x_68; 
lean::dec(x_53);
lean::dec(x_0);
x_61 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(x_5);
x_62 = lean::cnstr_get(x_61, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_61, 1);
lean::inc(x_64);
if (lean::is_shared(x_61)) {
 lean::dec(x_61);
 x_66 = lean::box(0);
} else {
 lean::cnstr_release(x_61, 0);
 lean::cnstr_release(x_61, 1);
 x_66 = x_61;
}
x_67 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_67, 0, x_3);
lean::cnstr_set(x_67, 1, x_62);
if (lean::is_scalar(x_66)) {
 x_68 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_68 = x_66;
}
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_64);
return x_68;
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
lean::dec(x_10);
if (lean::obj_tag(x_15) == 0)
{
obj* x_18; obj* x_21; obj* x_24; 
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
lean::dec(x_15);
x_21 = lean::cnstr_get(x_18, 2);
lean::inc(x_21);
lean::inc(x_2);
x_24 = l_lean_elaborator_to__pexpr___main(x_21, x_2, x_3);
if (lean::obj_tag(x_24) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_18);
lean::dec(x_0);
lean::dec(x_2);
x_30 = lean::cnstr_get(x_24, 0);
lean::inc(x_30);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_32 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_32 = x_24;
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_36; obj* x_37; obj* x_39; obj* x_41; obj* x_42; 
x_34 = lean::cnstr_get(x_24, 0);
lean::inc(x_34);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_36 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_36 = x_24;
}
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
if (lean::is_shared(x_34)) {
 lean::dec(x_34);
 x_41 = lean::box(0);
} else {
 lean::cnstr_release(x_34, 0);
 lean::cnstr_release(x_34, 1);
 x_41 = x_34;
}
x_42 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(x_0, x_12, x_2, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_47; obj* x_50; 
lean::dec(x_14);
lean::dec(x_18);
lean::dec(x_37);
lean::dec(x_41);
x_47 = lean::cnstr_get(x_42, 0);
lean::inc(x_47);
lean::dec(x_42);
if (lean::is_scalar(x_36)) {
 x_50 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_50 = x_36;
}
lean::cnstr_set(x_50, 0, x_47);
return x_50;
}
else
{
obj* x_51; obj* x_54; obj* x_56; obj* x_59; obj* x_60; obj* x_63; obj* x_64; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_51 = lean::cnstr_get(x_42, 0);
lean::inc(x_51);
lean::dec(x_42);
x_54 = lean::cnstr_get(x_51, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_51, 1);
lean::inc(x_56);
lean::dec(x_51);
x_59 = lean::box(0);
x_60 = lean::cnstr_get(x_18, 0);
lean::inc(x_60);
lean::dec(x_18);
x_63 = l_lean_elaborator_mangle__ident(x_60);
x_64 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
lean::inc(x_64);
x_66 = l_lean_kvmap_set__name(x_59, x_64, x_63);
x_67 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_37);
if (lean::is_scalar(x_14)) {
 x_68 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_68 = x_14;
}
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_54);
if (lean::is_scalar(x_41)) {
 x_69 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_69 = x_41;
}
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_56);
if (lean::is_scalar(x_36)) {
 x_70 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_70 = x_36;
}
lean::cnstr_set(x_70, 0, x_69);
return x_70;
}
}
}
else
{
obj* x_72; obj* x_76; 
lean::dec(x_15);
x_72 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_2);
lean::inc(x_72);
lean::inc(x_0);
x_76 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_72, x_2, x_3);
if (lean::obj_tag(x_76) == 0)
{
obj* x_81; obj* x_83; obj* x_84; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_81 = lean::cnstr_get(x_76, 0);
lean::inc(x_81);
if (lean::is_shared(x_76)) {
 lean::dec(x_76);
 x_83 = lean::box(0);
} else {
 lean::cnstr_release(x_76, 0);
 x_83 = x_76;
}
if (lean::is_scalar(x_83)) {
 x_84 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_84 = x_83;
}
lean::cnstr_set(x_84, 0, x_81);
return x_84;
}
else
{
obj* x_85; obj* x_87; obj* x_88; obj* x_90; obj* x_92; obj* x_93; 
x_85 = lean::cnstr_get(x_76, 0);
lean::inc(x_85);
if (lean::is_shared(x_76)) {
 lean::dec(x_76);
 x_87 = lean::box(0);
} else {
 lean::cnstr_release(x_76, 0);
 x_87 = x_76;
}
x_88 = lean::cnstr_get(x_85, 0);
lean::inc(x_88);
x_90 = lean::cnstr_get(x_85, 1);
lean::inc(x_90);
if (lean::is_shared(x_85)) {
 lean::dec(x_85);
 x_92 = lean::box(0);
} else {
 lean::cnstr_release(x_85, 0);
 lean::cnstr_release(x_85, 1);
 x_92 = x_85;
}
x_93 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(x_0, x_12, x_2, x_90);
if (lean::obj_tag(x_93) == 0)
{
obj* x_97; obj* x_100; 
lean::dec(x_14);
lean::dec(x_92);
lean::dec(x_88);
x_97 = lean::cnstr_get(x_93, 0);
lean::inc(x_97);
lean::dec(x_93);
if (lean::is_scalar(x_87)) {
 x_100 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_100 = x_87;
}
lean::cnstr_set(x_100, 0, x_97);
return x_100;
}
else
{
obj* x_101; obj* x_104; obj* x_106; obj* x_109; obj* x_110; obj* x_111; 
x_101 = lean::cnstr_get(x_93, 0);
lean::inc(x_101);
lean::dec(x_93);
x_104 = lean::cnstr_get(x_101, 0);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_101, 1);
lean::inc(x_106);
lean::dec(x_101);
if (lean::is_scalar(x_14)) {
 x_109 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_109 = x_14;
}
lean::cnstr_set(x_109, 0, x_88);
lean::cnstr_set(x_109, 1, x_104);
if (lean::is_scalar(x_92)) {
 x_110 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_110 = x_92;
}
lean::cnstr_set(x_110, 0, x_109);
lean::cnstr_set(x_110, 1, x_106);
if (lean::is_scalar(x_87)) {
 x_111 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_111 = x_87;
}
lean::cnstr_set(x_111, 0, x_110);
return x_111;
}
}
}
}
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("field");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = l_lean_elaborator_to__pexpr___main___closed__42;
lean::inc(x_2);
return x_2;
}
else
{
obj* x_4; obj* x_6; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
lean::dec(x_0);
x_9 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9(x_6);
x_10 = lean::alloc_cnstr(5, 2, 0);
lean::cnstr_set(x_10, 0, x_4);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
lean::dec(x_10);
if (lean::obj_tag(x_15) == 0)
{
obj* x_19; obj* x_23; 
lean::dec(x_15);
x_19 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_2);
lean::inc(x_19);
lean::inc(x_0);
x_23 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_19, x_2, x_3);
if (lean::obj_tag(x_23) == 0)
{
obj* x_28; obj* x_30; obj* x_31; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_28 = lean::cnstr_get(x_23, 0);
lean::inc(x_28);
if (lean::is_shared(x_23)) {
 lean::dec(x_23);
 x_30 = lean::box(0);
} else {
 lean::cnstr_release(x_23, 0);
 x_30 = x_23;
}
if (lean::is_scalar(x_30)) {
 x_31 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_31 = x_30;
}
lean::cnstr_set(x_31, 0, x_28);
return x_31;
}
else
{
obj* x_32; obj* x_34; obj* x_35; obj* x_37; obj* x_39; obj* x_40; 
x_32 = lean::cnstr_get(x_23, 0);
lean::inc(x_32);
if (lean::is_shared(x_23)) {
 lean::dec(x_23);
 x_34 = lean::box(0);
} else {
 lean::cnstr_release(x_23, 0);
 x_34 = x_23;
}
x_35 = lean::cnstr_get(x_32, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_32, 1);
lean::inc(x_37);
if (lean::is_shared(x_32)) {
 lean::dec(x_32);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_32, 0);
 lean::cnstr_release(x_32, 1);
 x_39 = x_32;
}
x_40 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(x_0, x_12, x_2, x_37);
if (lean::obj_tag(x_40) == 0)
{
obj* x_44; obj* x_47; 
lean::dec(x_14);
lean::dec(x_39);
lean::dec(x_35);
x_44 = lean::cnstr_get(x_40, 0);
lean::inc(x_44);
lean::dec(x_40);
if (lean::is_scalar(x_34)) {
 x_47 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_47 = x_34;
}
lean::cnstr_set(x_47, 0, x_44);
return x_47;
}
else
{
obj* x_48; obj* x_51; obj* x_53; obj* x_56; obj* x_57; obj* x_58; 
x_48 = lean::cnstr_get(x_40, 0);
lean::inc(x_48);
lean::dec(x_40);
x_51 = lean::cnstr_get(x_48, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_48, 1);
lean::inc(x_53);
lean::dec(x_48);
if (lean::is_scalar(x_14)) {
 x_56 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_56 = x_14;
}
lean::cnstr_set(x_56, 0, x_35);
lean::cnstr_set(x_56, 1, x_51);
if (lean::is_scalar(x_39)) {
 x_57 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_57 = x_39;
}
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_53);
if (lean::is_scalar(x_34)) {
 x_58 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_58 = x_34;
}
lean::cnstr_set(x_58, 0, x_57);
return x_58;
}
}
}
else
{
obj* x_59; obj* x_62; 
x_59 = lean::cnstr_get(x_15, 0);
lean::inc(x_59);
lean::dec(x_15);
x_62 = lean::cnstr_get(x_59, 1);
lean::inc(x_62);
lean::dec(x_59);
if (lean::obj_tag(x_62) == 0)
{
obj* x_66; obj* x_70; 
lean::dec(x_62);
x_66 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_2);
lean::inc(x_66);
lean::inc(x_0);
x_70 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_66, x_2, x_3);
if (lean::obj_tag(x_70) == 0)
{
obj* x_75; obj* x_77; obj* x_78; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_75 = lean::cnstr_get(x_70, 0);
lean::inc(x_75);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_77 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_77 = x_70;
}
if (lean::is_scalar(x_77)) {
 x_78 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_78 = x_77;
}
lean::cnstr_set(x_78, 0, x_75);
return x_78;
}
else
{
obj* x_79; obj* x_81; obj* x_82; obj* x_84; obj* x_86; obj* x_87; 
x_79 = lean::cnstr_get(x_70, 0);
lean::inc(x_79);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_81 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_81 = x_70;
}
x_82 = lean::cnstr_get(x_79, 0);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_79, 1);
lean::inc(x_84);
if (lean::is_shared(x_79)) {
 lean::dec(x_79);
 x_86 = lean::box(0);
} else {
 lean::cnstr_release(x_79, 0);
 lean::cnstr_release(x_79, 1);
 x_86 = x_79;
}
x_87 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(x_0, x_12, x_2, x_84);
if (lean::obj_tag(x_87) == 0)
{
obj* x_91; obj* x_94; 
lean::dec(x_14);
lean::dec(x_86);
lean::dec(x_82);
x_91 = lean::cnstr_get(x_87, 0);
lean::inc(x_91);
lean::dec(x_87);
if (lean::is_scalar(x_81)) {
 x_94 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_94 = x_81;
}
lean::cnstr_set(x_94, 0, x_91);
return x_94;
}
else
{
obj* x_95; obj* x_98; obj* x_100; obj* x_103; obj* x_104; obj* x_105; 
x_95 = lean::cnstr_get(x_87, 0);
lean::inc(x_95);
lean::dec(x_87);
x_98 = lean::cnstr_get(x_95, 0);
lean::inc(x_98);
x_100 = lean::cnstr_get(x_95, 1);
lean::inc(x_100);
lean::dec(x_95);
if (lean::is_scalar(x_14)) {
 x_103 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_103 = x_14;
}
lean::cnstr_set(x_103, 0, x_82);
lean::cnstr_set(x_103, 1, x_98);
if (lean::is_scalar(x_86)) {
 x_104 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_104 = x_86;
}
lean::cnstr_set(x_104, 0, x_103);
lean::cnstr_set(x_104, 1, x_100);
if (lean::is_scalar(x_81)) {
 x_105 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_105 = x_81;
}
lean::cnstr_set(x_105, 0, x_104);
return x_105;
}
}
}
else
{
obj* x_106; obj* x_110; 
x_106 = lean::cnstr_get(x_62, 0);
lean::inc(x_106);
lean::dec(x_62);
lean::inc(x_2);
x_110 = l_lean_elaborator_to__pexpr___main(x_106, x_2, x_3);
if (lean::obj_tag(x_110) == 0)
{
obj* x_115; obj* x_117; obj* x_118; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_115 = lean::cnstr_get(x_110, 0);
lean::inc(x_115);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_117 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 x_117 = x_110;
}
if (lean::is_scalar(x_117)) {
 x_118 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_118 = x_117;
}
lean::cnstr_set(x_118, 0, x_115);
return x_118;
}
else
{
obj* x_119; obj* x_121; obj* x_122; obj* x_124; obj* x_126; obj* x_127; 
x_119 = lean::cnstr_get(x_110, 0);
lean::inc(x_119);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_121 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 x_121 = x_110;
}
x_122 = lean::cnstr_get(x_119, 0);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_119, 1);
lean::inc(x_124);
if (lean::is_shared(x_119)) {
 lean::dec(x_119);
 x_126 = lean::box(0);
} else {
 lean::cnstr_release(x_119, 0);
 lean::cnstr_release(x_119, 1);
 x_126 = x_119;
}
x_127 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(x_0, x_12, x_2, x_124);
if (lean::obj_tag(x_127) == 0)
{
obj* x_131; obj* x_134; 
lean::dec(x_14);
lean::dec(x_126);
lean::dec(x_122);
x_131 = lean::cnstr_get(x_127, 0);
lean::inc(x_131);
lean::dec(x_127);
if (lean::is_scalar(x_121)) {
 x_134 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_134 = x_121;
}
lean::cnstr_set(x_134, 0, x_131);
return x_134;
}
else
{
obj* x_135; obj* x_138; obj* x_140; obj* x_143; obj* x_144; obj* x_145; 
x_135 = lean::cnstr_get(x_127, 0);
lean::inc(x_135);
lean::dec(x_127);
x_138 = lean::cnstr_get(x_135, 0);
lean::inc(x_138);
x_140 = lean::cnstr_get(x_135, 1);
lean::inc(x_140);
lean::dec(x_135);
if (lean::is_scalar(x_14)) {
 x_143 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_143 = x_14;
}
lean::cnstr_set(x_143, 0, x_122);
lean::cnstr_set(x_143, 1, x_138);
if (lean::is_scalar(x_126)) {
 x_144 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_144 = x_126;
}
lean::cnstr_set(x_144, 0, x_143);
lean::cnstr_set(x_144, 1, x_140);
if (lean::is_scalar(x_121)) {
 x_145 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_145 = x_121;
}
lean::cnstr_set(x_145, 0, x_144);
return x_145;
}
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
lean::dec(x_10);
if (lean::obj_tag(x_15) == 0)
{
obj* x_18; obj* x_21; obj* x_24; 
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
lean::dec(x_15);
x_21 = lean::cnstr_get(x_18, 2);
lean::inc(x_21);
lean::inc(x_2);
x_24 = l_lean_elaborator_to__pexpr___main(x_21, x_2, x_3);
if (lean::obj_tag(x_24) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_18);
lean::dec(x_0);
lean::dec(x_2);
x_30 = lean::cnstr_get(x_24, 0);
lean::inc(x_30);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_32 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_32 = x_24;
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_36; obj* x_37; obj* x_39; obj* x_41; obj* x_42; 
x_34 = lean::cnstr_get(x_24, 0);
lean::inc(x_34);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_36 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_36 = x_24;
}
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
if (lean::is_shared(x_34)) {
 lean::dec(x_34);
 x_41 = lean::box(0);
} else {
 lean::cnstr_release(x_34, 0);
 lean::cnstr_release(x_34, 1);
 x_41 = x_34;
}
x_42 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(x_0, x_12, x_2, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_47; obj* x_50; 
lean::dec(x_14);
lean::dec(x_18);
lean::dec(x_37);
lean::dec(x_41);
x_47 = lean::cnstr_get(x_42, 0);
lean::inc(x_47);
lean::dec(x_42);
if (lean::is_scalar(x_36)) {
 x_50 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_50 = x_36;
}
lean::cnstr_set(x_50, 0, x_47);
return x_50;
}
else
{
obj* x_51; obj* x_54; obj* x_56; obj* x_59; obj* x_60; obj* x_63; obj* x_64; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_51 = lean::cnstr_get(x_42, 0);
lean::inc(x_51);
lean::dec(x_42);
x_54 = lean::cnstr_get(x_51, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_51, 1);
lean::inc(x_56);
lean::dec(x_51);
x_59 = lean::box(0);
x_60 = lean::cnstr_get(x_18, 0);
lean::inc(x_60);
lean::dec(x_18);
x_63 = l_lean_elaborator_mangle__ident(x_60);
x_64 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
lean::inc(x_64);
x_66 = l_lean_kvmap_set__name(x_59, x_64, x_63);
x_67 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_37);
if (lean::is_scalar(x_14)) {
 x_68 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_68 = x_14;
}
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_54);
if (lean::is_scalar(x_41)) {
 x_69 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_69 = x_41;
}
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_56);
if (lean::is_scalar(x_36)) {
 x_70 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_70 = x_36;
}
lean::cnstr_set(x_70, 0, x_69);
return x_70;
}
}
}
else
{
obj* x_72; obj* x_76; 
lean::dec(x_15);
x_72 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_2);
lean::inc(x_72);
lean::inc(x_0);
x_76 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_72, x_2, x_3);
if (lean::obj_tag(x_76) == 0)
{
obj* x_81; obj* x_83; obj* x_84; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_81 = lean::cnstr_get(x_76, 0);
lean::inc(x_81);
if (lean::is_shared(x_76)) {
 lean::dec(x_76);
 x_83 = lean::box(0);
} else {
 lean::cnstr_release(x_76, 0);
 x_83 = x_76;
}
if (lean::is_scalar(x_83)) {
 x_84 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_84 = x_83;
}
lean::cnstr_set(x_84, 0, x_81);
return x_84;
}
else
{
obj* x_85; obj* x_87; obj* x_88; obj* x_90; obj* x_92; obj* x_93; 
x_85 = lean::cnstr_get(x_76, 0);
lean::inc(x_85);
if (lean::is_shared(x_76)) {
 lean::dec(x_76);
 x_87 = lean::box(0);
} else {
 lean::cnstr_release(x_76, 0);
 x_87 = x_76;
}
x_88 = lean::cnstr_get(x_85, 0);
lean::inc(x_88);
x_90 = lean::cnstr_get(x_85, 1);
lean::inc(x_90);
if (lean::is_shared(x_85)) {
 lean::dec(x_85);
 x_92 = lean::box(0);
} else {
 lean::cnstr_release(x_85, 0);
 lean::cnstr_release(x_85, 1);
 x_92 = x_85;
}
x_93 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(x_0, x_12, x_2, x_90);
if (lean::obj_tag(x_93) == 0)
{
obj* x_97; obj* x_100; 
lean::dec(x_14);
lean::dec(x_92);
lean::dec(x_88);
x_97 = lean::cnstr_get(x_93, 0);
lean::inc(x_97);
lean::dec(x_93);
if (lean::is_scalar(x_87)) {
 x_100 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_100 = x_87;
}
lean::cnstr_set(x_100, 0, x_97);
return x_100;
}
else
{
obj* x_101; obj* x_104; obj* x_106; obj* x_109; obj* x_110; obj* x_111; 
x_101 = lean::cnstr_get(x_93, 0);
lean::inc(x_101);
lean::dec(x_93);
x_104 = lean::cnstr_get(x_101, 0);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_101, 1);
lean::inc(x_106);
lean::dec(x_101);
if (lean::is_scalar(x_14)) {
 x_109 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_109 = x_14;
}
lean::cnstr_set(x_109, 0, x_88);
lean::cnstr_set(x_109, 1, x_104);
if (lean::is_scalar(x_92)) {
 x_110 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_110 = x_92;
}
lean::cnstr_set(x_110, 0, x_109);
lean::cnstr_set(x_110, 1, x_106);
if (lean::is_scalar(x_87)) {
 x_111 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_111 = x_87;
}
lean::cnstr_set(x_111, 0, x_110);
return x_111;
}
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__12(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = l_lean_elaborator_to__pexpr___main___closed__42;
lean::inc(x_2);
return x_2;
}
else
{
obj* x_4; obj* x_6; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
lean::dec(x_0);
x_9 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__12(x_6);
x_10 = lean::alloc_cnstr(5, 2, 0);
lean::cnstr_set(x_10, 0, x_4);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
lean::dec(x_10);
if (lean::obj_tag(x_15) == 0)
{
obj* x_19; obj* x_23; 
lean::dec(x_15);
x_19 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_2);
lean::inc(x_19);
lean::inc(x_0);
x_23 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_19, x_2, x_3);
if (lean::obj_tag(x_23) == 0)
{
obj* x_28; obj* x_30; obj* x_31; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_28 = lean::cnstr_get(x_23, 0);
lean::inc(x_28);
if (lean::is_shared(x_23)) {
 lean::dec(x_23);
 x_30 = lean::box(0);
} else {
 lean::cnstr_release(x_23, 0);
 x_30 = x_23;
}
if (lean::is_scalar(x_30)) {
 x_31 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_31 = x_30;
}
lean::cnstr_set(x_31, 0, x_28);
return x_31;
}
else
{
obj* x_32; obj* x_34; obj* x_35; obj* x_37; obj* x_39; obj* x_40; 
x_32 = lean::cnstr_get(x_23, 0);
lean::inc(x_32);
if (lean::is_shared(x_23)) {
 lean::dec(x_23);
 x_34 = lean::box(0);
} else {
 lean::cnstr_release(x_23, 0);
 x_34 = x_23;
}
x_35 = lean::cnstr_get(x_32, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_32, 1);
lean::inc(x_37);
if (lean::is_shared(x_32)) {
 lean::dec(x_32);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_32, 0);
 lean::cnstr_release(x_32, 1);
 x_39 = x_32;
}
x_40 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(x_0, x_12, x_2, x_37);
if (lean::obj_tag(x_40) == 0)
{
obj* x_44; obj* x_47; 
lean::dec(x_14);
lean::dec(x_39);
lean::dec(x_35);
x_44 = lean::cnstr_get(x_40, 0);
lean::inc(x_44);
lean::dec(x_40);
if (lean::is_scalar(x_34)) {
 x_47 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_47 = x_34;
}
lean::cnstr_set(x_47, 0, x_44);
return x_47;
}
else
{
obj* x_48; obj* x_51; obj* x_53; obj* x_56; obj* x_57; obj* x_58; 
x_48 = lean::cnstr_get(x_40, 0);
lean::inc(x_48);
lean::dec(x_40);
x_51 = lean::cnstr_get(x_48, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_48, 1);
lean::inc(x_53);
lean::dec(x_48);
if (lean::is_scalar(x_14)) {
 x_56 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_56 = x_14;
}
lean::cnstr_set(x_56, 0, x_35);
lean::cnstr_set(x_56, 1, x_51);
if (lean::is_scalar(x_39)) {
 x_57 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_57 = x_39;
}
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_53);
if (lean::is_scalar(x_34)) {
 x_58 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_58 = x_34;
}
lean::cnstr_set(x_58, 0, x_57);
return x_58;
}
}
}
else
{
obj* x_59; obj* x_62; 
x_59 = lean::cnstr_get(x_15, 0);
lean::inc(x_59);
lean::dec(x_15);
x_62 = lean::cnstr_get(x_59, 1);
lean::inc(x_62);
lean::dec(x_59);
if (lean::obj_tag(x_62) == 0)
{
obj* x_66; obj* x_70; 
lean::dec(x_62);
x_66 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_2);
lean::inc(x_66);
lean::inc(x_0);
x_70 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_66, x_2, x_3);
if (lean::obj_tag(x_70) == 0)
{
obj* x_75; obj* x_77; obj* x_78; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_75 = lean::cnstr_get(x_70, 0);
lean::inc(x_75);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_77 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_77 = x_70;
}
if (lean::is_scalar(x_77)) {
 x_78 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_78 = x_77;
}
lean::cnstr_set(x_78, 0, x_75);
return x_78;
}
else
{
obj* x_79; obj* x_81; obj* x_82; obj* x_84; obj* x_86; obj* x_87; 
x_79 = lean::cnstr_get(x_70, 0);
lean::inc(x_79);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_81 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_81 = x_70;
}
x_82 = lean::cnstr_get(x_79, 0);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_79, 1);
lean::inc(x_84);
if (lean::is_shared(x_79)) {
 lean::dec(x_79);
 x_86 = lean::box(0);
} else {
 lean::cnstr_release(x_79, 0);
 lean::cnstr_release(x_79, 1);
 x_86 = x_79;
}
x_87 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(x_0, x_12, x_2, x_84);
if (lean::obj_tag(x_87) == 0)
{
obj* x_91; obj* x_94; 
lean::dec(x_14);
lean::dec(x_86);
lean::dec(x_82);
x_91 = lean::cnstr_get(x_87, 0);
lean::inc(x_91);
lean::dec(x_87);
if (lean::is_scalar(x_81)) {
 x_94 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_94 = x_81;
}
lean::cnstr_set(x_94, 0, x_91);
return x_94;
}
else
{
obj* x_95; obj* x_98; obj* x_100; obj* x_103; obj* x_104; obj* x_105; 
x_95 = lean::cnstr_get(x_87, 0);
lean::inc(x_95);
lean::dec(x_87);
x_98 = lean::cnstr_get(x_95, 0);
lean::inc(x_98);
x_100 = lean::cnstr_get(x_95, 1);
lean::inc(x_100);
lean::dec(x_95);
if (lean::is_scalar(x_14)) {
 x_103 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_103 = x_14;
}
lean::cnstr_set(x_103, 0, x_82);
lean::cnstr_set(x_103, 1, x_98);
if (lean::is_scalar(x_86)) {
 x_104 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_104 = x_86;
}
lean::cnstr_set(x_104, 0, x_103);
lean::cnstr_set(x_104, 1, x_100);
if (lean::is_scalar(x_81)) {
 x_105 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_105 = x_81;
}
lean::cnstr_set(x_105, 0, x_104);
return x_105;
}
}
}
else
{
obj* x_106; obj* x_110; 
x_106 = lean::cnstr_get(x_62, 0);
lean::inc(x_106);
lean::dec(x_62);
lean::inc(x_2);
x_110 = l_lean_elaborator_to__pexpr___main(x_106, x_2, x_3);
if (lean::obj_tag(x_110) == 0)
{
obj* x_115; obj* x_117; obj* x_118; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_115 = lean::cnstr_get(x_110, 0);
lean::inc(x_115);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_117 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 x_117 = x_110;
}
if (lean::is_scalar(x_117)) {
 x_118 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_118 = x_117;
}
lean::cnstr_set(x_118, 0, x_115);
return x_118;
}
else
{
obj* x_119; obj* x_121; obj* x_122; obj* x_124; obj* x_126; obj* x_127; 
x_119 = lean::cnstr_get(x_110, 0);
lean::inc(x_119);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_121 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 x_121 = x_110;
}
x_122 = lean::cnstr_get(x_119, 0);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_119, 1);
lean::inc(x_124);
if (lean::is_shared(x_119)) {
 lean::dec(x_119);
 x_126 = lean::box(0);
} else {
 lean::cnstr_release(x_119, 0);
 lean::cnstr_release(x_119, 1);
 x_126 = x_119;
}
x_127 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(x_0, x_12, x_2, x_124);
if (lean::obj_tag(x_127) == 0)
{
obj* x_131; obj* x_134; 
lean::dec(x_14);
lean::dec(x_126);
lean::dec(x_122);
x_131 = lean::cnstr_get(x_127, 0);
lean::inc(x_131);
lean::dec(x_127);
if (lean::is_scalar(x_121)) {
 x_134 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_134 = x_121;
}
lean::cnstr_set(x_134, 0, x_131);
return x_134;
}
else
{
obj* x_135; obj* x_138; obj* x_140; obj* x_143; obj* x_144; obj* x_145; 
x_135 = lean::cnstr_get(x_127, 0);
lean::inc(x_135);
lean::dec(x_127);
x_138 = lean::cnstr_get(x_135, 0);
lean::inc(x_138);
x_140 = lean::cnstr_get(x_135, 1);
lean::inc(x_140);
lean::dec(x_135);
if (lean::is_scalar(x_14)) {
 x_143 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_143 = x_14;
}
lean::cnstr_set(x_143, 0, x_122);
lean::cnstr_set(x_143, 1, x_138);
if (lean::is_scalar(x_126)) {
 x_144 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_144 = x_126;
}
lean::cnstr_set(x_144, 0, x_143);
lean::cnstr_set(x_144, 1, x_140);
if (lean::is_scalar(x_121)) {
 x_145 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_145 = x_121;
}
lean::cnstr_set(x_145, 0, x_144);
return x_145;
}
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
lean::dec(x_10);
if (lean::obj_tag(x_15) == 0)
{
obj* x_18; obj* x_21; obj* x_24; 
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
lean::dec(x_15);
x_21 = lean::cnstr_get(x_18, 2);
lean::inc(x_21);
lean::inc(x_2);
x_24 = l_lean_elaborator_to__pexpr___main(x_21, x_2, x_3);
if (lean::obj_tag(x_24) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_18);
lean::dec(x_0);
lean::dec(x_2);
x_30 = lean::cnstr_get(x_24, 0);
lean::inc(x_30);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_32 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_32 = x_24;
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_36; obj* x_37; obj* x_39; obj* x_41; obj* x_42; 
x_34 = lean::cnstr_get(x_24, 0);
lean::inc(x_34);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_36 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_36 = x_24;
}
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
if (lean::is_shared(x_34)) {
 lean::dec(x_34);
 x_41 = lean::box(0);
} else {
 lean::cnstr_release(x_34, 0);
 lean::cnstr_release(x_34, 1);
 x_41 = x_34;
}
x_42 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(x_0, x_12, x_2, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_47; obj* x_50; 
lean::dec(x_14);
lean::dec(x_18);
lean::dec(x_37);
lean::dec(x_41);
x_47 = lean::cnstr_get(x_42, 0);
lean::inc(x_47);
lean::dec(x_42);
if (lean::is_scalar(x_36)) {
 x_50 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_50 = x_36;
}
lean::cnstr_set(x_50, 0, x_47);
return x_50;
}
else
{
obj* x_51; obj* x_54; obj* x_56; obj* x_59; obj* x_60; obj* x_63; obj* x_64; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_51 = lean::cnstr_get(x_42, 0);
lean::inc(x_51);
lean::dec(x_42);
x_54 = lean::cnstr_get(x_51, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_51, 1);
lean::inc(x_56);
lean::dec(x_51);
x_59 = lean::box(0);
x_60 = lean::cnstr_get(x_18, 0);
lean::inc(x_60);
lean::dec(x_18);
x_63 = l_lean_elaborator_mangle__ident(x_60);
x_64 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
lean::inc(x_64);
x_66 = l_lean_kvmap_set__name(x_59, x_64, x_63);
x_67 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_37);
if (lean::is_scalar(x_14)) {
 x_68 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_68 = x_14;
}
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_54);
if (lean::is_scalar(x_41)) {
 x_69 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_69 = x_41;
}
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_56);
if (lean::is_scalar(x_36)) {
 x_70 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_70 = x_36;
}
lean::cnstr_set(x_70, 0, x_69);
return x_70;
}
}
}
else
{
obj* x_72; obj* x_76; 
lean::dec(x_15);
x_72 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_2);
lean::inc(x_72);
lean::inc(x_0);
x_76 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_72, x_2, x_3);
if (lean::obj_tag(x_76) == 0)
{
obj* x_81; obj* x_83; obj* x_84; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_81 = lean::cnstr_get(x_76, 0);
lean::inc(x_81);
if (lean::is_shared(x_76)) {
 lean::dec(x_76);
 x_83 = lean::box(0);
} else {
 lean::cnstr_release(x_76, 0);
 x_83 = x_76;
}
if (lean::is_scalar(x_83)) {
 x_84 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_84 = x_83;
}
lean::cnstr_set(x_84, 0, x_81);
return x_84;
}
else
{
obj* x_85; obj* x_87; obj* x_88; obj* x_90; obj* x_92; obj* x_93; 
x_85 = lean::cnstr_get(x_76, 0);
lean::inc(x_85);
if (lean::is_shared(x_76)) {
 lean::dec(x_76);
 x_87 = lean::box(0);
} else {
 lean::cnstr_release(x_76, 0);
 x_87 = x_76;
}
x_88 = lean::cnstr_get(x_85, 0);
lean::inc(x_88);
x_90 = lean::cnstr_get(x_85, 1);
lean::inc(x_90);
if (lean::is_shared(x_85)) {
 lean::dec(x_85);
 x_92 = lean::box(0);
} else {
 lean::cnstr_release(x_85, 0);
 lean::cnstr_release(x_85, 1);
 x_92 = x_85;
}
x_93 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(x_0, x_12, x_2, x_90);
if (lean::obj_tag(x_93) == 0)
{
obj* x_97; obj* x_100; 
lean::dec(x_14);
lean::dec(x_92);
lean::dec(x_88);
x_97 = lean::cnstr_get(x_93, 0);
lean::inc(x_97);
lean::dec(x_93);
if (lean::is_scalar(x_87)) {
 x_100 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_100 = x_87;
}
lean::cnstr_set(x_100, 0, x_97);
return x_100;
}
else
{
obj* x_101; obj* x_104; obj* x_106; obj* x_109; obj* x_110; obj* x_111; 
x_101 = lean::cnstr_get(x_93, 0);
lean::inc(x_101);
lean::dec(x_93);
x_104 = lean::cnstr_get(x_101, 0);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_101, 1);
lean::inc(x_106);
lean::dec(x_101);
if (lean::is_scalar(x_14)) {
 x_109 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_109 = x_14;
}
lean::cnstr_set(x_109, 0, x_88);
lean::cnstr_set(x_109, 1, x_104);
if (lean::is_scalar(x_92)) {
 x_110 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_110 = x_92;
}
lean::cnstr_set(x_110, 0, x_109);
lean::cnstr_set(x_110, 1, x_106);
if (lean::is_scalar(x_87)) {
 x_111 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_111 = x_87;
}
lean::cnstr_set(x_111, 0, x_110);
return x_111;
}
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__15(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = l_lean_elaborator_to__pexpr___main___closed__42;
lean::inc(x_2);
return x_2;
}
else
{
obj* x_4; obj* x_6; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
lean::dec(x_0);
x_9 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__15(x_6);
x_10 = lean::alloc_cnstr(5, 2, 0);
lean::cnstr_set(x_10, 0, x_4);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
lean::dec(x_10);
if (lean::obj_tag(x_15) == 0)
{
obj* x_19; obj* x_23; 
lean::dec(x_15);
x_19 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_2);
lean::inc(x_19);
lean::inc(x_0);
x_23 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_19, x_2, x_3);
if (lean::obj_tag(x_23) == 0)
{
obj* x_28; obj* x_30; obj* x_31; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_28 = lean::cnstr_get(x_23, 0);
lean::inc(x_28);
if (lean::is_shared(x_23)) {
 lean::dec(x_23);
 x_30 = lean::box(0);
} else {
 lean::cnstr_release(x_23, 0);
 x_30 = x_23;
}
if (lean::is_scalar(x_30)) {
 x_31 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_31 = x_30;
}
lean::cnstr_set(x_31, 0, x_28);
return x_31;
}
else
{
obj* x_32; obj* x_34; obj* x_35; obj* x_37; obj* x_39; obj* x_40; 
x_32 = lean::cnstr_get(x_23, 0);
lean::inc(x_32);
if (lean::is_shared(x_23)) {
 lean::dec(x_23);
 x_34 = lean::box(0);
} else {
 lean::cnstr_release(x_23, 0);
 x_34 = x_23;
}
x_35 = lean::cnstr_get(x_32, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_32, 1);
lean::inc(x_37);
if (lean::is_shared(x_32)) {
 lean::dec(x_32);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_32, 0);
 lean::cnstr_release(x_32, 1);
 x_39 = x_32;
}
x_40 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(x_0, x_12, x_2, x_37);
if (lean::obj_tag(x_40) == 0)
{
obj* x_44; obj* x_47; 
lean::dec(x_14);
lean::dec(x_39);
lean::dec(x_35);
x_44 = lean::cnstr_get(x_40, 0);
lean::inc(x_44);
lean::dec(x_40);
if (lean::is_scalar(x_34)) {
 x_47 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_47 = x_34;
}
lean::cnstr_set(x_47, 0, x_44);
return x_47;
}
else
{
obj* x_48; obj* x_51; obj* x_53; obj* x_56; obj* x_57; obj* x_58; 
x_48 = lean::cnstr_get(x_40, 0);
lean::inc(x_48);
lean::dec(x_40);
x_51 = lean::cnstr_get(x_48, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_48, 1);
lean::inc(x_53);
lean::dec(x_48);
if (lean::is_scalar(x_14)) {
 x_56 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_56 = x_14;
}
lean::cnstr_set(x_56, 0, x_35);
lean::cnstr_set(x_56, 1, x_51);
if (lean::is_scalar(x_39)) {
 x_57 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_57 = x_39;
}
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_53);
if (lean::is_scalar(x_34)) {
 x_58 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_58 = x_34;
}
lean::cnstr_set(x_58, 0, x_57);
return x_58;
}
}
}
else
{
obj* x_59; obj* x_62; 
x_59 = lean::cnstr_get(x_15, 0);
lean::inc(x_59);
lean::dec(x_15);
x_62 = lean::cnstr_get(x_59, 1);
lean::inc(x_62);
lean::dec(x_59);
if (lean::obj_tag(x_62) == 0)
{
obj* x_66; obj* x_70; 
lean::dec(x_62);
x_66 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_2);
lean::inc(x_66);
lean::inc(x_0);
x_70 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_66, x_2, x_3);
if (lean::obj_tag(x_70) == 0)
{
obj* x_75; obj* x_77; obj* x_78; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_75 = lean::cnstr_get(x_70, 0);
lean::inc(x_75);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_77 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_77 = x_70;
}
if (lean::is_scalar(x_77)) {
 x_78 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_78 = x_77;
}
lean::cnstr_set(x_78, 0, x_75);
return x_78;
}
else
{
obj* x_79; obj* x_81; obj* x_82; obj* x_84; obj* x_86; obj* x_87; 
x_79 = lean::cnstr_get(x_70, 0);
lean::inc(x_79);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_81 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_81 = x_70;
}
x_82 = lean::cnstr_get(x_79, 0);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_79, 1);
lean::inc(x_84);
if (lean::is_shared(x_79)) {
 lean::dec(x_79);
 x_86 = lean::box(0);
} else {
 lean::cnstr_release(x_79, 0);
 lean::cnstr_release(x_79, 1);
 x_86 = x_79;
}
x_87 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(x_0, x_12, x_2, x_84);
if (lean::obj_tag(x_87) == 0)
{
obj* x_91; obj* x_94; 
lean::dec(x_14);
lean::dec(x_86);
lean::dec(x_82);
x_91 = lean::cnstr_get(x_87, 0);
lean::inc(x_91);
lean::dec(x_87);
if (lean::is_scalar(x_81)) {
 x_94 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_94 = x_81;
}
lean::cnstr_set(x_94, 0, x_91);
return x_94;
}
else
{
obj* x_95; obj* x_98; obj* x_100; obj* x_103; obj* x_104; obj* x_105; 
x_95 = lean::cnstr_get(x_87, 0);
lean::inc(x_95);
lean::dec(x_87);
x_98 = lean::cnstr_get(x_95, 0);
lean::inc(x_98);
x_100 = lean::cnstr_get(x_95, 1);
lean::inc(x_100);
lean::dec(x_95);
if (lean::is_scalar(x_14)) {
 x_103 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_103 = x_14;
}
lean::cnstr_set(x_103, 0, x_82);
lean::cnstr_set(x_103, 1, x_98);
if (lean::is_scalar(x_86)) {
 x_104 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_104 = x_86;
}
lean::cnstr_set(x_104, 0, x_103);
lean::cnstr_set(x_104, 1, x_100);
if (lean::is_scalar(x_81)) {
 x_105 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_105 = x_81;
}
lean::cnstr_set(x_105, 0, x_104);
return x_105;
}
}
}
else
{
obj* x_106; obj* x_110; 
x_106 = lean::cnstr_get(x_62, 0);
lean::inc(x_106);
lean::dec(x_62);
lean::inc(x_2);
x_110 = l_lean_elaborator_to__pexpr___main(x_106, x_2, x_3);
if (lean::obj_tag(x_110) == 0)
{
obj* x_115; obj* x_117; obj* x_118; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_115 = lean::cnstr_get(x_110, 0);
lean::inc(x_115);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_117 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 x_117 = x_110;
}
if (lean::is_scalar(x_117)) {
 x_118 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_118 = x_117;
}
lean::cnstr_set(x_118, 0, x_115);
return x_118;
}
else
{
obj* x_119; obj* x_121; obj* x_122; obj* x_124; obj* x_126; obj* x_127; 
x_119 = lean::cnstr_get(x_110, 0);
lean::inc(x_119);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_121 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 x_121 = x_110;
}
x_122 = lean::cnstr_get(x_119, 0);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_119, 1);
lean::inc(x_124);
if (lean::is_shared(x_119)) {
 lean::dec(x_119);
 x_126 = lean::box(0);
} else {
 lean::cnstr_release(x_119, 0);
 lean::cnstr_release(x_119, 1);
 x_126 = x_119;
}
x_127 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(x_0, x_12, x_2, x_124);
if (lean::obj_tag(x_127) == 0)
{
obj* x_131; obj* x_134; 
lean::dec(x_14);
lean::dec(x_126);
lean::dec(x_122);
x_131 = lean::cnstr_get(x_127, 0);
lean::inc(x_131);
lean::dec(x_127);
if (lean::is_scalar(x_121)) {
 x_134 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_134 = x_121;
}
lean::cnstr_set(x_134, 0, x_131);
return x_134;
}
else
{
obj* x_135; obj* x_138; obj* x_140; obj* x_143; obj* x_144; obj* x_145; 
x_135 = lean::cnstr_get(x_127, 0);
lean::inc(x_135);
lean::dec(x_127);
x_138 = lean::cnstr_get(x_135, 0);
lean::inc(x_138);
x_140 = lean::cnstr_get(x_135, 1);
lean::inc(x_140);
lean::dec(x_135);
if (lean::is_scalar(x_14)) {
 x_143 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_143 = x_14;
}
lean::cnstr_set(x_143, 0, x_122);
lean::cnstr_set(x_143, 1, x_138);
if (lean::is_scalar(x_126)) {
 x_144 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_144 = x_126;
}
lean::cnstr_set(x_144, 0, x_143);
lean::cnstr_set(x_144, 1, x_140);
if (lean::is_scalar(x_121)) {
 x_145 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_145 = x_121;
}
lean::cnstr_set(x_145, 0, x_144);
return x_145;
}
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
lean::dec(x_10);
if (lean::obj_tag(x_15) == 0)
{
obj* x_18; obj* x_21; obj* x_24; 
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
lean::dec(x_15);
x_21 = lean::cnstr_get(x_18, 2);
lean::inc(x_21);
lean::inc(x_2);
x_24 = l_lean_elaborator_to__pexpr___main(x_21, x_2, x_3);
if (lean::obj_tag(x_24) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_18);
lean::dec(x_0);
lean::dec(x_2);
x_30 = lean::cnstr_get(x_24, 0);
lean::inc(x_30);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_32 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_32 = x_24;
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_36; obj* x_37; obj* x_39; obj* x_41; obj* x_42; 
x_34 = lean::cnstr_get(x_24, 0);
lean::inc(x_34);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_36 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_36 = x_24;
}
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
if (lean::is_shared(x_34)) {
 lean::dec(x_34);
 x_41 = lean::box(0);
} else {
 lean::cnstr_release(x_34, 0);
 lean::cnstr_release(x_34, 1);
 x_41 = x_34;
}
x_42 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(x_0, x_12, x_2, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_47; obj* x_50; 
lean::dec(x_14);
lean::dec(x_18);
lean::dec(x_37);
lean::dec(x_41);
x_47 = lean::cnstr_get(x_42, 0);
lean::inc(x_47);
lean::dec(x_42);
if (lean::is_scalar(x_36)) {
 x_50 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_50 = x_36;
}
lean::cnstr_set(x_50, 0, x_47);
return x_50;
}
else
{
obj* x_51; obj* x_54; obj* x_56; obj* x_59; obj* x_60; obj* x_63; obj* x_64; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_51 = lean::cnstr_get(x_42, 0);
lean::inc(x_51);
lean::dec(x_42);
x_54 = lean::cnstr_get(x_51, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_51, 1);
lean::inc(x_56);
lean::dec(x_51);
x_59 = lean::box(0);
x_60 = lean::cnstr_get(x_18, 0);
lean::inc(x_60);
lean::dec(x_18);
x_63 = l_lean_elaborator_mangle__ident(x_60);
x_64 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
lean::inc(x_64);
x_66 = l_lean_kvmap_set__name(x_59, x_64, x_63);
x_67 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_37);
if (lean::is_scalar(x_14)) {
 x_68 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_68 = x_14;
}
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_54);
if (lean::is_scalar(x_41)) {
 x_69 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_69 = x_41;
}
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_56);
if (lean::is_scalar(x_36)) {
 x_70 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_70 = x_36;
}
lean::cnstr_set(x_70, 0, x_69);
return x_70;
}
}
}
else
{
obj* x_72; obj* x_76; 
lean::dec(x_15);
x_72 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_2);
lean::inc(x_72);
lean::inc(x_0);
x_76 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_72, x_2, x_3);
if (lean::obj_tag(x_76) == 0)
{
obj* x_81; obj* x_83; obj* x_84; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_81 = lean::cnstr_get(x_76, 0);
lean::inc(x_81);
if (lean::is_shared(x_76)) {
 lean::dec(x_76);
 x_83 = lean::box(0);
} else {
 lean::cnstr_release(x_76, 0);
 x_83 = x_76;
}
if (lean::is_scalar(x_83)) {
 x_84 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_84 = x_83;
}
lean::cnstr_set(x_84, 0, x_81);
return x_84;
}
else
{
obj* x_85; obj* x_87; obj* x_88; obj* x_90; obj* x_92; obj* x_93; 
x_85 = lean::cnstr_get(x_76, 0);
lean::inc(x_85);
if (lean::is_shared(x_76)) {
 lean::dec(x_76);
 x_87 = lean::box(0);
} else {
 lean::cnstr_release(x_76, 0);
 x_87 = x_76;
}
x_88 = lean::cnstr_get(x_85, 0);
lean::inc(x_88);
x_90 = lean::cnstr_get(x_85, 1);
lean::inc(x_90);
if (lean::is_shared(x_85)) {
 lean::dec(x_85);
 x_92 = lean::box(0);
} else {
 lean::cnstr_release(x_85, 0);
 lean::cnstr_release(x_85, 1);
 x_92 = x_85;
}
x_93 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(x_0, x_12, x_2, x_90);
if (lean::obj_tag(x_93) == 0)
{
obj* x_97; obj* x_100; 
lean::dec(x_14);
lean::dec(x_92);
lean::dec(x_88);
x_97 = lean::cnstr_get(x_93, 0);
lean::inc(x_97);
lean::dec(x_93);
if (lean::is_scalar(x_87)) {
 x_100 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_100 = x_87;
}
lean::cnstr_set(x_100, 0, x_97);
return x_100;
}
else
{
obj* x_101; obj* x_104; obj* x_106; obj* x_109; obj* x_110; obj* x_111; 
x_101 = lean::cnstr_get(x_93, 0);
lean::inc(x_101);
lean::dec(x_93);
x_104 = lean::cnstr_get(x_101, 0);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_101, 1);
lean::inc(x_106);
lean::dec(x_101);
if (lean::is_scalar(x_14)) {
 x_109 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_109 = x_14;
}
lean::cnstr_set(x_109, 0, x_88);
lean::cnstr_set(x_109, 1, x_104);
if (lean::is_scalar(x_92)) {
 x_110 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_110 = x_92;
}
lean::cnstr_set(x_110, 0, x_109);
lean::cnstr_set(x_110, 1, x_106);
if (lean::is_scalar(x_87)) {
 x_111 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_111 = x_87;
}
lean::cnstr_set(x_111, 0, x_110);
return x_111;
}
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__18(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = l_lean_elaborator_to__pexpr___main___closed__42;
lean::inc(x_2);
return x_2;
}
else
{
obj* x_4; obj* x_6; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
lean::dec(x_0);
x_9 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__18(x_6);
x_10 = lean::alloc_cnstr(5, 2, 0);
lean::cnstr_set(x_10, 0, x_4);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
lean::dec(x_10);
if (lean::obj_tag(x_15) == 0)
{
obj* x_19; obj* x_23; 
lean::dec(x_15);
x_19 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_2);
lean::inc(x_19);
lean::inc(x_0);
x_23 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_19, x_2, x_3);
if (lean::obj_tag(x_23) == 0)
{
obj* x_28; obj* x_30; obj* x_31; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_28 = lean::cnstr_get(x_23, 0);
lean::inc(x_28);
if (lean::is_shared(x_23)) {
 lean::dec(x_23);
 x_30 = lean::box(0);
} else {
 lean::cnstr_release(x_23, 0);
 x_30 = x_23;
}
if (lean::is_scalar(x_30)) {
 x_31 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_31 = x_30;
}
lean::cnstr_set(x_31, 0, x_28);
return x_31;
}
else
{
obj* x_32; obj* x_34; obj* x_35; obj* x_37; obj* x_39; obj* x_40; 
x_32 = lean::cnstr_get(x_23, 0);
lean::inc(x_32);
if (lean::is_shared(x_23)) {
 lean::dec(x_23);
 x_34 = lean::box(0);
} else {
 lean::cnstr_release(x_23, 0);
 x_34 = x_23;
}
x_35 = lean::cnstr_get(x_32, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_32, 1);
lean::inc(x_37);
if (lean::is_shared(x_32)) {
 lean::dec(x_32);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_32, 0);
 lean::cnstr_release(x_32, 1);
 x_39 = x_32;
}
x_40 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(x_0, x_12, x_2, x_37);
if (lean::obj_tag(x_40) == 0)
{
obj* x_44; obj* x_47; 
lean::dec(x_14);
lean::dec(x_39);
lean::dec(x_35);
x_44 = lean::cnstr_get(x_40, 0);
lean::inc(x_44);
lean::dec(x_40);
if (lean::is_scalar(x_34)) {
 x_47 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_47 = x_34;
}
lean::cnstr_set(x_47, 0, x_44);
return x_47;
}
else
{
obj* x_48; obj* x_51; obj* x_53; obj* x_56; obj* x_57; obj* x_58; 
x_48 = lean::cnstr_get(x_40, 0);
lean::inc(x_48);
lean::dec(x_40);
x_51 = lean::cnstr_get(x_48, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_48, 1);
lean::inc(x_53);
lean::dec(x_48);
if (lean::is_scalar(x_14)) {
 x_56 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_56 = x_14;
}
lean::cnstr_set(x_56, 0, x_35);
lean::cnstr_set(x_56, 1, x_51);
if (lean::is_scalar(x_39)) {
 x_57 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_57 = x_39;
}
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_53);
if (lean::is_scalar(x_34)) {
 x_58 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_58 = x_34;
}
lean::cnstr_set(x_58, 0, x_57);
return x_58;
}
}
}
else
{
obj* x_59; obj* x_62; 
x_59 = lean::cnstr_get(x_15, 0);
lean::inc(x_59);
lean::dec(x_15);
x_62 = lean::cnstr_get(x_59, 1);
lean::inc(x_62);
lean::dec(x_59);
if (lean::obj_tag(x_62) == 0)
{
obj* x_66; obj* x_70; 
lean::dec(x_62);
x_66 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_2);
lean::inc(x_66);
lean::inc(x_0);
x_70 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_66, x_2, x_3);
if (lean::obj_tag(x_70) == 0)
{
obj* x_75; obj* x_77; obj* x_78; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_75 = lean::cnstr_get(x_70, 0);
lean::inc(x_75);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_77 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_77 = x_70;
}
if (lean::is_scalar(x_77)) {
 x_78 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_78 = x_77;
}
lean::cnstr_set(x_78, 0, x_75);
return x_78;
}
else
{
obj* x_79; obj* x_81; obj* x_82; obj* x_84; obj* x_86; obj* x_87; 
x_79 = lean::cnstr_get(x_70, 0);
lean::inc(x_79);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_81 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_81 = x_70;
}
x_82 = lean::cnstr_get(x_79, 0);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_79, 1);
lean::inc(x_84);
if (lean::is_shared(x_79)) {
 lean::dec(x_79);
 x_86 = lean::box(0);
} else {
 lean::cnstr_release(x_79, 0);
 lean::cnstr_release(x_79, 1);
 x_86 = x_79;
}
x_87 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(x_0, x_12, x_2, x_84);
if (lean::obj_tag(x_87) == 0)
{
obj* x_91; obj* x_94; 
lean::dec(x_14);
lean::dec(x_86);
lean::dec(x_82);
x_91 = lean::cnstr_get(x_87, 0);
lean::inc(x_91);
lean::dec(x_87);
if (lean::is_scalar(x_81)) {
 x_94 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_94 = x_81;
}
lean::cnstr_set(x_94, 0, x_91);
return x_94;
}
else
{
obj* x_95; obj* x_98; obj* x_100; obj* x_103; obj* x_104; obj* x_105; 
x_95 = lean::cnstr_get(x_87, 0);
lean::inc(x_95);
lean::dec(x_87);
x_98 = lean::cnstr_get(x_95, 0);
lean::inc(x_98);
x_100 = lean::cnstr_get(x_95, 1);
lean::inc(x_100);
lean::dec(x_95);
if (lean::is_scalar(x_14)) {
 x_103 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_103 = x_14;
}
lean::cnstr_set(x_103, 0, x_82);
lean::cnstr_set(x_103, 1, x_98);
if (lean::is_scalar(x_86)) {
 x_104 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_104 = x_86;
}
lean::cnstr_set(x_104, 0, x_103);
lean::cnstr_set(x_104, 1, x_100);
if (lean::is_scalar(x_81)) {
 x_105 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_105 = x_81;
}
lean::cnstr_set(x_105, 0, x_104);
return x_105;
}
}
}
else
{
obj* x_106; obj* x_110; 
x_106 = lean::cnstr_get(x_62, 0);
lean::inc(x_106);
lean::dec(x_62);
lean::inc(x_2);
x_110 = l_lean_elaborator_to__pexpr___main(x_106, x_2, x_3);
if (lean::obj_tag(x_110) == 0)
{
obj* x_115; obj* x_117; obj* x_118; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_115 = lean::cnstr_get(x_110, 0);
lean::inc(x_115);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_117 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 x_117 = x_110;
}
if (lean::is_scalar(x_117)) {
 x_118 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_118 = x_117;
}
lean::cnstr_set(x_118, 0, x_115);
return x_118;
}
else
{
obj* x_119; obj* x_121; obj* x_122; obj* x_124; obj* x_126; obj* x_127; 
x_119 = lean::cnstr_get(x_110, 0);
lean::inc(x_119);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_121 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 x_121 = x_110;
}
x_122 = lean::cnstr_get(x_119, 0);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_119, 1);
lean::inc(x_124);
if (lean::is_shared(x_119)) {
 lean::dec(x_119);
 x_126 = lean::box(0);
} else {
 lean::cnstr_release(x_119, 0);
 lean::cnstr_release(x_119, 1);
 x_126 = x_119;
}
x_127 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(x_0, x_12, x_2, x_124);
if (lean::obj_tag(x_127) == 0)
{
obj* x_131; obj* x_134; 
lean::dec(x_14);
lean::dec(x_126);
lean::dec(x_122);
x_131 = lean::cnstr_get(x_127, 0);
lean::inc(x_131);
lean::dec(x_127);
if (lean::is_scalar(x_121)) {
 x_134 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_134 = x_121;
}
lean::cnstr_set(x_134, 0, x_131);
return x_134;
}
else
{
obj* x_135; obj* x_138; obj* x_140; obj* x_143; obj* x_144; obj* x_145; 
x_135 = lean::cnstr_get(x_127, 0);
lean::inc(x_135);
lean::dec(x_127);
x_138 = lean::cnstr_get(x_135, 0);
lean::inc(x_138);
x_140 = lean::cnstr_get(x_135, 1);
lean::inc(x_140);
lean::dec(x_135);
if (lean::is_scalar(x_14)) {
 x_143 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_143 = x_14;
}
lean::cnstr_set(x_143, 0, x_122);
lean::cnstr_set(x_143, 1, x_138);
if (lean::is_scalar(x_126)) {
 x_144 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_144 = x_126;
}
lean::cnstr_set(x_144, 0, x_143);
lean::cnstr_set(x_144, 1, x_140);
if (lean::is_scalar(x_121)) {
 x_145 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_145 = x_121;
}
lean::cnstr_set(x_145, 0, x_144);
return x_145;
}
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__20(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
lean::inc(x_1);
x_14 = l_lean_elaborator_to__pexpr___main(x_8, x_1, x_2);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_18 = lean::cnstr_get(x_14, 0);
lean::inc(x_18);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_20 = x_14;
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_24; obj* x_25; obj* x_27; obj* x_29; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_24 = x_14;
}
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
if (lean::is_shared(x_22)) {
 lean::dec(x_22);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_22, 0);
 lean::cnstr_release(x_22, 1);
 x_29 = x_22;
}
x_30 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__20(x_10, x_1, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_34; obj* x_37; 
lean::dec(x_12);
lean::dec(x_25);
lean::dec(x_29);
x_34 = lean::cnstr_get(x_30, 0);
lean::inc(x_34);
lean::dec(x_30);
if (lean::is_scalar(x_24)) {
 x_37 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_37 = x_24;
}
lean::cnstr_set(x_37, 0, x_34);
return x_37;
}
else
{
obj* x_38; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_48; 
x_38 = lean::cnstr_get(x_30, 0);
lean::inc(x_38);
lean::dec(x_30);
x_41 = lean::cnstr_get(x_38, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_38, 1);
lean::inc(x_43);
lean::dec(x_38);
if (lean::is_scalar(x_12)) {
 x_46 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_46 = x_12;
}
lean::cnstr_set(x_46, 0, x_25);
lean::cnstr_set(x_46, 1, x_41);
if (lean::is_scalar(x_29)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_29;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_43);
if (lean::is_scalar(x_24)) {
 x_48 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_48 = x_24;
}
lean::cnstr_set(x_48, 0, x_47);
return x_48;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__21(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_11; obj* x_12; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
lean::dec(x_3);
x_11 = l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__21(x_5);
if (lean::is_scalar(x_7)) {
 x_12 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_12 = x_7;
}
lean::cnstr_set(x_12, 0, x_8);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__22(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_10; obj* x_13; obj* x_14; obj* x_15; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_3, 1);
lean::inc(x_10);
lean::dec(x_3);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(2, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_8);
x_15 = l_lean_kvmap_set__name(x_0, x_14, x_10);
x_0 = x_15;
x_1 = x_5;
goto _start;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__23(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
lean::inc(x_1);
x_14 = l_lean_elaborator_to__level___main(x_8, x_1, x_2);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_18 = lean::cnstr_get(x_14, 0);
lean::inc(x_18);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_20 = x_14;
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_24; obj* x_25; obj* x_27; obj* x_29; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_24 = x_14;
}
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
if (lean::is_shared(x_22)) {
 lean::dec(x_22);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_22, 0);
 lean::cnstr_release(x_22, 1);
 x_29 = x_22;
}
x_30 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__23(x_10, x_1, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_34; obj* x_37; 
lean::dec(x_12);
lean::dec(x_25);
lean::dec(x_29);
x_34 = lean::cnstr_get(x_30, 0);
lean::inc(x_34);
lean::dec(x_30);
if (lean::is_scalar(x_24)) {
 x_37 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_37 = x_24;
}
lean::cnstr_set(x_37, 0, x_34);
return x_37;
}
else
{
obj* x_38; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_48; 
x_38 = lean::cnstr_get(x_30, 0);
lean::inc(x_38);
lean::dec(x_30);
x_41 = lean::cnstr_get(x_38, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_38, 1);
lean::inc(x_43);
lean::dec(x_38);
if (lean::is_scalar(x_12)) {
 x_46 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_46 = x_12;
}
lean::cnstr_set(x_46, 0, x_25);
lean::cnstr_set(x_46, 1, x_41);
if (lean::is_scalar(x_29)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_29;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_43);
if (lean::is_scalar(x_24)) {
 x_48 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_48 = x_24;
}
lean::cnstr_set(x_48, 0, x_47);
return x_48;
}
}
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__24(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_10; obj* x_13; obj* x_14; obj* x_15; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_3, 1);
lean::inc(x_10);
lean::dec(x_3);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(2, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_8);
x_15 = l_lean_kvmap_set__name(x_0, x_14, x_10);
x_0 = x_15;
x_1 = x_5;
goto _start;
}
}
}
obj* l_lean_elaborator_to__pexpr(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_to__pexpr___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_get__namespace___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; 
x_1 = lean::cnstr_get(x_0, 4);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_1, 4);
lean::inc(x_3);
lean::dec(x_1);
if (lean::obj_tag(x_3) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_3);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_0);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_13; obj* x_14; 
x_10 = lean::cnstr_get(x_3, 0);
lean::inc(x_10);
lean::dec(x_3);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_10);
lean::cnstr_set(x_13, 1, x_0);
x_14 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_14, 0, x_13);
return x_14;
}
}
}
obj* l_lean_elaborator_get__namespace(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_get__namespace___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_elaborator_old__elab__command(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_8; obj* x_9; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
lean::inc(x_3);
x_8 = l_lean_elaborator_get__namespace___rarg(x_3);
switch (lean::obj_tag(x_1)) {
case 0:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 1:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 2:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 3:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 4:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 5:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 6:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 7:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 8:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 9:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 10:
{
obj* x_21; obj* x_23; obj* x_25; obj* x_26; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_34; obj* x_36; obj* x_37; obj* x_40; obj* x_42; obj* x_43; 
x_21 = lean::cnstr_get(x_1, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_1, 1);
lean::inc(x_23);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_25 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_25 = x_1;
}
x_26 = lean::cnstr_get(x_4, 2);
lean::inc(x_26);
x_28 = l_lean_parser_syntax_get__pos(x_0);
x_29 = lean::mk_nat_obj(0u);
x_30 = l_option_get__or__else___main___rarg(x_28, x_29);
x_31 = l_lean_file__map_to__position(x_26, x_30);
x_32 = lean::cnstr_get(x_31, 1);
lean::inc(x_32);
x_34 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_34);
x_36 = l_lean_kvmap_set__nat(x_21, x_34, x_32);
x_37 = lean::cnstr_get(x_31, 0);
lean::inc(x_37);
lean::dec(x_31);
x_40 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_40);
x_42 = l_lean_kvmap_set__nat(x_36, x_40, x_37);
if (lean::is_scalar(x_25)) {
 x_43 = lean::alloc_cnstr(10, 2, 0);
} else {
 x_43 = x_25;
}
lean::cnstr_set(x_43, 0, x_42);
lean::cnstr_set(x_43, 1, x_23);
x_9 = x_43;
goto lbl_10;
}
default:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
}
lbl_10:
{
if (lean::obj_tag(x_8) == 0)
{
obj* x_48; obj* x_50; obj* x_51; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_9);
x_48 = lean::cnstr_get(x_8, 0);
lean::inc(x_48);
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_50 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 x_50 = x_8;
}
if (lean::is_scalar(x_50)) {
 x_51 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_51 = x_50;
}
lean::cnstr_set(x_51, 0, x_48);
return x_51;
}
else
{
obj* x_52; obj* x_54; obj* x_55; obj* x_57; obj* x_59; obj* x_60; obj* x_63; obj* x_65; obj* x_67; obj* x_69; obj* x_71; obj* x_74; obj* x_75; obj* x_77; obj* x_80; obj* x_81; obj* x_83; obj* x_84; obj* x_86; obj* x_88; obj* x_89; obj* x_90; obj* x_92; 
x_52 = lean::cnstr_get(x_8, 0);
lean::inc(x_52);
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_54 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 x_54 = x_8;
}
x_55 = lean::cnstr_get(x_52, 0);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_52, 1);
lean::inc(x_57);
if (lean::is_shared(x_52)) {
 lean::dec(x_52);
 x_59 = lean::box(0);
} else {
 lean::cnstr_release(x_52, 0);
 lean::cnstr_release(x_52, 1);
 x_59 = x_52;
}
x_60 = lean::cnstr_get(x_4, 0);
lean::inc(x_60);
lean::dec(x_4);
x_63 = lean::cnstr_get(x_3, 8);
lean::inc(x_63);
x_65 = lean::cnstr_get(x_3, 9);
lean::inc(x_65);
x_67 = lean::cnstr_get(x_3, 4);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_67, 1);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_69, 0);
lean::inc(x_71);
lean::dec(x_69);
x_74 = l_list_reverse___rarg(x_71);
x_75 = lean::cnstr_get(x_67, 2);
lean::inc(x_75);
x_77 = lean::cnstr_get(x_75, 0);
lean::inc(x_77);
lean::dec(x_75);
x_80 = l_list_reverse___rarg(x_77);
x_81 = lean::cnstr_get(x_67, 3);
lean::inc(x_81);
x_83 = l_rbtree_to__list___rarg(x_81);
x_84 = lean::cnstr_get(x_67, 6);
lean::inc(x_84);
x_86 = lean::cnstr_get(x_3, 10);
lean::inc(x_86);
x_88 = lean::alloc_cnstr(0, 8, 0);
lean::cnstr_set(x_88, 0, x_63);
lean::cnstr_set(x_88, 1, x_65);
lean::cnstr_set(x_88, 2, x_74);
lean::cnstr_set(x_88, 3, x_80);
lean::cnstr_set(x_88, 4, x_83);
lean::cnstr_set(x_88, 5, x_84);
lean::cnstr_set(x_88, 6, x_86);
lean::cnstr_set(x_88, 7, x_55);
x_89 = lean_elaborator_elaborate_command(x_60, x_9, x_88);
x_90 = lean::cnstr_get(x_89, 0);
lean::inc(x_90);
x_92 = lean::cnstr_get(x_89, 1);
lean::inc(x_92);
lean::dec(x_89);
if (lean::obj_tag(x_90) == 0)
{
obj* x_98; obj* x_100; obj* x_102; obj* x_104; obj* x_106; obj* x_108; obj* x_110; obj* x_111; obj* x_113; obj* x_115; obj* x_117; obj* x_119; obj* x_122; obj* x_123; obj* x_124; obj* x_125; 
lean::dec(x_90);
lean::dec(x_3);
lean::dec(x_67);
x_98 = lean::cnstr_get(x_57, 0);
lean::inc(x_98);
x_100 = lean::cnstr_get(x_57, 1);
lean::inc(x_100);
x_102 = lean::cnstr_get(x_57, 2);
lean::inc(x_102);
x_104 = lean::cnstr_get(x_57, 3);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_57, 4);
lean::inc(x_106);
x_108 = lean::cnstr_get(x_57, 5);
lean::inc(x_108);
x_110 = l_list_append___main___rarg(x_92, x_108);
x_111 = lean::cnstr_get(x_57, 6);
lean::inc(x_111);
x_113 = lean::cnstr_get(x_57, 7);
lean::inc(x_113);
x_115 = lean::cnstr_get(x_57, 8);
lean::inc(x_115);
x_117 = lean::cnstr_get(x_57, 9);
lean::inc(x_117);
x_119 = lean::cnstr_get(x_57, 10);
lean::inc(x_119);
lean::dec(x_57);
x_122 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_122, 0, x_98);
lean::cnstr_set(x_122, 1, x_100);
lean::cnstr_set(x_122, 2, x_102);
lean::cnstr_set(x_122, 3, x_104);
lean::cnstr_set(x_122, 4, x_106);
lean::cnstr_set(x_122, 5, x_110);
lean::cnstr_set(x_122, 6, x_111);
lean::cnstr_set(x_122, 7, x_113);
lean::cnstr_set(x_122, 8, x_115);
lean::cnstr_set(x_122, 9, x_117);
lean::cnstr_set(x_122, 10, x_119);
x_123 = lean::box(0);
if (lean::is_scalar(x_59)) {
 x_124 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_124 = x_59;
}
lean::cnstr_set(x_124, 0, x_123);
lean::cnstr_set(x_124, 1, x_122);
if (lean::is_scalar(x_54)) {
 x_125 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_125 = x_54;
}
lean::cnstr_set(x_125, 0, x_124);
return x_125;
}
else
{
obj* x_127; obj* x_130; obj* x_132; obj* x_134; obj* x_136; obj* x_138; obj* x_140; obj* x_142; obj* x_144; obj* x_145; obj* x_147; obj* x_149; obj* x_150; obj* x_152; obj* x_153; obj* x_155; obj* x_158; obj* x_160; obj* x_161; obj* x_163; obj* x_165; obj* x_168; obj* x_170; obj* x_172; obj* x_175; obj* x_176; obj* x_177; obj* x_178; obj* x_179; 
lean::dec(x_57);
x_127 = lean::cnstr_get(x_90, 0);
lean::inc(x_127);
lean::dec(x_90);
x_130 = lean::cnstr_get(x_3, 0);
lean::inc(x_130);
x_132 = lean::cnstr_get(x_3, 1);
lean::inc(x_132);
x_134 = lean::cnstr_get(x_3, 2);
lean::inc(x_134);
x_136 = lean::cnstr_get(x_3, 3);
lean::inc(x_136);
x_138 = lean::cnstr_get(x_67, 0);
lean::inc(x_138);
x_140 = lean::cnstr_get(x_127, 2);
lean::inc(x_140);
x_142 = l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1;
lean::inc(x_142);
x_144 = l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__7(x_142, x_140);
x_145 = lean::cnstr_get(x_127, 3);
lean::inc(x_145);
x_147 = l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1;
lean::inc(x_147);
x_149 = l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__14(x_147, x_145);
x_150 = lean::cnstr_get(x_127, 4);
lean::inc(x_150);
x_152 = l_rbtree_of__list___main___at_lean_elaborator_old__elab__command___spec__15(x_150);
x_153 = lean::cnstr_get(x_67, 4);
lean::inc(x_153);
x_155 = lean::cnstr_get(x_67, 5);
lean::inc(x_155);
lean::dec(x_67);
x_158 = lean::cnstr_get(x_127, 5);
lean::inc(x_158);
x_160 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_160, 0, x_138);
lean::cnstr_set(x_160, 1, x_144);
lean::cnstr_set(x_160, 2, x_149);
lean::cnstr_set(x_160, 3, x_152);
lean::cnstr_set(x_160, 4, x_153);
lean::cnstr_set(x_160, 5, x_155);
lean::cnstr_set(x_160, 6, x_158);
x_161 = lean::cnstr_get(x_3, 5);
lean::inc(x_161);
x_163 = lean::cnstr_get(x_3, 6);
lean::inc(x_163);
x_165 = lean::cnstr_get(x_3, 7);
lean::inc(x_165);
lean::dec(x_3);
x_168 = lean::cnstr_get(x_127, 0);
lean::inc(x_168);
x_170 = lean::cnstr_get(x_127, 1);
lean::inc(x_170);
x_172 = lean::cnstr_get(x_127, 6);
lean::inc(x_172);
lean::dec(x_127);
x_175 = l_list_append___main___rarg(x_92, x_161);
x_176 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_176, 0, x_130);
lean::cnstr_set(x_176, 1, x_132);
lean::cnstr_set(x_176, 2, x_134);
lean::cnstr_set(x_176, 3, x_136);
lean::cnstr_set(x_176, 4, x_160);
lean::cnstr_set(x_176, 5, x_175);
lean::cnstr_set(x_176, 6, x_163);
lean::cnstr_set(x_176, 7, x_165);
lean::cnstr_set(x_176, 8, x_168);
lean::cnstr_set(x_176, 9, x_170);
lean::cnstr_set(x_176, 10, x_172);
x_177 = lean::box(0);
if (lean::is_scalar(x_59)) {
 x_178 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_178 = x_59;
}
lean::cnstr_set(x_178, 0, x_177);
lean::cnstr_set(x_178, 1, x_176);
if (lean::is_scalar(x_54)) {
 x_179 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_179 = x_54;
}
lean::cnstr_set(x_179, 0, x_178);
return x_179;
}
}
}
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_4; 
lean::inc(x_0);
x_4 = lean::alloc_cnstr(1, 4, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
return x_4;
}
case 1:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_16; unsigned char x_17; 
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 3);
lean::inc(x_11);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 lean::cnstr_release(x_0, 2);
 lean::cnstr_release(x_0, 3);
 x_13 = x_0;
}
lean::inc(x_7);
lean::inc(x_1);
x_16 = l_lean_name_quick__lt___main(x_1, x_7);
x_17 = lean::unbox(x_16);
lean::dec(x_16);
if (x_17 == 0)
{
obj* x_21; unsigned char x_22; 
lean::inc(x_1);
lean::inc(x_7);
x_21 = l_lean_name_quick__lt___main(x_7, x_1);
x_22 = lean::unbox(x_21);
lean::dec(x_21);
if (x_22 == 0)
{
obj* x_26; 
lean::dec(x_7);
lean::dec(x_9);
if (lean::is_scalar(x_13)) {
 x_26 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_26 = x_13;
}
lean::cnstr_set(x_26, 0, x_5);
lean::cnstr_set(x_26, 1, x_1);
lean::cnstr_set(x_26, 2, x_2);
lean::cnstr_set(x_26, 3, x_11);
return x_26;
}
else
{
obj* x_27; obj* x_28; 
x_27 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_11, x_1, x_2);
if (lean::is_scalar(x_13)) {
 x_28 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_28 = x_13;
}
lean::cnstr_set(x_28, 0, x_5);
lean::cnstr_set(x_28, 1, x_7);
lean::cnstr_set(x_28, 2, x_9);
lean::cnstr_set(x_28, 3, x_27);
return x_28;
}
}
else
{
obj* x_29; obj* x_30; 
x_29 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_5, x_1, x_2);
if (lean::is_scalar(x_13)) {
 x_30 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_30 = x_13;
}
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_7);
lean::cnstr_set(x_30, 2, x_9);
lean::cnstr_set(x_30, 3, x_11);
return x_30;
}
}
default:
{
obj* x_31; obj* x_33; obj* x_35; obj* x_37; obj* x_39; obj* x_42; unsigned char x_43; 
x_31 = lean::cnstr_get(x_0, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_0, 1);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_0, 2);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_0, 3);
lean::inc(x_37);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 lean::cnstr_release(x_0, 2);
 lean::cnstr_release(x_0, 3);
 x_39 = x_0;
}
lean::inc(x_33);
lean::inc(x_1);
x_42 = l_lean_name_quick__lt___main(x_1, x_33);
x_43 = lean::unbox(x_42);
lean::dec(x_42);
if (x_43 == 0)
{
obj* x_47; unsigned char x_48; 
lean::inc(x_1);
lean::inc(x_33);
x_47 = l_lean_name_quick__lt___main(x_33, x_1);
x_48 = lean::unbox(x_47);
lean::dec(x_47);
if (x_48 == 0)
{
obj* x_52; 
lean::dec(x_35);
lean::dec(x_33);
if (lean::is_scalar(x_39)) {
 x_52 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_52 = x_39;
}
lean::cnstr_set(x_52, 0, x_31);
lean::cnstr_set(x_52, 1, x_1);
lean::cnstr_set(x_52, 2, x_2);
lean::cnstr_set(x_52, 3, x_37);
return x_52;
}
else
{
unsigned char x_54; 
lean::inc(x_37);
x_54 = l_rbnode_get__color___main___rarg(x_37);
if (x_54 == 0)
{
obj* x_56; obj* x_57; 
lean::dec(x_39);
x_56 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_37, x_1, x_2);
x_57 = l_rbnode_balance2__node___main___rarg(x_56, x_33, x_35, x_31);
return x_57;
}
else
{
obj* x_58; obj* x_59; 
x_58 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_37, x_1, x_2);
if (lean::is_scalar(x_39)) {
 x_59 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_59 = x_39;
}
lean::cnstr_set(x_59, 0, x_31);
lean::cnstr_set(x_59, 1, x_33);
lean::cnstr_set(x_59, 2, x_35);
lean::cnstr_set(x_59, 3, x_58);
return x_59;
}
}
}
else
{
unsigned char x_61; 
lean::inc(x_31);
x_61 = l_rbnode_get__color___main___rarg(x_31);
if (x_61 == 0)
{
obj* x_63; obj* x_64; 
lean::dec(x_39);
x_63 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_31, x_1, x_2);
x_64 = l_rbnode_balance1__node___main___rarg(x_63, x_33, x_35, x_37);
return x_64;
}
else
{
obj* x_65; obj* x_66; 
x_65 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_31, x_1, x_2);
if (lean::is_scalar(x_39)) {
 x_66 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_66 = x_39;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_33);
lean::cnstr_set(x_66, 2, x_35);
lean::cnstr_set(x_66, 3, x_37);
return x_66;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
unsigned char x_4; obj* x_5; obj* x_6; 
lean::inc(x_0);
x_4 = l_rbnode_get__color___main___rarg(x_0);
x_5 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_0, x_1, x_2);
x_6 = l_rbnode_mk__insert__result___main___rarg(x_4, x_5);
return x_6;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_21; 
lean::inc(x_2);
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_5);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 2);
lean::inc(x_11);
lean::dec(x_0);
lean::inc(x_11);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_11);
lean::cnstr_set(x_15, 1, x_2);
x_16 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(x_9, x_1, x_15);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_add(x_11, x_17);
lean::dec(x_17);
lean::dec(x_11);
x_21 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_21, 0, x_8);
lean::cnstr_set(x_21, 1, x_16);
lean::cnstr_set(x_21, 2, x_18);
return x_21;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(0u);
lean::inc(x_0);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_0);
lean::cnstr_set(x_3, 2, x_1);
return x_3;
}
}
obj* l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__7(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_10; obj* x_13; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_3, 1);
lean::inc(x_10);
lean::dec(x_3);
x_13 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__2(x_0, x_8, x_10);
x_0 = x_13;
x_1 = x_5;
goto _start;
}
}
}
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; 
x_1 = l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1;
lean::inc(x_1);
x_3 = l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__7(x_1, x_0);
return x_3;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6;
lean::inc(x_0);
return x_0;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_4; 
lean::inc(x_0);
x_4 = lean::alloc_cnstr(1, 4, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
return x_4;
}
case 1:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_16; unsigned char x_17; 
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 3);
lean::inc(x_11);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 lean::cnstr_release(x_0, 2);
 lean::cnstr_release(x_0, 3);
 x_13 = x_0;
}
lean::inc(x_7);
lean::inc(x_1);
x_16 = l_lean_name_quick__lt___main(x_1, x_7);
x_17 = lean::unbox(x_16);
lean::dec(x_16);
if (x_17 == 0)
{
obj* x_21; unsigned char x_22; 
lean::inc(x_1);
lean::inc(x_7);
x_21 = l_lean_name_quick__lt___main(x_7, x_1);
x_22 = lean::unbox(x_21);
lean::dec(x_21);
if (x_22 == 0)
{
obj* x_26; 
lean::dec(x_7);
lean::dec(x_9);
if (lean::is_scalar(x_13)) {
 x_26 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_26 = x_13;
}
lean::cnstr_set(x_26, 0, x_5);
lean::cnstr_set(x_26, 1, x_1);
lean::cnstr_set(x_26, 2, x_2);
lean::cnstr_set(x_26, 3, x_11);
return x_26;
}
else
{
obj* x_27; obj* x_28; 
x_27 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_11, x_1, x_2);
if (lean::is_scalar(x_13)) {
 x_28 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_28 = x_13;
}
lean::cnstr_set(x_28, 0, x_5);
lean::cnstr_set(x_28, 1, x_7);
lean::cnstr_set(x_28, 2, x_9);
lean::cnstr_set(x_28, 3, x_27);
return x_28;
}
}
else
{
obj* x_29; obj* x_30; 
x_29 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_5, x_1, x_2);
if (lean::is_scalar(x_13)) {
 x_30 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_30 = x_13;
}
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_7);
lean::cnstr_set(x_30, 2, x_9);
lean::cnstr_set(x_30, 3, x_11);
return x_30;
}
}
default:
{
obj* x_31; obj* x_33; obj* x_35; obj* x_37; obj* x_39; obj* x_42; unsigned char x_43; 
x_31 = lean::cnstr_get(x_0, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_0, 1);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_0, 2);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_0, 3);
lean::inc(x_37);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 lean::cnstr_release(x_0, 2);
 lean::cnstr_release(x_0, 3);
 x_39 = x_0;
}
lean::inc(x_33);
lean::inc(x_1);
x_42 = l_lean_name_quick__lt___main(x_1, x_33);
x_43 = lean::unbox(x_42);
lean::dec(x_42);
if (x_43 == 0)
{
obj* x_47; unsigned char x_48; 
lean::inc(x_1);
lean::inc(x_33);
x_47 = l_lean_name_quick__lt___main(x_33, x_1);
x_48 = lean::unbox(x_47);
lean::dec(x_47);
if (x_48 == 0)
{
obj* x_52; 
lean::dec(x_35);
lean::dec(x_33);
if (lean::is_scalar(x_39)) {
 x_52 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_52 = x_39;
}
lean::cnstr_set(x_52, 0, x_31);
lean::cnstr_set(x_52, 1, x_1);
lean::cnstr_set(x_52, 2, x_2);
lean::cnstr_set(x_52, 3, x_37);
return x_52;
}
else
{
unsigned char x_54; 
lean::inc(x_37);
x_54 = l_rbnode_get__color___main___rarg(x_37);
if (x_54 == 0)
{
obj* x_56; obj* x_57; 
lean::dec(x_39);
x_56 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_37, x_1, x_2);
x_57 = l_rbnode_balance2__node___main___rarg(x_56, x_33, x_35, x_31);
return x_57;
}
else
{
obj* x_58; obj* x_59; 
x_58 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_37, x_1, x_2);
if (lean::is_scalar(x_39)) {
 x_59 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_59 = x_39;
}
lean::cnstr_set(x_59, 0, x_31);
lean::cnstr_set(x_59, 1, x_33);
lean::cnstr_set(x_59, 2, x_35);
lean::cnstr_set(x_59, 3, x_58);
return x_59;
}
}
}
else
{
unsigned char x_61; 
lean::inc(x_31);
x_61 = l_rbnode_get__color___main___rarg(x_31);
if (x_61 == 0)
{
obj* x_63; obj* x_64; 
lean::dec(x_39);
x_63 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_31, x_1, x_2);
x_64 = l_rbnode_balance1__node___main___rarg(x_63, x_33, x_35, x_37);
return x_64;
}
else
{
obj* x_65; obj* x_66; 
x_65 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_31, x_1, x_2);
if (lean::is_scalar(x_39)) {
 x_66 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_66 = x_39;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_33);
lean::cnstr_set(x_66, 2, x_35);
lean::cnstr_set(x_66, 3, x_37);
return x_66;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
unsigned char x_4; obj* x_5; obj* x_6; 
lean::inc(x_0);
x_4 = l_rbnode_get__color___main___rarg(x_0);
x_5 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_0, x_1, x_2);
x_6 = l_rbnode_mk__insert__result___main___rarg(x_4, x_5);
return x_6;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__10(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__9(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_21; 
lean::inc(x_2);
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_5);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 2);
lean::inc(x_11);
lean::dec(x_0);
lean::inc(x_11);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_11);
lean::cnstr_set(x_15, 1, x_2);
x_16 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(x_9, x_1, x_15);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_add(x_11, x_17);
lean::dec(x_17);
lean::dec(x_11);
x_21 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_21, 0, x_8);
lean::cnstr_set(x_21, 1, x_16);
lean::cnstr_set(x_21, 2, x_18);
return x_21;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(0u);
lean::inc(x_0);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_0);
lean::cnstr_set(x_3, 2, x_1);
return x_3;
}
}
obj* l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__14(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_10; obj* x_13; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_3, 1);
lean::inc(x_10);
lean::dec(x_3);
x_13 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__9(x_0, x_8, x_10);
x_0 = x_13;
x_1 = x_5;
goto _start;
}
}
}
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; 
x_1 = l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1;
lean::inc(x_1);
x_3 = l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__14(x_1, x_0);
return x_3;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1() {
_start:
{
obj* x_0; 
x_0 = l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13;
lean::inc(x_0);
return x_0;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_4; 
lean::inc(x_0);
x_4 = lean::alloc_cnstr(1, 4, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
return x_4;
}
case 1:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_16; unsigned char x_17; 
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 3);
lean::inc(x_11);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 lean::cnstr_release(x_0, 2);
 lean::cnstr_release(x_0, 3);
 x_13 = x_0;
}
lean::inc(x_7);
lean::inc(x_1);
x_16 = l_lean_name_quick__lt___main(x_1, x_7);
x_17 = lean::unbox(x_16);
lean::dec(x_16);
if (x_17 == 0)
{
obj* x_21; unsigned char x_22; 
lean::inc(x_1);
lean::inc(x_7);
x_21 = l_lean_name_quick__lt___main(x_7, x_1);
x_22 = lean::unbox(x_21);
lean::dec(x_21);
if (x_22 == 0)
{
obj* x_26; 
lean::dec(x_7);
lean::dec(x_9);
if (lean::is_scalar(x_13)) {
 x_26 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_26 = x_13;
}
lean::cnstr_set(x_26, 0, x_5);
lean::cnstr_set(x_26, 1, x_1);
lean::cnstr_set(x_26, 2, x_2);
lean::cnstr_set(x_26, 3, x_11);
return x_26;
}
else
{
obj* x_27; obj* x_28; 
x_27 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_11, x_1, x_2);
if (lean::is_scalar(x_13)) {
 x_28 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_28 = x_13;
}
lean::cnstr_set(x_28, 0, x_5);
lean::cnstr_set(x_28, 1, x_7);
lean::cnstr_set(x_28, 2, x_9);
lean::cnstr_set(x_28, 3, x_27);
return x_28;
}
}
else
{
obj* x_29; obj* x_30; 
x_29 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_5, x_1, x_2);
if (lean::is_scalar(x_13)) {
 x_30 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_30 = x_13;
}
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_7);
lean::cnstr_set(x_30, 2, x_9);
lean::cnstr_set(x_30, 3, x_11);
return x_30;
}
}
default:
{
obj* x_31; obj* x_33; obj* x_35; obj* x_37; obj* x_39; obj* x_42; unsigned char x_43; 
x_31 = lean::cnstr_get(x_0, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_0, 1);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_0, 2);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_0, 3);
lean::inc(x_37);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 lean::cnstr_release(x_0, 2);
 lean::cnstr_release(x_0, 3);
 x_39 = x_0;
}
lean::inc(x_33);
lean::inc(x_1);
x_42 = l_lean_name_quick__lt___main(x_1, x_33);
x_43 = lean::unbox(x_42);
lean::dec(x_42);
if (x_43 == 0)
{
obj* x_47; unsigned char x_48; 
lean::inc(x_1);
lean::inc(x_33);
x_47 = l_lean_name_quick__lt___main(x_33, x_1);
x_48 = lean::unbox(x_47);
lean::dec(x_47);
if (x_48 == 0)
{
obj* x_52; 
lean::dec(x_35);
lean::dec(x_33);
if (lean::is_scalar(x_39)) {
 x_52 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_52 = x_39;
}
lean::cnstr_set(x_52, 0, x_31);
lean::cnstr_set(x_52, 1, x_1);
lean::cnstr_set(x_52, 2, x_2);
lean::cnstr_set(x_52, 3, x_37);
return x_52;
}
else
{
unsigned char x_54; 
lean::inc(x_37);
x_54 = l_rbnode_get__color___main___rarg(x_37);
if (x_54 == 0)
{
obj* x_56; obj* x_57; 
lean::dec(x_39);
x_56 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_37, x_1, x_2);
x_57 = l_rbnode_balance2__node___main___rarg(x_56, x_33, x_35, x_31);
return x_57;
}
else
{
obj* x_58; obj* x_59; 
x_58 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_37, x_1, x_2);
if (lean::is_scalar(x_39)) {
 x_59 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_59 = x_39;
}
lean::cnstr_set(x_59, 0, x_31);
lean::cnstr_set(x_59, 1, x_33);
lean::cnstr_set(x_59, 2, x_35);
lean::cnstr_set(x_59, 3, x_58);
return x_59;
}
}
}
else
{
unsigned char x_61; 
lean::inc(x_31);
x_61 = l_rbnode_get__color___main___rarg(x_31);
if (x_61 == 0)
{
obj* x_63; obj* x_64; 
lean::dec(x_39);
x_63 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_31, x_1, x_2);
x_64 = l_rbnode_balance1__node___main___rarg(x_63, x_33, x_35, x_37);
return x_64;
}
else
{
obj* x_65; obj* x_66; 
x_65 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_31, x_1, x_2);
if (lean::is_scalar(x_39)) {
 x_66 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_66 = x_39;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_33);
lean::cnstr_set(x_66, 2, x_35);
lean::cnstr_set(x_66, 3, x_37);
return x_66;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
unsigned char x_4; obj* x_5; obj* x_6; 
lean::inc(x_0);
x_4 = l_rbnode_get__color___main___rarg(x_0);
x_5 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_0, x_1, x_2);
x_6 = l_rbnode_mk__insert__result___main___rarg(x_4, x_5);
return x_6;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__16(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(x_0, x_1, x_2);
return x_3;
}
}
obj* l_rbtree_of__list___main___at_lean_elaborator_old__elab__command___spec__15(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
lean::dec(x_0);
x_8 = l_rbtree_of__list___main___at_lean_elaborator_old__elab__command___spec__15(x_5);
x_9 = lean::box(0);
x_10 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(x_8, x_3, x_9);
return x_10;
}
}
}
obj* l_lean_elaborator_names__to__pexpr(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_1 = l_list_map___main___at_lean_elaborator_names__to__pexpr___spec__1(x_0);
x_2 = l_lean_elaborator_mk__eqns___closed__1;
lean::inc(x_2);
x_4 = l_lean_expr_mk__capp(x_2, x_1);
return x_4;
}
}
obj* l_list_map___main___at_lean_elaborator_names__to__pexpr___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = lean::box(0);
x_9 = lean::alloc_cnstr(4, 2, 0);
lean::cnstr_set(x_9, 0, x_3);
lean::cnstr_set(x_9, 1, x_8);
x_10 = l_list_map___main___at_lean_elaborator_names__to__pexpr___spec__1(x_5);
if (lean::is_scalar(x_7)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_7;
}
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
}
obj* l_lean_elaborator_attrs__to__pexpr(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__2(x_0, x_1, x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_6 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 x_6 = x_3;
}
if (lean::is_scalar(x_6)) {
 x_7 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_7 = x_6;
}
lean::cnstr_set(x_7, 0, x_4);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_18; obj* x_19; obj* x_20; 
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_10 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 x_10 = x_3;
}
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_8, 1);
lean::inc(x_13);
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_15 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_15 = x_8;
}
x_16 = l_lean_elaborator_mk__eqns___closed__1;
lean::inc(x_16);
x_18 = l_lean_expr_mk__capp(x_16, x_11);
if (lean::is_scalar(x_15)) {
 x_19 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_19 = x_15;
}
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_13);
if (lean::is_scalar(x_10)) {
 x_20 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_20 = x_10;
}
lean::cnstr_set(x_20, 0, x_19);
return x_20;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
lean::inc(x_1);
x_14 = l_lean_elaborator_to__pexpr___main(x_8, x_1, x_2);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_18 = lean::cnstr_get(x_14, 0);
lean::inc(x_18);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_20 = x_14;
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_24; obj* x_25; obj* x_27; obj* x_29; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_24 = x_14;
}
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
if (lean::is_shared(x_22)) {
 lean::dec(x_22);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_22, 0);
 lean::cnstr_release(x_22, 1);
 x_29 = x_22;
}
x_30 = l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__1(x_10, x_1, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_34; obj* x_37; 
lean::dec(x_12);
lean::dec(x_25);
lean::dec(x_29);
x_34 = lean::cnstr_get(x_30, 0);
lean::inc(x_34);
lean::dec(x_30);
if (lean::is_scalar(x_24)) {
 x_37 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_37 = x_24;
}
lean::cnstr_set(x_37, 0, x_34);
return x_37;
}
else
{
obj* x_38; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_48; 
x_38 = lean::cnstr_get(x_30, 0);
lean::inc(x_38);
lean::dec(x_30);
x_41 = lean::cnstr_get(x_38, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_38, 1);
lean::inc(x_43);
lean::dec(x_38);
if (lean::is_scalar(x_12)) {
 x_46 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_46 = x_12;
}
lean::cnstr_set(x_46, 0, x_25);
lean::cnstr_set(x_46, 1, x_41);
if (lean::is_scalar(x_29)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_29;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_43);
if (lean::is_scalar(x_24)) {
 x_48 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_48 = x_24;
}
lean::cnstr_set(x_48, 0, x_47);
return x_48;
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_16; obj* x_19; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
lean::dec(x_8);
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
lean::inc(x_1);
x_19 = l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__1(x_16, x_1, x_2);
if (lean::obj_tag(x_19) == 0)
{
obj* x_24; obj* x_26; obj* x_27; 
lean::dec(x_12);
lean::dec(x_13);
lean::dec(x_10);
lean::dec(x_1);
x_24 = lean::cnstr_get(x_19, 0);
lean::inc(x_24);
if (lean::is_shared(x_19)) {
 lean::dec(x_19);
 x_26 = lean::box(0);
} else {
 lean::cnstr_release(x_19, 0);
 x_26 = x_19;
}
if (lean::is_scalar(x_26)) {
 x_27 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_27 = x_26;
}
lean::cnstr_set(x_27, 0, x_24);
return x_27;
}
else
{
obj* x_28; obj* x_30; obj* x_31; obj* x_33; obj* x_35; obj* x_36; 
x_28 = lean::cnstr_get(x_19, 0);
lean::inc(x_28);
if (lean::is_shared(x_19)) {
 lean::dec(x_19);
 x_30 = lean::box(0);
} else {
 lean::cnstr_release(x_19, 0);
 x_30 = x_19;
}
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_28, 1);
lean::inc(x_33);
if (lean::is_shared(x_28)) {
 lean::dec(x_28);
 x_35 = lean::box(0);
} else {
 lean::cnstr_release(x_28, 0);
 lean::cnstr_release(x_28, 1);
 x_35 = x_28;
}
x_36 = l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__2(x_10, x_1, x_33);
if (lean::obj_tag(x_36) == 0)
{
obj* x_41; obj* x_44; 
lean::dec(x_12);
lean::dec(x_13);
lean::dec(x_35);
lean::dec(x_31);
x_41 = lean::cnstr_get(x_36, 0);
lean::inc(x_41);
lean::dec(x_36);
if (lean::is_scalar(x_30)) {
 x_44 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_44 = x_30;
}
lean::cnstr_set(x_44, 0, x_41);
return x_44;
}
else
{
obj* x_45; obj* x_48; obj* x_50; obj* x_53; obj* x_56; obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
x_45 = lean::cnstr_get(x_36, 0);
lean::inc(x_45);
lean::dec(x_36);
x_48 = lean::cnstr_get(x_45, 0);
lean::inc(x_48);
x_50 = lean::cnstr_get(x_45, 1);
lean::inc(x_50);
lean::dec(x_45);
x_53 = lean::cnstr_get(x_13, 0);
lean::inc(x_53);
lean::dec(x_13);
x_56 = lean::cnstr_get(x_53, 2);
lean::inc(x_56);
lean::dec(x_53);
x_59 = l_lean_expr_mk__capp(x_56, x_31);
if (lean::is_scalar(x_12)) {
 x_60 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_60 = x_12;
}
lean::cnstr_set(x_60, 0, x_59);
lean::cnstr_set(x_60, 1, x_48);
if (lean::is_scalar(x_35)) {
 x_61 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_61 = x_35;
}
lean::cnstr_set(x_61, 0, x_60);
lean::cnstr_set(x_61, 1, x_50);
if (lean::is_scalar(x_30)) {
 x_62 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_62 = x_30;
}
lean::cnstr_set(x_62, 0, x_61);
return x_62;
}
}
}
}
}
obj* l_lean_elaborator_decl__modifiers__to__pexpr(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_8; unsigned char x_10; obj* x_11; unsigned char x_13; obj* x_14; obj* x_17; 
x_3 = lean::box(0);
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 2);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_0, 3);
lean::inc(x_8);
x_10 = l_option_is__some___main___rarg(x_8);
x_11 = lean::cnstr_get(x_0, 4);
lean::inc(x_11);
x_13 = l_option_is__some___main___rarg(x_11);
x_14 = lean::cnstr_get(x_0, 1);
lean::inc(x_14);
lean::dec(x_0);
if (lean::obj_tag(x_4) == 0)
{
lean::dec(x_4);
if (lean::obj_tag(x_6) == 0)
{
lean::dec(x_6);
x_17 = x_3;
goto lbl_18;
}
else
{
obj* x_21; 
x_21 = lean::cnstr_get(x_6, 0);
lean::inc(x_21);
lean::dec(x_6);
if (lean::obj_tag(x_21) == 0)
{
obj* x_25; 
lean::dec(x_21);
x_25 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__3;
lean::inc(x_25);
x_17 = x_25;
goto lbl_18;
}
else
{
obj* x_28; 
lean::dec(x_21);
x_28 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__4;
lean::inc(x_28);
x_17 = x_28;
goto lbl_18;
}
}
}
else
{
obj* x_30; obj* x_33; 
x_30 = lean::cnstr_get(x_4, 0);
lean::inc(x_30);
lean::dec(x_4);
x_33 = lean::cnstr_get(x_30, 1);
lean::inc(x_33);
lean::dec(x_30);
if (lean::obj_tag(x_33) == 0)
{
lean::dec(x_33);
if (lean::obj_tag(x_6) == 0)
{
lean::dec(x_6);
x_17 = x_3;
goto lbl_18;
}
else
{
obj* x_38; 
x_38 = lean::cnstr_get(x_6, 0);
lean::inc(x_38);
lean::dec(x_6);
if (lean::obj_tag(x_38) == 0)
{
obj* x_42; 
lean::dec(x_38);
x_42 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__3;
lean::inc(x_42);
x_17 = x_42;
goto lbl_18;
}
else
{
obj* x_45; 
lean::dec(x_38);
x_45 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__4;
lean::inc(x_45);
x_17 = x_45;
goto lbl_18;
}
}
}
else
{
obj* x_47; obj* x_50; obj* x_53; obj* x_56; 
x_47 = lean::cnstr_get(x_33, 0);
lean::inc(x_47);
lean::dec(x_33);
x_50 = lean::cnstr_get(x_47, 1);
lean::inc(x_50);
lean::dec(x_47);
x_53 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__5;
lean::inc(x_53);
lean::inc(x_3);
x_56 = l_lean_kvmap_set__string(x_3, x_53, x_50);
if (lean::obj_tag(x_6) == 0)
{
lean::dec(x_6);
x_17 = x_56;
goto lbl_18;
}
else
{
obj* x_58; 
x_58 = lean::cnstr_get(x_6, 0);
lean::inc(x_58);
lean::dec(x_6);
if (lean::obj_tag(x_58) == 0)
{
obj* x_62; unsigned char x_63; obj* x_65; 
lean::dec(x_58);
x_62 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__6;
x_63 = 1;
lean::inc(x_62);
x_65 = l_lean_kvmap_set__bool(x_56, x_62, x_63);
x_17 = x_65;
goto lbl_18;
}
else
{
obj* x_67; unsigned char x_68; obj* x_70; 
lean::dec(x_58);
x_67 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__7;
x_68 = 1;
lean::inc(x_67);
x_70 = l_lean_kvmap_set__bool(x_56, x_67, x_68);
x_17 = x_70;
goto lbl_18;
}
}
}
}
lbl_18:
{
obj* x_71; obj* x_73; obj* x_74; obj* x_76; 
x_71 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__1;
lean::inc(x_71);
x_73 = l_lean_kvmap_set__bool(x_17, x_71, x_10);
x_74 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__2;
lean::inc(x_74);
x_76 = l_lean_kvmap_set__bool(x_73, x_74, x_13);
if (lean::obj_tag(x_14) == 0)
{
obj* x_78; 
lean::dec(x_14);
x_78 = l_lean_elaborator_attrs__to__pexpr(x_3, x_1, x_2);
if (lean::obj_tag(x_78) == 0)
{
obj* x_80; obj* x_82; obj* x_83; 
lean::dec(x_76);
x_80 = lean::cnstr_get(x_78, 0);
lean::inc(x_80);
if (lean::is_shared(x_78)) {
 lean::dec(x_78);
 x_82 = lean::box(0);
} else {
 lean::cnstr_release(x_78, 0);
 x_82 = x_78;
}
if (lean::is_scalar(x_82)) {
 x_83 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_83 = x_82;
}
lean::cnstr_set(x_83, 0, x_80);
return x_83;
}
else
{
obj* x_84; obj* x_86; obj* x_87; obj* x_89; obj* x_91; obj* x_92; obj* x_93; obj* x_94; 
x_84 = lean::cnstr_get(x_78, 0);
lean::inc(x_84);
if (lean::is_shared(x_78)) {
 lean::dec(x_78);
 x_86 = lean::box(0);
} else {
 lean::cnstr_release(x_78, 0);
 x_86 = x_78;
}
x_87 = lean::cnstr_get(x_84, 0);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_84, 1);
lean::inc(x_89);
if (lean::is_shared(x_84)) {
 lean::dec(x_84);
 x_91 = lean::box(0);
} else {
 lean::cnstr_release(x_84, 0);
 lean::cnstr_release(x_84, 1);
 x_91 = x_84;
}
x_92 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_92, 0, x_76);
lean::cnstr_set(x_92, 1, x_87);
if (lean::is_scalar(x_91)) {
 x_93 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_93 = x_91;
}
lean::cnstr_set(x_93, 0, x_92);
lean::cnstr_set(x_93, 1, x_89);
if (lean::is_scalar(x_86)) {
 x_94 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_94 = x_86;
}
lean::cnstr_set(x_94, 0, x_93);
return x_94;
}
}
else
{
obj* x_96; obj* x_99; obj* x_102; 
lean::dec(x_3);
x_96 = lean::cnstr_get(x_14, 0);
lean::inc(x_96);
lean::dec(x_14);
x_99 = lean::cnstr_get(x_96, 1);
lean::inc(x_99);
lean::dec(x_96);
x_102 = l_lean_elaborator_attrs__to__pexpr(x_99, x_1, x_2);
if (lean::obj_tag(x_102) == 0)
{
obj* x_104; obj* x_106; obj* x_107; 
lean::dec(x_76);
x_104 = lean::cnstr_get(x_102, 0);
lean::inc(x_104);
if (lean::is_shared(x_102)) {
 lean::dec(x_102);
 x_106 = lean::box(0);
} else {
 lean::cnstr_release(x_102, 0);
 x_106 = x_102;
}
if (lean::is_scalar(x_106)) {
 x_107 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_107 = x_106;
}
lean::cnstr_set(x_107, 0, x_104);
return x_107;
}
else
{
obj* x_108; obj* x_110; obj* x_111; obj* x_113; obj* x_115; obj* x_116; obj* x_117; obj* x_118; 
x_108 = lean::cnstr_get(x_102, 0);
lean::inc(x_108);
if (lean::is_shared(x_102)) {
 lean::dec(x_102);
 x_110 = lean::box(0);
} else {
 lean::cnstr_release(x_102, 0);
 x_110 = x_102;
}
x_111 = lean::cnstr_get(x_108, 0);
lean::inc(x_111);
x_113 = lean::cnstr_get(x_108, 1);
lean::inc(x_113);
if (lean::is_shared(x_108)) {
 lean::dec(x_108);
 x_115 = lean::box(0);
} else {
 lean::cnstr_release(x_108, 0);
 lean::cnstr_release(x_108, 1);
 x_115 = x_108;
}
x_116 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_116, 0, x_76);
lean::cnstr_set(x_116, 1, x_111);
if (lean::is_scalar(x_115)) {
 x_117 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_117 = x_115;
}
lean::cnstr_set(x_117, 0, x_116);
lean::cnstr_set(x_117, 1, x_113);
if (lean::is_scalar(x_110)) {
 x_118 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_118 = x_110;
}
lean::cnstr_set(x_118, 0, x_117);
return x_118;
}
}
}
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("noncomputable");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("meta");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; unsigned char x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("private");
lean::inc(x_0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
x_4 = 1;
x_5 = l_lean_kvmap_set__bool(x_0, x_3, x_4);
return x_5;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; unsigned char x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("protected");
lean::inc(x_0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
x_4 = 1;
x_5 = l_lean_kvmap_set__bool(x_0, x_3, x_4);
return x_5;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__5() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("doc_string");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("private");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__7() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("protected");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_lean_elaborator_ident__univ__params__to__pexpr(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_4; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = l_lean_elaborator_mangle__ident(x_1);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_8; obj* x_9; 
lean::dec(x_4);
x_8 = lean::box(0);
x_9 = lean::alloc_cnstr(4, 2, 0);
lean::cnstr_set(x_9, 0, x_3);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_13; obj* x_16; obj* x_17; 
x_10 = lean::cnstr_get(x_4, 0);
lean::inc(x_10);
lean::dec(x_4);
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
lean::dec(x_10);
x_16 = l_list_map___main___at_lean_elaborator_ident__univ__params__to__pexpr___spec__1(x_13);
x_17 = lean::alloc_cnstr(4, 2, 0);
lean::cnstr_set(x_17, 0, x_3);
lean::cnstr_set(x_17, 1, x_16);
return x_17;
}
}
}
obj* l_list_map___main___at_lean_elaborator_ident__univ__params__to__pexpr___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = lean::alloc_cnstr(4, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
x_10 = l_list_map___main___at_lean_elaborator_ident__univ__params__to__pexpr___spec__1(x_5);
if (lean::is_scalar(x_7)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_7;
}
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
}
obj* l_lean_elaborator_locally___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; obj* x_11; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_21; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
lean::dec(x_0);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
lean::dec(x_5);
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
lean::dec(x_8);
x_14 = lean::cnstr_get(x_1, 0);
lean::inc(x_14);
x_16 = l_lean_elaborator_locally___rarg___closed__1;
lean::inc(x_16);
x_18 = lean::apply_4(x_11, lean::box(0), lean::box(0), x_16, x_14);
lean::inc(x_3);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg___lambda__4), 4, 3);
lean::closure_set(x_20, 0, x_1);
lean::closure_set(x_20, 1, x_3);
lean::closure_set(x_20, 2, x_2);
x_21 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_18, x_20);
return x_21;
}
}
obj* _init_l_lean_elaborator_locally___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg___lambda__1), 1, 0);
return x_0;
}
}
obj* l_lean_elaborator_locally___rarg___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 4);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_locally___rarg___lambda__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_23; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 3);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_1, 5);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 6);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_1, 7);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_1, 8);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_1, 9);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_1, 10);
lean::inc(x_20);
lean::dec(x_1);
x_23 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_23, 0, x_2);
lean::cnstr_set(x_23, 1, x_4);
lean::cnstr_set(x_23, 2, x_6);
lean::cnstr_set(x_23, 3, x_8);
lean::cnstr_set(x_23, 4, x_0);
lean::cnstr_set(x_23, 5, x_10);
lean::cnstr_set(x_23, 6, x_12);
lean::cnstr_set(x_23, 7, x_14);
lean::cnstr_set(x_23, 8, x_16);
lean::cnstr_set(x_23, 9, x_18);
lean::cnstr_set(x_23, 10, x_20);
return x_23;
}
}
obj* l_lean_elaborator_locally___rarg___lambda__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_7; obj* x_8; 
lean::dec(x_2);
x_4 = lean::cnstr_get(x_0, 2);
lean::inc(x_4);
lean::dec(x_0);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg___lambda__2), 2, 1);
lean::closure_set(x_7, 0, x_1);
x_8 = lean::apply_1(x_4, x_7);
return x_8;
}
}
obj* l_lean_elaborator_locally___rarg___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg___lambda__3), 3, 2);
lean::closure_set(x_4, 0, x_0);
lean::closure_set(x_4, 1, x_3);
x_5 = lean::apply_4(x_1, lean::box(0), lean::box(0), x_2, x_4);
return x_5;
}
}
obj* l_lean_elaborator_locally(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_elaborator_simple__binders__to__pexpr(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_list_mmap___main___at_lean_elaborator_simple__binders__to__pexpr___spec__1(x_0, x_1, x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_6 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 x_6 = x_3;
}
if (lean::is_scalar(x_6)) {
 x_7 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_7 = x_6;
}
lean::cnstr_set(x_7, 0, x_4);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_18; obj* x_19; obj* x_20; 
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_10 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 x_10 = x_3;
}
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_8, 1);
lean::inc(x_13);
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_15 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_15 = x_8;
}
x_16 = l_lean_elaborator_mk__eqns___closed__1;
lean::inc(x_16);
x_18 = l_lean_expr_mk__capp(x_16, x_11);
if (lean::is_scalar(x_15)) {
 x_19 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_19 = x_15;
}
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_13);
if (lean::is_scalar(x_10)) {
 x_20 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_20 = x_10;
}
lean::cnstr_set(x_20, 0, x_19);
return x_20;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_simple__binders__to__pexpr___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_16; obj* x_18; obj* x_19; obj* x_21; obj* x_25; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
x_13 = l_lean_parser_term_simple__binder_view_to__binder__info___main(x_8);
x_14 = lean::cnstr_get(x_13, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
if (lean::is_shared(x_13)) {
 lean::dec(x_13);
 x_18 = lean::box(0);
} else {
 lean::cnstr_release(x_13, 0);
 lean::cnstr_release(x_13, 1);
 x_18 = x_13;
}
x_19 = lean::cnstr_get(x_16, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_16, 1);
lean::inc(x_21);
lean::dec(x_16);
lean::inc(x_1);
x_25 = l_lean_elaborator_to__pexpr___main(x_21, x_1, x_2);
if (lean::obj_tag(x_25) == 0)
{
obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_10);
lean::dec(x_1);
lean::dec(x_18);
lean::dec(x_19);
x_32 = lean::cnstr_get(x_25, 0);
lean::inc(x_32);
if (lean::is_shared(x_25)) {
 lean::dec(x_25);
 x_34 = lean::box(0);
} else {
 lean::cnstr_release(x_25, 0);
 x_34 = x_25;
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
return x_35;
}
else
{
obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_44; 
x_36 = lean::cnstr_get(x_25, 0);
lean::inc(x_36);
if (lean::is_shared(x_25)) {
 lean::dec(x_25);
 x_38 = lean::box(0);
} else {
 lean::cnstr_release(x_25, 0);
 x_38 = x_25;
}
x_39 = lean::cnstr_get(x_36, 0);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_36, 1);
lean::inc(x_41);
lean::dec(x_36);
x_44 = l_list_mmap___main___at_lean_elaborator_simple__binders__to__pexpr___spec__1(x_10, x_1, x_41);
if (lean::obj_tag(x_44) == 0)
{
obj* x_50; obj* x_53; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_18);
lean::dec(x_19);
lean::dec(x_39);
x_50 = lean::cnstr_get(x_44, 0);
lean::inc(x_50);
lean::dec(x_44);
if (lean::is_scalar(x_38)) {
 x_53 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_53 = x_38;
}
lean::cnstr_set(x_53, 0, x_50);
return x_53;
}
else
{
obj* x_54; obj* x_57; obj* x_59; obj* x_62; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
x_54 = lean::cnstr_get(x_44, 0);
lean::inc(x_54);
lean::dec(x_44);
x_57 = lean::cnstr_get(x_54, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_54, 1);
lean::inc(x_59);
lean::dec(x_54);
x_62 = l_lean_elaborator_mangle__ident(x_19);
lean::inc(x_62);
x_64 = lean_expr_local(x_62, x_62, x_39, x_14);
if (lean::is_scalar(x_12)) {
 x_65 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_65 = x_12;
}
lean::cnstr_set(x_65, 0, x_64);
lean::cnstr_set(x_65, 1, x_57);
if (lean::is_scalar(x_18)) {
 x_66 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_66 = x_18;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_59);
if (lean::is_scalar(x_38)) {
 x_67 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_67 = x_38;
}
lean::cnstr_set(x_67, 0, x_66);
return x_67;
}
}
}
}
}
obj* l_lean_elaborator_elab__def__like(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_15; obj* x_17; 
x_6 = lean::cnstr_get(x_2, 1);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_2, 2);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_2, 3);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_2, 4);
lean::inc(x_12);
lean::dec(x_2);
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_10, 1);
lean::inc(x_17);
lean::dec(x_10);
if (lean::obj_tag(x_15) == 0)
{
obj* x_27; obj* x_29; 
lean::dec(x_12);
lean::dec(x_15);
lean::dec(x_17);
lean::dec(x_6);
lean::dec(x_8);
lean::dec(x_1);
lean::dec(x_3);
x_27 = l_lean_elaborator_elab__def__like___closed__1;
lean::inc(x_27);
x_29 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_27, x_4, x_5);
return x_29;
}
else
{
obj* x_30; obj* x_34; 
x_30 = lean::cnstr_get(x_15, 0);
lean::inc(x_30);
lean::dec(x_15);
lean::inc(x_4);
x_34 = l_lean_elaborator_decl__modifiers__to__pexpr(x_1, x_4, x_5);
if (lean::obj_tag(x_34) == 0)
{
obj* x_43; obj* x_45; obj* x_46; 
lean::dec(x_30);
lean::dec(x_12);
lean::dec(x_17);
lean::dec(x_4);
lean::dec(x_6);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_3);
x_43 = lean::cnstr_get(x_34, 0);
lean::inc(x_43);
if (lean::is_shared(x_34)) {
 lean::dec(x_34);
 x_45 = lean::box(0);
} else {
 lean::cnstr_release(x_34, 0);
 x_45 = x_34;
}
if (lean::is_scalar(x_45)) {
 x_46 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_46 = x_45;
}
lean::cnstr_set(x_46, 0, x_43);
return x_46;
}
else
{
obj* x_47; obj* x_49; obj* x_50; obj* x_52; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
x_47 = lean::cnstr_get(x_34, 0);
lean::inc(x_47);
if (lean::is_shared(x_34)) {
 lean::dec(x_34);
 x_49 = lean::box(0);
} else {
 lean::cnstr_release(x_34, 0);
 x_49 = x_34;
}
x_50 = lean::cnstr_get(x_47, 0);
lean::inc(x_50);
x_52 = lean::cnstr_get(x_47, 1);
lean::inc(x_52);
if (lean::is_shared(x_47)) {
 lean::dec(x_47);
 x_54 = lean::box(0);
} else {
 lean::cnstr_release(x_47, 0);
 lean::cnstr_release(x_47, 1);
 x_54 = x_47;
}
x_55 = lean::box(0);
x_56 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_56, 0, x_3);
x_57 = lean::alloc_cnstr(9, 1, 0);
lean::cnstr_set(x_57, 0, x_56);
if (lean::obj_tag(x_6) == 0)
{
obj* x_61; obj* x_63; 
x_61 = l_lean_expander_get__opt__type___main(x_17);
lean::inc(x_4);
x_63 = l_lean_elaborator_to__pexpr___main(x_61, x_4, x_52);
if (lean::obj_tag(x_6) == 0)
{
lean::dec(x_6);
if (lean::obj_tag(x_63) == 0)
{
obj* x_75; obj* x_77; obj* x_78; 
lean::dec(x_30);
lean::dec(x_12);
lean::dec(x_54);
lean::dec(x_55);
lean::dec(x_4);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_49);
lean::dec(x_50);
lean::dec(x_57);
x_75 = lean::cnstr_get(x_63, 0);
lean::inc(x_75);
if (lean::is_shared(x_63)) {
 lean::dec(x_63);
 x_77 = lean::box(0);
} else {
 lean::cnstr_release(x_63, 0);
 x_77 = x_63;
}
if (lean::is_scalar(x_77)) {
 x_78 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_78 = x_77;
}
lean::cnstr_set(x_78, 0, x_75);
return x_78;
}
else
{
obj* x_79; 
x_79 = lean::cnstr_get(x_63, 0);
lean::inc(x_79);
lean::dec(x_63);
x_58 = x_55;
x_59 = x_79;
goto lbl_60;
}
}
else
{
obj* x_82; 
x_82 = lean::cnstr_get(x_6, 0);
lean::inc(x_82);
lean::dec(x_6);
if (lean::obj_tag(x_63) == 0)
{
obj* x_96; obj* x_98; obj* x_99; 
lean::dec(x_30);
lean::dec(x_12);
lean::dec(x_82);
lean::dec(x_54);
lean::dec(x_55);
lean::dec(x_4);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_49);
lean::dec(x_50);
lean::dec(x_57);
x_96 = lean::cnstr_get(x_63, 0);
lean::inc(x_96);
if (lean::is_shared(x_63)) {
 lean::dec(x_63);
 x_98 = lean::box(0);
} else {
 lean::cnstr_release(x_63, 0);
 x_98 = x_63;
}
if (lean::is_scalar(x_98)) {
 x_99 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_99 = x_98;
}
lean::cnstr_set(x_99, 0, x_96);
return x_99;
}
else
{
obj* x_100; obj* x_103; obj* x_106; 
x_100 = lean::cnstr_get(x_63, 0);
lean::inc(x_100);
lean::dec(x_63);
x_103 = lean::cnstr_get(x_82, 1);
lean::inc(x_103);
lean::dec(x_82);
x_106 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__3(x_103);
x_58 = x_106;
x_59 = x_100;
goto lbl_60;
}
}
}
else
{
obj* x_107; obj* x_109; obj* x_111; obj* x_113; obj* x_115; obj* x_117; obj* x_119; obj* x_121; obj* x_123; obj* x_127; obj* x_128; obj* x_129; obj* x_131; obj* x_133; obj* x_135; obj* x_137; obj* x_140; obj* x_141; obj* x_143; obj* x_145; obj* x_147; obj* x_149; obj* x_151; obj* x_154; obj* x_155; obj* x_157; 
x_107 = lean::cnstr_get(x_6, 0);
lean::inc(x_107);
x_109 = lean::cnstr_get(x_52, 0);
lean::inc(x_109);
x_111 = lean::cnstr_get(x_52, 1);
lean::inc(x_111);
x_113 = lean::cnstr_get(x_52, 2);
lean::inc(x_113);
x_115 = lean::cnstr_get(x_52, 3);
lean::inc(x_115);
x_117 = lean::cnstr_get(x_52, 4);
lean::inc(x_117);
x_119 = lean::cnstr_get(x_117, 0);
lean::inc(x_119);
x_121 = lean::cnstr_get(x_117, 1);
lean::inc(x_121);
x_123 = lean::cnstr_get(x_107, 1);
lean::inc(x_123);
lean::dec(x_107);
lean::inc(x_123);
x_127 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__5(x_123);
x_128 = l_list_foldl___main___at_lean_elaborator_elab__def__like___spec__6(x_121, x_127);
x_129 = lean::cnstr_get(x_117, 2);
lean::inc(x_129);
x_131 = lean::cnstr_get(x_117, 3);
lean::inc(x_131);
x_133 = lean::cnstr_get(x_117, 4);
lean::inc(x_133);
x_135 = lean::cnstr_get(x_117, 5);
lean::inc(x_135);
x_137 = lean::cnstr_get(x_117, 6);
lean::inc(x_137);
lean::dec(x_117);
x_140 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_140, 0, x_119);
lean::cnstr_set(x_140, 1, x_128);
lean::cnstr_set(x_140, 2, x_129);
lean::cnstr_set(x_140, 3, x_131);
lean::cnstr_set(x_140, 4, x_133);
lean::cnstr_set(x_140, 5, x_135);
lean::cnstr_set(x_140, 6, x_137);
x_141 = lean::cnstr_get(x_52, 5);
lean::inc(x_141);
x_143 = lean::cnstr_get(x_52, 6);
lean::inc(x_143);
x_145 = lean::cnstr_get(x_52, 7);
lean::inc(x_145);
x_147 = lean::cnstr_get(x_52, 8);
lean::inc(x_147);
x_149 = lean::cnstr_get(x_52, 9);
lean::inc(x_149);
x_151 = lean::cnstr_get(x_52, 10);
lean::inc(x_151);
lean::dec(x_52);
x_154 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_154, 0, x_109);
lean::cnstr_set(x_154, 1, x_111);
lean::cnstr_set(x_154, 2, x_113);
lean::cnstr_set(x_154, 3, x_115);
lean::cnstr_set(x_154, 4, x_140);
lean::cnstr_set(x_154, 5, x_141);
lean::cnstr_set(x_154, 6, x_143);
lean::cnstr_set(x_154, 7, x_145);
lean::cnstr_set(x_154, 8, x_147);
lean::cnstr_set(x_154, 9, x_149);
lean::cnstr_set(x_154, 10, x_151);
x_155 = l_lean_expander_get__opt__type___main(x_17);
lean::inc(x_4);
x_157 = l_lean_elaborator_to__pexpr___main(x_155, x_4, x_154);
if (lean::obj_tag(x_6) == 0)
{
lean::dec(x_123);
lean::dec(x_6);
if (lean::obj_tag(x_157) == 0)
{
obj* x_170; obj* x_172; obj* x_173; 
lean::dec(x_30);
lean::dec(x_12);
lean::dec(x_54);
lean::dec(x_55);
lean::dec(x_4);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_49);
lean::dec(x_50);
lean::dec(x_57);
x_170 = lean::cnstr_get(x_157, 0);
lean::inc(x_170);
if (lean::is_shared(x_157)) {
 lean::dec(x_157);
 x_172 = lean::box(0);
} else {
 lean::cnstr_release(x_157, 0);
 x_172 = x_157;
}
if (lean::is_scalar(x_172)) {
 x_173 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_173 = x_172;
}
lean::cnstr_set(x_173, 0, x_170);
return x_173;
}
else
{
obj* x_174; 
x_174 = lean::cnstr_get(x_157, 0);
lean::inc(x_174);
lean::dec(x_157);
x_58 = x_55;
x_59 = x_174;
goto lbl_60;
}
}
else
{
lean::dec(x_6);
if (lean::obj_tag(x_157) == 0)
{
obj* x_189; obj* x_191; obj* x_192; 
lean::dec(x_30);
lean::dec(x_12);
lean::dec(x_123);
lean::dec(x_54);
lean::dec(x_55);
lean::dec(x_4);
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_49);
lean::dec(x_50);
lean::dec(x_57);
x_189 = lean::cnstr_get(x_157, 0);
lean::inc(x_189);
if (lean::is_shared(x_157)) {
 lean::dec(x_157);
 x_191 = lean::box(0);
} else {
 lean::cnstr_release(x_157, 0);
 x_191 = x_157;
}
if (lean::is_scalar(x_191)) {
 x_192 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_192 = x_191;
}
lean::cnstr_set(x_192, 0, x_189);
return x_192;
}
else
{
obj* x_193; obj* x_196; 
x_193 = lean::cnstr_get(x_157, 0);
lean::inc(x_193);
lean::dec(x_157);
x_196 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__7(x_123);
x_58 = x_196;
x_59 = x_193;
goto lbl_60;
}
}
}
lbl_60:
{
obj* x_197; obj* x_199; obj* x_202; obj* x_203; obj* x_205; unsigned char x_206; obj* x_207; obj* x_210; obj* x_212; obj* x_213; obj* x_215; obj* x_216; 
x_197 = lean::cnstr_get(x_59, 0);
lean::inc(x_197);
x_199 = lean::cnstr_get(x_59, 1);
lean::inc(x_199);
lean::dec(x_59);
x_202 = l_lean_elaborator_names__to__pexpr(x_58);
x_203 = lean::cnstr_get(x_8, 0);
lean::inc(x_203);
x_205 = l_lean_elaborator_mangle__ident(x_203);
x_206 = 4;
x_207 = lean::box(x_206);
lean::inc(x_197);
lean::inc(x_205);
x_210 = lean_expr_local(x_205, x_205, x_197, x_207);
lean::inc(x_55);
x_212 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_212, 0, x_210);
lean::cnstr_set(x_212, 1, x_55);
x_213 = l_lean_elaborator_mk__eqns___closed__1;
lean::inc(x_213);
x_215 = l_lean_expr_mk__capp(x_213, x_212);
switch (lean::obj_tag(x_12)) {
case 0:
{
obj* x_221; obj* x_224; obj* x_228; 
lean::dec(x_197);
lean::dec(x_54);
lean::dec(x_8);
x_221 = lean::cnstr_get(x_12, 0);
lean::inc(x_221);
lean::dec(x_12);
x_224 = lean::cnstr_get(x_221, 1);
lean::inc(x_224);
lean::dec(x_221);
lean::inc(x_4);
x_228 = l_lean_elaborator_to__pexpr___main(x_224, x_4, x_199);
if (lean::obj_tag(x_228) == 0)
{
obj* x_238; obj* x_240; obj* x_241; 
lean::dec(x_215);
lean::dec(x_202);
lean::dec(x_30);
lean::dec(x_55);
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_49);
lean::dec(x_50);
lean::dec(x_57);
x_238 = lean::cnstr_get(x_228, 0);
lean::inc(x_238);
if (lean::is_shared(x_228)) {
 lean::dec(x_228);
 x_240 = lean::box(0);
} else {
 lean::cnstr_release(x_228, 0);
 x_240 = x_228;
}
if (lean::is_scalar(x_240)) {
 x_241 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_241 = x_240;
}
lean::cnstr_set(x_241, 0, x_238);
return x_241;
}
else
{
obj* x_242; 
x_242 = lean::cnstr_get(x_228, 0);
lean::inc(x_242);
lean::dec(x_228);
x_216 = x_242;
goto lbl_217;
}
}
case 1:
{
obj* x_248; obj* x_249; 
lean::dec(x_12);
lean::dec(x_8);
lean::inc(x_55);
x_248 = l_lean_elaborator_mk__eqns(x_197, x_55);
if (lean::is_scalar(x_54)) {
 x_249 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_249 = x_54;
}
lean::cnstr_set(x_249, 0, x_248);
lean::cnstr_set(x_249, 1, x_199);
x_216 = x_249;
goto lbl_217;
}
default:
{
obj* x_250; obj* x_254; 
x_250 = lean::cnstr_get(x_12, 0);
lean::inc(x_250);
lean::dec(x_12);
lean::inc(x_4);
x_254 = l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__2(x_8, x_250, x_4, x_199);
if (lean::obj_tag(x_254) == 0)
{
obj* x_266; obj* x_268; obj* x_269; 
lean::dec(x_215);
lean::dec(x_202);
lean::dec(x_30);
lean::dec(x_197);
lean::dec(x_54);
lean::dec(x_55);
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_49);
lean::dec(x_50);
lean::dec(x_57);
x_266 = lean::cnstr_get(x_254, 0);
lean::inc(x_266);
if (lean::is_shared(x_254)) {
 lean::dec(x_254);
 x_268 = lean::box(0);
} else {
 lean::cnstr_release(x_254, 0);
 x_268 = x_254;
}
if (lean::is_scalar(x_268)) {
 x_269 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_269 = x_268;
}
lean::cnstr_set(x_269, 0, x_266);
return x_269;
}
else
{
obj* x_270; obj* x_273; obj* x_275; obj* x_278; obj* x_279; 
x_270 = lean::cnstr_get(x_254, 0);
lean::inc(x_270);
lean::dec(x_254);
x_273 = lean::cnstr_get(x_270, 0);
lean::inc(x_273);
x_275 = lean::cnstr_get(x_270, 1);
lean::inc(x_275);
lean::dec(x_270);
x_278 = l_lean_elaborator_mk__eqns(x_197, x_273);
if (lean::is_scalar(x_54)) {
 x_279 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_279 = x_54;
}
lean::cnstr_set(x_279, 0, x_278);
lean::cnstr_set(x_279, 1, x_275);
x_216 = x_279;
goto lbl_217;
}
}
}
lbl_217:
{
obj* x_280; obj* x_282; obj* x_286; 
x_280 = lean::cnstr_get(x_216, 0);
lean::inc(x_280);
x_282 = lean::cnstr_get(x_216, 1);
lean::inc(x_282);
lean::dec(x_216);
lean::inc(x_4);
x_286 = l_lean_elaborator_simple__binders__to__pexpr(x_30, x_4, x_282);
if (lean::obj_tag(x_286) == 0)
{
obj* x_295; obj* x_298; 
lean::dec(x_215);
lean::dec(x_280);
lean::dec(x_202);
lean::dec(x_55);
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_50);
lean::dec(x_57);
x_295 = lean::cnstr_get(x_286, 0);
lean::inc(x_295);
lean::dec(x_286);
if (lean::is_scalar(x_49)) {
 x_298 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_298 = x_49;
}
lean::cnstr_set(x_298, 0, x_295);
return x_298;
}
else
{
obj* x_300; obj* x_303; obj* x_305; obj* x_308; obj* x_309; obj* x_310; obj* x_311; obj* x_312; obj* x_313; obj* x_315; obj* x_316; obj* x_318; obj* x_319; 
lean::dec(x_49);
x_300 = lean::cnstr_get(x_286, 0);
lean::inc(x_300);
lean::dec(x_286);
x_303 = lean::cnstr_get(x_300, 0);
lean::inc(x_303);
x_305 = lean::cnstr_get(x_300, 1);
lean::inc(x_305);
lean::dec(x_300);
x_308 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_308, 0, x_280);
lean::cnstr_set(x_308, 1, x_55);
x_309 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_309, 0, x_303);
lean::cnstr_set(x_309, 1, x_308);
x_310 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_310, 0, x_215);
lean::cnstr_set(x_310, 1, x_309);
x_311 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_311, 0, x_202);
lean::cnstr_set(x_311, 1, x_310);
x_312 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_312, 0, x_57);
lean::cnstr_set(x_312, 1, x_311);
x_313 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_313, 0, x_50);
lean::cnstr_set(x_313, 1, x_312);
lean::inc(x_213);
x_315 = l_lean_expr_mk__capp(x_213, x_313);
x_316 = l_lean_elaborator_elab__def__like___closed__2;
lean::inc(x_316);
x_318 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_318, 0, x_316);
lean::cnstr_set(x_318, 1, x_315);
x_319 = l_lean_elaborator_old__elab__command(x_0, x_318, x_4, x_305);
return x_319;
}
}
}
}
}
}
}
obj* _init_l_lean_elaborator_elab__def__like___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("elab_def_like: unexpected input");
return x_0;
}
}
obj* _init_l_lean_elaborator_elab__def__like___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
lean::inc(x_0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::mk_string("defs");
lean::inc(x_0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_4);
x_7 = l_lean_kvmap_set__name(x_0, x_3, x_6);
return x_7;
}
}
obj* l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
lean::inc(x_1);
x_14 = l_lean_elaborator_to__pexpr___main(x_8, x_1, x_2);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_18 = lean::cnstr_get(x_14, 0);
lean::inc(x_18);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_20 = x_14;
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_24; obj* x_25; obj* x_27; obj* x_29; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_24 = x_14;
}
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
if (lean::is_shared(x_22)) {
 lean::dec(x_22);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_22, 0);
 lean::cnstr_release(x_22, 1);
 x_29 = x_22;
}
x_30 = l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__1(x_10, x_1, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_34; obj* x_37; 
lean::dec(x_12);
lean::dec(x_25);
lean::dec(x_29);
x_34 = lean::cnstr_get(x_30, 0);
lean::inc(x_34);
lean::dec(x_30);
if (lean::is_scalar(x_24)) {
 x_37 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_37 = x_24;
}
lean::cnstr_set(x_37, 0, x_34);
return x_37;
}
else
{
obj* x_38; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_48; 
x_38 = lean::cnstr_get(x_30, 0);
lean::inc(x_38);
lean::dec(x_30);
x_41 = lean::cnstr_get(x_38, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_38, 1);
lean::inc(x_43);
lean::dec(x_38);
if (lean::is_scalar(x_12)) {
 x_46 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_46 = x_12;
}
lean::cnstr_set(x_46, 0, x_25);
lean::cnstr_set(x_46, 1, x_41);
if (lean::is_scalar(x_29)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_29;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_43);
if (lean::is_scalar(x_24)) {
 x_48 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_48 = x_24;
}
lean::cnstr_set(x_48, 0, x_47);
return x_48;
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; obj* x_18; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_15 = lean::cnstr_get(x_10, 1);
lean::inc(x_15);
lean::inc(x_2);
x_18 = l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__1(x_15, x_2, x_3);
if (lean::obj_tag(x_18) == 0)
{
obj* x_24; obj* x_26; obj* x_27; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_10);
lean::dec(x_0);
lean::dec(x_2);
x_24 = lean::cnstr_get(x_18, 0);
lean::inc(x_24);
if (lean::is_shared(x_18)) {
 lean::dec(x_18);
 x_26 = lean::box(0);
} else {
 lean::cnstr_release(x_18, 0);
 x_26 = x_18;
}
if (lean::is_scalar(x_26)) {
 x_27 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_27 = x_26;
}
lean::cnstr_set(x_27, 0, x_24);
return x_27;
}
else
{
obj* x_28; obj* x_30; obj* x_31; obj* x_33; obj* x_35; obj* x_36; obj* x_40; 
x_28 = lean::cnstr_get(x_18, 0);
lean::inc(x_28);
if (lean::is_shared(x_18)) {
 lean::dec(x_18);
 x_30 = lean::box(0);
} else {
 lean::cnstr_release(x_18, 0);
 x_30 = x_18;
}
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_28, 1);
lean::inc(x_33);
if (lean::is_shared(x_28)) {
 lean::dec(x_28);
 x_35 = lean::box(0);
} else {
 lean::cnstr_release(x_28, 0);
 lean::cnstr_release(x_28, 1);
 x_35 = x_28;
}
x_36 = lean::cnstr_get(x_10, 3);
lean::inc(x_36);
lean::dec(x_10);
lean::inc(x_2);
x_40 = l_lean_elaborator_to__pexpr___main(x_36, x_2, x_33);
if (lean::obj_tag(x_40) == 0)
{
obj* x_47; obj* x_50; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_35);
lean::dec(x_31);
x_47 = lean::cnstr_get(x_40, 0);
lean::inc(x_47);
lean::dec(x_40);
if (lean::is_scalar(x_30)) {
 x_50 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_50 = x_30;
}
lean::cnstr_set(x_50, 0, x_47);
return x_50;
}
else
{
obj* x_51; obj* x_54; obj* x_56; obj* x_57; obj* x_59; obj* x_61; obj* x_62; 
x_51 = lean::cnstr_get(x_40, 0);
lean::inc(x_51);
lean::dec(x_40);
x_54 = lean::cnstr_get(x_0, 0);
lean::inc(x_54);
x_56 = l_lean_elaborator_mangle__ident(x_54);
x_57 = lean::cnstr_get(x_51, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_51, 1);
lean::inc(x_59);
if (lean::is_shared(x_51)) {
 lean::dec(x_51);
 x_61 = lean::box(0);
} else {
 lean::cnstr_release(x_51, 0);
 lean::cnstr_release(x_51, 1);
 x_61 = x_51;
}
x_62 = l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__2(x_0, x_12, x_2, x_59);
if (lean::obj_tag(x_62) == 0)
{
obj* x_69; obj* x_72; 
lean::dec(x_14);
lean::dec(x_61);
lean::dec(x_35);
lean::dec(x_31);
lean::dec(x_56);
lean::dec(x_57);
x_69 = lean::cnstr_get(x_62, 0);
lean::inc(x_69);
lean::dec(x_62);
if (lean::is_scalar(x_30)) {
 x_72 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_72 = x_30;
}
lean::cnstr_set(x_72, 0, x_69);
return x_72;
}
else
{
obj* x_73; obj* x_76; obj* x_78; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; 
x_73 = lean::cnstr_get(x_62, 0);
lean::inc(x_73);
lean::dec(x_62);
x_76 = lean::cnstr_get(x_73, 0);
lean::inc(x_76);
x_78 = lean::cnstr_get(x_73, 1);
lean::inc(x_78);
if (lean::is_shared(x_73)) {
 lean::dec(x_73);
 x_80 = lean::box(0);
} else {
 lean::cnstr_release(x_73, 0);
 lean::cnstr_release(x_73, 1);
 x_80 = x_73;
}
if (lean::is_scalar(x_35)) {
 x_81 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_81 = x_35;
}
lean::cnstr_set(x_81, 0, x_31);
lean::cnstr_set(x_81, 1, x_57);
if (lean::is_scalar(x_61)) {
 x_82 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_82 = x_61;
}
lean::cnstr_set(x_82, 0, x_56);
lean::cnstr_set(x_82, 1, x_81);
if (lean::is_scalar(x_14)) {
 x_83 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_83 = x_14;
}
lean::cnstr_set(x_83, 0, x_82);
lean::cnstr_set(x_83, 1, x_76);
if (lean::is_scalar(x_80)) {
 x_84 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_84 = x_80;
}
lean::cnstr_set(x_84, 0, x_83);
lean::cnstr_set(x_84, 1, x_78);
if (lean::is_scalar(x_30)) {
 x_85 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_85 = x_30;
}
lean::cnstr_set(x_85, 0, x_84);
return x_85;
}
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__3(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_21; 
lean::inc(x_2);
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_5);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 2);
lean::inc(x_11);
lean::dec(x_0);
lean::inc(x_11);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_11);
lean::cnstr_set(x_15, 1, x_2);
x_16 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(x_9, x_1, x_15);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_add(x_11, x_17);
lean::dec(x_17);
lean::dec(x_11);
x_21 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_21, 0, x_8);
lean::cnstr_set(x_21, 1, x_16);
lean::cnstr_set(x_21, 2, x_18);
return x_21;
}
}
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__5(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__5(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_elab__def__like___spec__6(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
lean::inc(x_3);
x_9 = lean::alloc_cnstr(4, 1, 0);
lean::cnstr_set(x_9, 0, x_3);
x_10 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(x_0, x_3, x_9);
x_0 = x_10;
x_1 = x_5;
goto _start;
}
}
}
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__7(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__7(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_lean_elaborator_infer__mod__to__pexpr(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = l_lean_elaborator_infer__mod__to__pexpr___closed__1;
lean::inc(x_2);
return x_2;
}
else
{
obj* x_4; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
lean::dec(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_8; 
lean::dec(x_4);
x_8 = l_lean_elaborator_infer__mod__to__pexpr___closed__2;
lean::inc(x_8);
return x_8;
}
else
{
obj* x_11; 
lean::dec(x_4);
x_11 = l_lean_elaborator_infer__mod__to__pexpr___closed__3;
lean::inc(x_11);
return x_11;
}
}
}
}
obj* _init_l_lean_elaborator_infer__mod__to__pexpr___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(0u);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(9, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_infer__mod__to__pexpr___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(1u);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(9, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_infer__mod__to__pexpr___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(2u);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(9, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_declaration_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14(x_0, x_1, x_2);
return x_3;
}
}
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; obj* x_17; obj* x_19; obj* x_21; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_17 = lean::cnstr_get(x_10, 3);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_17, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_17, 1);
lean::inc(x_21);
lean::dec(x_17);
if (lean::obj_tag(x_19) == 0)
{
obj* x_27; obj* x_31; 
lean::dec(x_10);
lean::dec(x_19);
lean::dec(x_21);
x_27 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_2);
lean::inc(x_27);
lean::inc(x_0);
x_31 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_27, x_2, x_3);
if (lean::obj_tag(x_31) == 0)
{
obj* x_36; obj* x_38; obj* x_39; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_36 = lean::cnstr_get(x_31, 0);
lean::inc(x_36);
if (lean::is_shared(x_31)) {
 lean::dec(x_31);
 x_38 = lean::box(0);
} else {
 lean::cnstr_release(x_31, 0);
 x_38 = x_31;
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_36);
return x_39;
}
else
{
obj* x_40; 
x_40 = lean::cnstr_get(x_31, 0);
lean::inc(x_40);
lean::dec(x_31);
x_15 = x_40;
goto lbl_16;
}
}
else
{
obj* x_43; 
x_43 = lean::cnstr_get(x_19, 0);
lean::inc(x_43);
lean::dec(x_19);
if (lean::obj_tag(x_43) == 0)
{
lean::dec(x_43);
if (lean::obj_tag(x_21) == 0)
{
obj* x_49; obj* x_53; 
lean::dec(x_10);
lean::dec(x_21);
x_49 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_2);
lean::inc(x_49);
lean::inc(x_0);
x_53 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_49, x_2, x_3);
if (lean::obj_tag(x_53) == 0)
{
obj* x_58; obj* x_60; obj* x_61; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_58 = lean::cnstr_get(x_53, 0);
lean::inc(x_58);
if (lean::is_shared(x_53)) {
 lean::dec(x_53);
 x_60 = lean::box(0);
} else {
 lean::cnstr_release(x_53, 0);
 x_60 = x_53;
}
if (lean::is_scalar(x_60)) {
 x_61 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_61 = x_60;
}
lean::cnstr_set(x_61, 0, x_58);
return x_61;
}
else
{
obj* x_62; 
x_62 = lean::cnstr_get(x_53, 0);
lean::inc(x_62);
lean::dec(x_53);
x_15 = x_62;
goto lbl_16;
}
}
else
{
obj* x_65; obj* x_68; obj* x_72; 
x_65 = lean::cnstr_get(x_21, 0);
lean::inc(x_65);
lean::dec(x_21);
x_68 = lean::cnstr_get(x_65, 1);
lean::inc(x_68);
lean::dec(x_65);
lean::inc(x_2);
x_72 = l_lean_elaborator_to__pexpr___main(x_68, x_2, x_3);
if (lean::obj_tag(x_72) == 0)
{
obj* x_78; obj* x_80; obj* x_81; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_10);
lean::dec(x_0);
lean::dec(x_2);
x_78 = lean::cnstr_get(x_72, 0);
lean::inc(x_78);
if (lean::is_shared(x_72)) {
 lean::dec(x_72);
 x_80 = lean::box(0);
} else {
 lean::cnstr_release(x_72, 0);
 x_80 = x_72;
}
if (lean::is_scalar(x_80)) {
 x_81 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_81 = x_80;
}
lean::cnstr_set(x_81, 0, x_78);
return x_81;
}
else
{
obj* x_82; obj* x_85; obj* x_87; obj* x_89; obj* x_90; obj* x_93; unsigned char x_94; obj* x_95; obj* x_97; obj* x_98; 
x_82 = lean::cnstr_get(x_72, 0);
lean::inc(x_82);
lean::dec(x_72);
x_85 = lean::cnstr_get(x_82, 0);
lean::inc(x_85);
x_87 = lean::cnstr_get(x_82, 1);
lean::inc(x_87);
if (lean::is_shared(x_82)) {
 lean::dec(x_82);
 x_89 = lean::box(0);
} else {
 lean::cnstr_release(x_82, 0);
 lean::cnstr_release(x_82, 1);
 x_89 = x_82;
}
x_90 = lean::cnstr_get(x_10, 1);
lean::inc(x_90);
lean::dec(x_10);
x_93 = l_lean_elaborator_mangle__ident(x_90);
x_94 = 0;
x_95 = lean::box(x_94);
lean::inc(x_93);
x_97 = lean_expr_local(x_93, x_93, x_85, x_95);
if (lean::is_scalar(x_89)) {
 x_98 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_98 = x_89;
}
lean::cnstr_set(x_98, 0, x_97);
lean::cnstr_set(x_98, 1, x_87);
x_15 = x_98;
goto lbl_16;
}
}
}
else
{
obj* x_102; obj* x_106; 
lean::dec(x_43);
lean::dec(x_10);
lean::dec(x_21);
x_102 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_2);
lean::inc(x_102);
lean::inc(x_0);
x_106 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_102, x_2, x_3);
if (lean::obj_tag(x_106) == 0)
{
obj* x_111; obj* x_113; obj* x_114; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_111 = lean::cnstr_get(x_106, 0);
lean::inc(x_111);
if (lean::is_shared(x_106)) {
 lean::dec(x_106);
 x_113 = lean::box(0);
} else {
 lean::cnstr_release(x_106, 0);
 x_113 = x_106;
}
if (lean::is_scalar(x_113)) {
 x_114 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_114 = x_113;
}
lean::cnstr_set(x_114, 0, x_111);
return x_114;
}
else
{
obj* x_115; 
x_115 = lean::cnstr_get(x_106, 0);
lean::inc(x_115);
lean::dec(x_106);
x_15 = x_115;
goto lbl_16;
}
}
}
lbl_16:
{
obj* x_118; obj* x_120; obj* x_122; obj* x_123; 
x_118 = lean::cnstr_get(x_15, 0);
lean::inc(x_118);
x_120 = lean::cnstr_get(x_15, 1);
lean::inc(x_120);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_122 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 lean::cnstr_release(x_15, 1);
 x_122 = x_15;
}
x_123 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1(x_0, x_12, x_2, x_120);
if (lean::obj_tag(x_123) == 0)
{
obj* x_127; obj* x_129; obj* x_130; 
lean::dec(x_14);
lean::dec(x_122);
lean::dec(x_118);
x_127 = lean::cnstr_get(x_123, 0);
lean::inc(x_127);
if (lean::is_shared(x_123)) {
 lean::dec(x_123);
 x_129 = lean::box(0);
} else {
 lean::cnstr_release(x_123, 0);
 x_129 = x_123;
}
if (lean::is_scalar(x_129)) {
 x_130 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_130 = x_129;
}
lean::cnstr_set(x_130, 0, x_127);
return x_130;
}
else
{
obj* x_131; obj* x_133; obj* x_134; obj* x_136; obj* x_139; obj* x_140; obj* x_141; 
x_131 = lean::cnstr_get(x_123, 0);
lean::inc(x_131);
if (lean::is_shared(x_123)) {
 lean::dec(x_123);
 x_133 = lean::box(0);
} else {
 lean::cnstr_release(x_123, 0);
 x_133 = x_123;
}
x_134 = lean::cnstr_get(x_131, 0);
lean::inc(x_134);
x_136 = lean::cnstr_get(x_131, 1);
lean::inc(x_136);
lean::dec(x_131);
if (lean::is_scalar(x_14)) {
 x_139 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_139 = x_14;
}
lean::cnstr_set(x_139, 0, x_118);
lean::cnstr_set(x_139, 1, x_134);
if (lean::is_scalar(x_122)) {
 x_140 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_140 = x_122;
}
lean::cnstr_set(x_140, 0, x_139);
lean::cnstr_set(x_140, 1, x_136);
if (lean::is_scalar(x_133)) {
 x_141 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_141 = x_133;
}
lean::cnstr_set(x_141, 0, x_140);
return x_141;
}
}
}
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("declaration.elaborate: unexpected input");
return x_0;
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__2(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_11; obj* x_12; obj* x_13; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = lean::cnstr_get(x_3, 2);
lean::inc(x_8);
lean::dec(x_3);
x_11 = l_lean_elaborator_infer__mod__to__pexpr(x_8);
x_12 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__2(x_5);
if (lean::is_scalar(x_7)) {
 x_13 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_13 = x_7;
}
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__3(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__4(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__4(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__5(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
lean::inc(x_3);
x_9 = lean::alloc_cnstr(4, 1, 0);
lean::cnstr_set(x_9, 0, x_3);
x_10 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(x_0, x_3, x_9);
x_0 = x_10;
x_1 = x_5;
goto _start;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__6(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__6(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__7(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_17; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
lean::dec(x_8);
lean::inc(x_1);
x_17 = l_lean_elaborator_to__pexpr___main(x_13, x_1, x_2);
if (lean::obj_tag(x_17) == 0)
{
obj* x_21; obj* x_23; obj* x_24; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_21 = lean::cnstr_get(x_17, 0);
lean::inc(x_21);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_23 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 x_23 = x_17;
}
if (lean::is_scalar(x_23)) {
 x_24 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_24 = x_23;
}
lean::cnstr_set(x_24, 0, x_21);
return x_24;
}
else
{
obj* x_25; obj* x_27; obj* x_28; obj* x_30; obj* x_32; obj* x_33; 
x_25 = lean::cnstr_get(x_17, 0);
lean::inc(x_25);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_27 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 x_27 = x_17;
}
x_28 = lean::cnstr_get(x_25, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_25, 1);
lean::inc(x_30);
if (lean::is_shared(x_25)) {
 lean::dec(x_25);
 x_32 = lean::box(0);
} else {
 lean::cnstr_release(x_25, 0);
 lean::cnstr_release(x_25, 1);
 x_32 = x_25;
}
x_33 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__7(x_10, x_1, x_30);
if (lean::obj_tag(x_33) == 0)
{
obj* x_37; obj* x_40; 
lean::dec(x_12);
lean::dec(x_28);
lean::dec(x_32);
x_37 = lean::cnstr_get(x_33, 0);
lean::inc(x_37);
lean::dec(x_33);
if (lean::is_scalar(x_27)) {
 x_40 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_40 = x_27;
}
lean::cnstr_set(x_40, 0, x_37);
return x_40;
}
else
{
obj* x_41; obj* x_44; obj* x_46; obj* x_49; obj* x_50; obj* x_51; 
x_41 = lean::cnstr_get(x_33, 0);
lean::inc(x_41);
lean::dec(x_33);
x_44 = lean::cnstr_get(x_41, 0);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_41, 1);
lean::inc(x_46);
lean::dec(x_41);
if (lean::is_scalar(x_12)) {
 x_49 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_49 = x_12;
}
lean::cnstr_set(x_49, 0, x_28);
lean::cnstr_set(x_49, 1, x_44);
if (lean::is_scalar(x_32)) {
 x_50 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_50 = x_32;
}
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_46);
if (lean::is_scalar(x_27)) {
 x_51 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_51 = x_27;
}
lean::cnstr_set(x_51, 0, x_50);
return x_51;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__8(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__8(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
switch (lean::obj_tag(x_10)) {
case 0:
{
obj* x_17; obj* x_20; 
x_17 = lean::cnstr_get(x_10, 0);
lean::inc(x_17);
lean::dec(x_10);
x_20 = lean::cnstr_get(x_17, 1);
lean::inc(x_20);
lean::dec(x_17);
if (lean::obj_tag(x_20) == 0)
{
obj* x_24; obj* x_28; 
lean::dec(x_20);
x_24 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_2);
lean::inc(x_24);
lean::inc(x_0);
x_28 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_24, x_2, x_3);
if (lean::obj_tag(x_28) == 0)
{
obj* x_33; obj* x_35; obj* x_36; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
x_33 = lean::cnstr_get(x_28, 0);
lean::inc(x_33);
if (lean::is_shared(x_28)) {
 lean::dec(x_28);
 x_35 = lean::box(0);
} else {
 lean::cnstr_release(x_28, 0);
 x_35 = x_28;
}
if (lean::is_scalar(x_35)) {
 x_36 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_36 = x_35;
}
lean::cnstr_set(x_36, 0, x_33);
return x_36;
}
else
{
obj* x_37; 
x_37 = lean::cnstr_get(x_28, 0);
lean::inc(x_37);
lean::dec(x_28);
x_15 = x_37;
goto lbl_16;
}
}
else
{
obj* x_40; unsigned char x_43; obj* x_44; obj* x_45; obj* x_46; 
x_40 = lean::cnstr_get(x_20, 0);
lean::inc(x_40);
lean::dec(x_20);
x_43 = 0;
x_44 = lean::box(x_43);
x_45 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_40);
x_46 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_3);
x_15 = x_46;
goto lbl_16;
}
}
case 1:
{
obj* x_47; obj* x_50; unsigned char x_53; obj* x_54; obj* x_55; obj* x_56; 
x_47 = lean::cnstr_get(x_10, 0);
lean::inc(x_47);
lean::dec(x_10);
x_50 = lean::cnstr_get(x_47, 1);
lean::inc(x_50);
lean::dec(x_47);
x_53 = 1;
x_54 = lean::box(x_53);
x_55 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_55, 0, x_54);
lean::cnstr_set(x_55, 1, x_50);
x_56 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_56, 0, x_55);
lean::cnstr_set(x_56, 1, x_3);
x_15 = x_56;
goto lbl_16;
}
case 2:
{
obj* x_57; obj* x_60; unsigned char x_63; obj* x_64; obj* x_65; obj* x_66; 
x_57 = lean::cnstr_get(x_10, 0);
lean::inc(x_57);
lean::dec(x_10);
x_60 = lean::cnstr_get(x_57, 1);
lean::inc(x_60);
lean::dec(x_57);
x_63 = 2;
x_64 = lean::box(x_63);
x_65 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_65, 0, x_64);
lean::cnstr_set(x_65, 1, x_60);
x_66 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_3);
x_15 = x_66;
goto lbl_16;
}
default:
{
obj* x_67; obj* x_70; unsigned char x_73; obj* x_74; obj* x_75; obj* x_76; 
x_67 = lean::cnstr_get(x_10, 0);
lean::inc(x_67);
lean::dec(x_10);
x_70 = lean::cnstr_get(x_67, 1);
lean::inc(x_70);
lean::dec(x_67);
x_73 = 3;
x_74 = lean::box(x_73);
x_75 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_75, 0, x_74);
lean::cnstr_set(x_75, 1, x_70);
x_76 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_3);
x_15 = x_76;
goto lbl_16;
}
}
lbl_16:
{
obj* x_77; obj* x_79; obj* x_81; obj* x_82; obj* x_84; obj* x_87; obj* x_89; obj* x_92; obj* x_94; 
x_77 = lean::cnstr_get(x_15, 0);
lean::inc(x_77);
x_79 = lean::cnstr_get(x_15, 1);
lean::inc(x_79);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_81 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 lean::cnstr_release(x_15, 1);
 x_81 = x_15;
}
x_82 = lean::cnstr_get(x_77, 0);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_77, 1);
lean::inc(x_84);
lean::dec(x_77);
x_87 = lean::cnstr_get(x_84, 2);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_87, 1);
lean::inc(x_89);
lean::dec(x_87);
x_92 = l_lean_expander_get__opt__type___main(x_89);
lean::inc(x_2);
x_94 = l_lean_elaborator_to__pexpr___main(x_92, x_2, x_79);
if (lean::obj_tag(x_94) == 0)
{
obj* x_102; obj* x_104; obj* x_105; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_82);
lean::dec(x_81);
lean::dec(x_84);
lean::dec(x_0);
lean::dec(x_2);
x_102 = lean::cnstr_get(x_94, 0);
lean::inc(x_102);
if (lean::is_shared(x_94)) {
 lean::dec(x_94);
 x_104 = lean::box(0);
} else {
 lean::cnstr_release(x_94, 0);
 x_104 = x_94;
}
if (lean::is_scalar(x_104)) {
 x_105 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_105 = x_104;
}
lean::cnstr_set(x_105, 0, x_102);
return x_105;
}
else
{
obj* x_106; obj* x_108; obj* x_109; obj* x_111; obj* x_114; 
x_106 = lean::cnstr_get(x_94, 0);
lean::inc(x_106);
if (lean::is_shared(x_94)) {
 lean::dec(x_94);
 x_108 = lean::box(0);
} else {
 lean::cnstr_release(x_94, 0);
 x_108 = x_94;
}
x_109 = lean::cnstr_get(x_106, 0);
lean::inc(x_109);
x_111 = lean::cnstr_get(x_106, 1);
lean::inc(x_111);
lean::dec(x_106);
x_114 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9(x_0, x_12, x_2, x_111);
if (lean::obj_tag(x_114) == 0)
{
obj* x_120; obj* x_123; 
lean::dec(x_14);
lean::dec(x_82);
lean::dec(x_81);
lean::dec(x_84);
lean::dec(x_109);
x_120 = lean::cnstr_get(x_114, 0);
lean::inc(x_120);
lean::dec(x_114);
if (lean::is_scalar(x_108)) {
 x_123 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_123 = x_108;
}
lean::cnstr_set(x_123, 0, x_120);
return x_123;
}
else
{
obj* x_124; obj* x_127; obj* x_129; obj* x_132; obj* x_133; obj* x_137; obj* x_138; obj* x_140; obj* x_141; obj* x_142; obj* x_145; obj* x_146; obj* x_147; obj* x_148; obj* x_149; obj* x_150; obj* x_152; obj* x_153; obj* x_154; obj* x_155; 
x_124 = lean::cnstr_get(x_114, 0);
lean::inc(x_124);
lean::dec(x_114);
x_127 = lean::cnstr_get(x_124, 0);
lean::inc(x_127);
x_129 = lean::cnstr_get(x_124, 1);
lean::inc(x_129);
lean::dec(x_124);
x_132 = l_lean_elaborator_mk__eqns___closed__1;
x_133 = l_lean_elaborator_dummy;
lean::inc(x_133);
lean::inc(x_132);
lean::inc(x_132);
x_137 = lean_expr_local(x_132, x_132, x_133, x_82);
x_138 = lean::cnstr_get(x_84, 0);
lean::inc(x_138);
x_140 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__8(x_138);
x_141 = l_lean_elaborator_names__to__pexpr(x_140);
x_142 = lean::cnstr_get(x_84, 1);
lean::inc(x_142);
lean::dec(x_84);
x_145 = l_lean_elaborator_infer__mod__to__pexpr(x_142);
x_146 = lean::box(0);
if (lean::is_scalar(x_14)) {
 x_147 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_147 = x_14;
}
lean::cnstr_set(x_147, 0, x_109);
lean::cnstr_set(x_147, 1, x_146);
x_148 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_148, 0, x_145);
lean::cnstr_set(x_148, 1, x_147);
x_149 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_149, 0, x_141);
lean::cnstr_set(x_149, 1, x_148);
x_150 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_150, 0, x_137);
lean::cnstr_set(x_150, 1, x_149);
lean::inc(x_132);
x_152 = l_lean_expr_mk__capp(x_132, x_150);
x_153 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_153, 0, x_152);
lean::cnstr_set(x_153, 1, x_127);
if (lean::is_scalar(x_81)) {
 x_154 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_154 = x_81;
}
lean::cnstr_set(x_154, 0, x_153);
lean::cnstr_set(x_154, 1, x_129);
if (lean::is_scalar(x_108)) {
 x_155 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_155 = x_108;
}
lean::cnstr_set(x_155, 0, x_154);
return x_155;
}
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__10(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__10(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__11(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__11(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__12(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
lean::inc(x_3);
x_9 = lean::alloc_cnstr(4, 1, 0);
lean::cnstr_set(x_9, 0, x_3);
x_10 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(x_0, x_3, x_9);
x_0 = x_10;
x_1 = x_5;
goto _start;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__13(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__13(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_11; obj* x_12; 
x_3 = lean::cnstr_get(x_2, 4);
lean::inc(x_3);
x_7 = l_lean_parser_command_declaration_has__view;
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
lean::inc(x_0);
x_11 = lean::apply_1(x_8, x_0);
x_12 = lean::cnstr_get(x_11, 1);
lean::inc(x_12);
switch (lean::obj_tag(x_12)) {
case 0:
{
obj* x_14; obj* x_17; obj* x_19; 
x_14 = lean::cnstr_get(x_12, 0);
lean::inc(x_14);
lean::dec(x_12);
x_17 = lean::cnstr_get(x_14, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_11, 0);
lean::inc(x_19);
lean::dec(x_11);
switch (lean::obj_tag(x_17)) {
case 0:
{
obj* x_23; obj* x_24; 
lean::dec(x_17);
x_23 = lean::mk_nat_obj(1u);
x_24 = l_lean_elaborator_elab__def__like(x_0, x_19, x_14, x_23, x_1, x_2);
x_5 = x_24;
goto lbl_6;
}
case 1:
{
obj* x_26; obj* x_27; 
lean::dec(x_17);
x_26 = lean::mk_nat_obj(5u);
x_27 = l_lean_elaborator_elab__def__like(x_0, x_19, x_14, x_26, x_1, x_2);
x_5 = x_27;
goto lbl_6;
}
default:
{
obj* x_29; obj* x_30; 
lean::dec(x_17);
x_29 = lean::mk_nat_obj(0u);
x_30 = l_lean_elaborator_elab__def__like(x_0, x_19, x_14, x_29, x_1, x_2);
x_5 = x_30;
goto lbl_6;
}
}
}
case 1:
{
obj* x_31; obj* x_34; obj* x_37; obj* x_38; obj* x_40; obj* x_42; obj* x_43; obj* x_45; obj* x_47; obj* x_50; obj* x_51; obj* x_52; obj* x_55; obj* x_57; obj* x_58; obj* x_59; 
x_31 = lean::cnstr_get(x_12, 0);
lean::inc(x_31);
lean::dec(x_12);
x_34 = lean::cnstr_get(x_11, 0);
lean::inc(x_34);
lean::dec(x_11);
x_37 = lean::box(0);
x_38 = lean::cnstr_get(x_31, 1);
lean::inc(x_38);
x_40 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1;
lean::inc(x_40);
x_42 = l_option_get__or__else___main___rarg(x_38, x_40);
x_43 = lean::cnstr_get(x_31, 2);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_43, 0);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_43, 1);
lean::inc(x_47);
lean::dec(x_43);
x_50 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_50, 0, x_47);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_45);
lean::cnstr_set(x_51, 1, x_50);
x_52 = lean::cnstr_get(x_31, 3);
lean::inc(x_52);
lean::dec(x_31);
x_55 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2;
lean::inc(x_55);
x_57 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_57, 0, x_55);
lean::cnstr_set(x_57, 1, x_37);
lean::cnstr_set(x_57, 2, x_42);
lean::cnstr_set(x_57, 3, x_51);
lean::cnstr_set(x_57, 4, x_52);
x_58 = lean::mk_nat_obj(3u);
x_59 = l_lean_elaborator_elab__def__like(x_0, x_34, x_57, x_58, x_1, x_2);
x_5 = x_59;
goto lbl_6;
}
case 2:
{
obj* x_60; obj* x_63; obj* x_66; obj* x_67; obj* x_69; obj* x_71; obj* x_74; obj* x_75; obj* x_76; obj* x_79; obj* x_80; obj* x_83; obj* x_84; obj* x_85; 
x_60 = lean::cnstr_get(x_12, 0);
lean::inc(x_60);
lean::dec(x_12);
x_63 = lean::cnstr_get(x_11, 0);
lean::inc(x_63);
lean::dec(x_11);
x_66 = lean::box(0);
x_67 = lean::cnstr_get(x_60, 1);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_67, 0);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_67, 1);
lean::inc(x_71);
lean::dec(x_67);
x_74 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_74, 0, x_71);
x_75 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_75, 0, x_69);
lean::cnstr_set(x_75, 1, x_74);
x_76 = lean::cnstr_get(x_60, 2);
lean::inc(x_76);
lean::dec(x_60);
x_79 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2;
x_80 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1;
lean::inc(x_80);
lean::inc(x_79);
x_83 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_83, 0, x_79);
lean::cnstr_set(x_83, 1, x_66);
lean::cnstr_set(x_83, 2, x_80);
lean::cnstr_set(x_83, 3, x_75);
lean::cnstr_set(x_83, 4, x_76);
x_84 = lean::mk_nat_obj(2u);
x_85 = l_lean_elaborator_elab__def__like(x_0, x_63, x_83, x_84, x_1, x_2);
x_5 = x_85;
goto lbl_6;
}
case 3:
{
obj* x_86; obj* x_89; obj* x_91; obj* x_94; obj* x_96; 
x_86 = lean::cnstr_get(x_12, 0);
lean::inc(x_86);
lean::dec(x_12);
x_89 = lean::cnstr_get(x_86, 1);
lean::inc(x_89);
x_91 = lean::cnstr_get(x_86, 2);
lean::inc(x_91);
lean::dec(x_86);
x_94 = lean::cnstr_get(x_91, 0);
lean::inc(x_94);
x_96 = lean::cnstr_get(x_91, 1);
lean::inc(x_96);
lean::dec(x_91);
if (lean::obj_tag(x_94) == 0)
{
obj* x_103; obj* x_105; 
lean::dec(x_89);
lean::dec(x_96);
lean::dec(x_94);
lean::dec(x_11);
x_103 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_103);
x_105 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_103, x_1, x_2);
x_5 = x_105;
goto lbl_6;
}
else
{
obj* x_106; 
x_106 = lean::cnstr_get(x_94, 0);
lean::inc(x_106);
lean::dec(x_94);
if (lean::obj_tag(x_106) == 0)
{
obj* x_110; obj* x_114; 
lean::dec(x_106);
x_110 = lean::cnstr_get(x_11, 0);
lean::inc(x_110);
lean::dec(x_11);
lean::inc(x_1);
x_114 = l_lean_elaborator_decl__modifiers__to__pexpr(x_110, x_1, x_2);
if (lean::obj_tag(x_114) == 0)
{
obj* x_119; obj* x_121; obj* x_122; 
lean::dec(x_89);
lean::dec(x_96);
lean::dec(x_0);
lean::dec(x_1);
x_119 = lean::cnstr_get(x_114, 0);
lean::inc(x_119);
if (lean::is_shared(x_114)) {
 lean::dec(x_114);
 x_121 = lean::box(0);
} else {
 lean::cnstr_release(x_114, 0);
 x_121 = x_114;
}
if (lean::is_scalar(x_121)) {
 x_122 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_122 = x_121;
}
lean::cnstr_set(x_122, 0, x_119);
x_5 = x_122;
goto lbl_6;
}
else
{
obj* x_123; obj* x_125; obj* x_126; obj* x_128; obj* x_131; obj* x_135; 
x_123 = lean::cnstr_get(x_114, 0);
lean::inc(x_123);
if (lean::is_shared(x_114)) {
 lean::dec(x_114);
 x_125 = lean::box(0);
} else {
 lean::cnstr_release(x_114, 0);
 x_125 = x_114;
}
x_126 = lean::cnstr_get(x_123, 0);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_123, 1);
lean::inc(x_128);
lean::dec(x_123);
x_131 = lean::cnstr_get(x_96, 1);
lean::inc(x_131);
lean::dec(x_96);
lean::inc(x_1);
x_135 = l_lean_elaborator_to__pexpr___main(x_131, x_1, x_128);
if (lean::obj_tag(x_135) == 0)
{
obj* x_140; obj* x_143; 
lean::dec(x_89);
lean::dec(x_126);
lean::dec(x_0);
lean::dec(x_1);
x_140 = lean::cnstr_get(x_135, 0);
lean::inc(x_140);
lean::dec(x_135);
if (lean::is_scalar(x_125)) {
 x_143 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_143 = x_125;
}
lean::cnstr_set(x_143, 0, x_140);
x_5 = x_143;
goto lbl_6;
}
else
{
obj* x_145; obj* x_148; obj* x_150; obj* x_153; obj* x_154; obj* x_155; obj* x_156; obj* x_157; obj* x_158; obj* x_160; obj* x_161; obj* x_163; obj* x_164; 
lean::dec(x_125);
x_145 = lean::cnstr_get(x_135, 0);
lean::inc(x_145);
lean::dec(x_135);
x_148 = lean::cnstr_get(x_145, 0);
lean::inc(x_148);
x_150 = lean::cnstr_get(x_145, 1);
lean::inc(x_150);
lean::dec(x_145);
x_153 = lean::box(0);
x_154 = l_lean_elaborator_ident__univ__params__to__pexpr(x_89);
x_155 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_155, 0, x_148);
lean::cnstr_set(x_155, 1, x_153);
x_156 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_156, 0, x_154);
lean::cnstr_set(x_156, 1, x_155);
x_157 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_157, 0, x_126);
lean::cnstr_set(x_157, 1, x_156);
x_158 = l_lean_elaborator_mk__eqns___closed__1;
lean::inc(x_158);
x_160 = l_lean_expr_mk__capp(x_158, x_157);
x_161 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3;
lean::inc(x_161);
x_163 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_163, 0, x_161);
lean::cnstr_set(x_163, 1, x_160);
x_164 = l_lean_elaborator_old__elab__command(x_0, x_163, x_1, x_150);
x_5 = x_164;
goto lbl_6;
}
}
}
else
{
obj* x_169; obj* x_171; 
lean::dec(x_89);
lean::dec(x_106);
lean::dec(x_96);
lean::dec(x_11);
x_169 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_169);
x_171 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_169, x_1, x_2);
x_5 = x_171;
goto lbl_6;
}
}
}
case 4:
{
obj* x_172; obj* x_175; obj* x_177; obj* x_179; obj* x_181; obj* x_183; 
x_172 = lean::cnstr_get(x_12, 0);
lean::inc(x_172);
lean::dec(x_12);
x_175 = lean::cnstr_get(x_172, 0);
lean::inc(x_175);
x_177 = lean::cnstr_get(x_172, 2);
lean::inc(x_177);
x_179 = lean::cnstr_get(x_172, 3);
lean::inc(x_179);
x_181 = lean::cnstr_get(x_172, 4);
lean::inc(x_181);
x_183 = lean::cnstr_get(x_172, 6);
lean::inc(x_183);
lean::dec(x_172);
if (lean::obj_tag(x_175) == 0)
{
obj* x_187; obj* x_189; 
lean::dec(x_175);
x_187 = lean::cnstr_get(x_181, 0);
lean::inc(x_187);
x_189 = lean::cnstr_get(x_181, 1);
lean::inc(x_189);
lean::dec(x_181);
if (lean::obj_tag(x_187) == 0)
{
obj* x_198; obj* x_200; 
lean::dec(x_189);
lean::dec(x_187);
lean::dec(x_183);
lean::dec(x_179);
lean::dec(x_177);
lean::dec(x_11);
x_198 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_198);
x_200 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_198, x_1, x_2);
x_5 = x_200;
goto lbl_6;
}
else
{
obj* x_201; obj* x_204; obj* x_209; 
x_201 = lean::cnstr_get(x_187, 0);
lean::inc(x_201);
lean::dec(x_187);
x_204 = lean::cnstr_get(x_11, 0);
lean::inc(x_204);
lean::dec(x_11);
lean::inc(x_1);
lean::inc(x_204);
x_209 = l_lean_elaborator_decl__modifiers__to__pexpr(x_204, x_1, x_2);
if (lean::obj_tag(x_209) == 0)
{
obj* x_218; obj* x_220; obj* x_221; 
lean::dec(x_189);
lean::dec(x_183);
lean::dec(x_179);
lean::dec(x_177);
lean::dec(x_204);
lean::dec(x_201);
lean::dec(x_0);
lean::dec(x_1);
x_218 = lean::cnstr_get(x_209, 0);
lean::inc(x_218);
if (lean::is_shared(x_209)) {
 lean::dec(x_209);
 x_220 = lean::box(0);
} else {
 lean::cnstr_release(x_209, 0);
 x_220 = x_209;
}
if (lean::is_scalar(x_220)) {
 x_221 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_221 = x_220;
}
lean::cnstr_set(x_221, 0, x_218);
x_5 = x_221;
goto lbl_6;
}
else
{
obj* x_222; obj* x_224; obj* x_225; obj* x_227; obj* x_230; obj* x_231; obj* x_233; 
x_222 = lean::cnstr_get(x_209, 0);
lean::inc(x_222);
if (lean::is_shared(x_209)) {
 lean::dec(x_209);
 x_224 = lean::box(0);
} else {
 lean::cnstr_release(x_209, 0);
 x_224 = x_209;
}
x_225 = lean::cnstr_get(x_222, 0);
lean::inc(x_225);
x_227 = lean::cnstr_get(x_222, 1);
lean::inc(x_227);
lean::dec(x_222);
x_230 = lean::box(0);
x_233 = lean::cnstr_get(x_204, 1);
lean::inc(x_233);
lean::dec(x_204);
if (lean::obj_tag(x_233) == 0)
{
lean::dec(x_233);
x_231 = x_230;
goto lbl_232;
}
else
{
obj* x_237; obj* x_240; 
x_237 = lean::cnstr_get(x_233, 0);
lean::inc(x_237);
lean::dec(x_233);
x_240 = lean::cnstr_get(x_237, 1);
lean::inc(x_240);
lean::dec(x_237);
x_231 = x_240;
goto lbl_232;
}
lbl_232:
{
obj* x_244; 
lean::inc(x_1);
x_244 = l_lean_elaborator_attrs__to__pexpr(x_231, x_1, x_227);
if (lean::obj_tag(x_244) == 0)
{
obj* x_254; obj* x_257; 
lean::dec(x_225);
lean::dec(x_189);
lean::dec(x_183);
lean::dec(x_230);
lean::dec(x_179);
lean::dec(x_177);
lean::dec(x_201);
lean::dec(x_0);
lean::dec(x_1);
x_254 = lean::cnstr_get(x_244, 0);
lean::inc(x_254);
lean::dec(x_244);
if (lean::is_scalar(x_224)) {
 x_257 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_257 = x_224;
}
lean::cnstr_set(x_257, 0, x_254);
x_5 = x_257;
goto lbl_6;
}
else
{
obj* x_258; obj* x_260; obj* x_261; obj* x_263; obj* x_267; obj* x_268; obj* x_270; obj* x_271; obj* x_272; 
x_258 = lean::cnstr_get(x_244, 0);
lean::inc(x_258);
if (lean::is_shared(x_244)) {
 lean::dec(x_244);
 x_260 = lean::box(0);
} else {
 lean::cnstr_release(x_244, 0);
 x_260 = x_244;
}
x_261 = lean::cnstr_get(x_258, 0);
lean::inc(x_261);
x_263 = lean::cnstr_get(x_258, 1);
lean::inc(x_263);
lean::dec(x_258);
lean::inc(x_230);
x_267 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_267, 0, x_261);
lean::cnstr_set(x_267, 1, x_230);
x_268 = l_lean_elaborator_mk__eqns___closed__1;
lean::inc(x_268);
x_270 = l_lean_expr_mk__capp(x_268, x_267);
if (lean::obj_tag(x_177) == 0)
{
obj* x_274; obj* x_276; 
x_274 = l_lean_expander_get__opt__type___main(x_189);
lean::inc(x_1);
x_276 = l_lean_elaborator_to__pexpr___main(x_274, x_1, x_263);
if (lean::obj_tag(x_177) == 0)
{
lean::dec(x_177);
if (lean::obj_tag(x_276) == 0)
{
obj* x_287; obj* x_290; 
lean::dec(x_225);
lean::dec(x_224);
lean::dec(x_270);
lean::dec(x_183);
lean::dec(x_230);
lean::dec(x_179);
lean::dec(x_201);
lean::dec(x_0);
lean::dec(x_1);
x_287 = lean::cnstr_get(x_276, 0);
lean::inc(x_287);
lean::dec(x_276);
if (lean::is_scalar(x_260)) {
 x_290 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_290 = x_260;
}
lean::cnstr_set(x_290, 0, x_287);
x_5 = x_290;
goto lbl_6;
}
else
{
obj* x_292; 
lean::dec(x_260);
x_292 = lean::cnstr_get(x_276, 0);
lean::inc(x_292);
lean::dec(x_276);
x_271 = x_230;
x_272 = x_292;
goto lbl_273;
}
}
else
{
obj* x_295; 
x_295 = lean::cnstr_get(x_177, 0);
lean::inc(x_295);
lean::dec(x_177);
if (lean::obj_tag(x_276) == 0)
{
obj* x_308; obj* x_311; 
lean::dec(x_225);
lean::dec(x_224);
lean::dec(x_270);
lean::dec(x_183);
lean::dec(x_230);
lean::dec(x_179);
lean::dec(x_201);
lean::dec(x_295);
lean::dec(x_0);
lean::dec(x_1);
x_308 = lean::cnstr_get(x_276, 0);
lean::inc(x_308);
lean::dec(x_276);
if (lean::is_scalar(x_260)) {
 x_311 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_311 = x_260;
}
lean::cnstr_set(x_311, 0, x_308);
x_5 = x_311;
goto lbl_6;
}
else
{
obj* x_313; obj* x_316; obj* x_319; 
lean::dec(x_260);
x_313 = lean::cnstr_get(x_276, 0);
lean::inc(x_313);
lean::dec(x_276);
x_316 = lean::cnstr_get(x_295, 1);
lean::inc(x_316);
lean::dec(x_295);
x_319 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__3(x_316);
x_271 = x_319;
x_272 = x_313;
goto lbl_273;
}
}
}
else
{
obj* x_320; obj* x_322; obj* x_324; obj* x_326; obj* x_328; obj* x_330; obj* x_332; obj* x_334; obj* x_336; obj* x_340; obj* x_341; obj* x_342; obj* x_344; obj* x_346; obj* x_348; obj* x_350; obj* x_353; obj* x_354; obj* x_356; obj* x_358; obj* x_360; obj* x_362; obj* x_364; obj* x_367; obj* x_368; obj* x_370; 
x_320 = lean::cnstr_get(x_177, 0);
lean::inc(x_320);
x_322 = lean::cnstr_get(x_263, 0);
lean::inc(x_322);
x_324 = lean::cnstr_get(x_263, 1);
lean::inc(x_324);
x_326 = lean::cnstr_get(x_263, 2);
lean::inc(x_326);
x_328 = lean::cnstr_get(x_263, 3);
lean::inc(x_328);
x_330 = lean::cnstr_get(x_263, 4);
lean::inc(x_330);
x_332 = lean::cnstr_get(x_330, 0);
lean::inc(x_332);
x_334 = lean::cnstr_get(x_330, 1);
lean::inc(x_334);
x_336 = lean::cnstr_get(x_320, 1);
lean::inc(x_336);
lean::dec(x_320);
lean::inc(x_336);
x_340 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__4(x_336);
x_341 = l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__5(x_334, x_340);
x_342 = lean::cnstr_get(x_330, 2);
lean::inc(x_342);
x_344 = lean::cnstr_get(x_330, 3);
lean::inc(x_344);
x_346 = lean::cnstr_get(x_330, 4);
lean::inc(x_346);
x_348 = lean::cnstr_get(x_330, 5);
lean::inc(x_348);
x_350 = lean::cnstr_get(x_330, 6);
lean::inc(x_350);
lean::dec(x_330);
x_353 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_353, 0, x_332);
lean::cnstr_set(x_353, 1, x_341);
lean::cnstr_set(x_353, 2, x_342);
lean::cnstr_set(x_353, 3, x_344);
lean::cnstr_set(x_353, 4, x_346);
lean::cnstr_set(x_353, 5, x_348);
lean::cnstr_set(x_353, 6, x_350);
x_354 = lean::cnstr_get(x_263, 5);
lean::inc(x_354);
x_356 = lean::cnstr_get(x_263, 6);
lean::inc(x_356);
x_358 = lean::cnstr_get(x_263, 7);
lean::inc(x_358);
x_360 = lean::cnstr_get(x_263, 8);
lean::inc(x_360);
x_362 = lean::cnstr_get(x_263, 9);
lean::inc(x_362);
x_364 = lean::cnstr_get(x_263, 10);
lean::inc(x_364);
lean::dec(x_263);
x_367 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_367, 0, x_322);
lean::cnstr_set(x_367, 1, x_324);
lean::cnstr_set(x_367, 2, x_326);
lean::cnstr_set(x_367, 3, x_328);
lean::cnstr_set(x_367, 4, x_353);
lean::cnstr_set(x_367, 5, x_354);
lean::cnstr_set(x_367, 6, x_356);
lean::cnstr_set(x_367, 7, x_358);
lean::cnstr_set(x_367, 8, x_360);
lean::cnstr_set(x_367, 9, x_362);
lean::cnstr_set(x_367, 10, x_364);
x_368 = l_lean_expander_get__opt__type___main(x_189);
lean::inc(x_1);
x_370 = l_lean_elaborator_to__pexpr___main(x_368, x_1, x_367);
if (lean::obj_tag(x_177) == 0)
{
lean::dec(x_177);
lean::dec(x_336);
if (lean::obj_tag(x_370) == 0)
{
obj* x_382; obj* x_385; 
lean::dec(x_225);
lean::dec(x_224);
lean::dec(x_270);
lean::dec(x_183);
lean::dec(x_230);
lean::dec(x_179);
lean::dec(x_201);
lean::dec(x_0);
lean::dec(x_1);
x_382 = lean::cnstr_get(x_370, 0);
lean::inc(x_382);
lean::dec(x_370);
if (lean::is_scalar(x_260)) {
 x_385 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_385 = x_260;
}
lean::cnstr_set(x_385, 0, x_382);
x_5 = x_385;
goto lbl_6;
}
else
{
obj* x_387; 
lean::dec(x_260);
x_387 = lean::cnstr_get(x_370, 0);
lean::inc(x_387);
lean::dec(x_370);
x_271 = x_230;
x_272 = x_387;
goto lbl_273;
}
}
else
{
lean::dec(x_177);
if (lean::obj_tag(x_370) == 0)
{
obj* x_401; obj* x_404; 
lean::dec(x_225);
lean::dec(x_224);
lean::dec(x_270);
lean::dec(x_183);
lean::dec(x_230);
lean::dec(x_179);
lean::dec(x_201);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_336);
x_401 = lean::cnstr_get(x_370, 0);
lean::inc(x_401);
lean::dec(x_370);
if (lean::is_scalar(x_260)) {
 x_404 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_404 = x_260;
}
lean::cnstr_set(x_404, 0, x_401);
x_5 = x_404;
goto lbl_6;
}
else
{
obj* x_406; obj* x_409; 
lean::dec(x_260);
x_406 = lean::cnstr_get(x_370, 0);
lean::inc(x_406);
lean::dec(x_370);
x_409 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__6(x_336);
x_271 = x_409;
x_272 = x_406;
goto lbl_273;
}
}
}
lbl_273:
{
obj* x_410; obj* x_412; obj* x_416; 
x_410 = lean::cnstr_get(x_272, 0);
lean::inc(x_410);
x_412 = lean::cnstr_get(x_272, 1);
lean::inc(x_412);
lean::dec(x_272);
lean::inc(x_1);
x_416 = l_lean_elaborator_simple__binders__to__pexpr(x_201, x_1, x_412);
if (lean::obj_tag(x_416) == 0)
{
obj* x_426; obj* x_429; 
lean::dec(x_225);
lean::dec(x_270);
lean::dec(x_183);
lean::dec(x_230);
lean::dec(x_179);
lean::dec(x_271);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_410);
x_426 = lean::cnstr_get(x_416, 0);
lean::inc(x_426);
lean::dec(x_416);
if (lean::is_scalar(x_224)) {
 x_429 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_429 = x_224;
}
lean::cnstr_set(x_429, 0, x_426);
x_5 = x_429;
goto lbl_6;
}
else
{
obj* x_430; obj* x_433; obj* x_435; obj* x_441; 
x_430 = lean::cnstr_get(x_416, 0);
lean::inc(x_430);
lean::dec(x_416);
x_433 = lean::cnstr_get(x_430, 0);
lean::inc(x_433);
x_435 = lean::cnstr_get(x_430, 1);
lean::inc(x_435);
lean::dec(x_430);
lean::inc(x_1);
lean::inc(x_183);
lean::inc(x_0);
x_441 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1(x_0, x_183, x_1, x_435);
if (lean::obj_tag(x_441) == 0)
{
obj* x_452; obj* x_455; 
lean::dec(x_225);
lean::dec(x_270);
lean::dec(x_183);
lean::dec(x_230);
lean::dec(x_179);
lean::dec(x_271);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_410);
lean::dec(x_433);
x_452 = lean::cnstr_get(x_441, 0);
lean::inc(x_452);
lean::dec(x_441);
if (lean::is_scalar(x_224)) {
 x_455 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_455 = x_224;
}
lean::cnstr_set(x_455, 0, x_452);
x_5 = x_455;
goto lbl_6;
}
else
{
obj* x_457; obj* x_460; obj* x_462; obj* x_465; obj* x_466; obj* x_469; unsigned char x_470; obj* x_471; obj* x_473; obj* x_475; obj* x_477; obj* x_479; obj* x_481; obj* x_483; obj* x_484; obj* x_486; obj* x_488; obj* x_490; obj* x_491; obj* x_492; obj* x_493; obj* x_494; obj* x_495; obj* x_496; obj* x_497; obj* x_499; obj* x_500; obj* x_502; obj* x_503; 
lean::dec(x_224);
x_457 = lean::cnstr_get(x_441, 0);
lean::inc(x_457);
lean::dec(x_441);
x_460 = lean::cnstr_get(x_457, 0);
lean::inc(x_460);
x_462 = lean::cnstr_get(x_457, 1);
lean::inc(x_462);
lean::dec(x_457);
x_465 = l_lean_elaborator_names__to__pexpr(x_271);
x_466 = lean::cnstr_get(x_179, 0);
lean::inc(x_466);
lean::dec(x_179);
x_469 = l_lean_elaborator_mangle__ident(x_466);
x_470 = 0;
x_471 = lean::box(x_470);
lean::inc(x_469);
x_473 = lean_expr_local(x_469, x_469, x_410, x_471);
lean::inc(x_230);
x_475 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_475, 0, x_473);
lean::cnstr_set(x_475, 1, x_230);
lean::inc(x_268);
x_477 = l_lean_expr_mk__capp(x_268, x_475);
lean::inc(x_268);
x_479 = l_lean_expr_mk__capp(x_268, x_460);
lean::inc(x_230);
x_481 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_481, 0, x_479);
lean::cnstr_set(x_481, 1, x_230);
lean::inc(x_268);
x_483 = l_lean_expr_mk__capp(x_268, x_481);
x_484 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__2(x_183);
lean::inc(x_268);
x_486 = l_lean_expr_mk__capp(x_268, x_484);
lean::inc(x_230);
x_488 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_488, 0, x_486);
lean::cnstr_set(x_488, 1, x_230);
lean::inc(x_268);
x_490 = l_lean_expr_mk__capp(x_268, x_488);
x_491 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_491, 0, x_490);
lean::cnstr_set(x_491, 1, x_230);
x_492 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_492, 0, x_483);
lean::cnstr_set(x_492, 1, x_491);
x_493 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_493, 0, x_433);
lean::cnstr_set(x_493, 1, x_492);
x_494 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_494, 0, x_477);
lean::cnstr_set(x_494, 1, x_493);
x_495 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_495, 0, x_465);
lean::cnstr_set(x_495, 1, x_494);
x_496 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_496, 0, x_270);
lean::cnstr_set(x_496, 1, x_495);
x_497 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_497, 0, x_225);
lean::cnstr_set(x_497, 1, x_496);
lean::inc(x_268);
x_499 = l_lean_expr_mk__capp(x_268, x_497);
x_500 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4;
lean::inc(x_500);
x_502 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_502, 0, x_500);
lean::cnstr_set(x_502, 1, x_499);
x_503 = l_lean_elaborator_old__elab__command(x_0, x_502, x_1, x_462);
x_5 = x_503;
goto lbl_6;
}
}
}
}
}
}
}
}
else
{
obj* x_510; obj* x_512; 
lean::dec(x_181);
lean::dec(x_183);
lean::dec(x_179);
lean::dec(x_175);
lean::dec(x_177);
lean::dec(x_11);
x_510 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_510);
x_512 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_510, x_1, x_2);
x_5 = x_512;
goto lbl_6;
}
}
default:
{
obj* x_513; obj* x_516; obj* x_518; obj* x_520; obj* x_522; obj* x_524; obj* x_526; obj* x_528; 
x_513 = lean::cnstr_get(x_12, 0);
lean::inc(x_513);
lean::dec(x_12);
x_516 = lean::cnstr_get(x_513, 0);
lean::inc(x_516);
x_518 = lean::cnstr_get(x_513, 1);
lean::inc(x_518);
x_520 = lean::cnstr_get(x_513, 2);
lean::inc(x_520);
x_522 = lean::cnstr_get(x_513, 3);
lean::inc(x_522);
x_524 = lean::cnstr_get(x_513, 4);
lean::inc(x_524);
x_526 = lean::cnstr_get(x_513, 6);
lean::inc(x_526);
x_528 = lean::cnstr_get(x_513, 7);
lean::inc(x_528);
lean::dec(x_513);
if (lean::obj_tag(x_516) == 0)
{
obj* x_532; obj* x_534; 
lean::dec(x_516);
x_532 = lean::cnstr_get(x_522, 0);
lean::inc(x_532);
x_534 = lean::cnstr_get(x_522, 1);
lean::inc(x_534);
lean::dec(x_522);
if (lean::obj_tag(x_532) == 0)
{
obj* x_545; obj* x_547; 
lean::dec(x_520);
lean::dec(x_518);
lean::dec(x_534);
lean::dec(x_528);
lean::dec(x_526);
lean::dec(x_11);
lean::dec(x_524);
lean::dec(x_532);
x_545 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_545);
x_547 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_545, x_1, x_2);
x_5 = x_547;
goto lbl_6;
}
else
{
obj* x_548; obj* x_551; obj* x_555; 
x_548 = lean::cnstr_get(x_532, 0);
lean::inc(x_548);
lean::dec(x_532);
x_551 = lean::cnstr_get(x_11, 0);
lean::inc(x_551);
lean::dec(x_11);
lean::inc(x_1);
x_555 = l_lean_elaborator_decl__modifiers__to__pexpr(x_551, x_1, x_2);
if (lean::obj_tag(x_555) == 0)
{
obj* x_565; obj* x_567; obj* x_568; 
lean::dec(x_520);
lean::dec(x_518);
lean::dec(x_534);
lean::dec(x_548);
lean::dec(x_528);
lean::dec(x_526);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_524);
x_565 = lean::cnstr_get(x_555, 0);
lean::inc(x_565);
if (lean::is_shared(x_555)) {
 lean::dec(x_555);
 x_567 = lean::box(0);
} else {
 lean::cnstr_release(x_555, 0);
 x_567 = x_555;
}
if (lean::is_scalar(x_567)) {
 x_568 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_568 = x_567;
}
lean::cnstr_set(x_568, 0, x_565);
x_5 = x_568;
goto lbl_6;
}
else
{
obj* x_569; obj* x_571; obj* x_572; obj* x_574; obj* x_577; obj* x_578; obj* x_579; 
x_569 = lean::cnstr_get(x_555, 0);
lean::inc(x_569);
if (lean::is_shared(x_555)) {
 lean::dec(x_555);
 x_571 = lean::box(0);
} else {
 lean::cnstr_release(x_555, 0);
 x_571 = x_555;
}
x_572 = lean::cnstr_get(x_569, 0);
lean::inc(x_572);
x_574 = lean::cnstr_get(x_569, 1);
lean::inc(x_574);
lean::dec(x_569);
x_577 = lean::box(0);
if (lean::obj_tag(x_518) == 0)
{
obj* x_581; obj* x_583; 
x_581 = l_lean_expander_get__opt__type___main(x_534);
lean::inc(x_1);
x_583 = l_lean_elaborator_to__pexpr___main(x_581, x_1, x_574);
if (lean::obj_tag(x_518) == 0)
{
lean::dec(x_518);
if (lean::obj_tag(x_583) == 0)
{
obj* x_595; obj* x_597; obj* x_598; 
lean::dec(x_577);
lean::dec(x_571);
lean::dec(x_520);
lean::dec(x_572);
lean::dec(x_548);
lean::dec(x_528);
lean::dec(x_526);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_524);
x_595 = lean::cnstr_get(x_583, 0);
lean::inc(x_595);
if (lean::is_shared(x_583)) {
 lean::dec(x_583);
 x_597 = lean::box(0);
} else {
 lean::cnstr_release(x_583, 0);
 x_597 = x_583;
}
if (lean::is_scalar(x_597)) {
 x_598 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_598 = x_597;
}
lean::cnstr_set(x_598, 0, x_595);
x_5 = x_598;
goto lbl_6;
}
else
{
obj* x_599; 
x_599 = lean::cnstr_get(x_583, 0);
lean::inc(x_599);
lean::dec(x_583);
x_578 = x_577;
x_579 = x_599;
goto lbl_580;
}
}
else
{
obj* x_602; 
x_602 = lean::cnstr_get(x_518, 0);
lean::inc(x_602);
lean::dec(x_518);
if (lean::obj_tag(x_583) == 0)
{
obj* x_616; obj* x_618; obj* x_619; 
lean::dec(x_577);
lean::dec(x_571);
lean::dec(x_520);
lean::dec(x_572);
lean::dec(x_602);
lean::dec(x_548);
lean::dec(x_528);
lean::dec(x_526);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_524);
x_616 = lean::cnstr_get(x_583, 0);
lean::inc(x_616);
if (lean::is_shared(x_583)) {
 lean::dec(x_583);
 x_618 = lean::box(0);
} else {
 lean::cnstr_release(x_583, 0);
 x_618 = x_583;
}
if (lean::is_scalar(x_618)) {
 x_619 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_619 = x_618;
}
lean::cnstr_set(x_619, 0, x_616);
x_5 = x_619;
goto lbl_6;
}
else
{
obj* x_620; obj* x_623; obj* x_626; 
x_620 = lean::cnstr_get(x_583, 0);
lean::inc(x_620);
lean::dec(x_583);
x_623 = lean::cnstr_get(x_602, 1);
lean::inc(x_623);
lean::dec(x_602);
x_626 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__10(x_623);
x_578 = x_626;
x_579 = x_620;
goto lbl_580;
}
}
}
else
{
obj* x_627; obj* x_629; obj* x_631; obj* x_633; obj* x_635; obj* x_637; obj* x_639; obj* x_641; obj* x_643; obj* x_647; obj* x_648; obj* x_649; obj* x_651; obj* x_653; obj* x_655; obj* x_657; obj* x_660; obj* x_661; obj* x_663; obj* x_665; obj* x_667; obj* x_669; obj* x_671; obj* x_674; obj* x_675; obj* x_677; 
x_627 = lean::cnstr_get(x_518, 0);
lean::inc(x_627);
x_629 = lean::cnstr_get(x_574, 0);
lean::inc(x_629);
x_631 = lean::cnstr_get(x_574, 1);
lean::inc(x_631);
x_633 = lean::cnstr_get(x_574, 2);
lean::inc(x_633);
x_635 = lean::cnstr_get(x_574, 3);
lean::inc(x_635);
x_637 = lean::cnstr_get(x_574, 4);
lean::inc(x_637);
x_639 = lean::cnstr_get(x_637, 0);
lean::inc(x_639);
x_641 = lean::cnstr_get(x_637, 1);
lean::inc(x_641);
x_643 = lean::cnstr_get(x_627, 1);
lean::inc(x_643);
lean::dec(x_627);
lean::inc(x_643);
x_647 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__11(x_643);
x_648 = l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__12(x_641, x_647);
x_649 = lean::cnstr_get(x_637, 2);
lean::inc(x_649);
x_651 = lean::cnstr_get(x_637, 3);
lean::inc(x_651);
x_653 = lean::cnstr_get(x_637, 4);
lean::inc(x_653);
x_655 = lean::cnstr_get(x_637, 5);
lean::inc(x_655);
x_657 = lean::cnstr_get(x_637, 6);
lean::inc(x_657);
lean::dec(x_637);
x_660 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_660, 0, x_639);
lean::cnstr_set(x_660, 1, x_648);
lean::cnstr_set(x_660, 2, x_649);
lean::cnstr_set(x_660, 3, x_651);
lean::cnstr_set(x_660, 4, x_653);
lean::cnstr_set(x_660, 5, x_655);
lean::cnstr_set(x_660, 6, x_657);
x_661 = lean::cnstr_get(x_574, 5);
lean::inc(x_661);
x_663 = lean::cnstr_get(x_574, 6);
lean::inc(x_663);
x_665 = lean::cnstr_get(x_574, 7);
lean::inc(x_665);
x_667 = lean::cnstr_get(x_574, 8);
lean::inc(x_667);
x_669 = lean::cnstr_get(x_574, 9);
lean::inc(x_669);
x_671 = lean::cnstr_get(x_574, 10);
lean::inc(x_671);
lean::dec(x_574);
x_674 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_674, 0, x_629);
lean::cnstr_set(x_674, 1, x_631);
lean::cnstr_set(x_674, 2, x_633);
lean::cnstr_set(x_674, 3, x_635);
lean::cnstr_set(x_674, 4, x_660);
lean::cnstr_set(x_674, 5, x_661);
lean::cnstr_set(x_674, 6, x_663);
lean::cnstr_set(x_674, 7, x_665);
lean::cnstr_set(x_674, 8, x_667);
lean::cnstr_set(x_674, 9, x_669);
lean::cnstr_set(x_674, 10, x_671);
x_675 = l_lean_expander_get__opt__type___main(x_534);
lean::inc(x_1);
x_677 = l_lean_elaborator_to__pexpr___main(x_675, x_1, x_674);
if (lean::obj_tag(x_518) == 0)
{
lean::dec(x_518);
lean::dec(x_643);
if (lean::obj_tag(x_677) == 0)
{
obj* x_690; obj* x_692; obj* x_693; 
lean::dec(x_577);
lean::dec(x_571);
lean::dec(x_520);
lean::dec(x_572);
lean::dec(x_548);
lean::dec(x_528);
lean::dec(x_526);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_524);
x_690 = lean::cnstr_get(x_677, 0);
lean::inc(x_690);
if (lean::is_shared(x_677)) {
 lean::dec(x_677);
 x_692 = lean::box(0);
} else {
 lean::cnstr_release(x_677, 0);
 x_692 = x_677;
}
if (lean::is_scalar(x_692)) {
 x_693 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_693 = x_692;
}
lean::cnstr_set(x_693, 0, x_690);
x_5 = x_693;
goto lbl_6;
}
else
{
obj* x_694; 
x_694 = lean::cnstr_get(x_677, 0);
lean::inc(x_694);
lean::dec(x_677);
x_578 = x_577;
x_579 = x_694;
goto lbl_580;
}
}
else
{
lean::dec(x_518);
if (lean::obj_tag(x_677) == 0)
{
obj* x_709; obj* x_711; obj* x_712; 
lean::dec(x_577);
lean::dec(x_571);
lean::dec(x_520);
lean::dec(x_572);
lean::dec(x_548);
lean::dec(x_528);
lean::dec(x_526);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_524);
lean::dec(x_643);
x_709 = lean::cnstr_get(x_677, 0);
lean::inc(x_709);
if (lean::is_shared(x_677)) {
 lean::dec(x_677);
 x_711 = lean::box(0);
} else {
 lean::cnstr_release(x_677, 0);
 x_711 = x_677;
}
if (lean::is_scalar(x_711)) {
 x_712 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_712 = x_711;
}
lean::cnstr_set(x_712, 0, x_709);
x_5 = x_712;
goto lbl_6;
}
else
{
obj* x_713; obj* x_716; 
x_713 = lean::cnstr_get(x_677, 0);
lean::inc(x_713);
lean::dec(x_677);
x_716 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__13(x_643);
x_578 = x_716;
x_579 = x_713;
goto lbl_580;
}
}
}
lbl_580:
{
obj* x_717; obj* x_719; obj* x_723; 
x_717 = lean::cnstr_get(x_579, 0);
lean::inc(x_717);
x_719 = lean::cnstr_get(x_579, 1);
lean::inc(x_719);
lean::dec(x_579);
lean::inc(x_1);
x_723 = l_lean_elaborator_simple__binders__to__pexpr(x_548, x_1, x_719);
if (lean::obj_tag(x_723) == 0)
{
obj* x_734; obj* x_737; 
lean::dec(x_577);
lean::dec(x_520);
lean::dec(x_572);
lean::dec(x_528);
lean::dec(x_526);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_578);
lean::dec(x_717);
lean::dec(x_524);
x_734 = lean::cnstr_get(x_723, 0);
lean::inc(x_734);
lean::dec(x_723);
if (lean::is_scalar(x_571)) {
 x_737 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_737 = x_571;
}
lean::cnstr_set(x_737, 0, x_734);
x_5 = x_737;
goto lbl_6;
}
else
{
obj* x_738; obj* x_741; obj* x_743; obj* x_746; obj* x_747; obj* x_750; obj* x_751; unsigned char x_752; obj* x_753; obj* x_757; obj* x_758; 
x_738 = lean::cnstr_get(x_723, 0);
lean::inc(x_738);
lean::dec(x_723);
x_741 = lean::cnstr_get(x_738, 0);
lean::inc(x_741);
x_743 = lean::cnstr_get(x_738, 1);
lean::inc(x_743);
lean::dec(x_738);
x_746 = l_lean_elaborator_names__to__pexpr(x_578);
x_747 = lean::cnstr_get(x_520, 0);
lean::inc(x_747);
lean::dec(x_520);
x_750 = l_lean_elaborator_mangle__ident(x_747);
x_751 = l_lean_elaborator_dummy;
x_752 = 0;
x_753 = lean::box(x_752);
lean::inc(x_753);
lean::inc(x_751);
lean::inc(x_750);
x_757 = lean_expr_local(x_750, x_750, x_751, x_753);
if (lean::obj_tag(x_524) == 0)
{
lean::dec(x_524);
x_758 = x_577;
goto lbl_759;
}
else
{
obj* x_761; obj* x_764; 
x_761 = lean::cnstr_get(x_524, 0);
lean::inc(x_761);
lean::dec(x_524);
x_764 = lean::cnstr_get(x_761, 1);
lean::inc(x_764);
lean::dec(x_761);
x_758 = x_764;
goto lbl_759;
}
lbl_759:
{
obj* x_768; 
lean::inc(x_1);
x_768 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__7(x_758, x_1, x_743);
if (lean::obj_tag(x_768) == 0)
{
obj* x_780; obj* x_783; 
lean::dec(x_577);
lean::dec(x_572);
lean::dec(x_741);
lean::dec(x_528);
lean::dec(x_753);
lean::dec(x_526);
lean::dec(x_746);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_717);
lean::dec(x_757);
x_780 = lean::cnstr_get(x_768, 0);
lean::inc(x_780);
lean::dec(x_768);
if (lean::is_scalar(x_571)) {
 x_783 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_783 = x_571;
}
lean::cnstr_set(x_783, 0, x_780);
x_5 = x_783;
goto lbl_6;
}
else
{
obj* x_784; obj* x_787; obj* x_789; obj* x_792; obj* x_794; obj* x_797; obj* x_798; 
x_784 = lean::cnstr_get(x_768, 0);
lean::inc(x_784);
lean::dec(x_768);
x_787 = lean::cnstr_get(x_784, 0);
lean::inc(x_787);
x_789 = lean::cnstr_get(x_784, 1);
lean::inc(x_789);
lean::dec(x_784);
x_792 = l_lean_elaborator_mk__eqns___closed__1;
lean::inc(x_792);
x_794 = l_lean_expr_mk__capp(x_792, x_787);
lean::inc(x_1);
lean::inc(x_0);
x_797 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9(x_0, x_528, x_1, x_789);
if (lean::obj_tag(x_526) == 0)
{
obj* x_800; 
x_800 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7;
lean::inc(x_800);
x_798 = x_800;
goto lbl_799;
}
else
{
obj* x_802; obj* x_804; obj* x_807; 
x_802 = lean::cnstr_get(x_526, 0);
lean::inc(x_802);
x_804 = lean::cnstr_get(x_802, 0);
lean::inc(x_804);
lean::dec(x_802);
x_807 = l_lean_elaborator_mangle__ident(x_804);
x_798 = x_807;
goto lbl_799;
}
lbl_799:
{
obj* x_810; 
lean::inc(x_751);
lean::inc(x_798);
x_810 = lean_expr_local(x_798, x_798, x_751, x_753);
if (lean::obj_tag(x_526) == 0)
{
lean::dec(x_526);
if (lean::obj_tag(x_797) == 0)
{
obj* x_822; obj* x_825; 
lean::dec(x_577);
lean::dec(x_572);
lean::dec(x_741);
lean::dec(x_746);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_794);
lean::dec(x_810);
lean::dec(x_717);
lean::dec(x_757);
x_822 = lean::cnstr_get(x_797, 0);
lean::inc(x_822);
lean::dec(x_797);
if (lean::is_scalar(x_571)) {
 x_825 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_825 = x_571;
}
lean::cnstr_set(x_825, 0, x_822);
x_5 = x_825;
goto lbl_6;
}
else
{
obj* x_827; obj* x_830; obj* x_832; obj* x_836; obj* x_837; obj* x_838; obj* x_840; obj* x_841; obj* x_842; obj* x_843; obj* x_844; obj* x_845; obj* x_846; obj* x_847; obj* x_849; obj* x_850; obj* x_852; obj* x_853; 
lean::dec(x_571);
x_827 = lean::cnstr_get(x_797, 0);
lean::inc(x_827);
lean::dec(x_797);
x_830 = lean::cnstr_get(x_827, 0);
lean::inc(x_830);
x_832 = lean::cnstr_get(x_827, 1);
lean::inc(x_832);
lean::dec(x_827);
lean::inc(x_792);
x_836 = l_lean_expr_mk__capp(x_792, x_830);
x_837 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_837, 0, x_836);
lean::cnstr_set(x_837, 1, x_577);
x_838 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5;
lean::inc(x_838);
x_840 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_840, 0, x_838);
lean::cnstr_set(x_840, 1, x_837);
x_841 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_841, 0, x_810);
lean::cnstr_set(x_841, 1, x_840);
x_842 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_842, 0, x_717);
lean::cnstr_set(x_842, 1, x_841);
x_843 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_843, 0, x_794);
lean::cnstr_set(x_843, 1, x_842);
x_844 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_844, 0, x_741);
lean::cnstr_set(x_844, 1, x_843);
x_845 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_845, 0, x_757);
lean::cnstr_set(x_845, 1, x_844);
x_846 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_846, 0, x_746);
lean::cnstr_set(x_846, 1, x_845);
x_847 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_847, 0, x_572);
lean::cnstr_set(x_847, 1, x_846);
lean::inc(x_792);
x_849 = l_lean_expr_mk__capp(x_792, x_847);
x_850 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6;
lean::inc(x_850);
x_852 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_852, 0, x_850);
lean::cnstr_set(x_852, 1, x_849);
x_853 = l_lean_elaborator_old__elab__command(x_0, x_852, x_1, x_832);
x_5 = x_853;
goto lbl_6;
}
}
else
{
obj* x_854; 
x_854 = lean::cnstr_get(x_526, 0);
lean::inc(x_854);
lean::dec(x_526);
if (lean::obj_tag(x_797) == 0)
{
obj* x_868; obj* x_871; 
lean::dec(x_854);
lean::dec(x_577);
lean::dec(x_572);
lean::dec(x_741);
lean::dec(x_746);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_794);
lean::dec(x_810);
lean::dec(x_717);
lean::dec(x_757);
x_868 = lean::cnstr_get(x_797, 0);
lean::inc(x_868);
lean::dec(x_797);
if (lean::is_scalar(x_571)) {
 x_871 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_871 = x_571;
}
lean::cnstr_set(x_871, 0, x_868);
x_5 = x_871;
goto lbl_6;
}
else
{
obj* x_873; obj* x_876; obj* x_878; obj* x_881; obj* x_884; obj* x_886; obj* x_887; obj* x_888; obj* x_889; obj* x_890; obj* x_891; obj* x_892; obj* x_893; obj* x_894; obj* x_895; obj* x_897; obj* x_898; obj* x_900; obj* x_901; 
lean::dec(x_571);
x_873 = lean::cnstr_get(x_797, 0);
lean::inc(x_873);
lean::dec(x_797);
x_876 = lean::cnstr_get(x_873, 0);
lean::inc(x_876);
x_878 = lean::cnstr_get(x_873, 1);
lean::inc(x_878);
lean::dec(x_873);
x_881 = lean::cnstr_get(x_854, 1);
lean::inc(x_881);
lean::dec(x_854);
x_884 = l_lean_elaborator_infer__mod__to__pexpr(x_881);
lean::inc(x_792);
x_886 = l_lean_expr_mk__capp(x_792, x_876);
x_887 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_887, 0, x_886);
lean::cnstr_set(x_887, 1, x_577);
x_888 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_888, 0, x_884);
lean::cnstr_set(x_888, 1, x_887);
x_889 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_889, 0, x_810);
lean::cnstr_set(x_889, 1, x_888);
x_890 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_890, 0, x_717);
lean::cnstr_set(x_890, 1, x_889);
x_891 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_891, 0, x_794);
lean::cnstr_set(x_891, 1, x_890);
x_892 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_892, 0, x_741);
lean::cnstr_set(x_892, 1, x_891);
x_893 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_893, 0, x_757);
lean::cnstr_set(x_893, 1, x_892);
x_894 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_894, 0, x_746);
lean::cnstr_set(x_894, 1, x_893);
x_895 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_895, 0, x_572);
lean::cnstr_set(x_895, 1, x_894);
lean::inc(x_792);
x_897 = l_lean_expr_mk__capp(x_792, x_895);
x_898 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6;
lean::inc(x_898);
x_900 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_900, 0, x_898);
lean::cnstr_set(x_900, 1, x_897);
x_901 = l_lean_elaborator_old__elab__command(x_0, x_900, x_1, x_878);
x_5 = x_901;
goto lbl_6;
}
}
}
}
}
}
}
}
}
}
else
{
obj* x_910; obj* x_912; 
lean::dec(x_520);
lean::dec(x_518);
lean::dec(x_516);
lean::dec(x_528);
lean::dec(x_526);
lean::dec(x_11);
lean::dec(x_524);
lean::dec(x_522);
x_910 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_910);
x_912 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_910, x_1, x_2);
x_5 = x_912;
goto lbl_6;
}
}
}
lbl_6:
{
if (lean::obj_tag(x_5) == 0)
{
obj* x_914; obj* x_916; obj* x_917; 
lean::dec(x_3);
x_914 = lean::cnstr_get(x_5, 0);
lean::inc(x_914);
if (lean::is_shared(x_5)) {
 lean::dec(x_5);
 x_916 = lean::box(0);
} else {
 lean::cnstr_release(x_5, 0);
 x_916 = x_5;
}
if (lean::is_scalar(x_916)) {
 x_917 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_917 = x_916;
}
lean::cnstr_set(x_917, 0, x_914);
return x_917;
}
else
{
obj* x_918; obj* x_920; obj* x_921; obj* x_923; obj* x_924; obj* x_926; obj* x_928; obj* x_930; obj* x_932; obj* x_934; obj* x_936; obj* x_938; obj* x_940; obj* x_942; obj* x_945; obj* x_946; obj* x_947; obj* x_948; 
x_918 = lean::cnstr_get(x_5, 0);
lean::inc(x_918);
if (lean::is_shared(x_5)) {
 lean::dec(x_5);
 x_920 = lean::box(0);
} else {
 lean::cnstr_release(x_5, 0);
 x_920 = x_5;
}
x_921 = lean::cnstr_get(x_918, 1);
lean::inc(x_921);
if (lean::is_shared(x_918)) {
 lean::dec(x_918);
 x_923 = lean::box(0);
} else {
 lean::cnstr_release(x_918, 0);
 lean::cnstr_release(x_918, 1);
 x_923 = x_918;
}
x_924 = lean::cnstr_get(x_921, 0);
lean::inc(x_924);
x_926 = lean::cnstr_get(x_921, 1);
lean::inc(x_926);
x_928 = lean::cnstr_get(x_921, 2);
lean::inc(x_928);
x_930 = lean::cnstr_get(x_921, 3);
lean::inc(x_930);
x_932 = lean::cnstr_get(x_921, 5);
lean::inc(x_932);
x_934 = lean::cnstr_get(x_921, 6);
lean::inc(x_934);
x_936 = lean::cnstr_get(x_921, 7);
lean::inc(x_936);
x_938 = lean::cnstr_get(x_921, 8);
lean::inc(x_938);
x_940 = lean::cnstr_get(x_921, 9);
lean::inc(x_940);
x_942 = lean::cnstr_get(x_921, 10);
lean::inc(x_942);
lean::dec(x_921);
x_945 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_945, 0, x_924);
lean::cnstr_set(x_945, 1, x_926);
lean::cnstr_set(x_945, 2, x_928);
lean::cnstr_set(x_945, 3, x_930);
lean::cnstr_set(x_945, 4, x_3);
lean::cnstr_set(x_945, 5, x_932);
lean::cnstr_set(x_945, 6, x_934);
lean::cnstr_set(x_945, 7, x_936);
lean::cnstr_set(x_945, 8, x_938);
lean::cnstr_set(x_945, 9, x_940);
lean::cnstr_set(x_945, 10, x_942);
x_946 = lean::box(0);
if (lean::is_scalar(x_923)) {
 x_947 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_947 = x_923;
}
lean::cnstr_set(x_947, 0, x_946);
lean::cnstr_set(x_947, 1, x_945);
if (lean::is_scalar(x_920)) {
 x_948 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_948 = x_920;
}
lean::cnstr_set(x_948, 0, x_947);
return x_948;
}
}
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string(".");
lean::inc(x_0);
x_3 = l_lean_name_to__string__with__sep___main(x_1, x_0);
x_4 = l_lean_parser_substring_of__string(x_3);
lean::inc(x_0);
lean::inc(x_0);
lean::inc(x_0);
lean::inc(x_0);
x_9 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_9, 0, x_0);
lean::cnstr_set(x_9, 1, x_4);
lean::cnstr_set(x_9, 2, x_0);
lean::cnstr_set(x_9, 3, x_0);
lean::cnstr_set(x_9, 4, x_0);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_0);
return x_10;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("def");
x_2 = l_string_trim(x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
x_4 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_4, 0, x_3);
x_5 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
lean::inc(x_0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::mk_string("constant");
lean::inc(x_0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_4);
x_7 = l_lean_kvmap_set__name(x_0, x_3, x_6);
return x_7;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
lean::inc(x_0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::mk_string("inductives");
lean::inc(x_0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_4);
x_7 = l_lean_kvmap_set__name(x_0, x_3, x_6);
return x_7;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = l_lean_elaborator_infer__mod__to__pexpr(x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
lean::inc(x_0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::mk_string("structure");
lean::inc(x_0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_4);
x_7 = l_lean_kvmap_set__name(x_0, x_3, x_6);
return x_7;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("mk");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_lean_elaborator_variables_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_8; 
x_3 = l_lean_parser_command_variables_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::inc(x_0);
x_7 = lean::apply_1(x_4, x_0);
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
lean::dec(x_7);
if (lean::obj_tag(x_8) == 0)
{
obj* x_12; obj* x_16; 
lean::dec(x_8);
x_12 = l_lean_elaborator_variables_elaborate___closed__1;
lean::inc(x_1);
lean::inc(x_12);
lean::inc(x_0);
x_16 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_12, x_1, x_2);
if (lean::obj_tag(x_16) == 0)
{
obj* x_19; obj* x_21; obj* x_22; 
lean::dec(x_0);
lean::dec(x_1);
x_19 = lean::cnstr_get(x_16, 0);
lean::inc(x_19);
if (lean::is_shared(x_16)) {
 lean::dec(x_16);
 x_21 = lean::box(0);
} else {
 lean::cnstr_release(x_16, 0);
 x_21 = x_16;
}
if (lean::is_scalar(x_21)) {
 x_22 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_22 = x_21;
}
lean::cnstr_set(x_22, 0, x_19);
return x_22;
}
else
{
obj* x_23; obj* x_25; obj* x_26; obj* x_28; obj* x_32; 
x_23 = lean::cnstr_get(x_16, 0);
lean::inc(x_23);
if (lean::is_shared(x_16)) {
 lean::dec(x_16);
 x_25 = lean::box(0);
} else {
 lean::cnstr_release(x_16, 0);
 x_25 = x_16;
}
x_26 = lean::cnstr_get(x_23, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_23, 1);
lean::inc(x_28);
lean::dec(x_23);
lean::inc(x_1);
x_32 = l_lean_elaborator_simple__binders__to__pexpr(x_26, x_1, x_28);
if (lean::obj_tag(x_32) == 0)
{
obj* x_35; obj* x_38; 
lean::dec(x_0);
lean::dec(x_1);
x_35 = lean::cnstr_get(x_32, 0);
lean::inc(x_35);
lean::dec(x_32);
if (lean::is_scalar(x_25)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_25;
}
lean::cnstr_set(x_38, 0, x_35);
return x_38;
}
else
{
obj* x_40; obj* x_43; obj* x_45; obj* x_48; obj* x_50; obj* x_51; 
lean::dec(x_25);
x_40 = lean::cnstr_get(x_32, 0);
lean::inc(x_40);
lean::dec(x_32);
x_43 = lean::cnstr_get(x_40, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_40, 1);
lean::inc(x_45);
lean::dec(x_40);
x_48 = l_lean_elaborator_variables_elaborate___closed__2;
lean::inc(x_48);
x_50 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_50, 0, x_48);
lean::cnstr_set(x_50, 1, x_43);
x_51 = l_lean_elaborator_old__elab__command(x_0, x_50, x_1, x_45);
return x_51;
}
}
}
else
{
obj* x_52; obj* x_56; 
x_52 = lean::cnstr_get(x_8, 0);
lean::inc(x_52);
lean::dec(x_8);
lean::inc(x_1);
x_56 = l_list_mfilter___main___at_lean_elaborator_variables_elaborate___spec__4(x_52, x_1, x_2);
if (lean::obj_tag(x_56) == 0)
{
obj* x_59; obj* x_61; obj* x_62; 
lean::dec(x_0);
lean::dec(x_1);
x_59 = lean::cnstr_get(x_56, 0);
lean::inc(x_59);
if (lean::is_shared(x_56)) {
 lean::dec(x_56);
 x_61 = lean::box(0);
} else {
 lean::cnstr_release(x_56, 0);
 x_61 = x_56;
}
if (lean::is_scalar(x_61)) {
 x_62 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_62 = x_61;
}
lean::cnstr_set(x_62, 0, x_59);
return x_62;
}
else
{
obj* x_63; obj* x_65; obj* x_66; obj* x_68; obj* x_72; 
x_63 = lean::cnstr_get(x_56, 0);
lean::inc(x_63);
if (lean::is_shared(x_56)) {
 lean::dec(x_56);
 x_65 = lean::box(0);
} else {
 lean::cnstr_release(x_56, 0);
 x_65 = x_56;
}
x_66 = lean::cnstr_get(x_63, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_63, 1);
lean::inc(x_68);
lean::dec(x_63);
lean::inc(x_1);
x_72 = l_lean_elaborator_simple__binders__to__pexpr(x_66, x_1, x_68);
if (lean::obj_tag(x_72) == 0)
{
obj* x_75; obj* x_78; 
lean::dec(x_0);
lean::dec(x_1);
x_75 = lean::cnstr_get(x_72, 0);
lean::inc(x_75);
lean::dec(x_72);
if (lean::is_scalar(x_65)) {
 x_78 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_78 = x_65;
}
lean::cnstr_set(x_78, 0, x_75);
return x_78;
}
else
{
obj* x_80; obj* x_83; obj* x_85; obj* x_88; obj* x_90; obj* x_91; 
lean::dec(x_65);
x_80 = lean::cnstr_get(x_72, 0);
lean::inc(x_80);
lean::dec(x_72);
x_83 = lean::cnstr_get(x_80, 0);
lean::inc(x_83);
x_85 = lean::cnstr_get(x_80, 1);
lean::inc(x_85);
lean::dec(x_80);
x_88 = l_lean_elaborator_variables_elaborate___closed__2;
lean::inc(x_88);
x_90 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_90, 0, x_88);
lean::cnstr_set(x_90, 1, x_83);
x_91 = l_lean_elaborator_old__elab__command(x_0, x_90, x_1, x_85);
return x_91;
}
}
}
}
}
obj* _init_l_lean_elaborator_variables_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("variables.elaborate: unexpected input");
return x_0;
}
}
obj* _init_l_lean_elaborator_variables_elaborate___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
lean::inc(x_0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::mk_string("variables");
lean::inc(x_0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_4);
x_7 = l_lean_kvmap_set__name(x_0, x_3, x_6);
return x_7;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_variables_elaborate___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_2, x_1);
return x_5;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_variables_elaborate___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_21; 
lean::inc(x_2);
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_5);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 2);
lean::inc(x_11);
lean::dec(x_0);
lean::inc(x_11);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_11);
lean::cnstr_set(x_15, 1, x_2);
x_16 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(x_9, x_1, x_15);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_add(x_11, x_17);
lean::dec(x_17);
lean::dec(x_11);
x_21 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_21, 0, x_8);
lean::cnstr_set(x_21, 1, x_16);
lean::cnstr_set(x_21, 2, x_18);
return x_21;
}
}
obj* l_list_mfilter___main___at_lean_elaborator_variables_elaborate___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; 
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
else
{
obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_14; obj* x_15; obj* x_17; obj* x_19; obj* x_20; obj* x_22; obj* x_24; obj* x_25; obj* x_27; unsigned char x_29; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_0, 1);
lean::inc(x_8);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_10 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_10 = x_0;
}
lean::inc(x_6);
x_14 = l_lean_parser_term_simple__binder_view_to__binder__info___main(x_6);
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_19 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 lean::cnstr_release(x_14, 1);
 x_19 = x_14;
}
x_20 = lean::cnstr_get(x_17, 0);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_17, 1);
lean::inc(x_22);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 lean::cnstr_release(x_17, 1);
 x_24 = x_17;
}
x_27 = l_lean_expander_binding__annotation__update;
lean::inc(x_27);
x_29 = l_lean_parser_syntax_is__of__kind___main(x_27, x_22);
if (x_29 == 0)
{
unsigned char x_33; obj* x_34; obj* x_35; 
lean::dec(x_15);
lean::dec(x_19);
lean::dec(x_20);
x_33 = 1;
x_34 = lean::box(x_33);
if (lean::is_scalar(x_24)) {
 x_35 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_35 = x_24;
}
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_2);
x_11 = x_35;
goto lbl_12;
}
else
{
obj* x_37; 
lean::dec(x_24);
x_37 = lean::box(0);
x_25 = x_37;
goto lbl_26;
}
lbl_12:
{
obj* x_38; obj* x_40; obj* x_42; obj* x_43; 
x_38 = lean::cnstr_get(x_11, 0);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_11, 1);
lean::inc(x_40);
if (lean::is_shared(x_11)) {
 lean::dec(x_11);
 x_42 = lean::box(0);
} else {
 lean::cnstr_release(x_11, 0);
 lean::cnstr_release(x_11, 1);
 x_42 = x_11;
}
x_43 = l_list_mfilter___main___at_lean_elaborator_variables_elaborate___spec__4(x_8, x_1, x_40);
if (lean::obj_tag(x_43) == 0)
{
obj* x_48; obj* x_50; obj* x_51; 
lean::dec(x_42);
lean::dec(x_38);
lean::dec(x_6);
lean::dec(x_10);
x_48 = lean::cnstr_get(x_43, 0);
lean::inc(x_48);
if (lean::is_shared(x_43)) {
 lean::dec(x_43);
 x_50 = lean::box(0);
} else {
 lean::cnstr_release(x_43, 0);
 x_50 = x_43;
}
if (lean::is_scalar(x_50)) {
 x_51 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_51 = x_50;
}
lean::cnstr_set(x_51, 0, x_48);
return x_51;
}
else
{
obj* x_52; obj* x_54; obj* x_55; obj* x_57; unsigned char x_60; 
x_52 = lean::cnstr_get(x_43, 0);
lean::inc(x_52);
if (lean::is_shared(x_43)) {
 lean::dec(x_43);
 x_54 = lean::box(0);
} else {
 lean::cnstr_release(x_43, 0);
 x_54 = x_43;
}
x_55 = lean::cnstr_get(x_52, 0);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_52, 1);
lean::inc(x_57);
lean::dec(x_52);
x_60 = lean::unbox(x_38);
lean::dec(x_38);
if (x_60 == 0)
{
obj* x_64; obj* x_65; 
lean::dec(x_6);
lean::dec(x_10);
if (lean::is_scalar(x_42)) {
 x_64 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_64 = x_42;
}
lean::cnstr_set(x_64, 0, x_55);
lean::cnstr_set(x_64, 1, x_57);
if (lean::is_scalar(x_54)) {
 x_65 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_65 = x_54;
}
lean::cnstr_set(x_65, 0, x_64);
return x_65;
}
else
{
obj* x_66; obj* x_67; obj* x_68; 
if (lean::is_scalar(x_10)) {
 x_66 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_66 = x_10;
}
lean::cnstr_set(x_66, 0, x_6);
lean::cnstr_set(x_66, 1, x_55);
if (lean::is_scalar(x_42)) {
 x_67 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_67 = x_42;
}
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_57);
if (lean::is_scalar(x_54)) {
 x_68 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_68 = x_54;
}
lean::cnstr_set(x_68, 0, x_67);
return x_68;
}
}
}
lbl_26:
{
obj* x_70; obj* x_71; obj* x_73; obj* x_77; 
lean::dec(x_25);
x_70 = l_lean_elaborator_mangle__ident(x_20);
x_71 = lean::cnstr_get(x_2, 4);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_71, 2);
lean::inc(x_73);
lean::inc(x_70);
lean::inc(x_73);
x_77 = l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1(x_73, x_70);
if (lean::obj_tag(x_77) == 0)
{
obj* x_82; obj* x_83; obj* x_86; obj* x_87; obj* x_90; obj* x_91; obj* x_92; obj* x_95; 
lean::dec(x_15);
lean::dec(x_71);
lean::dec(x_73);
lean::dec(x_77);
x_82 = lean::box(0);
x_83 = l_lean_name_to__string___closed__1;
lean::inc(x_70);
lean::inc(x_83);
x_86 = l_lean_name_to__string__with__sep___main(x_83, x_70);
x_87 = l_lean_parser_substring_of__string(x_86);
lean::inc(x_82);
lean::inc(x_82);
x_90 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_90, 0, x_82);
lean::cnstr_set(x_90, 1, x_87);
lean::cnstr_set(x_90, 2, x_70);
lean::cnstr_set(x_90, 3, x_82);
lean::cnstr_set(x_90, 4, x_82);
x_91 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_91, 0, x_90);
x_92 = l_string_join___closed__1;
lean::inc(x_1);
lean::inc(x_92);
x_95 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_91, x_92, x_1, x_2);
if (lean::obj_tag(x_95) == 0)
{
obj* x_101; obj* x_103; obj* x_104; 
lean::dec(x_6);
lean::dec(x_8);
lean::dec(x_10);
lean::dec(x_1);
lean::dec(x_19);
x_101 = lean::cnstr_get(x_95, 0);
lean::inc(x_101);
if (lean::is_shared(x_95)) {
 lean::dec(x_95);
 x_103 = lean::box(0);
} else {
 lean::cnstr_release(x_95, 0);
 x_103 = x_95;
}
if (lean::is_scalar(x_103)) {
 x_104 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_104 = x_103;
}
lean::cnstr_set(x_104, 0, x_101);
return x_104;
}
else
{
obj* x_105; obj* x_108; unsigned char x_111; obj* x_112; obj* x_113; 
x_105 = lean::cnstr_get(x_95, 0);
lean::inc(x_105);
lean::dec(x_95);
x_108 = lean::cnstr_get(x_105, 1);
lean::inc(x_108);
lean::dec(x_105);
x_111 = 0;
x_112 = lean::box(x_111);
if (lean::is_scalar(x_19)) {
 x_113 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_113 = x_19;
}
lean::cnstr_set(x_113, 0, x_112);
lean::cnstr_set(x_113, 1, x_108);
x_11 = x_113;
goto lbl_12;
}
}
else
{
obj* x_114; obj* x_117; obj* x_120; obj* x_122; obj* x_124; obj* x_126; obj* x_128; obj* x_130; obj* x_132; obj* x_134; obj* x_137; unsigned char x_138; obj* x_140; obj* x_141; obj* x_142; obj* x_144; obj* x_146; obj* x_148; obj* x_151; obj* x_152; obj* x_154; obj* x_156; obj* x_158; obj* x_160; obj* x_162; obj* x_165; unsigned char x_166; obj* x_167; obj* x_168; 
x_114 = lean::cnstr_get(x_77, 0);
lean::inc(x_114);
lean::dec(x_77);
x_117 = lean::cnstr_get(x_114, 1);
lean::inc(x_117);
lean::dec(x_114);
x_120 = lean::cnstr_get(x_2, 0);
lean::inc(x_120);
x_122 = lean::cnstr_get(x_2, 1);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_2, 2);
lean::inc(x_124);
x_126 = lean::cnstr_get(x_2, 3);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_71, 0);
lean::inc(x_128);
x_130 = lean::cnstr_get(x_71, 1);
lean::inc(x_130);
x_132 = lean::cnstr_get(x_117, 0);
lean::inc(x_132);
x_134 = lean::cnstr_get(x_117, 1);
lean::inc(x_134);
lean::dec(x_117);
x_137 = lean::alloc_cnstr(0, 2, 1);
lean::cnstr_set(x_137, 0, x_132);
lean::cnstr_set(x_137, 1, x_134);
x_138 = lean::unbox(x_15);
lean::dec(x_15);
lean::cnstr_set_scalar(x_137, sizeof(void*)*2, x_138);
x_140 = x_137;
x_141 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_variables_elaborate___spec__3(x_73, x_70, x_140);
x_142 = lean::cnstr_get(x_71, 3);
lean::inc(x_142);
x_144 = lean::cnstr_get(x_71, 4);
lean::inc(x_144);
x_146 = lean::cnstr_get(x_71, 5);
lean::inc(x_146);
x_148 = lean::cnstr_get(x_71, 6);
lean::inc(x_148);
lean::dec(x_71);
x_151 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_151, 0, x_128);
lean::cnstr_set(x_151, 1, x_130);
lean::cnstr_set(x_151, 2, x_141);
lean::cnstr_set(x_151, 3, x_142);
lean::cnstr_set(x_151, 4, x_144);
lean::cnstr_set(x_151, 5, x_146);
lean::cnstr_set(x_151, 6, x_148);
x_152 = lean::cnstr_get(x_2, 5);
lean::inc(x_152);
x_154 = lean::cnstr_get(x_2, 6);
lean::inc(x_154);
x_156 = lean::cnstr_get(x_2, 7);
lean::inc(x_156);
x_158 = lean::cnstr_get(x_2, 8);
lean::inc(x_158);
x_160 = lean::cnstr_get(x_2, 9);
lean::inc(x_160);
x_162 = lean::cnstr_get(x_2, 10);
lean::inc(x_162);
lean::dec(x_2);
x_165 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_165, 0, x_120);
lean::cnstr_set(x_165, 1, x_122);
lean::cnstr_set(x_165, 2, x_124);
lean::cnstr_set(x_165, 3, x_126);
lean::cnstr_set(x_165, 4, x_151);
lean::cnstr_set(x_165, 5, x_152);
lean::cnstr_set(x_165, 6, x_154);
lean::cnstr_set(x_165, 7, x_156);
lean::cnstr_set(x_165, 8, x_158);
lean::cnstr_set(x_165, 9, x_160);
lean::cnstr_set(x_165, 10, x_162);
x_166 = 0;
x_167 = lean::box(x_166);
if (lean::is_scalar(x_19)) {
 x_168 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_168 = x_19;
}
lean::cnstr_set(x_168, 0, x_167);
lean::cnstr_set(x_168, 1, x_165);
x_11 = x_168;
goto lbl_12;
}
}
}
}
}
obj* l_lean_elaborator_include_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_29; obj* x_30; obj* x_32; obj* x_34; obj* x_37; obj* x_38; obj* x_40; obj* x_42; obj* x_44; obj* x_46; obj* x_48; obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
lean::dec(x_1);
x_4 = l_lean_parser_command_include_has__view;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::apply_1(x_5, x_0);
x_8 = lean::cnstr_get(x_2, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_2, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_2, 2);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_2, 3);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_2, 4);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_16, 1);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_16, 2);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_16, 3);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_7, 1);
lean::inc(x_26);
lean::dec(x_7);
x_29 = l_list_foldl___main___at_lean_elaborator_include_elaborate___spec__2(x_24, x_26);
x_30 = lean::cnstr_get(x_16, 4);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_16, 5);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_16, 6);
lean::inc(x_34);
lean::dec(x_16);
x_37 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_37, 0, x_18);
lean::cnstr_set(x_37, 1, x_20);
lean::cnstr_set(x_37, 2, x_22);
lean::cnstr_set(x_37, 3, x_29);
lean::cnstr_set(x_37, 4, x_30);
lean::cnstr_set(x_37, 5, x_32);
lean::cnstr_set(x_37, 6, x_34);
x_38 = lean::cnstr_get(x_2, 5);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_2, 6);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_2, 7);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_2, 8);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_2, 9);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_2, 10);
lean::inc(x_48);
lean::dec(x_2);
x_51 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_51, 0, x_8);
lean::cnstr_set(x_51, 1, x_10);
lean::cnstr_set(x_51, 2, x_12);
lean::cnstr_set(x_51, 3, x_14);
lean::cnstr_set(x_51, 4, x_37);
lean::cnstr_set(x_51, 5, x_38);
lean::cnstr_set(x_51, 6, x_40);
lean::cnstr_set(x_51, 7, x_42);
lean::cnstr_set(x_51, 8, x_44);
lean::cnstr_set(x_51, 9, x_46);
lean::cnstr_set(x_51, 10, x_48);
x_52 = lean::box(0);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_51);
x_54 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_54, 0, x_53);
return x_54;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_include_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(x_0, x_1, x_2);
return x_3;
}
}
obj* l_list_foldl___main___at_lean_elaborator_include_elaborate___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = lean::box(0);
x_10 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(x_0, x_8, x_9);
x_0 = x_10;
x_1 = x_5;
goto _start;
}
}
}
obj* l_lean_elaborator_module_header_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_8; obj* x_10; 
x_3 = l_lean_parser_module_header_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::inc(x_0);
x_7 = lean::apply_1(x_4, x_0);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
if (lean::obj_tag(x_8) == 0)
{
obj* x_15; obj* x_17; 
lean::dec(x_8);
lean::dec(x_10);
x_15 = l_lean_elaborator_module_header_elaborate___closed__1;
lean::inc(x_15);
x_17 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_15, x_1, x_2);
return x_17;
}
else
{
lean::dec(x_8);
if (lean::obj_tag(x_10) == 0)
{
obj* x_22; obj* x_23; obj* x_24; 
lean::dec(x_10);
lean::dec(x_0);
lean::dec(x_1);
x_22 = lean::box(0);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_2);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_23);
return x_24;
}
else
{
obj* x_26; obj* x_28; 
lean::dec(x_10);
x_26 = l_lean_elaborator_module_header_elaborate___closed__1;
lean::inc(x_26);
x_28 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_26, x_1, x_2);
return x_28;
}
}
}
}
obj* _init_l_lean_elaborator_module_header_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("not implemented: imports");
return x_0;
}
}
obj* l_lean_elaborator_prec__to__nat___main(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::mk_nat_obj(0u);
return x_2;
}
else
{
obj* x_3; obj* x_6; obj* x_9; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_6);
return x_9;
}
}
}
obj* l_lean_elaborator_prec__to__nat(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_elaborator_prec__to__nat___main(x_0);
return x_1;
}
}
obj* l_lean_elaborator_command__parser__config_register__notation__tokens(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1(x_1, x_2);
return x_5;
}
}
obj* l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_1);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_9; obj* x_12; obj* x_14; 
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 1);
lean::inc(x_6);
lean::dec(x_1);
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
lean::dec(x_4);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_9, 3);
lean::inc(x_14);
lean::dec(x_9);
if (lean::obj_tag(x_12) == 0)
{
obj* x_21; 
lean::dec(x_6);
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_0);
x_21 = l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1;
lean::inc(x_21);
return x_21;
}
else
{
obj* x_23; obj* x_26; obj* x_28; obj* x_30; obj* x_33; obj* x_36; obj* x_37; obj* x_38; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_45; obj* x_47; obj* x_49; obj* x_52; 
x_23 = lean::cnstr_get(x_12, 0);
lean::inc(x_23);
lean::dec(x_12);
x_26 = lean::cnstr_get(x_0, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_26, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_26, 1);
lean::inc(x_30);
lean::dec(x_26);
x_33 = lean::cnstr_get(x_23, 1);
lean::inc(x_33);
lean::dec(x_23);
x_36 = l_string_trim(x_33);
x_37 = l_lean_elaborator_prec__to__nat___main(x_14);
x_38 = lean::box(0);
lean::inc(x_36);
x_40 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_40, 0, x_36);
lean::cnstr_set(x_40, 1, x_37);
lean::cnstr_set(x_40, 2, x_38);
x_41 = l_lean_parser_trie_insert___rarg(x_30, x_36, x_40);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_28);
lean::cnstr_set(x_42, 1, x_41);
x_43 = lean::cnstr_get(x_0, 1);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_0, 2);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_0, 3);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_0, 4);
lean::inc(x_49);
lean::dec(x_0);
x_52 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_52, 0, x_42);
lean::cnstr_set(x_52, 1, x_43);
lean::cnstr_set(x_52, 2, x_45);
lean::cnstr_set(x_52, 3, x_47);
lean::cnstr_set(x_52, 4, x_49);
x_0 = x_52;
x_1 = x_6;
goto _start;
}
}
}
}
obj* _init_l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("register_notation_tokens: unreachable");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_elaborator_command__parser__config_register__notation__parser(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; 
x_3 = lean::cnstr_get(x_1, 2);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
lean::inc(x_5);
x_8 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2(x_5);
if (lean::obj_tag(x_8) == 0)
{
obj* x_14; obj* x_16; obj* x_17; 
lean::dec(x_5);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
x_14 = lean::cnstr_get(x_8, 0);
lean::inc(x_14);
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_16 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 x_16 = x_8;
}
if (lean::is_scalar(x_16)) {
 x_17 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_17 = x_16;
}
lean::cnstr_set(x_17, 0, x_14);
return x_17;
}
else
{
obj* x_18; obj* x_20; obj* x_21; 
x_18 = lean::cnstr_get(x_8, 0);
lean::inc(x_18);
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 x_20 = x_8;
}
if (lean::obj_tag(x_5) == 0)
{
obj* x_30; 
lean::dec(x_18);
lean::dec(x_20);
lean::dec(x_5);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
x_30 = l_lean_elaborator_command__parser__config_register__notation__parser___closed__2;
lean::inc(x_30);
return x_30;
}
else
{
obj* x_32; obj* x_35; obj* x_38; 
x_32 = lean::cnstr_get(x_5, 0);
lean::inc(x_32);
lean::dec(x_5);
x_35 = lean::cnstr_get(x_32, 0);
lean::inc(x_35);
lean::dec(x_32);
x_38 = lean::cnstr_get(x_35, 1);
lean::inc(x_38);
lean::dec(x_35);
if (lean::obj_tag(x_38) == 0)
{
obj* x_48; 
lean::dec(x_18);
lean::dec(x_20);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_38);
x_48 = l_lean_elaborator_command__parser__config_register__notation__parser___closed__2;
lean::inc(x_48);
return x_48;
}
else
{
obj* x_50; obj* x_53; obj* x_56; 
x_50 = lean::cnstr_get(x_38, 0);
lean::inc(x_50);
lean::dec(x_38);
x_53 = lean::cnstr_get(x_50, 1);
lean::inc(x_53);
lean::dec(x_50);
x_56 = l_string_trim(x_53);
x_21 = x_56;
goto lbl_22;
}
}
lbl_22:
{
obj* x_57; obj* x_58; obj* x_59; 
x_57 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__3(x_18);
x_58 = l_list_join___main___rarg(x_57);
x_59 = lean::cnstr_get(x_1, 0);
lean::inc(x_59);
lean::dec(x_1);
if (lean::obj_tag(x_59) == 0)
{
obj* x_63; 
lean::dec(x_59);
x_63 = lean::cnstr_get(x_3, 0);
lean::inc(x_63);
lean::dec(x_3);
if (lean::obj_tag(x_63) == 0)
{
obj* x_67; obj* x_69; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_77; obj* x_79; obj* x_82; obj* x_83; 
lean::dec(x_63);
x_67 = lean::cnstr_get(x_2, 0);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_2, 1);
lean::inc(x_69);
x_71 = lean::box(0);
x_72 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_72, 0, x_71);
lean::cnstr_set(x_72, 1, x_21);
x_73 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__5), 7, 2);
lean::closure_set(x_73, 0, x_0);
lean::closure_set(x_73, 1, x_58);
x_74 = l_lean_parser_token__map_insert___rarg(x_69, x_72, x_73);
x_75 = lean::cnstr_get(x_2, 2);
lean::inc(x_75);
x_77 = lean::cnstr_get(x_2, 3);
lean::inc(x_77);
x_79 = lean::cnstr_get(x_2, 4);
lean::inc(x_79);
lean::dec(x_2);
x_82 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_82, 0, x_67);
lean::cnstr_set(x_82, 1, x_74);
lean::cnstr_set(x_82, 2, x_75);
lean::cnstr_set(x_82, 3, x_77);
lean::cnstr_set(x_82, 4, x_79);
if (lean::is_scalar(x_20)) {
 x_83 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_83 = x_20;
}
lean::cnstr_set(x_83, 0, x_82);
return x_83;
}
else
{
obj* x_85; obj* x_87; obj* x_89; obj* x_91; obj* x_92; obj* x_93; obj* x_94; obj* x_96; obj* x_97; obj* x_98; obj* x_99; obj* x_101; obj* x_104; obj* x_105; 
lean::dec(x_63);
x_85 = lean::cnstr_get(x_2, 0);
lean::inc(x_85);
x_87 = lean::cnstr_get(x_2, 1);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_2, 2);
lean::inc(x_89);
x_91 = lean::box(0);
x_92 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_92, 0, x_91);
lean::cnstr_set(x_92, 1, x_21);
x_93 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__5(x_58);
x_94 = l_lean_elaborator_command__parser__config_register__notation__parser___closed__1;
lean::inc(x_94);
x_96 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_96, 0, x_94);
lean::cnstr_set(x_96, 1, x_93);
x_97 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_term_sort__app_parser___spec__2), 8, 2);
lean::closure_set(x_97, 0, x_0);
lean::closure_set(x_97, 1, x_96);
x_98 = l_lean_parser_token__map_insert___rarg(x_89, x_92, x_97);
x_99 = lean::cnstr_get(x_2, 3);
lean::inc(x_99);
x_101 = lean::cnstr_get(x_2, 4);
lean::inc(x_101);
lean::dec(x_2);
x_104 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_104, 0, x_85);
lean::cnstr_set(x_104, 1, x_87);
lean::cnstr_set(x_104, 2, x_98);
lean::cnstr_set(x_104, 3, x_99);
lean::cnstr_set(x_104, 4, x_101);
if (lean::is_scalar(x_20)) {
 x_105 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_105 = x_20;
}
lean::cnstr_set(x_105, 0, x_104);
return x_105;
}
}
else
{
obj* x_107; 
lean::dec(x_59);
x_107 = lean::cnstr_get(x_3, 0);
lean::inc(x_107);
lean::dec(x_3);
if (lean::obj_tag(x_107) == 0)
{
obj* x_111; obj* x_113; obj* x_115; obj* x_117; obj* x_119; obj* x_120; obj* x_121; obj* x_122; obj* x_123; obj* x_126; obj* x_127; 
lean::dec(x_107);
x_111 = lean::cnstr_get(x_2, 0);
lean::inc(x_111);
x_113 = lean::cnstr_get(x_2, 1);
lean::inc(x_113);
x_115 = lean::cnstr_get(x_2, 2);
lean::inc(x_115);
x_117 = lean::cnstr_get(x_2, 3);
lean::inc(x_117);
x_119 = lean::box(0);
x_120 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_120, 0, x_119);
lean::cnstr_set(x_120, 1, x_21);
x_121 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__5), 7, 2);
lean::closure_set(x_121, 0, x_0);
lean::closure_set(x_121, 1, x_58);
x_122 = l_lean_parser_token__map_insert___rarg(x_117, x_120, x_121);
x_123 = lean::cnstr_get(x_2, 4);
lean::inc(x_123);
lean::dec(x_2);
x_126 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_126, 0, x_111);
lean::cnstr_set(x_126, 1, x_113);
lean::cnstr_set(x_126, 2, x_115);
lean::cnstr_set(x_126, 3, x_122);
lean::cnstr_set(x_126, 4, x_123);
if (lean::is_scalar(x_20)) {
 x_127 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_127 = x_20;
}
lean::cnstr_set(x_127, 0, x_126);
return x_127;
}
else
{
obj* x_129; obj* x_131; obj* x_133; obj* x_135; obj* x_137; obj* x_140; obj* x_141; obj* x_142; obj* x_143; obj* x_145; obj* x_146; obj* x_147; obj* x_148; obj* x_149; 
lean::dec(x_107);
x_129 = lean::cnstr_get(x_2, 0);
lean::inc(x_129);
x_131 = lean::cnstr_get(x_2, 1);
lean::inc(x_131);
x_133 = lean::cnstr_get(x_2, 2);
lean::inc(x_133);
x_135 = lean::cnstr_get(x_2, 3);
lean::inc(x_135);
x_137 = lean::cnstr_get(x_2, 4);
lean::inc(x_137);
lean::dec(x_2);
x_140 = lean::box(0);
x_141 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_141, 0, x_140);
lean::cnstr_set(x_141, 1, x_21);
x_142 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__6(x_58);
x_143 = l_lean_elaborator_command__parser__config_register__notation__parser___closed__1;
lean::inc(x_143);
x_145 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_145, 0, x_143);
lean::cnstr_set(x_145, 1, x_142);
x_146 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_term_sort__app_parser___spec__2), 8, 2);
lean::closure_set(x_146, 0, x_0);
lean::closure_set(x_146, 1, x_145);
x_147 = l_lean_parser_token__map_insert___rarg(x_137, x_141, x_146);
x_148 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_148, 0, x_129);
lean::cnstr_set(x_148, 1, x_131);
lean::cnstr_set(x_148, 2, x_133);
lean::cnstr_set(x_148, 3, x_135);
lean::cnstr_set(x_148, 4, x_147);
if (lean::is_scalar(x_20)) {
 x_149 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_149 = x_20;
}
lean::cnstr_set(x_149, 0, x_148);
return x_149;
}
}
}
}
}
}
obj* _init_l_lean_elaborator_command__parser__config_register__notation__parser___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_get__leading), 6, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_command__parser__config_register__notation__parser___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("register_notation_parser: unreachable");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1___rarg(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_3);
lean::cnstr_set(x_7, 1, x_6);
return x_7;
}
}
}
obj* l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1___rarg), 1, 0);
return x_2;
}
}
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = l_lean_expander_expand__bracketed__binder___main___closed__4;
lean::inc(x_2);
return x_2;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_15; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_8 = x_0;
}
x_13 = lean::cnstr_get(x_4, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_13, 1);
lean::inc(x_15);
lean::dec(x_13);
if (lean::obj_tag(x_15) == 0)
{
obj* x_20; 
lean::dec(x_15);
lean::dec(x_4);
x_20 = l_lean_elaborator_command__parser__config_register__notation__parser___closed__2;
lean::inc(x_20);
x_9 = x_20;
goto lbl_10;
}
else
{
obj* x_22; obj* x_25; obj* x_28; obj* x_30; obj* x_31; obj* x_32; 
x_22 = lean::cnstr_get(x_15, 0);
lean::inc(x_22);
lean::dec(x_15);
x_25 = lean::cnstr_get(x_22, 1);
lean::inc(x_25);
lean::dec(x_22);
x_28 = l_string_trim(x_25);
lean::inc(x_28);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_30, 0, x_28);
x_31 = lean::mk_nat_obj(0u);
x_32 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser___spec__1), 8, 3);
lean::closure_set(x_32, 0, x_28);
lean::closure_set(x_32, 1, x_31);
lean::closure_set(x_32, 2, x_30);
x_11 = x_32;
goto lbl_12;
}
lbl_10:
{
if (lean::obj_tag(x_9) == 0)
{
obj* x_35; obj* x_37; obj* x_38; 
lean::dec(x_6);
lean::dec(x_8);
x_35 = lean::cnstr_get(x_9, 0);
lean::inc(x_35);
if (lean::is_shared(x_9)) {
 lean::dec(x_9);
 x_37 = lean::box(0);
} else {
 lean::cnstr_release(x_9, 0);
 x_37 = x_9;
}
if (lean::is_scalar(x_37)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_37;
}
lean::cnstr_set(x_38, 0, x_35);
return x_38;
}
else
{
obj* x_39; obj* x_41; obj* x_42; 
x_39 = lean::cnstr_get(x_9, 0);
lean::inc(x_39);
if (lean::is_shared(x_9)) {
 lean::dec(x_9);
 x_41 = lean::box(0);
} else {
 lean::cnstr_release(x_9, 0);
 x_41 = x_9;
}
x_42 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2(x_6);
if (lean::obj_tag(x_42) == 0)
{
obj* x_45; obj* x_48; 
lean::dec(x_39);
lean::dec(x_8);
x_45 = lean::cnstr_get(x_42, 0);
lean::inc(x_45);
lean::dec(x_42);
if (lean::is_scalar(x_41)) {
 x_48 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_48 = x_41;
}
lean::cnstr_set(x_48, 0, x_45);
return x_48;
}
else
{
obj* x_49; obj* x_52; obj* x_53; 
x_49 = lean::cnstr_get(x_42, 0);
lean::inc(x_49);
lean::dec(x_42);
if (lean::is_scalar(x_8)) {
 x_52 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_52 = x_8;
}
lean::cnstr_set(x_52, 0, x_39);
lean::cnstr_set(x_52, 1, x_49);
if (lean::is_scalar(x_41)) {
 x_53 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_53 = x_41;
}
lean::cnstr_set(x_53, 0, x_52);
return x_53;
}
}
}
lbl_12:
{
obj* x_54; obj* x_56; 
x_56 = lean::cnstr_get(x_4, 1);
lean::inc(x_56);
lean::dec(x_4);
if (lean::obj_tag(x_56) == 0)
{
obj* x_60; 
lean::dec(x_56);
x_60 = l_lean_expander_no__expansion___closed__1;
lean::inc(x_60);
x_54 = x_60;
goto lbl_55;
}
else
{
obj* x_62; obj* x_64; 
x_62 = lean::cnstr_get(x_56, 0);
lean::inc(x_62);
if (lean::is_shared(x_56)) {
 lean::dec(x_56);
 x_64 = lean::box(0);
} else {
 lean::cnstr_release(x_56, 0);
 x_64 = x_56;
}
switch (lean::obj_tag(x_62)) {
case 0:
{
obj* x_67; 
lean::dec(x_64);
lean::dec(x_62);
x_67 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1;
lean::inc(x_67);
x_54 = x_67;
goto lbl_55;
}
case 1:
{
obj* x_71; 
lean::dec(x_64);
lean::dec(x_62);
x_71 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2;
lean::inc(x_71);
x_54 = x_71;
goto lbl_55;
}
default:
{
obj* x_73; obj* x_76; 
x_73 = lean::cnstr_get(x_62, 0);
lean::inc(x_73);
lean::dec(x_62);
x_76 = lean::cnstr_get(x_73, 1);
lean::inc(x_76);
lean::dec(x_73);
if (lean::obj_tag(x_76) == 0)
{
obj* x_81; 
lean::dec(x_76);
lean::dec(x_64);
x_81 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3;
lean::inc(x_81);
x_54 = x_81;
goto lbl_55;
}
else
{
obj* x_83; obj* x_86; 
x_83 = lean::cnstr_get(x_76, 0);
lean::inc(x_83);
lean::dec(x_76);
x_86 = lean::cnstr_get(x_83, 1);
lean::inc(x_86);
lean::dec(x_83);
switch (lean::obj_tag(x_86)) {
case 0:
{
obj* x_89; obj* x_92; obj* x_93; obj* x_94; obj* x_95; 
x_89 = lean::cnstr_get(x_86, 0);
lean::inc(x_89);
lean::dec(x_86);
x_92 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_89);
x_93 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_93, 0, x_92);
if (lean::is_scalar(x_64)) {
 x_94 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_94 = x_64;
}
lean::cnstr_set(x_94, 0, x_93);
x_95 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_95, 0, x_94);
x_54 = x_95;
goto lbl_55;
}
case 1:
{
obj* x_98; 
lean::dec(x_64);
lean::dec(x_86);
x_98 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4;
lean::inc(x_98);
x_54 = x_98;
goto lbl_55;
}
case 2:
{
obj* x_100; obj* x_103; obj* x_106; obj* x_107; obj* x_108; obj* x_109; 
x_100 = lean::cnstr_get(x_86, 0);
lean::inc(x_100);
lean::dec(x_86);
x_103 = lean::cnstr_get(x_100, 2);
lean::inc(x_103);
lean::dec(x_100);
x_106 = l_lean_elaborator_prec__to__nat___main(x_103);
x_107 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_107, 0, x_106);
if (lean::is_scalar(x_64)) {
 x_108 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_108 = x_64;
}
lean::cnstr_set(x_108, 0, x_107);
x_109 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_109, 0, x_108);
x_54 = x_109;
goto lbl_55;
}
default:
{
obj* x_112; 
lean::dec(x_64);
lean::dec(x_86);
x_112 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4;
lean::inc(x_112);
x_54 = x_112;
goto lbl_55;
}
}
}
}
}
}
lbl_55:
{
if (lean::obj_tag(x_54) == 0)
{
obj* x_115; obj* x_117; obj* x_118; 
lean::dec(x_11);
x_115 = lean::cnstr_get(x_54, 0);
lean::inc(x_115);
if (lean::is_shared(x_54)) {
 lean::dec(x_54);
 x_117 = lean::box(0);
} else {
 lean::cnstr_release(x_54, 0);
 x_117 = x_54;
}
if (lean::is_scalar(x_117)) {
 x_118 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_118 = x_117;
}
lean::cnstr_set(x_118, 0, x_115);
x_9 = x_118;
goto lbl_10;
}
else
{
obj* x_119; obj* x_121; obj* x_122; obj* x_123; obj* x_124; 
x_119 = lean::cnstr_get(x_54, 0);
lean::inc(x_119);
if (lean::is_shared(x_54)) {
 lean::dec(x_54);
 x_121 = lean::box(0);
} else {
 lean::cnstr_release(x_54, 0);
 x_121 = x_54;
}
x_122 = l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1___rarg(x_119);
x_123 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_123, 0, x_11);
lean::cnstr_set(x_123, 1, x_122);
if (lean::is_scalar(x_121)) {
 x_124 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_124 = x_121;
}
lean::cnstr_set(x_124, 0, x_123);
x_9 = x_124;
goto lbl_10;
}
}
}
}
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_binder__ident_parser), 5, 0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_binders_parser), 5, 0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::mk_nat_obj(0u);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("register_notation_parser: unimplemented");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__3(x_5);
if (lean::is_scalar(x_7)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_7;
}
lean::cnstr_set(x_9, 0, x_3);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_8; 
lean::dec(x_1);
x_8 = lean::apply_5(x_0, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__5(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4), 7, 1);
lean::closure_set(x_8, 0, x_3);
x_9 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__5(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__6(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4), 7, 1);
lean::closure_set(x_8, 0, x_3);
x_9 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__6(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_lean_elaborator_update__parser__config(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_11; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 0);
lean::inc(x_6);
lean::inc(x_1);
lean::inc(x_0);
lean::inc(x_6);
x_11 = l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__1(x_4, x_6, x_0, x_1);
if (lean::obj_tag(x_11) == 0)
{
obj* x_16; obj* x_18; obj* x_19; 
lean::dec(x_6);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
x_16 = lean::cnstr_get(x_11, 0);
lean::inc(x_16);
if (lean::is_shared(x_11)) {
 lean::dec(x_11);
 x_18 = lean::box(0);
} else {
 lean::cnstr_release(x_11, 0);
 x_18 = x_11;
}
if (lean::is_scalar(x_18)) {
 x_19 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_19 = x_18;
}
lean::cnstr_set(x_19, 0, x_16);
return x_19;
}
else
{
obj* x_20; obj* x_22; obj* x_23; obj* x_25; obj* x_27; obj* x_28; obj* x_30; obj* x_32; obj* x_35; obj* x_36; 
x_20 = lean::cnstr_get(x_11, 0);
lean::inc(x_20);
if (lean::is_shared(x_11)) {
 lean::dec(x_11);
 x_22 = lean::box(0);
} else {
 lean::cnstr_release(x_11, 0);
 x_22 = x_11;
}
x_23 = lean::cnstr_get(x_20, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_20, 1);
lean::inc(x_25);
if (lean::is_shared(x_20)) {
 lean::dec(x_20);
 x_27 = lean::box(0);
} else {
 lean::cnstr_release(x_20, 0);
 lean::cnstr_release(x_20, 1);
 x_27 = x_20;
}
x_28 = lean::cnstr_get(x_1, 1);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_1, 4);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_30, 0);
lean::inc(x_32);
lean::inc(x_28);
x_35 = l_list_append___main___rarg(x_28, x_32);
x_36 = l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__2(x_23, x_35, x_0, x_25);
if (lean::obj_tag(x_36) == 0)
{
obj* x_43; obj* x_46; 
lean::dec(x_28);
lean::dec(x_6);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_27);
lean::dec(x_30);
x_43 = lean::cnstr_get(x_36, 0);
lean::inc(x_43);
lean::dec(x_36);
if (lean::is_scalar(x_22)) {
 x_46 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_46 = x_22;
}
lean::cnstr_set(x_46, 0, x_43);
return x_46;
}
else
{
obj* x_47; obj* x_50; obj* x_53; obj* x_55; obj* x_57; obj* x_59; obj* x_62; obj* x_63; obj* x_65; obj* x_67; obj* x_69; obj* x_72; obj* x_73; obj* x_74; obj* x_75; 
x_47 = lean::cnstr_get(x_36, 0);
lean::inc(x_47);
lean::dec(x_36);
x_50 = lean::cnstr_get(x_47, 0);
lean::inc(x_50);
lean::dec(x_47);
x_53 = lean::cnstr_get(x_1, 2);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_1, 3);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_1, 5);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_2, 1);
lean::inc(x_59);
lean::dec(x_2);
x_62 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_62, 0, x_50);
lean::cnstr_set(x_62, 1, x_59);
x_63 = lean::cnstr_get(x_1, 7);
lean::inc(x_63);
x_65 = lean::cnstr_get(x_1, 8);
lean::inc(x_65);
x_67 = lean::cnstr_get(x_1, 9);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_1, 10);
lean::inc(x_69);
lean::dec(x_1);
x_72 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_72, 0, x_6);
lean::cnstr_set(x_72, 1, x_28);
lean::cnstr_set(x_72, 2, x_53);
lean::cnstr_set(x_72, 3, x_55);
lean::cnstr_set(x_72, 4, x_30);
lean::cnstr_set(x_72, 5, x_57);
lean::cnstr_set(x_72, 6, x_62);
lean::cnstr_set(x_72, 7, x_63);
lean::cnstr_set(x_72, 8, x_65);
lean::cnstr_set(x_72, 9, x_67);
lean::cnstr_set(x_72, 10, x_69);
x_73 = lean::box(0);
if (lean::is_scalar(x_27)) {
 x_74 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_74 = x_27;
}
lean::cnstr_set(x_74, 0, x_73);
lean::cnstr_set(x_74, 1, x_72);
if (lean::is_scalar(x_22)) {
 x_75 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_75 = x_22;
}
lean::cnstr_set(x_75, 0, x_74);
return x_75;
}
}
}
}
obj* l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_2);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_13; obj* x_15; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_1, 1);
lean::inc(x_10);
lean::dec(x_1);
x_13 = lean::cnstr_get(x_8, 2);
lean::inc(x_13);
x_15 = l_lean_elaborator_command__parser__config_register__notation__tokens(x_13, x_0);
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_18; obj* x_19; obj* x_20; obj* x_22; obj* x_24; 
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_18 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 x_18 = x_15;
}
x_19 = l_lean_parser_command_reserve__notation_has__view;
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
x_22 = lean::apply_1(x_20, x_8);
lean::inc(x_2);
x_24 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_22, x_16, x_2, x_3);
if (lean::obj_tag(x_24) == 0)
{
obj* x_27; obj* x_30; 
lean::dec(x_10);
lean::dec(x_2);
x_27 = lean::cnstr_get(x_24, 0);
lean::inc(x_27);
lean::dec(x_24);
if (lean::is_scalar(x_18)) {
 x_30 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_30 = x_18;
}
lean::cnstr_set(x_30, 0, x_27);
return x_30;
}
else
{
obj* x_32; obj* x_35; obj* x_37; 
lean::dec(x_18);
x_32 = lean::cnstr_get(x_24, 0);
lean::inc(x_32);
lean::dec(x_24);
x_35 = lean::cnstr_get(x_32, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_32, 1);
lean::inc(x_37);
lean::dec(x_32);
x_0 = x_35;
x_1 = x_10;
x_3 = x_37;
goto _start;
}
}
else
{
obj* x_42; 
lean::dec(x_8);
x_42 = lean::cnstr_get(x_15, 0);
lean::inc(x_42);
lean::dec(x_15);
x_0 = x_42;
x_1 = x_10;
goto _start;
}
}
}
}
obj* l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_2);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_13; obj* x_15; obj* x_17; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_1, 1);
lean::inc(x_10);
lean::dec(x_1);
x_13 = lean::cnstr_get(x_8, 1);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_13, 2);
lean::inc(x_15);
x_17 = l_lean_elaborator_command__parser__config_register__notation__tokens(x_15, x_0);
if (lean::obj_tag(x_17) == 0)
{
obj* x_19; obj* x_21; obj* x_22; obj* x_23; obj* x_25; obj* x_27; 
lean::dec(x_8);
x_19 = lean::cnstr_get(x_17, 0);
lean::inc(x_19);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_21 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 x_21 = x_17;
}
x_22 = l_lean_parser_command_notation_has__view;
x_23 = lean::cnstr_get(x_22, 1);
lean::inc(x_23);
x_25 = lean::apply_1(x_23, x_13);
lean::inc(x_2);
x_27 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_25, x_19, x_2, x_3);
if (lean::obj_tag(x_27) == 0)
{
obj* x_30; obj* x_33; 
lean::dec(x_10);
lean::dec(x_2);
x_30 = lean::cnstr_get(x_27, 0);
lean::inc(x_30);
lean::dec(x_27);
if (lean::is_scalar(x_21)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_21;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_35; obj* x_38; obj* x_40; 
lean::dec(x_21);
x_35 = lean::cnstr_get(x_27, 0);
lean::inc(x_35);
lean::dec(x_27);
x_38 = lean::cnstr_get(x_35, 0);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_35, 1);
lean::inc(x_40);
lean::dec(x_35);
x_0 = x_38;
x_1 = x_10;
x_3 = x_40;
goto _start;
}
}
else
{
obj* x_44; obj* x_46; obj* x_47; obj* x_51; 
x_44 = lean::cnstr_get(x_17, 0);
lean::inc(x_44);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_46 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 x_46 = x_17;
}
x_47 = lean::cnstr_get(x_8, 0);
lean::inc(x_47);
lean::dec(x_8);
lean::inc(x_13);
x_51 = l_lean_elaborator_command__parser__config_register__notation__parser(x_47, x_13, x_44);
if (lean::obj_tag(x_51) == 0)
{
obj* x_52; obj* x_55; obj* x_56; obj* x_58; obj* x_60; 
x_52 = lean::cnstr_get(x_51, 0);
lean::inc(x_52);
lean::dec(x_51);
x_55 = l_lean_parser_command_notation_has__view;
x_56 = lean::cnstr_get(x_55, 1);
lean::inc(x_56);
x_58 = lean::apply_1(x_56, x_13);
lean::inc(x_2);
x_60 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_58, x_52, x_2, x_3);
if (lean::obj_tag(x_60) == 0)
{
obj* x_63; obj* x_66; 
lean::dec(x_10);
lean::dec(x_2);
x_63 = lean::cnstr_get(x_60, 0);
lean::inc(x_63);
lean::dec(x_60);
if (lean::is_scalar(x_46)) {
 x_66 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_66 = x_46;
}
lean::cnstr_set(x_66, 0, x_63);
return x_66;
}
else
{
obj* x_68; obj* x_71; obj* x_73; 
lean::dec(x_46);
x_68 = lean::cnstr_get(x_60, 0);
lean::inc(x_68);
lean::dec(x_60);
x_71 = lean::cnstr_get(x_68, 0);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_68, 1);
lean::inc(x_73);
lean::dec(x_68);
x_0 = x_71;
x_1 = x_10;
x_3 = x_73;
goto _start;
}
}
else
{
obj* x_79; 
lean::dec(x_13);
lean::dec(x_46);
x_79 = lean::cnstr_get(x_51, 0);
lean::inc(x_79);
lean::dec(x_51);
x_0 = x_79;
x_1 = x_10;
goto _start;
}
}
}
}
}
obj* l_lean_elaborator_yield__to__outside___rarg(obj* x_0) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_7; 
lean::inc(x_0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_0);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_4, 0, x_3);
x_5 = l_lean_elaborator_yield__to__outside___rarg___closed__1;
lean::inc(x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_5);
return x_7;
}
}
obj* _init_l_lean_elaborator_yield__to__outside___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_yield__to__outside___rarg___lambda__2), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_24; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_2 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_2 = x_1;
}
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 2);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 3);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 4);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_0, 6);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_0, 7);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_0, 8);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_0, 9);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_0, 10);
lean::inc(x_21);
lean::dec(x_0);
x_24 = l_lean_message__log_empty;
lean::inc(x_24);
x_26 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_26, 0, x_3);
lean::cnstr_set(x_26, 1, x_5);
lean::cnstr_set(x_26, 2, x_7);
lean::cnstr_set(x_26, 3, x_9);
lean::cnstr_set(x_26, 4, x_11);
lean::cnstr_set(x_26, 5, x_24);
lean::cnstr_set(x_26, 6, x_13);
lean::cnstr_set(x_26, 7, x_15);
lean::cnstr_set(x_26, 8, x_17);
lean::cnstr_set(x_26, 9, x_19);
lean::cnstr_set(x_26, 10, x_21);
x_27 = lean::box(0);
if (lean::is_scalar(x_2)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_2;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_26);
x_29 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_29, 0, x_28);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_30, 0, x_29);
return x_30;
}
}
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_7; obj* x_8; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
lean::inc(x_1);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module_yield__command___lambda__3), 2, 1);
lean::closure_set(x_7, 0, x_1);
x_8 = l_lean_elaborator_yield__to__outside___rarg___lambda__2___closed__1;
lean::inc(x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_8);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg___lambda__1), 2, 1);
lean::closure_set(x_11, 0, x_3);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_13, 0, x_10);
lean::closure_set(x_13, 1, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_yield__to__outside___rarg___lambda__1), 2, 1);
lean::closure_set(x_14, 0, x_1);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_15, 0, x_14);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_16, 0, x_13);
lean::closure_set(x_16, 1, x_15);
return x_16;
}
}
obj* _init_l_lean_elaborator_yield__to__outside___rarg___lambda__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_pure___rarg), 2, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_lift___rarg___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_2, 0, x_0);
lean::closure_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_lean_elaborator_yield__to__outside(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_yield__to__outside___rarg), 1, 0);
return x_4;
}
}
obj* l_lean_elaborator_postprocess__notation__spec(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
if (lean::obj_tag(x_1) == 0)
{
if (lean::obj_tag(x_3) == 0)
{
lean::dec(x_1);
lean::dec(x_3);
return x_0;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_25; 
x_7 = lean::cnstr_get(x_3, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_3, 1);
lean::inc(x_9);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_11 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_release(x_3, 1);
 x_11 = x_3;
}
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_7, 1);
lean::inc(x_14);
if (lean::is_shared(x_7)) {
 lean::dec(x_7);
 x_16 = lean::box(0);
} else {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 x_16 = x_7;
}
x_17 = lean::cnstr_get(x_12, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_12, 1);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_12, 2);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_12, 3);
lean::inc(x_23);
if (lean::is_shared(x_12)) {
 lean::dec(x_12);
 x_25 = lean::box(0);
} else {
 lean::cnstr_release(x_12, 0);
 lean::cnstr_release(x_12, 1);
 lean::cnstr_release(x_12, 2);
 lean::cnstr_release(x_12, 3);
 x_25 = x_12;
}
if (lean::obj_tag(x_23) == 0)
{
obj* x_28; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
lean::dec(x_0);
lean::dec(x_23);
x_28 = l_lean_elaborator_postprocess__notation__spec___closed__1;
lean::inc(x_28);
if (lean::is_scalar(x_25)) {
 x_30 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_30 = x_25;
}
lean::cnstr_set(x_30, 0, x_17);
lean::cnstr_set(x_30, 1, x_19);
lean::cnstr_set(x_30, 2, x_21);
lean::cnstr_set(x_30, 3, x_28);
if (lean::is_scalar(x_16)) {
 x_31 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_31 = x_16;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_14);
if (lean::is_scalar(x_11)) {
 x_32 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_32 = x_11;
}
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_9);
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_1);
lean::cnstr_set(x_33, 1, x_32);
return x_33;
}
else
{
lean::dec(x_16);
lean::dec(x_17);
lean::dec(x_19);
lean::dec(x_21);
lean::dec(x_9);
lean::dec(x_11);
lean::dec(x_14);
lean::dec(x_1);
lean::dec(x_23);
lean::dec(x_25);
return x_0;
}
}
}
else
{
lean::dec(x_1);
lean::dec(x_3);
return x_0;
}
}
}
obj* _init_l_lean_elaborator_postprocess__notation__spec___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_0 = lean::box(0);
x_1 = lean::mk_string(":");
x_2 = l_string_trim(x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
x_4 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_4, 0, x_3);
x_5 = l_lean_parser_max__prec;
lean::inc(x_5);
x_7 = l_lean_parser_number_view_of__nat(x_5);
x_8 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
x_9 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_4);
lean::cnstr_set(x_10, 1, x_9);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
return x_11;
}
}
obj* l_lean_elaborator_reserve__notation_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_11; obj* x_14; obj* x_15; obj* x_16; obj* x_18; obj* x_19; obj* x_21; obj* x_23; obj* x_25; obj* x_27; obj* x_29; obj* x_31; obj* x_33; obj* x_35; obj* x_37; obj* x_40; obj* x_41; 
x_3 = l_lean_parser_command_reserve__notation_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::apply_1(x_4, x_0);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 2);
lean::inc(x_11);
lean::dec(x_6);
x_14 = l_lean_elaborator_postprocess__notation__spec(x_11);
x_15 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_15, 0, x_7);
lean::cnstr_set(x_15, 1, x_9);
lean::cnstr_set(x_15, 2, x_14);
x_16 = lean::cnstr_get(x_2, 0);
lean::inc(x_16);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_15);
lean::cnstr_set(x_18, 1, x_16);
x_19 = lean::cnstr_get(x_2, 1);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_2, 2);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_2, 3);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_2, 4);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_2, 5);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_2, 6);
lean::inc(x_29);
x_31 = lean::cnstr_get(x_2, 7);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_2, 8);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_2, 9);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_2, 10);
lean::inc(x_37);
lean::dec(x_2);
x_40 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_40, 0, x_18);
lean::cnstr_set(x_40, 1, x_19);
lean::cnstr_set(x_40, 2, x_21);
lean::cnstr_set(x_40, 3, x_23);
lean::cnstr_set(x_40, 4, x_25);
lean::cnstr_set(x_40, 5, x_27);
lean::cnstr_set(x_40, 6, x_29);
lean::cnstr_set(x_40, 7, x_31);
lean::cnstr_set(x_40, 8, x_33);
lean::cnstr_set(x_40, 9, x_35);
lean::cnstr_set(x_40, 10, x_37);
x_41 = l_lean_elaborator_update__parser__config(x_1, x_40);
return x_41;
}
}
unsigned char l_lean_elaborator_match__precedence___main(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
lean::dec(x_0);
if (lean::obj_tag(x_1) == 0)
{
unsigned char x_4; 
lean::dec(x_1);
x_4 = 0;
return x_4;
}
else
{
unsigned char x_6; 
lean::dec(x_1);
x_6 = 1;
return x_6;
}
}
else
{
obj* x_7; 
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
if (lean::obj_tag(x_1) == 0)
{
unsigned char x_12; 
lean::dec(x_7);
lean::dec(x_1);
x_12 = 0;
return x_12;
}
else
{
obj* x_13; obj* x_16; obj* x_19; obj* x_20; obj* x_23; obj* x_24; 
x_13 = lean::cnstr_get(x_1, 0);
lean::inc(x_13);
lean::dec(x_1);
x_16 = lean::cnstr_get(x_7, 1);
lean::inc(x_16);
lean::dec(x_7);
x_19 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_16);
x_20 = lean::cnstr_get(x_13, 1);
lean::inc(x_20);
lean::dec(x_13);
x_23 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_20);
x_24 = lean::nat_dec_eq(x_19, x_23);
lean::dec(x_23);
lean::dec(x_19);
if (lean::obj_tag(x_24) == 0)
{
unsigned char x_28; 
lean::dec(x_24);
x_28 = 0;
return x_28;
}
else
{
unsigned char x_30; 
lean::dec(x_24);
x_30 = 1;
return x_30;
}
}
}
}
}
obj* l_lean_elaborator_match__precedence___main___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned char x_2; obj* x_3; 
x_2 = l_lean_elaborator_match__precedence___main(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
unsigned char l_lean_elaborator_match__precedence(obj* x_0, obj* x_1) {
_start:
{
unsigned char x_2; 
x_2 = l_lean_elaborator_match__precedence___main(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_match__precedence___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned char x_2; obj* x_3; 
x_2 = l_lean_elaborator_match__precedence(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l_lean_elaborator_match__spec(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; unsigned char x_7; obj* x_8; unsigned char x_10; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::inc(x_2);
x_7 = l_option_is__some___main___rarg(x_2);
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = l_option_is__some___main___rarg(x_8);
if (x_7 == 0)
{
if (x_10 == 0)
{
obj* x_11; 
x_11 = lean::box(0);
x_4 = x_11;
goto lbl_5;
}
else
{
obj* x_15; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
x_15 = lean::box(0);
return x_15;
}
}
else
{
if (x_10 == 0)
{
obj* x_19; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
x_19 = lean::box(0);
return x_19;
}
else
{
obj* x_20; 
x_20 = lean::box(0);
x_4 = x_20;
goto lbl_5;
}
}
lbl_5:
{
obj* x_22; obj* x_25; obj* x_28; obj* x_30; obj* x_31; 
lean::dec(x_4);
x_22 = lean::cnstr_get(x_0, 1);
lean::inc(x_22);
lean::dec(x_0);
x_25 = lean::cnstr_get(x_1, 1);
lean::inc(x_25);
lean::dec(x_1);
x_28 = l_lean_elaborator_match__spec___closed__1;
lean::inc(x_28);
x_30 = l_list_zip__with___main___rarg(x_28, x_22, x_25);
x_31 = l_list_mmap___main___at_lean_elaborator_match__spec___spec__1(x_30);
if (lean::obj_tag(x_31) == 0)
{
obj* x_34; 
lean::dec(x_2);
lean::dec(x_31);
x_34 = lean::box(0);
return x_34;
}
else
{
obj* x_35; obj* x_37; obj* x_38; obj* x_39; 
x_35 = lean::cnstr_get(x_31, 0);
lean::inc(x_35);
if (lean::is_shared(x_31)) {
 lean::dec(x_31);
 x_37 = lean::box(0);
} else {
 lean::cnstr_release(x_31, 0);
 x_37 = x_31;
}
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_2);
lean::cnstr_set(x_38, 1, x_35);
if (lean::is_scalar(x_37)) {
 x_39 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_39 = x_37;
}
lean::cnstr_set(x_39, 0, x_38);
return x_39;
}
}
}
}
obj* _init_l_lean_elaborator_match__spec___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_list_zip___rarg___lambda__1), 2, 0);
return x_0;
}
}
obj* l_list_mmap___main___at_lean_elaborator_match__spec___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = l_lean_parser_syntax_reprint__lst___main___closed__1;
lean::inc(x_2);
return x_2;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_16; obj* x_18; obj* x_20; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_8 = x_0;
}
x_11 = lean::cnstr_get(x_4, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_4, 1);
lean::inc(x_13);
lean::dec(x_4);
x_16 = lean::cnstr_get(x_11, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_16, 1);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_16, 3);
lean::inc(x_20);
lean::dec(x_16);
if (lean::obj_tag(x_18) == 0)
{
obj* x_29; 
lean::dec(x_13);
lean::dec(x_18);
lean::dec(x_20);
lean::dec(x_6);
lean::dec(x_8);
lean::dec(x_11);
x_29 = lean::box(0);
return x_29;
}
else
{
obj* x_30; obj* x_32; obj* x_33; obj* x_35; obj* x_37; obj* x_39; obj* x_41; 
x_30 = lean::cnstr_get(x_18, 0);
lean::inc(x_30);
if (lean::is_shared(x_18)) {
 lean::dec(x_18);
 x_32 = lean::box(0);
} else {
 lean::cnstr_release(x_18, 0);
 x_32 = x_18;
}
x_33 = lean::cnstr_get(x_13, 0);
lean::inc(x_33);
x_39 = lean::cnstr_get(x_33, 1);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_33, 3);
lean::inc(x_41);
if (lean::obj_tag(x_39) == 0)
{
obj* x_51; 
lean::dec(x_33);
lean::dec(x_13);
lean::dec(x_20);
lean::dec(x_11);
lean::dec(x_30);
lean::dec(x_32);
lean::dec(x_39);
lean::dec(x_41);
x_51 = lean::box(0);
x_9 = x_51;
goto lbl_10;
}
else
{
obj* x_52; obj* x_55; obj* x_58; obj* x_59; obj* x_62; obj* x_63; 
x_52 = lean::cnstr_get(x_39, 0);
lean::inc(x_52);
lean::dec(x_39);
x_55 = lean::cnstr_get(x_30, 1);
lean::inc(x_55);
lean::dec(x_30);
x_58 = l_string_trim(x_55);
x_59 = lean::cnstr_get(x_52, 1);
lean::inc(x_59);
lean::dec(x_52);
x_62 = l_string_trim(x_59);
x_63 = lean::string_dec_eq(x_58, x_62);
lean::dec(x_62);
lean::dec(x_58);
if (lean::obj_tag(x_63) == 0)
{
obj* x_73; 
lean::dec(x_33);
lean::dec(x_13);
lean::dec(x_20);
lean::dec(x_63);
lean::dec(x_11);
lean::dec(x_32);
lean::dec(x_41);
x_73 = lean::box(0);
x_9 = x_73;
goto lbl_10;
}
else
{
unsigned char x_75; 
lean::dec(x_63);
x_75 = l_lean_elaborator_match__precedence___main(x_20, x_41);
if (x_75 == 0)
{
obj* x_80; 
lean::dec(x_33);
lean::dec(x_13);
lean::dec(x_11);
lean::dec(x_32);
x_80 = lean::box(0);
x_9 = x_80;
goto lbl_10;
}
else
{
obj* x_81; 
x_81 = lean::box(0);
x_37 = x_81;
goto lbl_38;
}
}
}
lbl_36:
{
if (lean::obj_tag(x_35) == 0)
{
obj* x_85; 
lean::dec(x_35);
lean::dec(x_33);
lean::dec(x_32);
x_85 = lean::box(0);
x_9 = x_85;
goto lbl_10;
}
else
{
obj* x_86; obj* x_89; obj* x_90; 
x_86 = lean::cnstr_get(x_35, 0);
lean::inc(x_86);
lean::dec(x_35);
x_89 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_89, 0, x_33);
lean::cnstr_set(x_89, 1, x_86);
if (lean::is_scalar(x_32)) {
 x_90 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_90 = x_32;
}
lean::cnstr_set(x_90, 0, x_89);
x_9 = x_90;
goto lbl_10;
}
}
lbl_38:
{
obj* x_92; 
lean::dec(x_37);
x_92 = lean::cnstr_get(x_11, 1);
lean::inc(x_92);
lean::dec(x_11);
if (lean::obj_tag(x_92) == 0)
{
obj* x_96; 
lean::dec(x_92);
x_96 = lean::cnstr_get(x_13, 1);
lean::inc(x_96);
lean::dec(x_13);
if (lean::obj_tag(x_96) == 0)
{
obj* x_99; 
x_99 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_99, 0, x_96);
x_35 = x_99;
goto lbl_36;
}
else
{
obj* x_101; 
lean::dec(x_96);
x_101 = lean::box(0);
x_35 = x_101;
goto lbl_36;
}
}
else
{
obj* x_102; obj* x_104; 
x_102 = lean::cnstr_get(x_92, 0);
lean::inc(x_102);
if (lean::is_shared(x_92)) {
 lean::dec(x_92);
 x_104 = lean::box(0);
} else {
 lean::cnstr_release(x_92, 0);
 x_104 = x_92;
}
switch (lean::obj_tag(x_102)) {
case 0:
{
obj* x_105; obj* x_108; 
x_105 = lean::cnstr_get(x_102, 0);
lean::inc(x_105);
lean::dec(x_102);
x_108 = lean::cnstr_get(x_13, 1);
lean::inc(x_108);
lean::dec(x_13);
if (lean::obj_tag(x_108) == 0)
{
obj* x_114; 
lean::dec(x_104);
lean::dec(x_105);
lean::dec(x_108);
x_114 = lean::box(0);
x_35 = x_114;
goto lbl_36;
}
else
{
obj* x_115; 
x_115 = lean::cnstr_get(x_108, 0);
lean::inc(x_115);
switch (lean::obj_tag(x_115)) {
case 0:
{
obj* x_117; obj* x_120; obj* x_123; unsigned char x_126; 
x_117 = lean::cnstr_get(x_115, 0);
lean::inc(x_117);
lean::dec(x_115);
x_120 = lean::cnstr_get(x_105, 1);
lean::inc(x_120);
lean::dec(x_105);
x_123 = lean::cnstr_get(x_117, 1);
lean::inc(x_123);
lean::dec(x_117);
x_126 = l_lean_elaborator_match__precedence___main(x_120, x_123);
if (x_126 == 0)
{
obj* x_129; 
lean::dec(x_104);
lean::dec(x_108);
x_129 = lean::box(0);
x_35 = x_129;
goto lbl_36;
}
else
{
obj* x_130; 
if (lean::is_scalar(x_104)) {
 x_130 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_130 = x_104;
}
lean::cnstr_set(x_130, 0, x_108);
x_35 = x_130;
goto lbl_36;
}
}
case 1:
{
obj* x_135; 
lean::dec(x_115);
lean::dec(x_104);
lean::dec(x_105);
lean::dec(x_108);
x_135 = lean::box(0);
x_35 = x_135;
goto lbl_36;
}
default:
{
obj* x_140; 
lean::dec(x_115);
lean::dec(x_104);
lean::dec(x_105);
lean::dec(x_108);
x_140 = lean::box(0);
x_35 = x_140;
goto lbl_36;
}
}
}
}
case 1:
{
obj* x_141; obj* x_144; 
x_141 = lean::cnstr_get(x_102, 0);
lean::inc(x_141);
lean::dec(x_102);
x_144 = lean::cnstr_get(x_13, 1);
lean::inc(x_144);
lean::dec(x_13);
if (lean::obj_tag(x_144) == 0)
{
obj* x_150; 
lean::dec(x_141);
lean::dec(x_144);
lean::dec(x_104);
x_150 = lean::box(0);
x_35 = x_150;
goto lbl_36;
}
else
{
obj* x_151; 
x_151 = lean::cnstr_get(x_144, 0);
lean::inc(x_151);
switch (lean::obj_tag(x_151)) {
case 0:
{
obj* x_157; 
lean::dec(x_141);
lean::dec(x_144);
lean::dec(x_151);
lean::dec(x_104);
x_157 = lean::box(0);
x_35 = x_157;
goto lbl_36;
}
case 1:
{
obj* x_158; obj* x_161; obj* x_164; unsigned char x_167; 
x_158 = lean::cnstr_get(x_151, 0);
lean::inc(x_158);
lean::dec(x_151);
x_161 = lean::cnstr_get(x_141, 1);
lean::inc(x_161);
lean::dec(x_141);
x_164 = lean::cnstr_get(x_158, 1);
lean::inc(x_164);
lean::dec(x_158);
x_167 = l_lean_elaborator_match__precedence___main(x_161, x_164);
if (x_167 == 0)
{
obj* x_170; 
lean::dec(x_144);
lean::dec(x_104);
x_170 = lean::box(0);
x_35 = x_170;
goto lbl_36;
}
else
{
obj* x_171; 
if (lean::is_scalar(x_104)) {
 x_171 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_171 = x_104;
}
lean::cnstr_set(x_171, 0, x_144);
x_35 = x_171;
goto lbl_36;
}
}
default:
{
obj* x_176; 
lean::dec(x_141);
lean::dec(x_144);
lean::dec(x_151);
lean::dec(x_104);
x_176 = lean::box(0);
x_35 = x_176;
goto lbl_36;
}
}
}
}
default:
{
obj* x_177; obj* x_179; obj* x_180; obj* x_182; 
x_177 = lean::cnstr_get(x_102, 0);
lean::inc(x_177);
if (lean::is_shared(x_102)) {
 lean::dec(x_102);
 x_179 = lean::box(0);
} else {
 lean::cnstr_release(x_102, 0);
 x_179 = x_102;
}
x_182 = lean::cnstr_get(x_13, 1);
lean::inc(x_182);
lean::dec(x_13);
if (lean::obj_tag(x_182) == 0)
{
obj* x_189; 
lean::dec(x_179);
lean::dec(x_177);
lean::dec(x_182);
lean::dec(x_104);
x_189 = lean::box(0);
x_35 = x_189;
goto lbl_36;
}
else
{
obj* x_190; obj* x_192; 
x_190 = lean::cnstr_get(x_182, 0);
lean::inc(x_190);
if (lean::is_shared(x_182)) {
 lean::dec(x_182);
 x_192 = lean::box(0);
} else {
 lean::cnstr_release(x_182, 0);
 x_192 = x_182;
}
switch (lean::obj_tag(x_190)) {
case 0:
{
obj* x_198; 
lean::dec(x_190);
lean::dec(x_179);
lean::dec(x_177);
lean::dec(x_192);
lean::dec(x_104);
x_198 = lean::box(0);
x_35 = x_198;
goto lbl_36;
}
case 1:
{
obj* x_204; 
lean::dec(x_190);
lean::dec(x_179);
lean::dec(x_177);
lean::dec(x_192);
lean::dec(x_104);
x_204 = lean::box(0);
x_35 = x_204;
goto lbl_36;
}
default:
{
obj* x_205; obj* x_208; obj* x_210; obj* x_213; 
x_205 = lean::cnstr_get(x_190, 0);
lean::inc(x_205);
lean::dec(x_190);
x_208 = lean::cnstr_get(x_177, 1);
lean::inc(x_208);
x_210 = l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___closed__1;
lean::inc(x_208);
lean::inc(x_210);
x_213 = l_option_map___rarg(x_210, x_208);
if (lean::obj_tag(x_213) == 0)
{
obj* x_216; obj* x_221; 
lean::dec(x_208);
lean::dec(x_213);
x_216 = lean::cnstr_get(x_205, 1);
lean::inc(x_216);
lean::dec(x_205);
lean::inc(x_216);
lean::inc(x_210);
x_221 = l_option_map___rarg(x_210, x_216);
if (lean::obj_tag(x_221) == 0)
{
obj* x_225; 
lean::dec(x_216);
lean::dec(x_192);
lean::dec(x_221);
x_225 = lean::box(0);
x_180 = x_225;
goto lbl_181;
}
else
{
obj* x_226; 
x_226 = lean::cnstr_get(x_221, 0);
lean::inc(x_226);
lean::dec(x_221);
switch (lean::obj_tag(x_226)) {
case 0:
{
obj* x_230; 
lean::dec(x_226);
if (lean::is_scalar(x_192)) {
 x_230 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_230 = x_192;
}
lean::cnstr_set(x_230, 0, x_216);
x_180 = x_230;
goto lbl_181;
}
case 1:
{
obj* x_234; 
lean::dec(x_216);
lean::dec(x_226);
lean::dec(x_192);
x_234 = lean::box(0);
x_180 = x_234;
goto lbl_181;
}
case 2:
{
obj* x_238; 
lean::dec(x_216);
lean::dec(x_226);
lean::dec(x_192);
x_238 = lean::box(0);
x_180 = x_238;
goto lbl_181;
}
default:
{
obj* x_242; 
lean::dec(x_216);
lean::dec(x_226);
lean::dec(x_192);
x_242 = lean::box(0);
x_180 = x_242;
goto lbl_181;
}
}
}
}
else
{
obj* x_243; 
x_243 = lean::cnstr_get(x_213, 0);
lean::inc(x_243);
lean::dec(x_213);
switch (lean::obj_tag(x_243)) {
case 0:
{
obj* x_246; obj* x_249; obj* x_253; 
x_246 = lean::cnstr_get(x_243, 0);
lean::inc(x_246);
lean::dec(x_243);
x_249 = lean::cnstr_get(x_205, 1);
lean::inc(x_249);
lean::dec(x_205);
lean::inc(x_210);
x_253 = l_option_map___rarg(x_210, x_249);
if (lean::obj_tag(x_253) == 0)
{
obj* x_258; 
lean::dec(x_246);
lean::dec(x_253);
lean::dec(x_208);
lean::dec(x_192);
x_258 = lean::box(0);
x_180 = x_258;
goto lbl_181;
}
else
{
obj* x_259; 
x_259 = lean::cnstr_get(x_253, 0);
lean::inc(x_259);
lean::dec(x_253);
switch (lean::obj_tag(x_259)) {
case 0:
{
obj* x_262; obj* x_265; obj* x_266; obj* x_267; 
x_262 = lean::cnstr_get(x_259, 0);
lean::inc(x_262);
lean::dec(x_259);
x_265 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_246);
x_266 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_262);
x_267 = lean::nat_dec_eq(x_265, x_266);
lean::dec(x_266);
lean::dec(x_265);
if (lean::obj_tag(x_267) == 0)
{
obj* x_273; 
lean::dec(x_267);
lean::dec(x_208);
lean::dec(x_192);
x_273 = lean::box(0);
x_180 = x_273;
goto lbl_181;
}
else
{
obj* x_275; 
lean::dec(x_267);
if (lean::is_scalar(x_192)) {
 x_275 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_275 = x_192;
}
lean::cnstr_set(x_275, 0, x_208);
x_180 = x_275;
goto lbl_181;
}
}
case 1:
{
obj* x_280; 
lean::dec(x_259);
lean::dec(x_246);
lean::dec(x_208);
lean::dec(x_192);
x_280 = lean::box(0);
x_180 = x_280;
goto lbl_181;
}
case 2:
{
obj* x_285; 
lean::dec(x_259);
lean::dec(x_246);
lean::dec(x_208);
lean::dec(x_192);
x_285 = lean::box(0);
x_180 = x_285;
goto lbl_181;
}
default:
{
obj* x_290; 
lean::dec(x_259);
lean::dec(x_246);
lean::dec(x_208);
lean::dec(x_192);
x_290 = lean::box(0);
x_180 = x_290;
goto lbl_181;
}
}
}
}
case 1:
{
obj* x_295; 
lean::dec(x_243);
lean::dec(x_208);
lean::dec(x_192);
lean::dec(x_205);
x_295 = lean::box(0);
x_180 = x_295;
goto lbl_181;
}
case 2:
{
obj* x_300; 
lean::dec(x_243);
lean::dec(x_208);
lean::dec(x_192);
lean::dec(x_205);
x_300 = lean::box(0);
x_180 = x_300;
goto lbl_181;
}
default:
{
obj* x_305; 
lean::dec(x_243);
lean::dec(x_208);
lean::dec(x_192);
lean::dec(x_205);
x_305 = lean::box(0);
x_180 = x_305;
goto lbl_181;
}
}
}
}
}
}
lbl_181:
{
if (lean::obj_tag(x_180) == 0)
{
obj* x_310; 
lean::dec(x_180);
lean::dec(x_179);
lean::dec(x_177);
lean::dec(x_104);
x_310 = lean::box(0);
x_35 = x_310;
goto lbl_36;
}
else
{
obj* x_311; obj* x_313; obj* x_314; obj* x_317; obj* x_318; obj* x_319; obj* x_320; 
x_311 = lean::cnstr_get(x_180, 0);
lean::inc(x_311);
if (lean::is_shared(x_180)) {
 lean::dec(x_180);
 x_313 = lean::box(0);
} else {
 lean::cnstr_release(x_180, 0);
 x_313 = x_180;
}
x_314 = lean::cnstr_get(x_177, 0);
lean::inc(x_314);
lean::dec(x_177);
x_317 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_317, 0, x_314);
lean::cnstr_set(x_317, 1, x_311);
if (lean::is_scalar(x_179)) {
 x_318 = lean::alloc_cnstr(2, 1, 0);
} else {
 x_318 = x_179;
}
lean::cnstr_set(x_318, 0, x_317);
if (lean::is_scalar(x_104)) {
 x_319 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_319 = x_104;
}
lean::cnstr_set(x_319, 0, x_318);
if (lean::is_scalar(x_313)) {
 x_320 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_320 = x_313;
}
lean::cnstr_set(x_320, 0, x_319);
x_35 = x_320;
goto lbl_36;
}
}
}
}
}
}
}
lbl_10:
{
if (lean::obj_tag(x_9) == 0)
{
obj* x_324; 
lean::dec(x_6);
lean::dec(x_8);
lean::dec(x_9);
x_324 = lean::box(0);
return x_324;
}
else
{
obj* x_325; obj* x_327; obj* x_328; 
x_325 = lean::cnstr_get(x_9, 0);
lean::inc(x_325);
if (lean::is_shared(x_9)) {
 lean::dec(x_9);
 x_327 = lean::box(0);
} else {
 lean::cnstr_release(x_9, 0);
 x_327 = x_9;
}
x_328 = l_list_mmap___main___at_lean_elaborator_match__spec___spec__1(x_6);
if (lean::obj_tag(x_328) == 0)
{
obj* x_333; 
lean::dec(x_8);
lean::dec(x_325);
lean::dec(x_327);
lean::dec(x_328);
x_333 = lean::box(0);
return x_333;
}
else
{
obj* x_334; obj* x_337; obj* x_338; 
x_334 = lean::cnstr_get(x_328, 0);
lean::inc(x_334);
lean::dec(x_328);
if (lean::is_scalar(x_8)) {
 x_337 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_337 = x_8;
}
lean::cnstr_set(x_337, 0, x_325);
lean::cnstr_set(x_337, 1, x_334);
if (lean::is_scalar(x_327)) {
 x_338 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_338 = x_327;
}
lean::cnstr_set(x_338, 0, x_337);
return x_338;
}
}
}
}
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___lambda__1), 1, 0);
return x_0;
}
}
obj* l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 1);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_notation_elaborate__aux(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; 
lean::inc(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_notation_elaborate__aux___lambda__1), 2, 1);
lean::closure_set(x_4, 0, x_0);
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = l_list_filter__map___main___rarg(x_4, x_5);
if (lean::obj_tag(x_7) == 0)
{
obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_19; obj* x_22; obj* x_23; obj* x_24; 
lean::dec(x_7);
lean::dec(x_1);
x_10 = lean::cnstr_get(x_0, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_0, 1);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_0, 2);
lean::inc(x_14);
x_16 = l_lean_elaborator_postprocess__notation__spec(x_14);
x_17 = lean::cnstr_get(x_0, 3);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_0, 4);
lean::inc(x_19);
lean::dec(x_0);
x_22 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_22, 0, x_10);
lean::cnstr_set(x_22, 1, x_12);
lean::cnstr_set(x_22, 2, x_16);
lean::cnstr_set(x_22, 3, x_17);
lean::cnstr_set(x_22, 4, x_19);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_2);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_23);
return x_24;
}
else
{
obj* x_25; obj* x_27; 
x_25 = lean::cnstr_get(x_7, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_7, 1);
lean::inc(x_27);
lean::dec(x_7);
if (lean::obj_tag(x_27) == 0)
{
obj* x_32; obj* x_34; obj* x_36; obj* x_38; obj* x_41; obj* x_42; obj* x_43; obj* x_44; 
lean::dec(x_1);
lean::dec(x_27);
x_32 = lean::cnstr_get(x_0, 0);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_0, 1);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_0, 3);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_0, 4);
lean::inc(x_38);
lean::dec(x_0);
x_41 = l_lean_elaborator_postprocess__notation__spec(x_25);
x_42 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_42, 0, x_32);
lean::cnstr_set(x_42, 1, x_34);
lean::cnstr_set(x_42, 2, x_41);
lean::cnstr_set(x_42, 3, x_36);
lean::cnstr_set(x_42, 4, x_38);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_42);
lean::cnstr_set(x_43, 1, x_2);
x_44 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_44, 0, x_43);
return x_44;
}
else
{
obj* x_47; obj* x_48; obj* x_50; obj* x_51; obj* x_53; 
lean::dec(x_25);
lean::dec(x_27);
x_47 = l_lean_parser_command_notation_has__view;
x_48 = lean::cnstr_get(x_47, 1);
lean::inc(x_48);
x_50 = lean::apply_1(x_48, x_0);
x_51 = l_lean_elaborator_notation_elaborate__aux___closed__1;
lean::inc(x_51);
x_53 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_50, x_51, x_1, x_2);
if (lean::obj_tag(x_53) == 0)
{
obj* x_54; obj* x_56; obj* x_57; 
x_54 = lean::cnstr_get(x_53, 0);
lean::inc(x_54);
if (lean::is_shared(x_53)) {
 lean::dec(x_53);
 x_56 = lean::box(0);
} else {
 lean::cnstr_release(x_53, 0);
 x_56 = x_53;
}
if (lean::is_scalar(x_56)) {
 x_57 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_57 = x_56;
}
lean::cnstr_set(x_57, 0, x_54);
return x_57;
}
else
{
obj* x_58; obj* x_60; obj* x_61; obj* x_63; obj* x_65; obj* x_66; obj* x_68; obj* x_70; obj* x_72; obj* x_73; obj* x_75; obj* x_78; obj* x_79; obj* x_80; 
x_58 = lean::cnstr_get(x_53, 0);
lean::inc(x_58);
if (lean::is_shared(x_53)) {
 lean::dec(x_53);
 x_60 = lean::box(0);
} else {
 lean::cnstr_release(x_53, 0);
 x_60 = x_53;
}
x_61 = lean::cnstr_get(x_58, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_58, 1);
lean::inc(x_63);
if (lean::is_shared(x_58)) {
 lean::dec(x_58);
 x_65 = lean::box(0);
} else {
 lean::cnstr_release(x_58, 0);
 lean::cnstr_release(x_58, 1);
 x_65 = x_58;
}
x_66 = lean::cnstr_get(x_61, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_61, 1);
lean::inc(x_68);
x_70 = lean::cnstr_get(x_61, 2);
lean::inc(x_70);
x_72 = l_lean_elaborator_postprocess__notation__spec(x_70);
x_73 = lean::cnstr_get(x_61, 3);
lean::inc(x_73);
x_75 = lean::cnstr_get(x_61, 4);
lean::inc(x_75);
lean::dec(x_61);
x_78 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_78, 0, x_66);
lean::cnstr_set(x_78, 1, x_68);
lean::cnstr_set(x_78, 2, x_72);
lean::cnstr_set(x_78, 3, x_73);
lean::cnstr_set(x_78, 4, x_75);
if (lean::is_scalar(x_65)) {
 x_79 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_79 = x_65;
}
lean::cnstr_set(x_79, 0, x_78);
lean::cnstr_set(x_79, 1, x_63);
if (lean::is_scalar(x_60)) {
 x_80 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_80 = x_60;
}
lean::cnstr_set(x_80, 0, x_79);
return x_80;
}
}
}
}
}
obj* _init_l_lean_elaborator_notation_elaborate__aux___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid notation, matches multiple reserved notations");
return x_0;
}
}
obj* l_lean_elaborator_notation_elaborate__aux___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 2);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_1, 2);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_lean_elaborator_match__spec(x_2, x_5);
return x_8;
}
}
obj* l_lean_elaborator_mk__notation__kind___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_27; obj* x_28; obj* x_30; obj* x_31; obj* x_32; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_add(x_5, x_7);
lean::dec(x_7);
x_10 = lean::cnstr_get(x_0, 3);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_0, 4);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_0, 5);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_0, 6);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_0, 7);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_0, 8);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_0, 9);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_0, 10);
lean::inc(x_24);
lean::dec(x_0);
x_27 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_27, 0, x_1);
lean::cnstr_set(x_27, 1, x_3);
lean::cnstr_set(x_27, 2, x_8);
lean::cnstr_set(x_27, 3, x_10);
lean::cnstr_set(x_27, 4, x_12);
lean::cnstr_set(x_27, 5, x_14);
lean::cnstr_set(x_27, 6, x_16);
lean::cnstr_set(x_27, 7, x_18);
lean::cnstr_set(x_27, 8, x_20);
lean::cnstr_set(x_27, 9, x_22);
lean::cnstr_set(x_27, 10, x_24);
x_28 = l_lean_elaborator_mk__notation__kind___rarg___closed__1;
lean::inc(x_28);
x_30 = lean::alloc_cnstr(2, 2, 0);
lean::cnstr_set(x_30, 0, x_28);
lean::cnstr_set(x_30, 1, x_5);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_27);
x_32 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_32, 0, x_31);
return x_32;
}
}
obj* _init_l_lean_elaborator_mk__notation__kind___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_notation");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_lean_elaborator_mk__notation__kind(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_mk__notation__kind___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_elaborator_register__notation__macro(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; 
lean::dec(x_1);
x_4 = l_lean_elaborator_mk__notation__kind___rarg(x_2);
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; obj* x_8; obj* x_9; 
lean::dec(x_0);
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 x_8 = x_4;
}
if (lean::is_scalar(x_8)) {
 x_9 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_9 = x_8;
}
lean::cnstr_set(x_9, 0, x_6);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; obj* x_38; obj* x_40; obj* x_43; obj* x_44; obj* x_45; obj* x_47; obj* x_49; obj* x_52; obj* x_53; obj* x_54; 
x_10 = lean::cnstr_get(x_4, 0);
lean::inc(x_10);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 x_12 = x_4;
}
x_13 = lean::cnstr_get(x_10, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_10, 1);
lean::inc(x_15);
if (lean::is_shared(x_10)) {
 lean::dec(x_10);
 x_17 = lean::box(0);
} else {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_release(x_10, 1);
 x_17 = x_10;
}
lean::inc(x_13);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_13);
lean::cnstr_set(x_19, 1, x_0);
lean::inc(x_19);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_mk__notation__transformer), 3, 1);
lean::closure_set(x_21, 0, x_19);
x_22 = lean::cnstr_get(x_15, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_15, 1);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_15, 2);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_15, 3);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_15, 4);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_15, 5);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_15, 6);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_15, 7);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_36, 0);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_36, 1);
lean::inc(x_40);
lean::dec(x_36);
x_43 = l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3(x_40, x_13, x_21);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_38);
lean::cnstr_set(x_44, 1, x_43);
x_45 = lean::cnstr_get(x_15, 8);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_15, 9);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_15, 10);
lean::inc(x_49);
lean::dec(x_15);
x_52 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_52, 0, x_22);
lean::cnstr_set(x_52, 1, x_24);
lean::cnstr_set(x_52, 2, x_26);
lean::cnstr_set(x_52, 3, x_28);
lean::cnstr_set(x_52, 4, x_30);
lean::cnstr_set(x_52, 5, x_32);
lean::cnstr_set(x_52, 6, x_34);
lean::cnstr_set(x_52, 7, x_44);
lean::cnstr_set(x_52, 8, x_45);
lean::cnstr_set(x_52, 9, x_47);
lean::cnstr_set(x_52, 10, x_49);
if (lean::is_scalar(x_17)) {
 x_53 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_53 = x_17;
}
lean::cnstr_set(x_53, 0, x_19);
lean::cnstr_set(x_53, 1, x_52);
if (lean::is_scalar(x_12)) {
 x_54 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_54 = x_12;
}
lean::cnstr_set(x_54, 0, x_53);
return x_54;
}
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_register__notation__macro___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_notation_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_11; unsigned char x_14; 
x_3 = l_lean_parser_command_notation_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::apply_1(x_4, x_0);
x_9 = lean::cnstr_get(x_6, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_9, 1);
lean::inc(x_11);
lean::dec(x_9);
x_14 = l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(x_11);
if (x_14 == 0)
{
obj* x_15; 
x_15 = lean::box(0);
x_7 = x_15;
goto lbl_8;
}
else
{
obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_25; obj* x_27; obj* x_30; obj* x_33; obj* x_34; unsigned char x_35; obj* x_36; obj* x_37; obj* x_42; obj* x_43; obj* x_44; obj* x_46; obj* x_47; obj* x_49; obj* x_51; obj* x_53; obj* x_55; obj* x_58; obj* x_59; obj* x_60; 
lean::dec(x_6);
x_17 = lean::cnstr_get(x_2, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_2, 1);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_2, 2);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_2, 3);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_2, 4);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_1, 0);
lean::inc(x_27);
lean::dec(x_1);
x_30 = lean::cnstr_get(x_27, 0);
lean::inc(x_30);
lean::dec(x_27);
x_33 = lean::box(0);
x_34 = l_lean_elaborator_notation_elaborate___closed__1;
x_35 = 1;
x_36 = l_string_join___closed__1;
x_37 = l_lean_elaborator_notation_elaborate___closed__2;
lean::inc(x_37);
lean::inc(x_36);
lean::inc(x_33);
lean::inc(x_34);
x_42 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_42, 0, x_30);
lean::cnstr_set(x_42, 1, x_34);
lean::cnstr_set(x_42, 2, x_33);
lean::cnstr_set(x_42, 3, x_36);
lean::cnstr_set(x_42, 4, x_37);
lean::cnstr_set_scalar(x_42, sizeof(void*)*5, x_35);
x_43 = x_42;
x_44 = lean::cnstr_get(x_2, 5);
lean::inc(x_44);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_43);
lean::cnstr_set(x_46, 1, x_44);
x_47 = lean::cnstr_get(x_2, 6);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_2, 7);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_2, 8);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_2, 9);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_2, 10);
lean::inc(x_55);
lean::dec(x_2);
x_58 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_58, 0, x_17);
lean::cnstr_set(x_58, 1, x_19);
lean::cnstr_set(x_58, 2, x_21);
lean::cnstr_set(x_58, 3, x_23);
lean::cnstr_set(x_58, 4, x_25);
lean::cnstr_set(x_58, 5, x_46);
lean::cnstr_set(x_58, 6, x_47);
lean::cnstr_set(x_58, 7, x_49);
lean::cnstr_set(x_58, 8, x_51);
lean::cnstr_set(x_58, 9, x_53);
lean::cnstr_set(x_58, 10, x_55);
x_59 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_59, 0, x_33);
lean::cnstr_set(x_59, 1, x_58);
x_60 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_60, 0, x_59);
return x_60;
}
lbl_8:
{
obj* x_63; 
lean::dec(x_7);
lean::inc(x_1);
x_63 = l_lean_elaborator_notation_elaborate__aux(x_6, x_1, x_2);
if (lean::obj_tag(x_63) == 0)
{
obj* x_65; obj* x_67; obj* x_68; 
lean::dec(x_1);
x_65 = lean::cnstr_get(x_63, 0);
lean::inc(x_65);
if (lean::is_shared(x_63)) {
 lean::dec(x_63);
 x_67 = lean::box(0);
} else {
 lean::cnstr_release(x_63, 0);
 x_67 = x_63;
}
if (lean::is_scalar(x_67)) {
 x_68 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_68 = x_67;
}
lean::cnstr_set(x_68, 0, x_65);
return x_68;
}
else
{
obj* x_69; obj* x_71; obj* x_72; obj* x_74; obj* x_79; 
x_69 = lean::cnstr_get(x_63, 0);
lean::inc(x_69);
if (lean::is_shared(x_63)) {
 lean::dec(x_63);
 x_71 = lean::box(0);
} else {
 lean::cnstr_release(x_63, 0);
 x_71 = x_63;
}
x_72 = lean::cnstr_get(x_69, 0);
lean::inc(x_72);
x_74 = lean::cnstr_get(x_69, 1);
lean::inc(x_74);
lean::dec(x_69);
lean::inc(x_1);
lean::inc(x_72);
x_79 = l_lean_elaborator_register__notation__macro(x_72, x_1, x_74);
if (lean::obj_tag(x_79) == 0)
{
obj* x_82; obj* x_85; 
lean::dec(x_72);
lean::dec(x_1);
x_82 = lean::cnstr_get(x_79, 0);
lean::inc(x_82);
lean::dec(x_79);
if (lean::is_scalar(x_71)) {
 x_85 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_85 = x_71;
}
lean::cnstr_set(x_85, 0, x_82);
return x_85;
}
else
{
obj* x_87; obj* x_90; obj* x_92; obj* x_95; 
lean::dec(x_71);
x_87 = lean::cnstr_get(x_79, 0);
lean::inc(x_87);
lean::dec(x_79);
x_90 = lean::cnstr_get(x_87, 0);
lean::inc(x_90);
x_92 = lean::cnstr_get(x_87, 1);
lean::inc(x_92);
lean::dec(x_87);
x_95 = lean::cnstr_get(x_72, 0);
lean::inc(x_95);
lean::dec(x_72);
if (lean::obj_tag(x_95) == 0)
{
obj* x_99; obj* x_101; obj* x_103; obj* x_104; obj* x_106; obj* x_108; obj* x_110; obj* x_112; obj* x_114; obj* x_116; obj* x_118; obj* x_120; obj* x_123; obj* x_124; 
lean::dec(x_95);
x_99 = lean::cnstr_get(x_92, 0);
lean::inc(x_99);
x_101 = lean::cnstr_get(x_92, 1);
lean::inc(x_101);
x_103 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_103, 0, x_90);
lean::cnstr_set(x_103, 1, x_101);
x_104 = lean::cnstr_get(x_92, 2);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_92, 3);
lean::inc(x_106);
x_108 = lean::cnstr_get(x_92, 4);
lean::inc(x_108);
x_110 = lean::cnstr_get(x_92, 5);
lean::inc(x_110);
x_112 = lean::cnstr_get(x_92, 6);
lean::inc(x_112);
x_114 = lean::cnstr_get(x_92, 7);
lean::inc(x_114);
x_116 = lean::cnstr_get(x_92, 8);
lean::inc(x_116);
x_118 = lean::cnstr_get(x_92, 9);
lean::inc(x_118);
x_120 = lean::cnstr_get(x_92, 10);
lean::inc(x_120);
lean::dec(x_92);
x_123 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_123, 0, x_99);
lean::cnstr_set(x_123, 1, x_103);
lean::cnstr_set(x_123, 2, x_104);
lean::cnstr_set(x_123, 3, x_106);
lean::cnstr_set(x_123, 4, x_108);
lean::cnstr_set(x_123, 5, x_110);
lean::cnstr_set(x_123, 6, x_112);
lean::cnstr_set(x_123, 7, x_114);
lean::cnstr_set(x_123, 8, x_116);
lean::cnstr_set(x_123, 9, x_118);
lean::cnstr_set(x_123, 10, x_120);
x_124 = l_lean_elaborator_update__parser__config(x_1, x_123);
return x_124;
}
else
{
obj* x_126; obj* x_128; obj* x_130; obj* x_132; obj* x_134; obj* x_136; obj* x_138; obj* x_139; obj* x_141; obj* x_143; obj* x_145; obj* x_147; obj* x_149; obj* x_152; obj* x_153; obj* x_155; obj* x_157; obj* x_159; obj* x_161; obj* x_163; obj* x_166; obj* x_167; 
lean::dec(x_95);
x_126 = lean::cnstr_get(x_92, 0);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_92, 1);
lean::inc(x_128);
x_130 = lean::cnstr_get(x_92, 2);
lean::inc(x_130);
x_132 = lean::cnstr_get(x_92, 3);
lean::inc(x_132);
x_134 = lean::cnstr_get(x_92, 4);
lean::inc(x_134);
x_136 = lean::cnstr_get(x_134, 0);
lean::inc(x_136);
x_138 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_138, 0, x_90);
lean::cnstr_set(x_138, 1, x_136);
x_139 = lean::cnstr_get(x_134, 1);
lean::inc(x_139);
x_141 = lean::cnstr_get(x_134, 2);
lean::inc(x_141);
x_143 = lean::cnstr_get(x_134, 3);
lean::inc(x_143);
x_145 = lean::cnstr_get(x_134, 4);
lean::inc(x_145);
x_147 = lean::cnstr_get(x_134, 5);
lean::inc(x_147);
x_149 = lean::cnstr_get(x_134, 6);
lean::inc(x_149);
lean::dec(x_134);
x_152 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_152, 0, x_138);
lean::cnstr_set(x_152, 1, x_139);
lean::cnstr_set(x_152, 2, x_141);
lean::cnstr_set(x_152, 3, x_143);
lean::cnstr_set(x_152, 4, x_145);
lean::cnstr_set(x_152, 5, x_147);
lean::cnstr_set(x_152, 6, x_149);
x_153 = lean::cnstr_get(x_92, 5);
lean::inc(x_153);
x_155 = lean::cnstr_get(x_92, 6);
lean::inc(x_155);
x_157 = lean::cnstr_get(x_92, 7);
lean::inc(x_157);
x_159 = lean::cnstr_get(x_92, 8);
lean::inc(x_159);
x_161 = lean::cnstr_get(x_92, 9);
lean::inc(x_161);
x_163 = lean::cnstr_get(x_92, 10);
lean::inc(x_163);
lean::dec(x_92);
x_166 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_166, 0, x_126);
lean::cnstr_set(x_166, 1, x_128);
lean::cnstr_set(x_166, 2, x_130);
lean::cnstr_set(x_166, 3, x_132);
lean::cnstr_set(x_166, 4, x_152);
lean::cnstr_set(x_166, 5, x_153);
lean::cnstr_set(x_166, 6, x_155);
lean::cnstr_set(x_166, 7, x_157);
lean::cnstr_set(x_166, 8, x_159);
lean::cnstr_set(x_166, 9, x_161);
lean::cnstr_set(x_166, 10, x_163);
x_167 = l_lean_elaborator_update__parser__config(x_1, x_166);
return x_167;
}
}
}
}
}
}
obj* _init_l_lean_elaborator_notation_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(1u);
x_1 = lean::mk_nat_obj(0u);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_notation_elaborate___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ignoring notation using 'fold' action");
return x_0;
}
}
unsigned char l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
unsigned char x_2; 
lean::dec(x_0);
x_2 = 0;
return x_2;
}
else
{
obj* x_3; obj* x_5; unsigned char x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
lean::dec(x_0);
x_8 = l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(x_5);
x_9 = lean::cnstr_get(x_3, 1);
lean::inc(x_9);
lean::dec(x_3);
if (lean::obj_tag(x_9) == 0)
{
lean::dec(x_9);
x_0 = x_5;
goto _start;
}
else
{
obj* x_13; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
lean::dec(x_9);
switch (lean::obj_tag(x_13)) {
case 0:
{
lean::dec(x_13);
x_0 = x_5;
goto _start;
}
case 1:
{
lean::dec(x_13);
x_0 = x_5;
goto _start;
}
default:
{
obj* x_18; obj* x_21; 
x_18 = lean::cnstr_get(x_13, 0);
lean::inc(x_18);
lean::dec(x_13);
x_21 = lean::cnstr_get(x_18, 1);
lean::inc(x_21);
lean::dec(x_18);
if (lean::obj_tag(x_21) == 0)
{
lean::dec(x_21);
x_0 = x_5;
goto _start;
}
else
{
obj* x_25; obj* x_28; 
x_25 = lean::cnstr_get(x_21, 0);
lean::inc(x_25);
lean::dec(x_21);
x_28 = lean::cnstr_get(x_25, 1);
lean::inc(x_28);
lean::dec(x_25);
switch (lean::obj_tag(x_28)) {
case 0:
{
lean::dec(x_28);
x_0 = x_5;
goto _start;
}
case 1:
{
lean::dec(x_28);
x_0 = x_5;
goto _start;
}
case 2:
{
lean::dec(x_28);
x_0 = x_5;
goto _start;
}
default:
{
unsigned char x_35; 
lean::dec(x_28);
x_35 = 1;
return x_35;
}
}
}
}
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1___boxed(obj* x_0) {
_start:
{
unsigned char x_1; obj* x_2; 
x_1 = l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(x_0);
x_2 = lean::box(x_1);
return x_2;
}
}
obj* l_lean_elaborator_universe_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_8; obj* x_11; obj* x_12; obj* x_14; obj* x_18; 
x_3 = l_lean_parser_command_universe_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::inc(x_0);
x_7 = lean::apply_1(x_4, x_0);
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
lean::dec(x_7);
x_11 = l_lean_elaborator_mangle__ident(x_8);
x_12 = lean::cnstr_get(x_2, 4);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_12, 1);
lean::inc(x_14);
lean::inc(x_11);
lean::inc(x_14);
x_18 = l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5(x_14, x_11);
if (lean::obj_tag(x_18) == 0)
{
obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_33; obj* x_34; obj* x_35; obj* x_37; obj* x_39; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_49; obj* x_51; obj* x_53; obj* x_55; obj* x_57; obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
lean::dec(x_18);
lean::dec(x_0);
lean::dec(x_1);
x_22 = lean::cnstr_get(x_2, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_2, 1);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_2, 2);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_2, 3);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_12, 0);
lean::inc(x_30);
lean::inc(x_11);
x_33 = lean::alloc_cnstr(4, 1, 0);
lean::cnstr_set(x_33, 0, x_11);
x_34 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(x_14, x_11, x_33);
x_35 = lean::cnstr_get(x_12, 2);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_12, 3);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_12, 4);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_12, 5);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_12, 6);
lean::inc(x_43);
lean::dec(x_12);
x_46 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_46, 0, x_30);
lean::cnstr_set(x_46, 1, x_34);
lean::cnstr_set(x_46, 2, x_35);
lean::cnstr_set(x_46, 3, x_37);
lean::cnstr_set(x_46, 4, x_39);
lean::cnstr_set(x_46, 5, x_41);
lean::cnstr_set(x_46, 6, x_43);
x_47 = lean::cnstr_get(x_2, 5);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_2, 6);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_2, 7);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_2, 8);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_2, 9);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_2, 10);
lean::inc(x_57);
lean::dec(x_2);
x_60 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_60, 0, x_22);
lean::cnstr_set(x_60, 1, x_24);
lean::cnstr_set(x_60, 2, x_26);
lean::cnstr_set(x_60, 3, x_28);
lean::cnstr_set(x_60, 4, x_46);
lean::cnstr_set(x_60, 5, x_47);
lean::cnstr_set(x_60, 6, x_49);
lean::cnstr_set(x_60, 7, x_51);
lean::cnstr_set(x_60, 8, x_53);
lean::cnstr_set(x_60, 9, x_55);
lean::cnstr_set(x_60, 10, x_57);
x_61 = lean::box(0);
x_62 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_62, 0, x_61);
lean::cnstr_set(x_62, 1, x_60);
x_63 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_63, 0, x_62);
return x_63;
}
else
{
obj* x_67; obj* x_69; obj* x_70; obj* x_72; obj* x_74; obj* x_75; obj* x_76; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_18);
x_67 = l_lean_name_to__string___closed__1;
lean::inc(x_67);
x_69 = l_lean_name_to__string__with__sep___main(x_67, x_11);
x_70 = l_lean_elaborator_universe_elaborate___closed__1;
lean::inc(x_70);
x_72 = lean::string_append(x_70, x_69);
lean::dec(x_69);
x_74 = l_lean_elaborator_universe_elaborate___closed__2;
x_75 = lean::string_append(x_72, x_74);
x_76 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_75, x_1, x_2);
return x_76;
}
}
}
obj* _init_l_lean_elaborator_universe_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("a universe named '");
return x_0;
}
}
obj* _init_l_lean_elaborator_universe_elaborate___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("' has already been declared in this scope");
return x_0;
}
}
obj* l_lean_elaborator_attribute_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_8; obj* x_11; 
x_3 = l_lean_parser_command_attribute_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::inc(x_0);
x_7 = lean::apply_1(x_4, x_0);
x_8 = lean::cnstr_get(x_7, 3);
lean::inc(x_8);
lean::inc(x_1);
x_11 = l_lean_elaborator_attrs__to__pexpr(x_8, x_1, x_2);
if (lean::obj_tag(x_11) == 0)
{
obj* x_15; obj* x_17; obj* x_18; 
lean::dec(x_7);
lean::dec(x_0);
lean::dec(x_1);
x_15 = lean::cnstr_get(x_11, 0);
lean::inc(x_15);
if (lean::is_shared(x_11)) {
 lean::dec(x_11);
 x_17 = lean::box(0);
} else {
 lean::cnstr_release(x_11, 0);
 x_17 = x_11;
}
if (lean::is_scalar(x_17)) {
 x_18 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_18 = x_17;
}
lean::cnstr_set(x_18, 0, x_15);
return x_18;
}
else
{
obj* x_19; obj* x_21; obj* x_22; obj* x_24; obj* x_27; obj* x_30; 
x_19 = lean::cnstr_get(x_11, 0);
lean::inc(x_19);
if (lean::is_shared(x_11)) {
 lean::dec(x_11);
 x_21 = lean::box(0);
} else {
 lean::cnstr_release(x_11, 0);
 x_21 = x_11;
}
x_22 = lean::cnstr_get(x_19, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_19, 1);
lean::inc(x_24);
lean::dec(x_19);
x_27 = lean::cnstr_get(x_7, 5);
lean::inc(x_27);
lean::inc(x_1);
x_30 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(x_27, x_1, x_24);
if (lean::obj_tag(x_30) == 0)
{
obj* x_35; obj* x_38; 
lean::dec(x_7);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_22);
x_35 = lean::cnstr_get(x_30, 0);
lean::inc(x_35);
lean::dec(x_30);
if (lean::is_scalar(x_21)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_21;
}
lean::cnstr_set(x_38, 0, x_35);
return x_38;
}
else
{
obj* x_40; obj* x_43; obj* x_45; obj* x_48; unsigned char x_51; obj* x_52; obj* x_53; obj* x_56; obj* x_57; obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
lean::dec(x_21);
x_40 = lean::cnstr_get(x_30, 0);
lean::inc(x_40);
lean::dec(x_30);
x_43 = lean::cnstr_get(x_40, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_40, 1);
lean::inc(x_45);
lean::dec(x_40);
x_48 = lean::cnstr_get(x_7, 0);
lean::inc(x_48);
lean::dec(x_7);
x_51 = l_option_is__some___main___rarg(x_48);
x_52 = l_lean_elaborator_attribute_elaborate___closed__1;
x_53 = l_lean_elaborator_attribute_elaborate___closed__2;
lean::inc(x_53);
lean::inc(x_52);
x_56 = l_lean_kvmap_set__bool(x_52, x_53, x_51);
x_57 = l_lean_elaborator_mk__eqns___closed__1;
lean::inc(x_57);
x_59 = l_lean_expr_mk__capp(x_57, x_43);
x_60 = lean::alloc_cnstr(5, 2, 0);
lean::cnstr_set(x_60, 0, x_22);
lean::cnstr_set(x_60, 1, x_59);
x_61 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_61, 0, x_56);
lean::cnstr_set(x_61, 1, x_60);
x_62 = l_lean_elaborator_old__elab__command(x_0, x_61, x_1, x_45);
return x_62;
}
}
}
}
obj* _init_l_lean_elaborator_attribute_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
lean::inc(x_0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::mk_string("attribute");
lean::inc(x_0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_4);
x_7 = l_lean_kvmap_set__name(x_0, x_3, x_6);
return x_7;
}
}
obj* _init_l_lean_elaborator_attribute_elaborate___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("local");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
x_13 = lean::cnstr_get(x_8, 3);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; obj* x_18; obj* x_21; obj* x_23; obj* x_24; obj* x_26; obj* x_28; obj* x_29; obj* x_31; 
lean::dec(x_13);
lean::inc(x_8);
x_17 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_17, 0, x_8);
x_18 = lean::cnstr_get(x_8, 2);
lean::inc(x_18);
lean::dec(x_8);
x_21 = l_lean_name_to__string___closed__1;
lean::inc(x_21);
x_23 = l_lean_name_to__string__with__sep___main(x_21, x_18);
x_24 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1;
lean::inc(x_24);
x_26 = lean::string_append(x_24, x_23);
lean::dec(x_23);
x_28 = l_char_has__repr___closed__1;
x_29 = lean::string_append(x_26, x_28);
lean::inc(x_1);
x_31 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_17, x_29, x_1, x_2);
if (lean::obj_tag(x_31) == 0)
{
obj* x_35; obj* x_37; obj* x_38; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_35 = lean::cnstr_get(x_31, 0);
lean::inc(x_35);
if (lean::is_shared(x_31)) {
 lean::dec(x_31);
 x_37 = lean::box(0);
} else {
 lean::cnstr_release(x_31, 0);
 x_37 = x_31;
}
if (lean::is_scalar(x_37)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_37;
}
lean::cnstr_set(x_38, 0, x_35);
return x_38;
}
else
{
obj* x_39; obj* x_41; obj* x_42; obj* x_44; obj* x_46; obj* x_47; 
x_39 = lean::cnstr_get(x_31, 0);
lean::inc(x_39);
if (lean::is_shared(x_31)) {
 lean::dec(x_31);
 x_41 = lean::box(0);
} else {
 lean::cnstr_release(x_31, 0);
 x_41 = x_31;
}
x_42 = lean::cnstr_get(x_39, 0);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_39, 1);
lean::inc(x_44);
if (lean::is_shared(x_39)) {
 lean::dec(x_39);
 x_46 = lean::box(0);
} else {
 lean::cnstr_release(x_39, 0);
 lean::cnstr_release(x_39, 1);
 x_46 = x_39;
}
x_47 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(x_10, x_1, x_44);
if (lean::obj_tag(x_47) == 0)
{
obj* x_51; obj* x_54; 
lean::dec(x_12);
lean::dec(x_42);
lean::dec(x_46);
x_51 = lean::cnstr_get(x_47, 0);
lean::inc(x_51);
lean::dec(x_47);
if (lean::is_scalar(x_41)) {
 x_54 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_54 = x_41;
}
lean::cnstr_set(x_54, 0, x_51);
return x_54;
}
else
{
obj* x_55; obj* x_58; obj* x_60; obj* x_63; obj* x_64; obj* x_65; 
x_55 = lean::cnstr_get(x_47, 0);
lean::inc(x_55);
lean::dec(x_47);
x_58 = lean::cnstr_get(x_55, 0);
lean::inc(x_58);
x_60 = lean::cnstr_get(x_55, 1);
lean::inc(x_60);
lean::dec(x_55);
if (lean::is_scalar(x_12)) {
 x_63 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_63 = x_12;
}
lean::cnstr_set(x_63, 0, x_42);
lean::cnstr_set(x_63, 1, x_58);
if (lean::is_scalar(x_46)) {
 x_64 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_64 = x_46;
}
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_60);
if (lean::is_scalar(x_41)) {
 x_65 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_65 = x_41;
}
lean::cnstr_set(x_65, 0, x_64);
return x_65;
}
}
}
else
{
obj* x_66; obj* x_68; 
x_66 = lean::cnstr_get(x_13, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_13, 1);
lean::inc(x_68);
lean::dec(x_13);
if (lean::obj_tag(x_68) == 0)
{
obj* x_73; 
lean::dec(x_68);
lean::dec(x_8);
x_73 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(x_10, x_1, x_2);
if (lean::obj_tag(x_73) == 0)
{
obj* x_76; obj* x_78; obj* x_79; 
lean::dec(x_12);
lean::dec(x_66);
x_76 = lean::cnstr_get(x_73, 0);
lean::inc(x_76);
if (lean::is_shared(x_73)) {
 lean::dec(x_73);
 x_78 = lean::box(0);
} else {
 lean::cnstr_release(x_73, 0);
 x_78 = x_73;
}
if (lean::is_scalar(x_78)) {
 x_79 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_79 = x_78;
}
lean::cnstr_set(x_79, 0, x_76);
return x_79;
}
else
{
obj* x_80; obj* x_82; obj* x_83; obj* x_85; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
x_80 = lean::cnstr_get(x_73, 0);
lean::inc(x_80);
if (lean::is_shared(x_73)) {
 lean::dec(x_73);
 x_82 = lean::box(0);
} else {
 lean::cnstr_release(x_73, 0);
 x_82 = x_73;
}
x_83 = lean::cnstr_get(x_80, 0);
lean::inc(x_83);
x_85 = lean::cnstr_get(x_80, 1);
lean::inc(x_85);
if (lean::is_shared(x_80)) {
 lean::dec(x_80);
 x_87 = lean::box(0);
} else {
 lean::cnstr_release(x_80, 0);
 lean::cnstr_release(x_80, 1);
 x_87 = x_80;
}
x_88 = lean::box(0);
x_89 = lean::alloc_cnstr(4, 2, 0);
lean::cnstr_set(x_89, 0, x_66);
lean::cnstr_set(x_89, 1, x_88);
if (lean::is_scalar(x_12)) {
 x_90 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_90 = x_12;
}
lean::cnstr_set(x_90, 0, x_89);
lean::cnstr_set(x_90, 1, x_83);
if (lean::is_scalar(x_87)) {
 x_91 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_91 = x_87;
}
lean::cnstr_set(x_91, 0, x_90);
lean::cnstr_set(x_91, 1, x_85);
if (lean::is_scalar(x_82)) {
 x_92 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_92 = x_82;
}
lean::cnstr_set(x_92, 0, x_91);
return x_92;
}
}
else
{
obj* x_95; obj* x_96; obj* x_99; 
lean::dec(x_66);
lean::dec(x_68);
x_95 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_95, 0, x_8);
x_96 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2;
lean::inc(x_1);
lean::inc(x_96);
x_99 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_95, x_96, x_1, x_2);
if (lean::obj_tag(x_99) == 0)
{
obj* x_103; obj* x_105; obj* x_106; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_103 = lean::cnstr_get(x_99, 0);
lean::inc(x_103);
if (lean::is_shared(x_99)) {
 lean::dec(x_99);
 x_105 = lean::box(0);
} else {
 lean::cnstr_release(x_99, 0);
 x_105 = x_99;
}
if (lean::is_scalar(x_105)) {
 x_106 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_106 = x_105;
}
lean::cnstr_set(x_106, 0, x_103);
return x_106;
}
else
{
obj* x_107; obj* x_109; obj* x_110; obj* x_112; obj* x_114; obj* x_115; 
x_107 = lean::cnstr_get(x_99, 0);
lean::inc(x_107);
if (lean::is_shared(x_99)) {
 lean::dec(x_99);
 x_109 = lean::box(0);
} else {
 lean::cnstr_release(x_99, 0);
 x_109 = x_99;
}
x_110 = lean::cnstr_get(x_107, 0);
lean::inc(x_110);
x_112 = lean::cnstr_get(x_107, 1);
lean::inc(x_112);
if (lean::is_shared(x_107)) {
 lean::dec(x_107);
 x_114 = lean::box(0);
} else {
 lean::cnstr_release(x_107, 0);
 lean::cnstr_release(x_107, 1);
 x_114 = x_107;
}
x_115 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(x_10, x_1, x_112);
if (lean::obj_tag(x_115) == 0)
{
obj* x_119; obj* x_122; 
lean::dec(x_12);
lean::dec(x_114);
lean::dec(x_110);
x_119 = lean::cnstr_get(x_115, 0);
lean::inc(x_119);
lean::dec(x_115);
if (lean::is_scalar(x_109)) {
 x_122 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_122 = x_109;
}
lean::cnstr_set(x_122, 0, x_119);
return x_122;
}
else
{
obj* x_123; obj* x_126; obj* x_128; obj* x_131; obj* x_132; obj* x_133; 
x_123 = lean::cnstr_get(x_115, 0);
lean::inc(x_123);
lean::dec(x_115);
x_126 = lean::cnstr_get(x_123, 0);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_123, 1);
lean::inc(x_128);
lean::dec(x_123);
if (lean::is_scalar(x_12)) {
 x_131 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_131 = x_12;
}
lean::cnstr_set(x_131, 0, x_110);
lean::cnstr_set(x_131, 1, x_126);
if (lean::is_scalar(x_114)) {
 x_132 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_132 = x_114;
}
lean::cnstr_set(x_132, 0, x_131);
lean::cnstr_set(x_132, 1, x_128);
if (lean::is_scalar(x_109)) {
 x_133 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_133 = x_109;
}
lean::cnstr_set(x_133, 0, x_132);
return x_133;
}
}
}
}
}
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unknown identifier '");
return x_0;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid 'attribute' command, identifier is ambiguous");
return x_0;
}
}
obj* l_lean_elaborator_check_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_8; obj* x_12; 
x_3 = l_lean_parser_command_check_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::inc(x_0);
x_7 = lean::apply_1(x_4, x_0);
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
lean::dec(x_7);
lean::inc(x_1);
x_12 = l_lean_elaborator_to__pexpr___main(x_8, x_1, x_2);
if (lean::obj_tag(x_12) == 0)
{
obj* x_15; obj* x_17; obj* x_18; 
lean::dec(x_0);
lean::dec(x_1);
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
if (lean::is_shared(x_12)) {
 lean::dec(x_12);
 x_17 = lean::box(0);
} else {
 lean::cnstr_release(x_12, 0);
 x_17 = x_12;
}
if (lean::is_scalar(x_17)) {
 x_18 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_18 = x_17;
}
lean::cnstr_set(x_18, 0, x_15);
return x_18;
}
else
{
obj* x_19; obj* x_22; obj* x_24; obj* x_27; obj* x_29; obj* x_30; 
x_19 = lean::cnstr_get(x_12, 0);
lean::inc(x_19);
lean::dec(x_12);
x_22 = lean::cnstr_get(x_19, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_19, 1);
lean::inc(x_24);
lean::dec(x_19);
x_27 = l_lean_elaborator_check_elaborate___closed__1;
lean::inc(x_27);
x_29 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_29, 0, x_27);
lean::cnstr_set(x_29, 1, x_22);
x_30 = l_lean_elaborator_old__elab__command(x_0, x_29, x_1, x_24);
return x_30;
}
}
}
obj* _init_l_lean_elaborator_check_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
lean::inc(x_0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::mk_string("#check");
lean::inc(x_0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_4);
x_7 = l_lean_kvmap_set__name(x_0, x_3, x_6);
return x_7;
}
}
obj* l_lean_elaborator_open_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_33; obj* x_34; obj* x_37; obj* x_38; obj* x_40; obj* x_42; obj* x_44; obj* x_46; obj* x_48; obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
lean::dec(x_1);
x_4 = l_lean_parser_command_open_has__view;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::apply_1(x_5, x_0);
x_8 = lean::cnstr_get(x_2, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_2, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_2, 2);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_2, 3);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_2, 4);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_16, 1);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_16, 2);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_16, 3);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_16, 4);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_16, 5);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_7, 1);
lean::inc(x_30);
lean::dec(x_7);
x_33 = l_list_append___main___rarg(x_28, x_30);
x_34 = lean::cnstr_get(x_16, 6);
lean::inc(x_34);
lean::dec(x_16);
x_37 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_37, 0, x_18);
lean::cnstr_set(x_37, 1, x_20);
lean::cnstr_set(x_37, 2, x_22);
lean::cnstr_set(x_37, 3, x_24);
lean::cnstr_set(x_37, 4, x_26);
lean::cnstr_set(x_37, 5, x_33);
lean::cnstr_set(x_37, 6, x_34);
x_38 = lean::cnstr_get(x_2, 5);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_2, 6);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_2, 7);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_2, 8);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_2, 9);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_2, 10);
lean::inc(x_48);
lean::dec(x_2);
x_51 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_51, 0, x_8);
lean::cnstr_set(x_51, 1, x_10);
lean::cnstr_set(x_51, 2, x_12);
lean::cnstr_set(x_51, 3, x_14);
lean::cnstr_set(x_51, 4, x_37);
lean::cnstr_set(x_51, 5, x_38);
lean::cnstr_set(x_51, 6, x_40);
lean::cnstr_set(x_51, 7, x_42);
lean::cnstr_set(x_51, 8, x_44);
lean::cnstr_set(x_51, 9, x_46);
lean::cnstr_set(x_51, 10, x_48);
x_52 = lean::box(0);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_51);
x_54 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_54, 0, x_53);
return x_54;
}
}
obj* l_lean_elaborator_export_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; 
lean::dec(x_1);
x_4 = l_lean_elaborator_get__namespace___rarg(x_2);
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; obj* x_8; obj* x_9; 
lean::dec(x_0);
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 x_8 = x_4;
}
if (lean::is_scalar(x_8)) {
 x_9 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_9 = x_8;
}
lean::cnstr_set(x_9, 0, x_6);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_13; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_21; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_33; obj* x_34; obj* x_35; obj* x_37; obj* x_39; obj* x_41; obj* x_43; obj* x_45; obj* x_47; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
x_10 = lean::cnstr_get(x_4, 0);
lean::inc(x_10);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 x_12 = x_4;
}
x_13 = lean::cnstr_get(x_10, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_10, 1);
lean::inc(x_15);
if (lean::is_shared(x_10)) {
 lean::dec(x_10);
 x_17 = lean::box(0);
} else {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_release(x_10, 1);
 x_17 = x_10;
}
x_18 = l_lean_parser_command_export_has__view;
x_19 = lean::cnstr_get(x_18, 0);
lean::inc(x_19);
x_21 = lean::apply_1(x_19, x_0);
x_22 = lean::cnstr_get(x_15, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_15, 1);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_15, 2);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_15, 3);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_21, 1);
lean::inc(x_30);
lean::dec(x_21);
x_33 = l_list_map___main___at_lean_elaborator_export_elaborate___spec__1(x_13, x_30);
x_34 = l_list_append___main___rarg(x_28, x_33);
x_35 = lean::cnstr_get(x_15, 4);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_15, 5);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_15, 6);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_15, 7);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_15, 8);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_15, 9);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_15, 10);
lean::inc(x_47);
lean::dec(x_15);
x_50 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_50, 0, x_22);
lean::cnstr_set(x_50, 1, x_24);
lean::cnstr_set(x_50, 2, x_26);
lean::cnstr_set(x_50, 3, x_34);
lean::cnstr_set(x_50, 4, x_35);
lean::cnstr_set(x_50, 5, x_37);
lean::cnstr_set(x_50, 6, x_39);
lean::cnstr_set(x_50, 7, x_41);
lean::cnstr_set(x_50, 8, x_43);
lean::cnstr_set(x_50, 9, x_45);
lean::cnstr_set(x_50, 10, x_47);
x_51 = lean::box(0);
if (lean::is_scalar(x_17)) {
 x_52 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_52 = x_17;
}
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_50);
if (lean::is_scalar(x_12)) {
 x_53 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_53 = x_12;
}
lean::cnstr_set(x_53, 0, x_52);
return x_53;
}
}
}
obj* l_list_map___main___at_lean_elaborator_export_elaborate___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_4; 
lean::dec(x_0);
lean::dec(x_1);
x_4 = lean::box(0);
return x_4;
}
else
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_13; 
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 1);
lean::inc(x_7);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_9 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_9 = x_1;
}
lean::inc(x_0);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_0);
lean::cnstr_set(x_11, 1, x_5);
x_12 = l_list_map___main___at_lean_elaborator_export_elaborate___spec__1(x_0, x_7);
if (lean::is_scalar(x_9)) {
 x_13 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_13 = x_9;
}
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
}
}
obj* l_lean_elaborator_init__quot_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; 
x_3 = l_lean_elaborator_init__quot_elaborate___closed__1;
lean::inc(x_3);
x_5 = l_lean_elaborator_old__elab__command(x_0, x_3, x_1, x_2);
return x_5;
}
}
obj* _init_l_lean_elaborator_init__quot_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
lean::inc(x_0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::mk_string("init_quot");
lean::inc(x_0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_4);
x_7 = l_lean_kvmap_set__name(x_0, x_3, x_6);
x_8 = l_lean_elaborator_dummy;
lean::inc(x_8);
x_10 = lean::alloc_cnstr(10, 2, 0);
lean::cnstr_set(x_10, 0, x_7);
lean::cnstr_set(x_10, 1, x_8);
return x_10;
}
}
obj* l_lean_elaborator_set__option_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_10; obj* x_13; obj* x_15; obj* x_17; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; obj* x_38; obj* x_41; obj* x_43; obj* x_45; obj* x_47; obj* x_49; obj* x_51; 
lean::dec(x_1);
x_4 = l_lean_parser_command_set__option_has__view;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::apply_1(x_5, x_0);
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_8, 2);
lean::inc(x_10);
lean::dec(x_8);
x_13 = lean::cnstr_get(x_2, 4);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_13, 6);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_7, 2);
lean::inc(x_17);
lean::dec(x_7);
x_20 = lean::cnstr_get(x_2, 0);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_2, 1);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_2, 2);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_2, 3);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_13, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_13, 1);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_13, 2);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_13, 3);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_13, 4);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_13, 5);
lean::inc(x_38);
lean::dec(x_13);
x_41 = lean::cnstr_get(x_2, 5);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_2, 6);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_2, 7);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_2, 8);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_2, 9);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_2, 10);
lean::inc(x_51);
lean::dec(x_2);
switch (lean::obj_tag(x_17)) {
case 0:
{
obj* x_54; 
x_54 = lean::cnstr_get(x_17, 0);
lean::inc(x_54);
lean::dec(x_17);
if (lean::obj_tag(x_54) == 0)
{
unsigned char x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
lean::dec(x_54);
x_58 = 1;
x_59 = l_lean_kvmap_set__bool(x_15, x_10, x_58);
x_60 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_60, 0, x_28);
lean::cnstr_set(x_60, 1, x_30);
lean::cnstr_set(x_60, 2, x_32);
lean::cnstr_set(x_60, 3, x_34);
lean::cnstr_set(x_60, 4, x_36);
lean::cnstr_set(x_60, 5, x_38);
lean::cnstr_set(x_60, 6, x_59);
x_61 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_61, 0, x_20);
lean::cnstr_set(x_61, 1, x_22);
lean::cnstr_set(x_61, 2, x_24);
lean::cnstr_set(x_61, 3, x_26);
lean::cnstr_set(x_61, 4, x_60);
lean::cnstr_set(x_61, 5, x_41);
lean::cnstr_set(x_61, 6, x_43);
lean::cnstr_set(x_61, 7, x_45);
lean::cnstr_set(x_61, 8, x_47);
lean::cnstr_set(x_61, 9, x_49);
lean::cnstr_set(x_61, 10, x_51);
x_62 = lean::box(0);
x_63 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_61);
x_64 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_64, 0, x_63);
return x_64;
}
else
{
unsigned char x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; 
lean::dec(x_54);
x_66 = 0;
x_67 = l_lean_kvmap_set__bool(x_15, x_10, x_66);
x_68 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_68, 0, x_28);
lean::cnstr_set(x_68, 1, x_30);
lean::cnstr_set(x_68, 2, x_32);
lean::cnstr_set(x_68, 3, x_34);
lean::cnstr_set(x_68, 4, x_36);
lean::cnstr_set(x_68, 5, x_38);
lean::cnstr_set(x_68, 6, x_67);
x_69 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_69, 0, x_20);
lean::cnstr_set(x_69, 1, x_22);
lean::cnstr_set(x_69, 2, x_24);
lean::cnstr_set(x_69, 3, x_26);
lean::cnstr_set(x_69, 4, x_68);
lean::cnstr_set(x_69, 5, x_41);
lean::cnstr_set(x_69, 6, x_43);
lean::cnstr_set(x_69, 7, x_45);
lean::cnstr_set(x_69, 8, x_47);
lean::cnstr_set(x_69, 9, x_49);
lean::cnstr_set(x_69, 10, x_51);
x_70 = lean::box(0);
x_71 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_71, 0, x_70);
lean::cnstr_set(x_71, 1, x_69);
x_72 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_72, 0, x_71);
return x_72;
}
}
case 1:
{
obj* x_73; obj* x_76; 
x_73 = lean::cnstr_get(x_17, 0);
lean::inc(x_73);
lean::dec(x_17);
x_76 = l_lean_parser_string__lit_view_value(x_73);
if (lean::obj_tag(x_76) == 0)
{
obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; 
lean::dec(x_76);
lean::dec(x_10);
x_79 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_79, 0, x_28);
lean::cnstr_set(x_79, 1, x_30);
lean::cnstr_set(x_79, 2, x_32);
lean::cnstr_set(x_79, 3, x_34);
lean::cnstr_set(x_79, 4, x_36);
lean::cnstr_set(x_79, 5, x_38);
lean::cnstr_set(x_79, 6, x_15);
x_80 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_80, 0, x_20);
lean::cnstr_set(x_80, 1, x_22);
lean::cnstr_set(x_80, 2, x_24);
lean::cnstr_set(x_80, 3, x_26);
lean::cnstr_set(x_80, 4, x_79);
lean::cnstr_set(x_80, 5, x_41);
lean::cnstr_set(x_80, 6, x_43);
lean::cnstr_set(x_80, 7, x_45);
lean::cnstr_set(x_80, 8, x_47);
lean::cnstr_set(x_80, 9, x_49);
lean::cnstr_set(x_80, 10, x_51);
x_81 = lean::box(0);
x_82 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_82, 0, x_81);
lean::cnstr_set(x_82, 1, x_80);
x_83 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_83, 0, x_82);
return x_83;
}
else
{
obj* x_84; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
x_84 = lean::cnstr_get(x_76, 0);
lean::inc(x_84);
lean::dec(x_76);
x_87 = l_lean_kvmap_set__string(x_15, x_10, x_84);
x_88 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_88, 0, x_28);
lean::cnstr_set(x_88, 1, x_30);
lean::cnstr_set(x_88, 2, x_32);
lean::cnstr_set(x_88, 3, x_34);
lean::cnstr_set(x_88, 4, x_36);
lean::cnstr_set(x_88, 5, x_38);
lean::cnstr_set(x_88, 6, x_87);
x_89 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_89, 0, x_20);
lean::cnstr_set(x_89, 1, x_22);
lean::cnstr_set(x_89, 2, x_24);
lean::cnstr_set(x_89, 3, x_26);
lean::cnstr_set(x_89, 4, x_88);
lean::cnstr_set(x_89, 5, x_41);
lean::cnstr_set(x_89, 6, x_43);
lean::cnstr_set(x_89, 7, x_45);
lean::cnstr_set(x_89, 8, x_47);
lean::cnstr_set(x_89, 9, x_49);
lean::cnstr_set(x_89, 10, x_51);
x_90 = lean::box(0);
x_91 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_91, 0, x_90);
lean::cnstr_set(x_91, 1, x_89);
x_92 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_92, 0, x_91);
return x_92;
}
}
default:
{
obj* x_93; obj* x_96; obj* x_97; obj* x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; 
x_93 = lean::cnstr_get(x_17, 0);
lean::inc(x_93);
lean::dec(x_17);
x_96 = l_lean_parser_number_view_to__nat___main(x_93);
x_97 = l_lean_kvmap_set__nat(x_15, x_10, x_96);
x_98 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_98, 0, x_28);
lean::cnstr_set(x_98, 1, x_30);
lean::cnstr_set(x_98, 2, x_32);
lean::cnstr_set(x_98, 3, x_34);
lean::cnstr_set(x_98, 4, x_36);
lean::cnstr_set(x_98, 5, x_38);
lean::cnstr_set(x_98, 6, x_97);
x_99 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_99, 0, x_20);
lean::cnstr_set(x_99, 1, x_22);
lean::cnstr_set(x_99, 2, x_24);
lean::cnstr_set(x_99, 3, x_26);
lean::cnstr_set(x_99, 4, x_98);
lean::cnstr_set(x_99, 5, x_41);
lean::cnstr_set(x_99, 6, x_43);
lean::cnstr_set(x_99, 7, x_45);
lean::cnstr_set(x_99, 8, x_47);
lean::cnstr_set(x_99, 9, x_49);
lean::cnstr_set(x_99, 10, x_51);
x_100 = lean::box(0);
x_101 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_101, 0, x_100);
lean::cnstr_set(x_101, 1, x_99);
x_102 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_102, 0, x_101);
return x_102;
}
}
}
}
obj* l_lean_elaborator_no__kind_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = l_lean_elaborator_current__command___rarg(x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_no__kind_elaborate___lambda__2), 3, 2);
lean::closure_set(x_4, 0, x_0);
lean::closure_set(x_4, 1, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_lean_elaborator_no__kind_elaborate___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_10; obj* x_12; 
lean::dec(x_4);
x_10 = l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1;
lean::inc(x_10);
x_12 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_0, x_10, x_1, x_2, x_6);
return x_12;
}
else
{
obj* x_14; obj* x_17; obj* x_20; 
lean::dec(x_0);
x_14 = lean::cnstr_get(x_4, 0);
lean::inc(x_14);
lean::dec(x_4);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
lean::dec(x_14);
x_20 = l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2(x_17, x_1, x_2, x_6);
return x_20;
}
}
}
obj* _init_l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("no_kind.elaborate: unreachable");
return x_0;
}
}
obj* l_lean_elaborator_no__kind_elaborate___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
if (lean::is_shared(x_2)) {
 lean::dec(x_2);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_2, 0);
 lean::cnstr_release(x_2, 1);
 x_7 = x_2;
}
lean::inc(x_3);
x_9 = l_lean_parser_syntax_as__node___main(x_3);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_5);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_no__kind_elaborate___lambda__1), 4, 3);
lean::closure_set(x_13, 0, x_3);
lean::closure_set(x_13, 1, x_0);
lean::closure_set(x_13, 2, x_1);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_14, 0, x_13);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_15, 0, x_12);
lean::closure_set(x_15, 1, x_14);
return x_15;
}
}
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_2);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_3);
lean::cnstr_set(x_6, 1, x_4);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg___lambda__1), 3, 2);
lean::closure_set(x_9, 0, x_0);
lean::closure_set(x_9, 1, x_1);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_10, 0, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_11, 0, x_8);
lean::closure_set(x_11, 1, x_10);
return x_11;
}
}
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; obj* x_11; obj* x_13; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; unsigned char x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
lean::dec(x_3);
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_8, 2);
lean::inc(x_13);
lean::dec(x_8);
x_16 = l_lean_parser_syntax_get__pos(x_0);
x_17 = lean::mk_nat_obj(0u);
x_18 = l_option_get__or__else___main___rarg(x_16, x_17);
x_19 = l_lean_file__map_to__position(x_13, x_18);
x_20 = lean::box(0);
x_21 = 2;
x_22 = l_string_join___closed__1;
lean::inc(x_22);
x_24 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_24, 0, x_11);
lean::cnstr_set(x_24, 1, x_19);
lean::cnstr_set(x_24, 2, x_20);
lean::cnstr_set(x_24, 3, x_22);
lean::cnstr_set(x_24, 4, x_1);
lean::cnstr_set_scalar(x_24, sizeof(void*)*5, x_21);
x_25 = x_24;
x_26 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_26, 0, x_25);
x_27 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_27, 0, x_26);
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg___lambda__1), 2, 1);
lean::closure_set(x_28, 0, x_5);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_29, 0, x_28);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_30, 0, x_27);
lean::closure_set(x_30, 1, x_29);
return x_30;
}
}
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg), 5, 0);
return x_2;
}
}
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_10, 0, x_9);
return x_10;
}
else
{
obj* x_11; obj* x_13; obj* x_16; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_11 = lean::cnstr_get(x_0, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_0, 1);
lean::inc(x_13);
lean::dec(x_0);
x_16 = l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1;
lean::inc(x_2);
lean::inc(x_1);
lean::inc(x_16);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_with__current__command___rarg), 6, 5);
lean::closure_set(x_20, 0, x_11);
lean::closure_set(x_20, 1, x_16);
lean::closure_set(x_20, 2, x_1);
lean::closure_set(x_20, 3, x_2);
lean::closure_set(x_20, 4, x_3);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___lambda__1), 4, 3);
lean::closure_set(x_21, 0, x_13);
lean::closure_set(x_21, 1, x_1);
lean::closure_set(x_21, 2, x_2);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_22, 0, x_21);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_23, 0, x_20);
lean::closure_set(x_23, 1, x_22);
return x_23;
}
}
}
obj* _init_l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_command_elaborate), 3, 0);
return x_0;
}
}
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
lean::dec(x_3);
x_7 = l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2(x_0, x_1, x_2, x_4);
return x_7;
}
}
obj* l_lean_elaborator_commands_elaborate___main(unsigned char x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_1, x_5);
lean::dec(x_5);
if (lean::obj_tag(x_6) == 0)
{
obj* x_9; obj* x_10; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
lean::dec(x_6);
x_9 = lean::mk_nat_obj(1u);
x_10 = lean::nat_sub(x_1, x_9);
lean::dec(x_9);
lean::dec(x_1);
x_13 = l_lean_elaborator_current__command___rarg(x_4);
x_14 = lean::box(x_0);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__4___boxed), 5, 4);
lean::closure_set(x_15, 0, x_2);
lean::closure_set(x_15, 1, x_3);
lean::closure_set(x_15, 2, x_14);
lean::closure_set(x_15, 3, x_10);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_16, 0, x_15);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_17, 0, x_13);
lean::closure_set(x_17, 1, x_16);
return x_17;
}
else
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
lean::dec(x_6);
lean::dec(x_1);
x_20 = l_lean_elaborator_current__command___rarg(x_4);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__5), 3, 2);
lean::closure_set(x_21, 0, x_2);
lean::closure_set(x_21, 1, x_3);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_22, 0, x_21);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_23, 0, x_20);
lean::closure_set(x_23, 1, x_22);
return x_23;
}
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__2(unsigned char x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; 
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
lean::dec(x_4);
x_8 = l_lean_elaborator_commands_elaborate___main(x_0, x_1, x_2, x_3, x_5);
return x_8;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__3(unsigned char x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
lean::dec(x_4);
x_8 = l_lean_elaborator_yield__to__outside___rarg(x_5);
x_9 = lean::box(x_0);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__2___boxed), 5, 4);
lean::closure_set(x_10, 0, x_9);
lean::closure_set(x_10, 1, x_1);
lean::closure_set(x_10, 2, x_2);
lean::closure_set(x_10, 3, x_3);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_11, 0, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_12, 0, x_8);
lean::closure_set(x_12, 1, x_11);
return x_12;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__4(obj* x_0, obj* x_1, unsigned char x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_14; 
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_9 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 x_9 = x_4;
}
lean::inc(x_5);
x_11 = l_lean_parser_syntax_as__node___main(x_5);
x_12 = l_lean_elaborator_commands_elaborate___main___lambda__4___closed__1;
lean::inc(x_12);
x_14 = l_option_map___rarg(x_12, x_11);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
lean::dec(x_14);
lean::dec(x_5);
lean::dec(x_9);
x_18 = lean::box(0);
lean::inc(x_1);
lean::inc(x_0);
x_21 = l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1(x_18, x_0, x_1, x_7);
x_22 = lean::box(x_2);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__3___boxed), 5, 4);
lean::closure_set(x_23, 0, x_22);
lean::closure_set(x_23, 1, x_3);
lean::closure_set(x_23, 2, x_0);
lean::closure_set(x_23, 3, x_1);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_24, 0, x_23);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_25, 0, x_21);
lean::closure_set(x_25, 1, x_24);
return x_25;
}
else
{
obj* x_26; obj* x_29; obj* x_32; 
x_26 = lean::cnstr_get(x_14, 0);
lean::inc(x_26);
lean::dec(x_14);
x_29 = l_lean_elaborator_commands_elaborate___main___lambda__4___closed__2;
lean::inc(x_29);
lean::inc(x_26);
x_32 = l_lean_name_has__dec__eq___main(x_26, x_29);
if (lean::obj_tag(x_32) == 0)
{
obj* x_34; obj* x_36; 
lean::dec(x_32);
x_34 = l_lean_elaborator_commands_elaborate___main___lambda__4___closed__3;
lean::inc(x_34);
x_36 = l_lean_name_has__dec__eq___main(x_26, x_34);
if (lean::obj_tag(x_36) == 0)
{
obj* x_40; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_36);
x_40 = lean::box(0);
lean::inc(x_1);
lean::inc(x_0);
x_43 = l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1(x_40, x_0, x_1, x_7);
x_44 = lean::box(x_2);
x_45 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__3___boxed), 5, 4);
lean::closure_set(x_45, 0, x_44);
lean::closure_set(x_45, 1, x_3);
lean::closure_set(x_45, 2, x_0);
lean::closure_set(x_45, 3, x_1);
x_46 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_46, 0, x_45);
x_47 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_47, 0, x_43);
lean::closure_set(x_47, 1, x_46);
return x_47;
}
else
{
lean::dec(x_3);
lean::dec(x_36);
if (x_2 == 0)
{
obj* x_53; obj* x_54; obj* x_55; obj* x_56; 
lean::dec(x_5);
lean::dec(x_0);
lean::dec(x_1);
x_53 = lean::box(0);
if (lean::is_scalar(x_9)) {
 x_54 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_54 = x_9;
}
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_7);
x_55 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_55, 0, x_54);
x_56 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_56, 0, x_55);
return x_56;
}
else
{
obj* x_58; obj* x_60; 
lean::dec(x_9);
x_58 = l_lean_elaborator_commands_elaborate___main___lambda__4___closed__4;
lean::inc(x_58);
x_60 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_5, x_58, x_0, x_1, x_7);
return x_60;
}
}
}
else
{
lean::dec(x_3);
lean::dec(x_32);
lean::dec(x_26);
if (x_2 == 0)
{
obj* x_65; obj* x_67; 
lean::dec(x_9);
x_65 = l_lean_elaborator_commands_elaborate___main___lambda__4___closed__5;
lean::inc(x_65);
x_67 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_5, x_65, x_0, x_1, x_7);
return x_67;
}
else
{
obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
lean::dec(x_5);
lean::dec(x_0);
lean::dec(x_1);
x_71 = lean::box(0);
if (lean::is_scalar(x_9)) {
 x_72 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_72 = x_9;
}
lean::cnstr_set(x_72, 0, x_71);
lean::cnstr_set(x_72, 1, x_7);
x_73 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_73, 0, x_72);
x_74 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_74, 0, x_73);
return x_74;
}
}
}
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__1), 1, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_string("command");
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = lean::mk_string("end");
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_string("module");
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = lean::mk_string("eoi");
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__4() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid end of input, expected 'end'");
return x_0;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__5() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid 'end', there is no open scope to end");
return x_0;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; obj* x_10; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = l_lean_elaborator_commands_elaborate___main___lambda__5___closed__1;
lean::inc(x_8);
x_10 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_3, x_8, x_0, x_1, x_5);
return x_10;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__5___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("commands.elaborate: out of fuel");
return x_0;
}
}
obj* l_lean_elaborator_commands_elaborate___main___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
unsigned char x_5; obj* x_6; 
x_5 = lean::unbox(x_0);
x_6 = l_lean_elaborator_commands_elaborate___main(x_5, x_1, x_2, x_3, x_4);
return x_6;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
unsigned char x_5; obj* x_6; 
x_5 = lean::unbox(x_0);
x_6 = l_lean_elaborator_commands_elaborate___main___lambda__2(x_5, x_1, x_2, x_3, x_4);
return x_6;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__3___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
unsigned char x_5; obj* x_6; 
x_5 = lean::unbox(x_0);
x_6 = l_lean_elaborator_commands_elaborate___main___lambda__3(x_5, x_1, x_2, x_3, x_4);
return x_6;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
unsigned char x_5; obj* x_6; 
x_5 = lean::unbox(x_2);
x_6 = l_lean_elaborator_commands_elaborate___main___lambda__4(x_0, x_1, x_5, x_3, x_4);
return x_6;
}
}
obj* l_lean_elaborator_commands_elaborate(unsigned char x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_elaborator_commands_elaborate___main(x_0, x_1, x_2, x_3, x_4);
return x_5;
}
}
obj* l_lean_elaborator_commands_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
unsigned char x_5; obj* x_6; 
x_5 = lean::unbox(x_0);
x_6 = l_lean_elaborator_commands_elaborate(x_5, x_1, x_2, x_3, x_4);
return x_6;
}
}
obj* l_lean_elaborator_end__scope(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::inc(x_3);
x_6 = l_lean_elaborator_update__parser__config(x_3, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__3), 5, 4);
lean::closure_set(x_8, 0, x_0);
lean::closure_set(x_8, 1, x_1);
lean::closure_set(x_8, 2, x_2);
lean::closure_set(x_8, 3, x_3);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_9);
return x_10;
}
}
obj* l_lean_elaborator_end__scope___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_6 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_6 = x_1;
}
x_7 = lean::apply_1(x_0, x_2);
if (lean::is_scalar(x_6)) {
 x_8 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_8 = x_6;
}
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_4);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_10, 0, x_9);
return x_10;
}
}
obj* l_lean_elaborator_end__scope___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_14; obj* x_16; 
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_9 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 x_9 = x_4;
}
x_12 = lean::cnstr_get(x_5, 1);
lean::inc(x_12);
x_14 = l_lean_elaborator_to__pexpr___main___closed__28;
lean::inc(x_14);
x_16 = l_option_map___rarg(x_14, x_12);
if (lean::obj_tag(x_16) == 0)
{
lean::dec(x_16);
if (lean::obj_tag(x_1) == 0)
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_5);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
x_23 = lean::box(0);
if (lean::is_scalar(x_9)) {
 x_24 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_24 = x_9;
}
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_7);
x_25 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_25, 0, x_24);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_26, 0, x_25);
return x_26;
}
else
{
obj* x_28; 
lean::dec(x_9);
x_28 = lean::box(0);
x_10 = x_28;
goto lbl_11;
}
}
else
{
obj* x_29; 
x_29 = lean::cnstr_get(x_16, 0);
lean::inc(x_29);
lean::dec(x_16);
if (lean::obj_tag(x_1) == 0)
{
obj* x_34; 
lean::dec(x_9);
lean::dec(x_29);
x_34 = lean::box(0);
x_10 = x_34;
goto lbl_11;
}
else
{
obj* x_35; obj* x_37; 
x_35 = lean::cnstr_get(x_1, 0);
lean::inc(x_35);
x_37 = l_lean_name_has__dec__eq___main(x_29, x_35);
if (lean::obj_tag(x_37) == 0)
{
obj* x_40; 
lean::dec(x_9);
lean::dec(x_37);
x_40 = lean::box(0);
x_10 = x_40;
goto lbl_11;
}
else
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
lean::dec(x_5);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
lean::dec(x_37);
x_47 = lean::box(0);
if (lean::is_scalar(x_9)) {
 x_48 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_48 = x_9;
}
lean::cnstr_set(x_48, 0, x_47);
lean::cnstr_set(x_48, 1, x_7);
x_49 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_49, 0, x_48);
x_50 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_50, 0, x_49);
return x_50;
}
}
}
lbl_11:
{
obj* x_52; obj* x_53; obj* x_55; obj* x_56; obj* x_58; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_66; obj* x_67; obj* x_69; obj* x_70; obj* x_71; 
lean::dec(x_10);
x_52 = l_lean_parser_command_end_has__view;
x_53 = lean::cnstr_get(x_52, 1);
lean::inc(x_53);
x_55 = lean::apply_1(x_53, x_5);
x_56 = l_lean_elaborator_end__scope___lambda__2___closed__1;
lean::inc(x_56);
x_58 = lean::string_append(x_56, x_0);
lean::dec(x_0);
x_60 = l_lean_elaborator_end__scope___lambda__2___closed__2;
x_61 = lean::string_append(x_58, x_60);
x_62 = lean::box(0);
x_63 = l_option_get__or__else___main___rarg(x_1, x_62);
x_64 = l_lean_name_to__string___closed__1;
lean::inc(x_64);
x_66 = l_lean_name_to__string__with__sep___main(x_64, x_63);
x_67 = lean::string_append(x_61, x_66);
lean::dec(x_66);
x_69 = l_char_has__repr___closed__1;
x_70 = lean::string_append(x_67, x_69);
x_71 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_55, x_70, x_2, x_3, x_7);
return x_71;
}
}
}
obj* _init_l_lean_elaborator_end__scope___lambda__2___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid end of ");
return x_0;
}
}
obj* _init_l_lean_elaborator_end__scope___lambda__2___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string(", expected name '");
return x_0;
}
}
obj* l_lean_elaborator_end__scope___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
lean::dec(x_4);
x_8 = l_lean_elaborator_current__command___rarg(x_5);
x_9 = l_lean_elaborator_end__scope___lambda__3___closed__1;
lean::inc(x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_11, 0, x_8);
lean::closure_set(x_11, 1, x_9);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__2), 5, 4);
lean::closure_set(x_12, 0, x_0);
lean::closure_set(x_12, 1, x_1);
lean::closure_set(x_12, 2, x_2);
lean::closure_set(x_12, 3, x_3);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_11);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
}
obj* _init_l_lean_elaborator_end__scope___lambda__3___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_0 = l_lean_parser_command_end_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__1), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_4, 0, x_3);
return x_4;
}
}
obj* l_lean_elaborator_section_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_3 = l_lean_elaborator_current__command___rarg(x_2);
x_4 = l_lean_elaborator_section_elaborate___closed__1;
lean::inc(x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_section_elaborate___lambda__2), 3, 2);
lean::closure_set(x_7, 0, x_0);
lean::closure_set(x_7, 1, x_1);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_9, 0, x_6);
lean::closure_set(x_9, 1, x_8);
return x_9;
}
}
obj* _init_l_lean_elaborator_section_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_0 = l_lean_parser_command_section_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__1), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_4, 0, x_3);
return x_4;
}
}
obj* l_lean_elaborator_section_elaborate___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_10; obj* x_12; obj* x_13; obj* x_15; 
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
lean::dec(x_3);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
lean::dec(x_0);
x_10 = l_lean_elaborator_to__pexpr___main___closed__28;
lean::inc(x_10);
x_12 = l_option_map___rarg(x_10, x_7);
x_13 = l_lean_elaborator_section_elaborate___lambda__1___closed__1;
lean::inc(x_13);
x_15 = l_lean_elaborator_end__scope(x_13, x_12, x_1, x_2, x_4);
return x_15;
}
}
obj* _init_l_lean_elaborator_section_elaborate___lambda__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("section");
return x_0;
}
}
obj* l_lean_elaborator_section_elaborate___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
lean::inc(x_1);
lean::inc(x_0);
x_10 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2(x_0, x_1, x_5);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_section_elaborate___lambda__1), 4, 3);
lean::closure_set(x_11, 0, x_3);
lean::closure_set(x_11, 1, x_0);
lean::closure_set(x_11, 2, x_1);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_13, 0, x_10);
lean::closure_set(x_13, 1, x_12);
return x_13;
}
}
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::inc(x_3);
lean::inc(x_2);
x_7 = lean::apply_3(x_0, x_2, x_3, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg___lambda__1), 4, 3);
lean::closure_set(x_8, 0, x_1);
lean::closure_set(x_8, 1, x_2);
lean::closure_set(x_8, 2, x_3);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_9);
return x_10;
}
}
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_9; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = lean::apply_4(x_0, x_4, x_1, x_2, x_6);
return x_9;
}
}
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg), 5, 0);
return x_4;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_14; 
lean::inc(x_2);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1;
lean::inc(x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_9, 0, x_6);
lean::closure_set(x_9, 1, x_7);
x_10 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__2;
lean::inc(x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4), 4, 3);
lean::closure_set(x_12, 0, x_10);
lean::closure_set(x_12, 1, x_0);
lean::closure_set(x_12, 2, x_1);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_9);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__2), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__1), 4, 0);
return x_0;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
unsigned char x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_5 = 1;
x_6 = lean::mk_nat_obj(1000u);
x_7 = l_lean_elaborator_commands_elaborate___main(x_5, x_6, x_1, x_2, x_3);
return x_7;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_6; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_5 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_5 = x_0;
}
x_6 = lean::cnstr_get(x_1, 4);
lean::inc(x_6);
lean::dec(x_1);
if (lean::is_scalar(x_5)) {
 x_9 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_9 = x_5;
}
lean::cnstr_set(x_9, 0, x_6);
lean::cnstr_set(x_9, 1, x_3);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_11, 0, x_10);
return x_11;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_2 = lean::cnstr_get(x_1, 1);
lean::inc(x_2);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_4 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_4 = x_1;
}
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_2, 3);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_2, 5);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_2, 6);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_2, 7);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_2, 8);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_2, 9);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_2, 10);
lean::inc(x_23);
lean::dec(x_2);
x_26 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_26, 0, x_5);
lean::cnstr_set(x_26, 1, x_7);
lean::cnstr_set(x_26, 2, x_9);
lean::cnstr_set(x_26, 3, x_11);
lean::cnstr_set(x_26, 4, x_0);
lean::cnstr_set(x_26, 5, x_13);
lean::cnstr_set(x_26, 6, x_15);
lean::cnstr_set(x_26, 7, x_17);
lean::cnstr_set(x_26, 8, x_19);
lean::cnstr_set(x_26, 9, x_21);
lean::cnstr_set(x_26, 10, x_23);
x_27 = lean::box(0);
if (lean::is_scalar(x_4)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_4;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_26);
x_29 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_29, 0, x_28);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_30, 0, x_29);
return x_30;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1;
lean::inc(x_9);
x_11 = l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg(x_9, x_0, x_1, x_2, x_6);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3), 2, 1);
lean::closure_set(x_12, 0, x_4);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_11);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_yield__to__outside), 2, 0);
return x_0;
}
}
obj* l_lean_elaborator_namespace_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_3 = l_lean_elaborator_current__command___rarg(x_2);
x_4 = l_lean_elaborator_namespace_elaborate___closed__1;
lean::inc(x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_namespace_elaborate___lambda__2), 3, 2);
lean::closure_set(x_7, 0, x_0);
lean::closure_set(x_7, 1, x_1);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_9, 0, x_6);
lean::closure_set(x_9, 1, x_8);
return x_9;
}
}
obj* _init_l_lean_elaborator_namespace_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_0 = l_lean_parser_command_namespace_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__1), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_4, 0, x_3);
return x_4;
}
}
obj* l_lean_elaborator_namespace_elaborate___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_10; obj* x_13; obj* x_14; obj* x_16; 
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
lean::dec(x_3);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::cnstr_get(x_7, 2);
lean::inc(x_10);
lean::dec(x_7);
x_13 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_13, 0, x_10);
x_14 = l_lean_elaborator_namespace_elaborate___lambda__1___closed__1;
lean::inc(x_14);
x_16 = l_lean_elaborator_end__scope(x_14, x_13, x_1, x_2, x_4);
return x_16;
}
}
obj* _init_l_lean_elaborator_namespace_elaborate___lambda__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("namespace");
return x_0;
}
}
obj* l_lean_elaborator_namespace_elaborate___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
lean::inc(x_1);
lean::inc(x_0);
lean::inc(x_3);
x_11 = l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1(x_3, x_0, x_1, x_5);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_namespace_elaborate___lambda__1), 4, 3);
lean::closure_set(x_12, 0, x_3);
lean::closure_set(x_12, 1, x_0);
lean::closure_set(x_12, 2, x_1);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_11);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__3), 5, 1);
lean::closure_set(x_4, 0, x_0);
lean::inc(x_3);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_3);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1;
lean::inc(x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_11, 0, x_8);
lean::closure_set(x_11, 1, x_9);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__4), 4, 3);
lean::closure_set(x_12, 0, x_4);
lean::closure_set(x_12, 1, x_1);
lean::closure_set(x_12, 2, x_2);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_11);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; unsigned char x_6; obj* x_7; obj* x_8; 
x_3 = lean::cnstr_get(x_2, 1);
lean::inc(x_3);
lean::dec(x_2);
x_6 = 1;
x_7 = lean::mk_nat_obj(1000u);
x_8 = l_lean_elaborator_commands_elaborate___main(x_6, x_7, x_0, x_1, x_3);
return x_8;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_25; obj* x_27; obj* x_30; obj* x_33; obj* x_34; obj* x_36; obj* x_37; obj* x_39; obj* x_42; obj* x_43; obj* x_45; obj* x_47; obj* x_49; obj* x_51; obj* x_53; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_release(x_3, 1);
 x_8 = x_3;
}
x_9 = lean::cnstr_get(x_6, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_6, 2);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_6, 3);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_6, 4);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_17, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_17, 1);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_17, 2);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_17, 3);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_0, 1);
lean::inc(x_27);
lean::dec(x_0);
x_30 = lean::cnstr_get(x_27, 2);
lean::inc(x_30);
lean::dec(x_27);
x_33 = l_lean_name_append___main(x_4, x_30);
x_34 = lean::cnstr_get(x_17, 4);
lean::inc(x_34);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_33);
lean::cnstr_set(x_36, 1, x_34);
x_37 = lean::cnstr_get(x_17, 5);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_17, 6);
lean::inc(x_39);
lean::dec(x_17);
x_42 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_42, 0, x_19);
lean::cnstr_set(x_42, 1, x_21);
lean::cnstr_set(x_42, 2, x_23);
lean::cnstr_set(x_42, 3, x_25);
lean::cnstr_set(x_42, 4, x_36);
lean::cnstr_set(x_42, 5, x_37);
lean::cnstr_set(x_42, 6, x_39);
x_43 = lean::cnstr_get(x_6, 5);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_6, 6);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_6, 7);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_6, 8);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_6, 9);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_6, 10);
lean::inc(x_53);
lean::dec(x_6);
x_56 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_56, 0, x_9);
lean::cnstr_set(x_56, 1, x_11);
lean::cnstr_set(x_56, 2, x_13);
lean::cnstr_set(x_56, 3, x_15);
lean::cnstr_set(x_56, 4, x_42);
lean::cnstr_set(x_56, 5, x_43);
lean::cnstr_set(x_56, 6, x_45);
lean::cnstr_set(x_56, 7, x_47);
lean::cnstr_set(x_56, 8, x_49);
lean::cnstr_set(x_56, 9, x_51);
lean::cnstr_set(x_56, 10, x_53);
x_57 = lean::box(0);
if (lean::is_scalar(x_8)) {
 x_58 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_58 = x_8;
}
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_56);
x_59 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_59, 0, x_58);
x_60 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_60, 0, x_59);
x_61 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__1), 3, 2);
lean::closure_set(x_61, 0, x_1);
lean::closure_set(x_61, 1, x_2);
x_62 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_62, 0, x_61);
x_63 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_63, 0, x_60);
lean::closure_set(x_63, 1, x_62);
return x_63;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_1);
x_6 = l_lean_elaborator_get__namespace___rarg(x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__2), 4, 3);
lean::closure_set(x_8, 0, x_0);
lean::closure_set(x_8, 1, x_2);
lean::closure_set(x_8, 2, x_3);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_9);
return x_10;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1;
lean::inc(x_9);
x_11 = l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg(x_9, x_0, x_1, x_2, x_6);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3), 2, 1);
lean::closure_set(x_12, 0, x_4);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_11);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
}
obj* _init_l_lean_elaborator_elaborators() {
_start:
{
obj* x_0; 
x_0 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1;
lean::inc(x_0);
return x_0;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_4; 
lean::inc(x_0);
x_4 = lean::alloc_cnstr(1, 4, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
return x_4;
}
case 1:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_16; unsigned char x_17; 
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 3);
lean::inc(x_11);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 lean::cnstr_release(x_0, 2);
 lean::cnstr_release(x_0, 3);
 x_13 = x_0;
}
lean::inc(x_7);
lean::inc(x_1);
x_16 = l_lean_name_quick__lt___main(x_1, x_7);
x_17 = lean::unbox(x_16);
lean::dec(x_16);
if (x_17 == 0)
{
obj* x_21; unsigned char x_22; 
lean::inc(x_1);
lean::inc(x_7);
x_21 = l_lean_name_quick__lt___main(x_7, x_1);
x_22 = lean::unbox(x_21);
lean::dec(x_21);
if (x_22 == 0)
{
obj* x_26; 
lean::dec(x_7);
lean::dec(x_9);
if (lean::is_scalar(x_13)) {
 x_26 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_26 = x_13;
}
lean::cnstr_set(x_26, 0, x_5);
lean::cnstr_set(x_26, 1, x_1);
lean::cnstr_set(x_26, 2, x_2);
lean::cnstr_set(x_26, 3, x_11);
return x_26;
}
else
{
obj* x_27; obj* x_28; 
x_27 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_11, x_1, x_2);
if (lean::is_scalar(x_13)) {
 x_28 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_28 = x_13;
}
lean::cnstr_set(x_28, 0, x_5);
lean::cnstr_set(x_28, 1, x_7);
lean::cnstr_set(x_28, 2, x_9);
lean::cnstr_set(x_28, 3, x_27);
return x_28;
}
}
else
{
obj* x_29; obj* x_30; 
x_29 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_5, x_1, x_2);
if (lean::is_scalar(x_13)) {
 x_30 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_30 = x_13;
}
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_7);
lean::cnstr_set(x_30, 2, x_9);
lean::cnstr_set(x_30, 3, x_11);
return x_30;
}
}
default:
{
obj* x_31; obj* x_33; obj* x_35; obj* x_37; obj* x_39; obj* x_42; unsigned char x_43; 
x_31 = lean::cnstr_get(x_0, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_0, 1);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_0, 2);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_0, 3);
lean::inc(x_37);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 lean::cnstr_release(x_0, 2);
 lean::cnstr_release(x_0, 3);
 x_39 = x_0;
}
lean::inc(x_33);
lean::inc(x_1);
x_42 = l_lean_name_quick__lt___main(x_1, x_33);
x_43 = lean::unbox(x_42);
lean::dec(x_42);
if (x_43 == 0)
{
obj* x_47; unsigned char x_48; 
lean::inc(x_1);
lean::inc(x_33);
x_47 = l_lean_name_quick__lt___main(x_33, x_1);
x_48 = lean::unbox(x_47);
lean::dec(x_47);
if (x_48 == 0)
{
obj* x_52; 
lean::dec(x_35);
lean::dec(x_33);
if (lean::is_scalar(x_39)) {
 x_52 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_52 = x_39;
}
lean::cnstr_set(x_52, 0, x_31);
lean::cnstr_set(x_52, 1, x_1);
lean::cnstr_set(x_52, 2, x_2);
lean::cnstr_set(x_52, 3, x_37);
return x_52;
}
else
{
unsigned char x_54; 
lean::inc(x_37);
x_54 = l_rbnode_get__color___main___rarg(x_37);
if (x_54 == 0)
{
obj* x_56; obj* x_57; 
lean::dec(x_39);
x_56 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_37, x_1, x_2);
x_57 = l_rbnode_balance2__node___main___rarg(x_56, x_33, x_35, x_31);
return x_57;
}
else
{
obj* x_58; obj* x_59; 
x_58 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_37, x_1, x_2);
if (lean::is_scalar(x_39)) {
 x_59 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_59 = x_39;
}
lean::cnstr_set(x_59, 0, x_31);
lean::cnstr_set(x_59, 1, x_33);
lean::cnstr_set(x_59, 2, x_35);
lean::cnstr_set(x_59, 3, x_58);
return x_59;
}
}
}
else
{
unsigned char x_61; 
lean::inc(x_31);
x_61 = l_rbnode_get__color___main___rarg(x_31);
if (x_61 == 0)
{
obj* x_63; obj* x_64; 
lean::dec(x_39);
x_63 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_31, x_1, x_2);
x_64 = l_rbnode_balance1__node___main___rarg(x_63, x_33, x_35, x_37);
return x_64;
}
else
{
obj* x_65; obj* x_66; 
x_65 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_31, x_1, x_2);
if (lean::is_scalar(x_39)) {
 x_66 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_66 = x_39;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_33);
lean::cnstr_set(x_66, 2, x_35);
lean::cnstr_set(x_66, 3, x_37);
return x_66;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_elaborators___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
unsigned char x_4; obj* x_5; obj* x_6; 
lean::inc(x_0);
x_4 = l_rbnode_get__color___main___rarg(x_0);
x_5 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_0, x_1, x_2);
x_6 = l_rbnode_mk__insert__result___main___rarg(x_4, x_5);
return x_6;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_elaborators___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_elaborators___spec__3(x_0, x_1, x_2);
return x_3;
}
}
obj* l_list_foldl___main___at_lean_elaborator_elaborators___spec__5(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_10; obj* x_13; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_3, 1);
lean::inc(x_10);
lean::dec(x_3);
x_13 = l_rbnode_insert___at_lean_elaborator_elaborators___spec__3(x_0, x_8, x_10);
x_0 = x_13;
x_1 = x_5;
goto _start;
}
}
}
obj* _init_l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_28; obj* x_29; obj* x_31; obj* x_32; obj* x_33; obj* x_35; obj* x_36; obj* x_37; obj* x_39; obj* x_40; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_47; obj* x_48; obj* x_49; obj* x_51; obj* x_52; obj* x_53; obj* x_55; obj* x_56; obj* x_57; obj* x_59; obj* x_60; obj* x_61; obj* x_63; obj* x_64; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; 
x_0 = l_lean_parser_module_header;
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__2), 3, 0);
lean::inc(x_0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
x_4 = l_lean_parser_command_notation;
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__4), 3, 0);
lean::inc(x_4);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_4);
lean::cnstr_set(x_7, 1, x_5);
x_8 = l_lean_parser_command_reserve__notation;
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__6), 3, 0);
lean::inc(x_8);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_9);
x_12 = l_lean_parser_command_universe;
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__8), 3, 0);
lean::inc(x_12);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_12);
lean::cnstr_set(x_15, 1, x_13);
x_16 = l_lean_parser_no__kind;
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_no__kind_elaborate), 3, 0);
lean::inc(x_16);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_16);
lean::cnstr_set(x_19, 1, x_17);
x_20 = l_lean_parser_command_section;
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_section_elaborate), 3, 0);
lean::inc(x_20);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_20);
lean::cnstr_set(x_23, 1, x_21);
x_24 = l_lean_parser_command_namespace;
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_namespace_elaborate), 3, 0);
lean::inc(x_24);
x_27 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_27, 0, x_24);
lean::cnstr_set(x_27, 1, x_25);
x_28 = l_lean_parser_command_variables;
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__10), 3, 0);
lean::inc(x_28);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_28);
lean::cnstr_set(x_31, 1, x_29);
x_32 = l_lean_parser_command_include;
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__12), 3, 0);
lean::inc(x_32);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_32);
lean::cnstr_set(x_35, 1, x_33);
x_36 = l_lean_parser_command_declaration;
x_37 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__14), 3, 0);
lean::inc(x_36);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_36);
lean::cnstr_set(x_39, 1, x_37);
x_40 = l_lean_parser_command_attribute;
x_41 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__16), 3, 0);
lean::inc(x_40);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_40);
lean::cnstr_set(x_43, 1, x_41);
x_44 = l_lean_parser_command_open;
x_45 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__18), 3, 0);
lean::inc(x_44);
x_47 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_47, 0, x_44);
lean::cnstr_set(x_47, 1, x_45);
x_48 = l_lean_parser_command_export;
x_49 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__20), 3, 0);
lean::inc(x_48);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_48);
lean::cnstr_set(x_51, 1, x_49);
x_52 = l_lean_parser_command_check;
x_53 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__22), 3, 0);
lean::inc(x_52);
x_55 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_55, 0, x_52);
lean::cnstr_set(x_55, 1, x_53);
x_56 = l_lean_parser_command_init__quot;
x_57 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__24), 3, 0);
lean::inc(x_56);
x_59 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_59, 0, x_56);
lean::cnstr_set(x_59, 1, x_57);
x_60 = l_lean_parser_command_set__option;
x_61 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__26), 3, 0);
lean::inc(x_60);
x_63 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_63, 0, x_60);
lean::cnstr_set(x_63, 1, x_61);
x_64 = lean::box(0);
lean::inc(x_64);
x_66 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_66, 0, x_63);
lean::cnstr_set(x_66, 1, x_64);
x_67 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_67, 0, x_59);
lean::cnstr_set(x_67, 1, x_66);
x_68 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_68, 0, x_55);
lean::cnstr_set(x_68, 1, x_67);
x_69 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_69, 0, x_51);
lean::cnstr_set(x_69, 1, x_68);
x_70 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_70, 0, x_47);
lean::cnstr_set(x_70, 1, x_69);
x_71 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_71, 0, x_43);
lean::cnstr_set(x_71, 1, x_70);
x_72 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_72, 0, x_39);
lean::cnstr_set(x_72, 1, x_71);
x_73 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_73, 0, x_35);
lean::cnstr_set(x_73, 1, x_72);
x_74 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_74, 0, x_31);
lean::cnstr_set(x_74, 1, x_73);
x_75 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_75, 0, x_27);
lean::cnstr_set(x_75, 1, x_74);
x_76 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_76, 0, x_23);
lean::cnstr_set(x_76, 1, x_75);
x_77 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_77, 0, x_19);
lean::cnstr_set(x_77, 1, x_76);
x_78 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_78, 0, x_15);
lean::cnstr_set(x_78, 1, x_77);
x_79 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_79, 0, x_11);
lean::cnstr_set(x_79, 1, x_78);
x_80 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_80, 0, x_7);
lean::cnstr_set(x_80, 1, x_79);
x_81 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_81, 0, x_3);
lean::cnstr_set(x_81, 1, x_80);
x_82 = l_list_foldl___main___at_lean_elaborator_elaborators___spec__5(x_64, x_81);
return x_82;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_module_header_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__1), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_notation_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__3), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__5(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_reserve__notation_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__6(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__5), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__7(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_universe_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__8(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__7), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__9(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_variables_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__10(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__9), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__11(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_include_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__12(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__11), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__13(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__14(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__13), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__15(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_attribute_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__16(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__15), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__17(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_open_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__18(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__17), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__19(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_export_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__20(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__19), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__21(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_check_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__22(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__21), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__23(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_init__quot_elaborate___closed__1;
lean::inc(x_7);
x_9 = l_lean_elaborator_old__elab__command(x_2, x_7, x_0, x_4);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_10, 0, x_9);
return x_10;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__24(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__23), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__25(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_set__option_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__26(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__25), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
unsigned char l_lean_elaborator_is__open__namespace___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; 
x_2 = lean::box(0);
lean::inc(x_1);
x_4 = l_lean_name_has__dec__eq___main(x_1, x_2);
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; obj* x_9; obj* x_12; 
lean::dec(x_4);
x_6 = lean::cnstr_get(x_0, 4);
lean::inc(x_6);
lean::dec(x_0);
x_9 = lean::cnstr_get(x_6, 4);
lean::inc(x_9);
lean::inc(x_1);
x_12 = l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1(x_1, x_9);
if (lean::obj_tag(x_12) == 0)
{
obj* x_14; obj* x_17; unsigned char x_18; 
lean::dec(x_12);
x_14 = lean::cnstr_get(x_6, 5);
lean::inc(x_14);
lean::dec(x_6);
x_17 = l_list_foldr___main___at_lean_elaborator_is__open__namespace___main___spec__2(x_1, x_14);
x_18 = lean::unbox(x_17);
lean::dec(x_17);
if (x_18 == 0)
{
unsigned char x_20; 
x_20 = 0;
return x_20;
}
else
{
unsigned char x_21; 
x_21 = 1;
return x_21;
}
}
else
{
unsigned char x_25; 
lean::dec(x_6);
lean::dec(x_12);
lean::dec(x_1);
x_25 = 1;
return x_25;
}
}
else
{
unsigned char x_29; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_4);
x_29 = 1;
return x_29;
}
}
}
obj* l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_4; 
lean::dec(x_0);
lean::dec(x_1);
x_4 = lean::box(0);
return x_4;
}
else
{
obj* x_5; obj* x_7; obj* x_11; 
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 1);
lean::inc(x_7);
lean::dec(x_1);
lean::inc(x_0);
x_11 = l_lean_name_has__dec__eq___main(x_0, x_5);
if (lean::obj_tag(x_11) == 0)
{
lean::dec(x_11);
x_1 = x_7;
goto _start;
}
else
{
obj* x_17; 
lean::dec(x_7);
lean::dec(x_11);
lean::dec(x_0);
x_17 = lean::box(1);
return x_17;
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_is__open__namespace___main___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
unsigned char x_4; obj* x_5; 
lean::dec(x_0);
lean::dec(x_1);
x_4 = 0;
x_5 = lean::box(x_4);
return x_5;
}
else
{
obj* x_6; obj* x_8; obj* x_11; obj* x_14; obj* x_18; 
x_6 = lean::cnstr_get(x_1, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 1);
lean::inc(x_8);
lean::dec(x_1);
x_11 = lean::cnstr_get(x_6, 0);
lean::inc(x_11);
lean::dec(x_6);
x_14 = lean::cnstr_get(x_11, 2);
lean::inc(x_14);
lean::dec(x_11);
lean::inc(x_0);
x_18 = l_lean_name_has__dec__eq___main(x_14, x_0);
if (lean::obj_tag(x_18) == 0)
{
lean::dec(x_18);
x_1 = x_8;
goto _start;
}
else
{
unsigned char x_24; obj* x_25; 
lean::dec(x_18);
lean::dec(x_8);
lean::dec(x_0);
x_24 = 1;
x_25 = lean::box(x_24);
return x_25;
}
}
}
}
obj* l_lean_elaborator_is__open__namespace___main___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned char x_2; obj* x_3; 
x_2 = l_lean_elaborator_is__open__namespace___main(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
unsigned char l_lean_elaborator_is__open__namespace(obj* x_0, obj* x_1) {
_start:
{
unsigned char x_2; 
x_2 = l_lean_elaborator_is__open__namespace___main(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_is__open__namespace___boxed(obj* x_0, obj* x_1) {
_start:
{
unsigned char x_2; obj* x_3; 
x_2 = l_lean_elaborator_is__open__namespace(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l_lean_elaborator_match__open__spec(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::cnstr_get(x_1, 2);
lean::inc(x_2);
if (lean::obj_tag(x_2) == 0)
{
obj* x_5; obj* x_8; obj* x_11; obj* x_12; 
lean::dec(x_2);
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean::cnstr_get(x_5, 2);
lean::inc(x_8);
lean::dec(x_5);
x_11 = l_lean_name_append___main(x_8, x_0);
x_12 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_12, 0, x_11);
return x_12;
}
else
{
obj* x_13; obj* x_15; obj* x_16; obj* x_18; obj* x_22; 
x_13 = lean::cnstr_get(x_2, 0);
lean::inc(x_13);
if (lean::is_shared(x_2)) {
 lean::dec(x_2);
 x_15 = lean::box(0);
} else {
 lean::cnstr_release(x_2, 0);
 x_15 = x_2;
}
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_16, 2);
lean::inc(x_18);
lean::dec(x_16);
lean::inc(x_0);
x_22 = l_lean_name_has__dec__eq___main(x_0, x_18);
if (lean::obj_tag(x_22) == 0)
{
obj* x_24; obj* x_28; unsigned char x_29; 
lean::dec(x_22);
x_24 = lean::cnstr_get(x_13, 2);
lean::inc(x_24);
lean::dec(x_13);
lean::inc(x_0);
x_28 = l_list_foldr___main___at_lean_elaborator_match__open__spec___spec__1(x_0, x_24);
x_29 = lean::unbox(x_28);
lean::dec(x_28);
if (x_29 == 0)
{
obj* x_34; 
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_15);
x_34 = lean::box(0);
return x_34;
}
else
{
obj* x_35; obj* x_38; obj* x_41; obj* x_42; 
x_35 = lean::cnstr_get(x_1, 0);
lean::inc(x_35);
lean::dec(x_1);
x_38 = lean::cnstr_get(x_35, 2);
lean::inc(x_38);
lean::dec(x_35);
x_41 = l_lean_name_append___main(x_38, x_0);
if (lean::is_scalar(x_15)) {
 x_42 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_42 = x_15;
}
lean::cnstr_set(x_42, 0, x_41);
return x_42;
}
}
else
{
obj* x_45; obj* x_48; obj* x_51; obj* x_52; 
lean::dec(x_22);
lean::dec(x_13);
x_45 = lean::cnstr_get(x_1, 0);
lean::inc(x_45);
lean::dec(x_1);
x_48 = lean::cnstr_get(x_45, 2);
lean::inc(x_48);
lean::dec(x_45);
x_51 = l_lean_name_append___main(x_48, x_0);
if (lean::is_scalar(x_15)) {
 x_52 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_52 = x_15;
}
lean::cnstr_set(x_52, 0, x_51);
return x_52;
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_match__open__spec___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
unsigned char x_4; obj* x_5; 
lean::dec(x_0);
lean::dec(x_1);
x_4 = 0;
x_5 = lean::box(x_4);
return x_5;
}
else
{
obj* x_6; obj* x_8; obj* x_11; obj* x_15; 
x_6 = lean::cnstr_get(x_1, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 1);
lean::inc(x_8);
lean::dec(x_1);
x_11 = lean::cnstr_get(x_6, 2);
lean::inc(x_11);
lean::dec(x_6);
lean::inc(x_0);
x_15 = l_lean_name_has__dec__eq___main(x_0, x_11);
if (lean::obj_tag(x_15) == 0)
{
lean::dec(x_15);
x_1 = x_8;
goto _start;
}
else
{
unsigned char x_21; obj* x_22; 
lean::dec(x_8);
lean::dec(x_15);
lean::dec(x_0);
x_21 = 1;
x_22 = lean::box(x_21);
return x_22;
}
}
}
}
obj* l_lean_elaborator_resolve__context___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_6; obj* x_9; 
lean::dec(x_1);
x_4 = lean::cnstr_get(x_2, 4);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_4, 2);
lean::inc(x_6);
lean::inc(x_0);
x_9 = l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1(x_6, x_0);
if (lean::obj_tag(x_9) == 0)
{
obj* x_11; obj* x_15; 
lean::dec(x_9);
x_11 = lean::cnstr_get(x_4, 4);
lean::inc(x_11);
lean::inc(x_2);
lean::inc(x_0);
x_15 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1(x_0, x_2, x_11);
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_17; obj* x_20; obj* x_21; obj* x_24; unsigned char x_25; obj* x_28; obj* x_29; obj* x_32; obj* x_34; obj* x_35; obj* x_38; obj* x_39; obj* x_40; obj* x_42; 
x_16 = l_lean_elaborator_resolve__context___main___closed__1;
x_17 = lean::box(0);
lean::inc(x_16);
lean::inc(x_0);
x_20 = l_lean_name_replace__prefix___main(x_0, x_16, x_17);
x_21 = lean::cnstr_get(x_2, 8);
lean::inc(x_21);
lean::inc(x_20);
x_24 = lean_environment_contains(x_21, x_20);
x_25 = lean::unbox(x_24);
lean::dec(x_24);
lean::inc(x_0);
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_match__open__spec), 2, 1);
lean::closure_set(x_28, 0, x_0);
x_29 = lean::cnstr_get(x_4, 5);
lean::inc(x_29);
lean::dec(x_4);
x_32 = l_list_filter__map___main___rarg(x_28, x_29);
lean::inc(x_2);
x_34 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2(x_2, x_32);
x_35 = lean::cnstr_get(x_2, 3);
lean::inc(x_35);
lean::inc(x_2);
x_38 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3(x_2, x_35);
x_39 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_resolve__context___main___lambda__1), 2, 1);
lean::closure_set(x_39, 0, x_0);
x_40 = l_list_filter__map___main___rarg(x_39, x_38);
lean::inc(x_2);
x_42 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4(x_2, x_40);
if (x_25 == 0)
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
lean::dec(x_20);
x_44 = l_list_append___main___rarg(x_15, x_34);
x_45 = l_list_append___main___rarg(x_44, x_42);
x_46 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_2);
x_47 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_47, 0, x_46);
return x_47;
}
else
{
obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; 
x_48 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_48, 0, x_20);
lean::cnstr_set(x_48, 1, x_15);
x_49 = l_list_append___main___rarg(x_48, x_34);
x_50 = l_list_append___main___rarg(x_49, x_42);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_50);
lean::cnstr_set(x_51, 1, x_2);
x_52 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_52, 0, x_51);
return x_52;
}
}
else
{
obj* x_54; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
lean::dec(x_4);
x_54 = lean::cnstr_get(x_15, 0);
lean::inc(x_54);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_56 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 lean::cnstr_release(x_15, 1);
 x_56 = x_15;
}
x_57 = l_lean_name_append___main(x_54, x_0);
x_58 = lean::box(0);
if (lean::is_scalar(x_56)) {
 x_59 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_59 = x_56;
}
lean::cnstr_set(x_59, 0, x_57);
lean::cnstr_set(x_59, 1, x_58);
x_60 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_60, 0, x_59);
lean::cnstr_set(x_60, 1, x_2);
x_61 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_61, 0, x_60);
return x_61;
}
}
else
{
obj* x_64; obj* x_67; obj* x_69; obj* x_70; obj* x_73; obj* x_74; obj* x_75; obj* x_76; 
lean::dec(x_0);
lean::dec(x_4);
x_64 = lean::cnstr_get(x_9, 0);
lean::inc(x_64);
lean::dec(x_9);
x_67 = lean::cnstr_get(x_64, 1);
lean::inc(x_67);
if (lean::is_shared(x_64)) {
 lean::dec(x_64);
 x_69 = lean::box(0);
} else {
 lean::cnstr_release(x_64, 0);
 lean::cnstr_release(x_64, 1);
 x_69 = x_64;
}
x_70 = lean::cnstr_get(x_67, 0);
lean::inc(x_70);
lean::dec(x_67);
x_73 = lean::box(0);
x_74 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_74, 0, x_70);
lean::cnstr_set(x_74, 1, x_73);
if (lean::is_scalar(x_69)) {
 x_75 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_75 = x_69;
}
lean::cnstr_set(x_75, 0, x_74);
lean::cnstr_set(x_75, 1, x_2);
x_76 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_76, 0, x_75);
return x_76;
}
}
}
obj* _init_l_lean_elaborator_resolve__context___main___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_root_");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_lean_elaborator_resolve__context___main___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_1, 1);
lean::inc(x_2);
lean::dec(x_1);
x_5 = l_lean_elaborator_match__open__spec(x_0, x_2);
return x_5;
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
else
{
obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_14; obj* x_15; unsigned char x_16; 
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
if (lean::is_shared(x_2)) {
 lean::dec(x_2);
 x_9 = lean::box(0);
} else {
 lean::cnstr_release(x_2, 0);
 lean::cnstr_release(x_2, 1);
 x_9 = x_2;
}
x_10 = lean::cnstr_get(x_1, 8);
lean::inc(x_10);
lean::inc(x_0);
lean::inc(x_5);
x_14 = l_lean_name_append___main(x_5, x_0);
x_15 = lean_environment_contains(x_10, x_14);
x_16 = lean::unbox(x_15);
lean::dec(x_15);
if (x_16 == 0)
{
lean::dec(x_9);
lean::dec(x_5);
x_2 = x_7;
goto _start;
}
else
{
obj* x_21; obj* x_22; 
x_21 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1(x_0, x_1, x_7);
if (lean::is_scalar(x_9)) {
 x_22 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_22 = x_9;
}
lean::cnstr_set(x_22, 0, x_5);
lean::cnstr_set(x_22, 1, x_21);
return x_22;
}
}
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_11; unsigned char x_12; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_7 = x_1;
}
x_8 = lean::cnstr_get(x_0, 8);
lean::inc(x_8);
lean::inc(x_3);
x_11 = lean_environment_contains(x_8, x_3);
x_12 = lean::unbox(x_11);
lean::dec(x_11);
if (x_12 == 0)
{
lean::dec(x_7);
lean::dec(x_3);
x_1 = x_5;
goto _start;
}
else
{
obj* x_17; obj* x_18; 
x_17 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2(x_0, x_5);
if (lean::is_scalar(x_7)) {
 x_18 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_18 = x_7;
}
lean::cnstr_set(x_18, 0, x_3);
lean::cnstr_set(x_18, 1, x_17);
return x_18;
}
}
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; unsigned char x_11; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_7 = x_1;
}
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
lean::inc(x_0);
x_11 = l_lean_elaborator_is__open__namespace___main(x_0, x_8);
if (x_11 == 0)
{
lean::dec(x_7);
lean::dec(x_3);
x_1 = x_5;
goto _start;
}
else
{
obj* x_15; obj* x_16; 
x_15 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3(x_0, x_5);
if (lean::is_scalar(x_7)) {
 x_16 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_16 = x_7;
}
lean::cnstr_set(x_16, 0, x_3);
lean::cnstr_set(x_16, 1, x_15);
return x_16;
}
}
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_11; unsigned char x_12; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_7 = x_1;
}
x_8 = lean::cnstr_get(x_0, 8);
lean::inc(x_8);
lean::inc(x_3);
x_11 = lean_environment_contains(x_8, x_3);
x_12 = lean::unbox(x_11);
lean::dec(x_11);
if (x_12 == 0)
{
lean::dec(x_7);
lean::dec(x_3);
x_1 = x_5;
goto _start;
}
else
{
obj* x_17; obj* x_18; 
x_17 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4(x_0, x_5);
if (lean::is_scalar(x_7)) {
 x_18 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_18 = x_7;
}
lean::cnstr_set(x_18, 0, x_3);
lean::cnstr_set(x_18, 1, x_17);
return x_18;
}
}
}
}
obj* l_lean_elaborator_resolve__context(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_resolve__context___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_preresolve___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_4; obj* x_5; 
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
case 1:
{
obj* x_6; obj* x_8; obj* x_10; obj* x_11; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 x_8 = x_0;
}
lean::inc(x_6);
x_10 = l_lean_elaborator_mangle__ident(x_6);
x_11 = l_lean_elaborator_resolve__context___main(x_10, x_1, x_2);
if (lean::obj_tag(x_11) == 0)
{
obj* x_14; obj* x_16; obj* x_17; 
lean::dec(x_6);
lean::dec(x_8);
x_14 = lean::cnstr_get(x_11, 0);
lean::inc(x_14);
if (lean::is_shared(x_11)) {
 lean::dec(x_11);
 x_16 = lean::box(0);
} else {
 lean::cnstr_release(x_11, 0);
 x_16 = x_11;
}
if (lean::is_scalar(x_16)) {
 x_17 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_17 = x_16;
}
lean::cnstr_set(x_17, 0, x_14);
return x_17;
}
else
{
obj* x_18; obj* x_20; obj* x_21; obj* x_23; obj* x_25; obj* x_26; obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_35; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
x_18 = lean::cnstr_get(x_11, 0);
lean::inc(x_18);
if (lean::is_shared(x_11)) {
 lean::dec(x_11);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_11, 0);
 x_20 = x_11;
}
x_21 = lean::cnstr_get(x_18, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_18, 1);
lean::inc(x_23);
if (lean::is_shared(x_18)) {
 lean::dec(x_18);
 x_25 = lean::box(0);
} else {
 lean::cnstr_release(x_18, 0);
 lean::cnstr_release(x_18, 1);
 x_25 = x_18;
}
x_26 = lean::cnstr_get(x_6, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_6, 1);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_6, 2);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_6, 3);
lean::inc(x_32);
x_34 = l_list_append___main___rarg(x_21, x_32);
x_35 = lean::cnstr_get(x_6, 4);
lean::inc(x_35);
lean::dec(x_6);
x_38 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_38, 0, x_26);
lean::cnstr_set(x_38, 1, x_28);
lean::cnstr_set(x_38, 2, x_30);
lean::cnstr_set(x_38, 3, x_34);
lean::cnstr_set(x_38, 4, x_35);
if (lean::is_scalar(x_8)) {
 x_39 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_39 = x_8;
}
lean::cnstr_set(x_39, 0, x_38);
if (lean::is_scalar(x_25)) {
 x_40 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_40 = x_25;
}
lean::cnstr_set(x_40, 0, x_39);
lean::cnstr_set(x_40, 1, x_23);
if (lean::is_scalar(x_20)) {
 x_41 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_41 = x_20;
}
lean::cnstr_set(x_41, 0, x_40);
return x_41;
}
}
case 2:
{
obj* x_42; obj* x_44; obj* x_45; obj* x_47; 
x_42 = lean::cnstr_get(x_0, 0);
lean::inc(x_42);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_44 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 x_44 = x_0;
}
x_45 = lean::cnstr_get(x_42, 1);
lean::inc(x_45);
x_47 = l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1(x_45, x_1, x_2);
if (lean::obj_tag(x_47) == 0)
{
obj* x_50; obj* x_52; obj* x_53; 
lean::dec(x_42);
lean::dec(x_44);
x_50 = lean::cnstr_get(x_47, 0);
lean::inc(x_50);
if (lean::is_shared(x_47)) {
 lean::dec(x_47);
 x_52 = lean::box(0);
} else {
 lean::cnstr_release(x_47, 0);
 x_52 = x_47;
}
if (lean::is_scalar(x_52)) {
 x_53 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_53 = x_52;
}
lean::cnstr_set(x_53, 0, x_50);
return x_53;
}
else
{
obj* x_54; obj* x_56; obj* x_57; obj* x_59; obj* x_61; obj* x_62; obj* x_64; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_54 = lean::cnstr_get(x_47, 0);
lean::inc(x_54);
if (lean::is_shared(x_47)) {
 lean::dec(x_47);
 x_56 = lean::box(0);
} else {
 lean::cnstr_release(x_47, 0);
 x_56 = x_47;
}
x_57 = lean::cnstr_get(x_54, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_54, 1);
lean::inc(x_59);
if (lean::is_shared(x_54)) {
 lean::dec(x_54);
 x_61 = lean::box(0);
} else {
 lean::cnstr_release(x_54, 0);
 lean::cnstr_release(x_54, 1);
 x_61 = x_54;
}
x_62 = lean::cnstr_get(x_42, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_42, 2);
lean::inc(x_64);
lean::dec(x_42);
x_67 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_67, 0, x_62);
lean::cnstr_set(x_67, 1, x_57);
lean::cnstr_set(x_67, 2, x_64);
if (lean::is_scalar(x_44)) {
 x_68 = lean::alloc_cnstr(2, 1, 0);
} else {
 x_68 = x_44;
}
lean::cnstr_set(x_68, 0, x_67);
if (lean::is_scalar(x_61)) {
 x_69 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_69 = x_61;
}
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_59);
if (lean::is_scalar(x_56)) {
 x_70 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_70 = x_56;
}
lean::cnstr_set(x_70, 0, x_69);
return x_70;
}
}
default:
{
obj* x_72; obj* x_73; 
lean::dec(x_1);
x_72 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_72, 0, x_0);
lean::cnstr_set(x_72, 1, x_2);
x_73 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_73, 0, x_72);
return x_73;
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
lean::dec(x_1);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
lean::inc(x_1);
x_14 = l_lean_elaborator_preresolve___main(x_8, x_1, x_2);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_18 = lean::cnstr_get(x_14, 0);
lean::inc(x_18);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_20 = x_14;
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_24; obj* x_25; obj* x_27; obj* x_29; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_24 = x_14;
}
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
if (lean::is_shared(x_22)) {
 lean::dec(x_22);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_22, 0);
 lean::cnstr_release(x_22, 1);
 x_29 = x_22;
}
x_30 = l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1(x_10, x_1, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_34; obj* x_37; 
lean::dec(x_12);
lean::dec(x_25);
lean::dec(x_29);
x_34 = lean::cnstr_get(x_30, 0);
lean::inc(x_34);
lean::dec(x_30);
if (lean::is_scalar(x_24)) {
 x_37 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_37 = x_24;
}
lean::cnstr_set(x_37, 0, x_34);
return x_37;
}
else
{
obj* x_38; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_48; 
x_38 = lean::cnstr_get(x_30, 0);
lean::inc(x_38);
lean::dec(x_30);
x_41 = lean::cnstr_get(x_38, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_38, 1);
lean::inc(x_43);
lean::dec(x_38);
if (lean::is_scalar(x_12)) {
 x_46 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_46 = x_12;
}
lean::cnstr_set(x_46, 0, x_25);
lean::cnstr_set(x_46, 1, x_41);
if (lean::is_scalar(x_29)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_29;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_43);
if (lean::is_scalar(x_24)) {
 x_48 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_48 = x_24;
}
lean::cnstr_set(x_48, 0, x_47);
return x_48;
}
}
}
}
}
obj* l_lean_elaborator_preresolve(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_preresolve___main(x_0, x_1, x_2);
return x_3;
}
}
obj* _init_l_lean_elaborator_max__recursion() {
_start:
{
obj* x_0; 
x_0 = lean::mk_nat_obj(100u);
return x_0;
}
}
obj* _init_l_lean_elaborator_max__commands() {
_start:
{
obj* x_0; 
x_0 = lean::mk_nat_obj(10000u);
return x_0;
}
}
obj* l_lean_elaborator_run(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_30; obj* x_31; obj* x_33; 
x_1 = lean::box(0);
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = l_lean_expander_builtin__transformers;
lean::inc(x_6);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_4);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::mk_nat_obj(0u);
x_10 = l_lean_elaborator_run___closed__1;
x_11 = l_lean_message__log_empty;
x_12 = l_lean_elaborator_run___closed__2;
x_13 = l_lean_elaborator_run___closed__3;
lean::inc(x_13);
lean::inc(x_12);
lean::inc(x_11);
lean::inc(x_10);
lean::inc(x_9);
lean::inc(x_1);
lean::inc(x_1);
x_21 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_21, 0, x_1);
lean::cnstr_set(x_21, 1, x_1);
lean::cnstr_set(x_21, 2, x_9);
lean::cnstr_set(x_21, 3, x_1);
lean::cnstr_set(x_21, 4, x_10);
lean::cnstr_set(x_21, 5, x_11);
lean::cnstr_set(x_21, 6, x_2);
lean::cnstr_set(x_21, 7, x_8);
lean::cnstr_set(x_21, 8, x_12);
lean::cnstr_set(x_21, 9, x_13);
lean::cnstr_set(x_21, 10, x_9);
x_22 = l_lean_elaborator_run___closed__4;
x_23 = l_lean_elaborator_run___closed__5;
x_24 = l_lean_elaborator_run___closed__6;
x_25 = l_lean_elaborator_max__recursion;
lean::inc(x_25);
lean::inc(x_24);
lean::inc(x_23);
lean::inc(x_22);
x_30 = l_lean_parser_rec__t_run___at_lean_elaborator_run___spec__5(x_22, x_23, x_24, x_25, x_0, x_21);
x_31 = l_lean_elaborator_run___closed__7;
lean::inc(x_31);
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_33, 0, x_30);
lean::closure_set(x_33, 1, x_31);
return x_33;
}
}
obj* _init_l_lean_elaborator_run___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; unsigned char x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_17; 
x_0 = lean::box(0);
x_1 = lean::mk_string("trace");
lean::inc(x_0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
x_4 = lean::mk_string("as_messages");
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_4);
x_6 = l_lean_options_mk;
x_7 = 1;
lean::inc(x_6);
x_9 = l_lean_kvmap_set__bool(x_6, x_5, x_7);
x_10 = l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1;
x_11 = l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2;
lean::inc(x_11);
lean::inc(x_10);
lean::inc(x_0);
lean::inc(x_0);
lean::inc(x_0);
x_17 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_17, 0, x_0);
lean::cnstr_set(x_17, 1, x_10);
lean::cnstr_set(x_17, 2, x_11);
lean::cnstr_set(x_17, 3, x_0);
lean::cnstr_set(x_17, 4, x_0);
lean::cnstr_set(x_17, 5, x_0);
lean::cnstr_set(x_17, 6, x_9);
return x_17;
}
}
obj* _init_l_lean_elaborator_run___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean_environment_empty;
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_elaborator_run___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_ngen");
x_2 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::mk_string("fixme");
x_4 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
obj* _init_l_lean_elaborator_run___closed__4() {
_start:
{
unsigned char x_0; obj* x_1; obj* x_2; obj* x_4; 
x_0 = 0;
x_1 = l_lean_elaborator_max__commands;
x_2 = lean::box(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___boxed), 5, 2);
lean::closure_set(x_4, 0, x_2);
lean::closure_set(x_4, 1, x_1);
return x_4;
}
}
obj* _init_l_lean_elaborator_run___closed__5() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__1), 3, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_run___closed__6() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__7), 4, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_run___closed__7() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__8), 1, 0);
return x_0;
}
}
obj* l_lean_elaborator_run___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_2, 3);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_2, 4);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_2, 5);
lean::inc(x_15);
x_17 = l_lean_elaborator_run___lambda__1___closed__1;
lean::inc(x_17);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_17);
lean::cnstr_set(x_19, 1, x_15);
x_20 = lean::cnstr_get(x_2, 6);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_2, 7);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_2, 8);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_2, 9);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_2, 10);
lean::inc(x_28);
lean::dec(x_2);
x_31 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_31, 0, x_5);
lean::cnstr_set(x_31, 1, x_7);
lean::cnstr_set(x_31, 2, x_9);
lean::cnstr_set(x_31, 3, x_11);
lean::cnstr_set(x_31, 4, x_13);
lean::cnstr_set(x_31, 5, x_19);
lean::cnstr_set(x_31, 6, x_20);
lean::cnstr_set(x_31, 7, x_22);
lean::cnstr_set(x_31, 8, x_24);
lean::cnstr_set(x_31, 9, x_26);
lean::cnstr_set(x_31, 10, x_28);
x_32 = lean::box(0);
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_31);
x_34 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_34, 0, x_33);
x_35 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_35, 0, x_34);
return x_35;
}
}
obj* _init_l_lean_elaborator_run___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; unsigned char x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_0 = lean::mk_nat_obj(1u);
x_1 = lean::mk_nat_obj(0u);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::box(0);
x_4 = lean::mk_string("foo");
x_5 = 2;
x_6 = lean::mk_string("");
x_7 = lean::mk_string("elaborator.run: out of fuel");
x_8 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_8, 0, x_4);
lean::cnstr_set(x_8, 1, x_2);
lean::cnstr_set(x_8, 2, x_3);
lean::cnstr_set(x_8, 3, x_6);
lean::cnstr_set(x_8, 4, x_7);
lean::cnstr_set_scalar(x_8, sizeof(void*)*5, x_5);
x_9 = x_8;
return x_9;
}
}
obj* l_lean_elaborator_run___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; 
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
lean::dec(x_4);
if (lean::obj_tag(x_5) == 0)
{
obj* x_11; obj* x_13; obj* x_14; obj* x_16; obj* x_18; 
lean::dec(x_5);
x_11 = l_lean_name_to__string___closed__1;
lean::inc(x_11);
x_13 = l_lean_name_to__string__with__sep___main(x_11, x_0);
x_14 = l_lean_elaborator_run___lambda__2___closed__1;
lean::inc(x_14);
x_16 = lean::string_append(x_14, x_13);
lean::dec(x_13);
x_18 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_1, x_16, x_2, x_3, x_7);
return x_18;
}
else
{
obj* x_21; obj* x_24; 
lean::dec(x_0);
lean::dec(x_1);
x_21 = lean::cnstr_get(x_5, 0);
lean::inc(x_21);
lean::dec(x_5);
x_24 = lean::apply_3(x_21, x_2, x_3, x_7);
return x_24;
}
}
}
obj* _init_l_lean_elaborator_run___lambda__2___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unknown command: ");
return x_0;
}
}
obj* l_lean_elaborator_run___lambda__3(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; obj* x_4; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_4 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 x_4 = x_1;
}
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 3);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_0, 4);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_0, 5);
lean::inc(x_15);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_2);
lean::cnstr_set(x_17, 1, x_15);
x_18 = lean::cnstr_get(x_0, 6);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_0, 7);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_0, 8);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_0, 9);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_0, 10);
lean::inc(x_26);
lean::dec(x_0);
x_29 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_29, 0, x_5);
lean::cnstr_set(x_29, 1, x_7);
lean::cnstr_set(x_29, 2, x_9);
lean::cnstr_set(x_29, 3, x_11);
lean::cnstr_set(x_29, 4, x_13);
lean::cnstr_set(x_29, 5, x_17);
lean::cnstr_set(x_29, 6, x_18);
lean::cnstr_set(x_29, 7, x_20);
lean::cnstr_set(x_29, 8, x_22);
lean::cnstr_set(x_29, 9, x_24);
lean::cnstr_set(x_29, 10, x_26);
x_30 = lean::box(0);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_29);
if (lean::is_scalar(x_4)) {
 x_32 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_32 = x_4;
}
lean::cnstr_set(x_32, 0, x_31);
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_33, 0, x_32);
return x_33;
}
else
{
obj* x_35; 
lean::dec(x_0);
x_35 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_35, 0, x_1);
return x_35;
}
}
}
obj* l_lean_elaborator_run___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_12; obj* x_14; 
lean::dec(x_1);
lean::inc(x_0);
x_7 = l_lean_parser_syntax_to__format___main(x_0);
x_8 = lean::mk_nat_obj(80u);
x_9 = l_lean_format_pretty(x_7, x_8);
x_10 = l_lean_elaborator_run___lambda__4___closed__1;
lean::inc(x_10);
x_12 = lean::string_append(x_10, x_9);
lean::dec(x_9);
x_14 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_0, x_12, x_2, x_3, x_4);
return x_14;
}
else
{
obj* x_15; obj* x_18; obj* x_21; obj* x_24; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_15 = lean::cnstr_get(x_1, 0);
lean::inc(x_15);
lean::dec(x_1);
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
lean::dec(x_15);
x_21 = l_lean_elaborator_elaborators;
lean::inc(x_18);
lean::inc(x_21);
x_24 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_21, x_18);
lean::inc(x_4);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_24);
lean::cnstr_set(x_26, 1, x_4);
x_27 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_27, 0, x_26);
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_28, 0, x_27);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__2), 5, 4);
lean::closure_set(x_29, 0, x_18);
lean::closure_set(x_29, 1, x_0);
lean::closure_set(x_29, 2, x_2);
lean::closure_set(x_29, 3, x_3);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_30, 0, x_29);
x_31 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_31, 0, x_28);
lean::closure_set(x_31, 1, x_30);
x_32 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__3), 2, 1);
lean::closure_set(x_32, 0, x_4);
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_33, 0, x_31);
lean::closure_set(x_33, 1, x_32);
return x_33;
}
}
}
obj* _init_l_lean_elaborator_run___lambda__4___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("not a command: ");
return x_0;
}
}
obj* l_lean_elaborator_run___lambda__5(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
lean::inc(x_0);
x_10 = l_lean_parser_syntax_as__node___main(x_0);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg), 4, 1);
lean::closure_set(x_11, 0, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__4), 5, 1);
lean::closure_set(x_12, 0, x_0);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg), 5, 2);
lean::closure_set(x_13, 0, x_11);
lean::closure_set(x_13, 1, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_with__current__command___rarg), 6, 5);
lean::closure_set(x_14, 0, x_4);
lean::closure_set(x_14, 1, x_13);
lean::closure_set(x_14, 2, x_1);
lean::closure_set(x_14, 3, x_2);
lean::closure_set(x_14, 4, x_6);
return x_14;
}
}
obj* l_lean_elaborator_run___lambda__6(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
lean::inc(x_0);
lean::inc(x_3);
x_10 = l_lean_elaborator_preresolve___main(x_3, x_0, x_5);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_11, 0, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__5), 4, 3);
lean::closure_set(x_12, 0, x_3);
lean::closure_set(x_12, 1, x_1);
lean::closure_set(x_12, 2, x_0);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_11);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
}
obj* l_lean_elaborator_run___lambda__7(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_0);
x_5 = l_lean_elaborator_current__command___rarg(x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__6), 3, 2);
lean::closure_set(x_6, 0, x_2);
lean::closure_set(x_6, 1, x_1);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_8, 0, x_5);
lean::closure_set(x_8, 1, x_7);
return x_8;
}
}
obj* l_lean_elaborator_run___lambda__8(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; obj* x_4; obj* x_6; obj* x_7; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = l_lean_message__log_empty;
lean::inc(x_4);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_11; obj* x_14; obj* x_17; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
lean::dec(x_0);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
lean::dec(x_8);
x_14 = lean::cnstr_get(x_11, 5);
lean::inc(x_14);
lean::dec(x_11);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_17, 0, x_14);
return x_17;
}
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(0u);
lean::inc(x_0);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_0);
lean::cnstr_set(x_3, 2, x_1);
return x_3;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(0u);
lean::inc(x_0);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_0);
lean::cnstr_set(x_3, 2, x_1);
return x_3;
}
}
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_2);
lean::dec(x_1);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg), 4, 0);
return x_2;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_run___spec__4(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_0, x_1);
return x_2;
}
}
obj* l___private_3693562977__run__aux___at_lean_elaborator_run___spec__6(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
x_6 = l___private_3693562977__run__aux___main___rarg(x_0, x_1, x_2, x_3);
x_7 = lean::apply_2(x_6, x_4, x_5);
return x_7;
}
}
obj* l_lean_parser_rec__t_run___at_lean_elaborator_run___spec__5(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l___private_3693562977__run__aux___at_lean_elaborator_run___spec__6), 6, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_2);
lean::closure_set(x_6, 2, x_3);
x_7 = lean::apply_3(x_0, x_6, x_4, x_5);
return x_7;
}
}
void initialize_init_lean_parser_module();
void initialize_init_lean_expander();
void initialize_init_lean_expr();
void initialize_init_lean_options();
static bool _G_initialized = false;
void initialize_init_lean_elaborator() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_lean_parser_module();
 initialize_init_lean_expander();
 initialize_init_lean_expr();
 initialize_init_lean_options();
 l_lean_elaborator_ordered__rbmap_empty___closed__1 = _init_l_lean_elaborator_ordered__rbmap_empty___closed__1();
 l_lean_elaborator_elaborator__t = _init_l_lean_elaborator_elaborator__t();
 l_lean_elaborator_elaborator__m = _init_l_lean_elaborator_elaborator__m();
 l_lean_elaborator_elaborator = _init_l_lean_elaborator_elaborator();
 l_lean_elaborator_coelaborator__m = _init_l_lean_elaborator_coelaborator__m();
 l_lean_elaborator_coelaborator = _init_l_lean_elaborator_coelaborator();
 l_lean_elaborator_elaborator__t___at_lean_elaborator_command_elaborate___spec__2 = _init_l_lean_elaborator_elaborator__t___at_lean_elaborator_command_elaborate___spec__2();
 l_lean_elaborator_coelaborator__m_monad__coroutine = _init_l_lean_elaborator_coelaborator__m_monad__coroutine();
 l_lean_elaborator_current__command___rarg___closed__1 = _init_l_lean_elaborator_current__command___rarg___closed__1();
 l_lean_elaborator_level__get__app__args___main___closed__1 = _init_l_lean_elaborator_level__get__app__args___main___closed__1();
 l_lean_elaborator_to__level___main___closed__1 = _init_l_lean_elaborator_to__level___main___closed__1();
 l_lean_elaborator_to__level___main___closed__2 = _init_l_lean_elaborator_to__level___main___closed__2();
 l_lean_elaborator_to__level___main___closed__3 = _init_l_lean_elaborator_to__level___main___closed__3();
 l_lean_elaborator_to__level___main___closed__4 = _init_l_lean_elaborator_to__level___main___closed__4();
 l_lean_elaborator_expr_mk__annotation___closed__1 = _init_l_lean_elaborator_expr_mk__annotation___closed__1();
 l_lean_elaborator_dummy = _init_l_lean_elaborator_dummy();
 l_lean_elaborator_mk__eqns___closed__1 = _init_l_lean_elaborator_mk__eqns___closed__1();
 l_lean_elaborator_mk__eqns___closed__2 = _init_l_lean_elaborator_mk__eqns___closed__2();
 l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1 = _init_l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1();
 l_lean_elaborator_to__pexpr___main___closed__1 = _init_l_lean_elaborator_to__pexpr___main___closed__1();
 l_lean_elaborator_to__pexpr___main___closed__2 = _init_l_lean_elaborator_to__pexpr___main___closed__2();
 l_lean_elaborator_to__pexpr___main___closed__3 = _init_l_lean_elaborator_to__pexpr___main___closed__3();
 l_lean_elaborator_to__pexpr___main___closed__4 = _init_l_lean_elaborator_to__pexpr___main___closed__4();
 l_lean_elaborator_to__pexpr___main___closed__5 = _init_l_lean_elaborator_to__pexpr___main___closed__5();
 l_lean_elaborator_to__pexpr___main___closed__6 = _init_l_lean_elaborator_to__pexpr___main___closed__6();
 l_lean_elaborator_to__pexpr___main___closed__7 = _init_l_lean_elaborator_to__pexpr___main___closed__7();
 l_lean_elaborator_to__pexpr___main___closed__8 = _init_l_lean_elaborator_to__pexpr___main___closed__8();
 l_lean_elaborator_to__pexpr___main___closed__9 = _init_l_lean_elaborator_to__pexpr___main___closed__9();
 l_lean_elaborator_to__pexpr___main___closed__10 = _init_l_lean_elaborator_to__pexpr___main___closed__10();
 l_lean_elaborator_to__pexpr___main___closed__11 = _init_l_lean_elaborator_to__pexpr___main___closed__11();
 l_lean_elaborator_to__pexpr___main___closed__12 = _init_l_lean_elaborator_to__pexpr___main___closed__12();
 l_lean_elaborator_to__pexpr___main___closed__13 = _init_l_lean_elaborator_to__pexpr___main___closed__13();
 l_lean_elaborator_to__pexpr___main___closed__14 = _init_l_lean_elaborator_to__pexpr___main___closed__14();
 l_lean_elaborator_to__pexpr___main___closed__15 = _init_l_lean_elaborator_to__pexpr___main___closed__15();
 l_lean_elaborator_to__pexpr___main___closed__16 = _init_l_lean_elaborator_to__pexpr___main___closed__16();
 l_lean_elaborator_to__pexpr___main___closed__17 = _init_l_lean_elaborator_to__pexpr___main___closed__17();
 l_lean_elaborator_to__pexpr___main___closed__18 = _init_l_lean_elaborator_to__pexpr___main___closed__18();
 l_lean_elaborator_to__pexpr___main___closed__19 = _init_l_lean_elaborator_to__pexpr___main___closed__19();
 l_lean_elaborator_to__pexpr___main___closed__20 = _init_l_lean_elaborator_to__pexpr___main___closed__20();
 l_lean_elaborator_to__pexpr___main___closed__21 = _init_l_lean_elaborator_to__pexpr___main___closed__21();
 l_lean_elaborator_to__pexpr___main___closed__22 = _init_l_lean_elaborator_to__pexpr___main___closed__22();
 l_lean_elaborator_to__pexpr___main___closed__23 = _init_l_lean_elaborator_to__pexpr___main___closed__23();
 l_lean_elaborator_to__pexpr___main___closed__24 = _init_l_lean_elaborator_to__pexpr___main___closed__24();
 l_lean_elaborator_to__pexpr___main___closed__25 = _init_l_lean_elaborator_to__pexpr___main___closed__25();
 l_lean_elaborator_to__pexpr___main___closed__26 = _init_l_lean_elaborator_to__pexpr___main___closed__26();
 l_lean_elaborator_to__pexpr___main___closed__27 = _init_l_lean_elaborator_to__pexpr___main___closed__27();
 l_lean_elaborator_to__pexpr___main___closed__28 = _init_l_lean_elaborator_to__pexpr___main___closed__28();
 l_lean_elaborator_to__pexpr___main___closed__29 = _init_l_lean_elaborator_to__pexpr___main___closed__29();
 l_lean_elaborator_to__pexpr___main___closed__30 = _init_l_lean_elaborator_to__pexpr___main___closed__30();
 l_lean_elaborator_to__pexpr___main___closed__31 = _init_l_lean_elaborator_to__pexpr___main___closed__31();
 l_lean_elaborator_to__pexpr___main___closed__32 = _init_l_lean_elaborator_to__pexpr___main___closed__32();
 l_lean_elaborator_to__pexpr___main___closed__33 = _init_l_lean_elaborator_to__pexpr___main___closed__33();
 l_lean_elaborator_to__pexpr___main___closed__34 = _init_l_lean_elaborator_to__pexpr___main___closed__34();
 l_lean_elaborator_to__pexpr___main___closed__35 = _init_l_lean_elaborator_to__pexpr___main___closed__35();
 l_lean_elaborator_to__pexpr___main___closed__36 = _init_l_lean_elaborator_to__pexpr___main___closed__36();
 l_lean_elaborator_to__pexpr___main___closed__37 = _init_l_lean_elaborator_to__pexpr___main___closed__37();
 l_lean_elaborator_to__pexpr___main___closed__38 = _init_l_lean_elaborator_to__pexpr___main___closed__38();
 l_lean_elaborator_to__pexpr___main___closed__39 = _init_l_lean_elaborator_to__pexpr___main___closed__39();
 l_lean_elaborator_to__pexpr___main___closed__40 = _init_l_lean_elaborator_to__pexpr___main___closed__40();
 l_lean_elaborator_to__pexpr___main___closed__41 = _init_l_lean_elaborator_to__pexpr___main___closed__41();
 l_lean_elaborator_to__pexpr___main___closed__42 = _init_l_lean_elaborator_to__pexpr___main___closed__42();
 l_lean_elaborator_to__pexpr___main___closed__43 = _init_l_lean_elaborator_to__pexpr___main___closed__43();
 l_lean_elaborator_to__pexpr___main___closed__44 = _init_l_lean_elaborator_to__pexpr___main___closed__44();
 l_lean_elaborator_to__pexpr___main___closed__45 = _init_l_lean_elaborator_to__pexpr___main___closed__45();
 l_lean_elaborator_to__pexpr___main___closed__46 = _init_l_lean_elaborator_to__pexpr___main___closed__46();
 l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1();
 l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1();
 l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6 = _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6();
 l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1 = _init_l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1();
 l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13 = _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13();
 l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1 = _init_l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1();
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__1 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__1();
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__2 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__2();
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__3 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__3();
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__4 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__4();
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__5 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__5();
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__6 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__6();
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__7 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__7();
 l_lean_elaborator_locally___rarg___closed__1 = _init_l_lean_elaborator_locally___rarg___closed__1();
 l_lean_elaborator_elab__def__like___closed__1 = _init_l_lean_elaborator_elab__def__like___closed__1();
 l_lean_elaborator_elab__def__like___closed__2 = _init_l_lean_elaborator_elab__def__like___closed__2();
 l_lean_elaborator_infer__mod__to__pexpr___closed__1 = _init_l_lean_elaborator_infer__mod__to__pexpr___closed__1();
 l_lean_elaborator_infer__mod__to__pexpr___closed__2 = _init_l_lean_elaborator_infer__mod__to__pexpr___closed__2();
 l_lean_elaborator_infer__mod__to__pexpr___closed__3 = _init_l_lean_elaborator_infer__mod__to__pexpr___closed__3();
 l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1();
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1();
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2();
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3();
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4();
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5();
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6();
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7();
 l_lean_elaborator_variables_elaborate___closed__1 = _init_l_lean_elaborator_variables_elaborate___closed__1();
 l_lean_elaborator_variables_elaborate___closed__2 = _init_l_lean_elaborator_variables_elaborate___closed__2();
 l_lean_elaborator_module_header_elaborate___closed__1 = _init_l_lean_elaborator_module_header_elaborate___closed__1();
 l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1 = _init_l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1();
 l_lean_elaborator_command__parser__config_register__notation__parser___closed__1 = _init_l_lean_elaborator_command__parser__config_register__notation__parser___closed__1();
 l_lean_elaborator_command__parser__config_register__notation__parser___closed__2 = _init_l_lean_elaborator_command__parser__config_register__notation__parser___closed__2();
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1();
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2();
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3();
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4();
 l_lean_elaborator_yield__to__outside___rarg___closed__1 = _init_l_lean_elaborator_yield__to__outside___rarg___closed__1();
 l_lean_elaborator_yield__to__outside___rarg___lambda__2___closed__1 = _init_l_lean_elaborator_yield__to__outside___rarg___lambda__2___closed__1();
 l_lean_elaborator_postprocess__notation__spec___closed__1 = _init_l_lean_elaborator_postprocess__notation__spec___closed__1();
 l_lean_elaborator_match__spec___closed__1 = _init_l_lean_elaborator_match__spec___closed__1();
 l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___closed__1();
 l_lean_elaborator_notation_elaborate__aux___closed__1 = _init_l_lean_elaborator_notation_elaborate__aux___closed__1();
 l_lean_elaborator_mk__notation__kind___rarg___closed__1 = _init_l_lean_elaborator_mk__notation__kind___rarg___closed__1();
 l_lean_elaborator_notation_elaborate___closed__1 = _init_l_lean_elaborator_notation_elaborate___closed__1();
 l_lean_elaborator_notation_elaborate___closed__2 = _init_l_lean_elaborator_notation_elaborate___closed__2();
 l_lean_elaborator_universe_elaborate___closed__1 = _init_l_lean_elaborator_universe_elaborate___closed__1();
 l_lean_elaborator_universe_elaborate___closed__2 = _init_l_lean_elaborator_universe_elaborate___closed__2();
 l_lean_elaborator_attribute_elaborate___closed__1 = _init_l_lean_elaborator_attribute_elaborate___closed__1();
 l_lean_elaborator_attribute_elaborate___closed__2 = _init_l_lean_elaborator_attribute_elaborate___closed__2();
 l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1();
 l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2 = _init_l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2();
 l_lean_elaborator_check_elaborate___closed__1 = _init_l_lean_elaborator_check_elaborate___closed__1();
 l_lean_elaborator_init__quot_elaborate___closed__1 = _init_l_lean_elaborator_init__quot_elaborate___closed__1();
 l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1 = _init_l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1();
 l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1 = _init_l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1();
 l_lean_elaborator_commands_elaborate___main___lambda__4___closed__1 = _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__1();
 l_lean_elaborator_commands_elaborate___main___lambda__4___closed__2 = _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__2();
 l_lean_elaborator_commands_elaborate___main___lambda__4___closed__3 = _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__3();
 l_lean_elaborator_commands_elaborate___main___lambda__4___closed__4 = _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__4();
 l_lean_elaborator_commands_elaborate___main___lambda__4___closed__5 = _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__5();
 l_lean_elaborator_commands_elaborate___main___lambda__5___closed__1 = _init_l_lean_elaborator_commands_elaborate___main___lambda__5___closed__1();
 l_lean_elaborator_end__scope___lambda__2___closed__1 = _init_l_lean_elaborator_end__scope___lambda__2___closed__1();
 l_lean_elaborator_end__scope___lambda__2___closed__2 = _init_l_lean_elaborator_end__scope___lambda__2___closed__2();
 l_lean_elaborator_end__scope___lambda__3___closed__1 = _init_l_lean_elaborator_end__scope___lambda__3___closed__1();
 l_lean_elaborator_section_elaborate___closed__1 = _init_l_lean_elaborator_section_elaborate___closed__1();
 l_lean_elaborator_section_elaborate___lambda__1___closed__1 = _init_l_lean_elaborator_section_elaborate___lambda__1___closed__1();
 l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1 = _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1();
 l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__2 = _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__2();
 l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1 = _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1();
 l_lean_elaborator_namespace_elaborate___closed__1 = _init_l_lean_elaborator_namespace_elaborate___closed__1();
 l_lean_elaborator_namespace_elaborate___lambda__1___closed__1 = _init_l_lean_elaborator_namespace_elaborate___lambda__1___closed__1();
 l_lean_elaborator_elaborators = _init_l_lean_elaborator_elaborators();
 l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1 = _init_l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1();
 l_lean_elaborator_resolve__context___main___closed__1 = _init_l_lean_elaborator_resolve__context___main___closed__1();
 l_lean_elaborator_max__recursion = _init_l_lean_elaborator_max__recursion();
 l_lean_elaborator_max__commands = _init_l_lean_elaborator_max__commands();
 l_lean_elaborator_run___closed__1 = _init_l_lean_elaborator_run___closed__1();
 l_lean_elaborator_run___closed__2 = _init_l_lean_elaborator_run___closed__2();
 l_lean_elaborator_run___closed__3 = _init_l_lean_elaborator_run___closed__3();
 l_lean_elaborator_run___closed__4 = _init_l_lean_elaborator_run___closed__4();
 l_lean_elaborator_run___closed__5 = _init_l_lean_elaborator_run___closed__5();
 l_lean_elaborator_run___closed__6 = _init_l_lean_elaborator_run___closed__6();
 l_lean_elaborator_run___closed__7 = _init_l_lean_elaborator_run___closed__7();
 l_lean_elaborator_run___lambda__1___closed__1 = _init_l_lean_elaborator_run___lambda__1___closed__1();
 l_lean_elaborator_run___lambda__2___closed__1 = _init_l_lean_elaborator_run___lambda__2___closed__1();
 l_lean_elaborator_run___lambda__4___closed__1 = _init_l_lean_elaborator_run___lambda__4___closed__1();
 l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1 = _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1();
 l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2 = _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2();
}