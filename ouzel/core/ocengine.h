// Copyright (C) 2018 Elviss Strazdins
// This file is part of the OC engine.

#pragma once

typedef struct _OcEngine
{
} OcEngine;

extern struct OcEngine* oc_engine;

int oc_engine_init(int argc, char* argv[]);
int oc_engine_free(void);
