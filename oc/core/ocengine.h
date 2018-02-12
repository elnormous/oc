// Copyright (C) 2018 Elviss Strazdins
// This file is part of the OC engine.

#pragma once

typedef struct OcEngine
{
    int running;
} OcEngine;

extern OcEngine* ocEngine;

void ocMain(int argc, char** argv);

int ocEngineInit(OcEngine* engine, int argc, char* argv[]);
