// Copyright (C) 2018 Elviss Strazdins
// This file is part of the OC engine.

#pragma once

typedef struct _OcEngine
{
    int running;
} OcEngine;

extern OcEngine* oc_engine;

void oc_main(int argc, char** argv);

int oc_engine_init(OcEngine* engine, int argc, char* argv[]);
