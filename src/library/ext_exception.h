/*
Copyright (c) 2015 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "runtime/exception.h"
#include "util/exception_with_pos.h"
#include "util/options.h"
#include "kernel/expr.h"
#include "library/formatter.h"

namespace lean {
/** \brief Base class for exceptions with support for pretty printing on demand. */
class ext_exception : public exception_with_pos {
public:
    ext_exception() {}
    ext_exception(char const * msg):exception_with_pos(msg) {}
    ext_exception(sstream const & strm):exception_with_pos(strm) {}
    virtual ~ext_exception() noexcept {}
    virtual optional<pos_info> get_pos() const override { return {}; }
    virtual format pp(formatter const &) const { return format(what()); }
};
}
