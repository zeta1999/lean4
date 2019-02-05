// Lean compiler output
// Module: init.data.list.default
// Imports: init.data.list.basic init.data.list.instances
#include "runtime/object.h"
#include "runtime/apply.h"
#include "runtime/io.h"
#include "kernel/builtin.h"
typedef lean::object obj;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#endif
void initialize_init_data_list_basic();
void initialize_init_data_list_instances();
static bool _G_initialized = false;
void initialize_init_data_list_default() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_data_list_basic();
 initialize_init_data_list_instances();
}