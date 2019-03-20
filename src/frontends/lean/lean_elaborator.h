/*
Copyright (c) 2018 Sebastian Ullrich. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Sebastian Ullrich

Lean interface to the old elaborator
*/
#pragma once

namespace lean {
environment const & to_environment(b_obj_arg o);
obj_res to_lean_environment(environment const & env);

void initialize_vm_elaborator();
void finalize_vm_elaborator();
}