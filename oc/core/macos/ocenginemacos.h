// Copyright (C) 2018 Elviss Strazdins
// This file is part of the OC engine.

#pragma once

#include "core/ocengine.h"

typedef struct _OcEngineMacOS
{
    OcEngine engine;
} OcEngineMacOS;

int ocEngineMacOSInit(OcEngineMacOS* engine, int argc, char* argv[]);
int ocEngineMacOSFree(OcEngineMacOS* engine);
