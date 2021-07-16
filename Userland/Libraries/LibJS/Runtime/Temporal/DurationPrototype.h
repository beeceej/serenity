/*
 * Copyright (c) 2021, Linus Groh <linusg@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibJS/Runtime/Object.h>

namespace JS::Temporal {

class DurationPrototype final : public Object {
    JS_OBJECT(DurationPrototype, Object);

public:
    explicit DurationPrototype(GlobalObject&);
    virtual void initialize(GlobalObject&) override;
    virtual ~DurationPrototype() override = default;

private:
    JS_DECLARE_NATIVE_FUNCTION(years_getter);
    JS_DECLARE_NATIVE_FUNCTION(months_getter);
    JS_DECLARE_NATIVE_FUNCTION(weeks_getter);
    JS_DECLARE_NATIVE_FUNCTION(days_getter);
    JS_DECLARE_NATIVE_FUNCTION(hours_getter);
    JS_DECLARE_NATIVE_FUNCTION(minutes_getter);
    JS_DECLARE_NATIVE_FUNCTION(seconds_getter);
    JS_DECLARE_NATIVE_FUNCTION(milliseconds_getter);
    JS_DECLARE_NATIVE_FUNCTION(microseconds_getter);
    JS_DECLARE_NATIVE_FUNCTION(nanoseconds_getter);
    JS_DECLARE_NATIVE_FUNCTION(sign_getter);
    JS_DECLARE_NATIVE_FUNCTION(blank_getter);
    JS_DECLARE_NATIVE_FUNCTION(with);
    JS_DECLARE_NATIVE_FUNCTION(negated);
    JS_DECLARE_NATIVE_FUNCTION(value_of);
};

}
