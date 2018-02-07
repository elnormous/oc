// Copyright (C) 2018 Elviss Strazdins
// This file is part of the OC engine.

#pragma once

typedef enum _OcLogLevel
{
    OFF,
    ERR,
    WARN,
    INFO,
    ALL
} OcLogLevel;

void oc_log(OcLogLevel log_level, const char* format, ...);
