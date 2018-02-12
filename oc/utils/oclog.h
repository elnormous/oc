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

void ocLog(OcLogLevel logLevel, const char* format, ...);
