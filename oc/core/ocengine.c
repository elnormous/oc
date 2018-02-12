// Copyright (C) 2018 Elviss Strazdins
// This file is part of the OC engine.

#include "ocengine.h"

OcEngine* ocEngine;

int ocEngineInit(OcEngine* engine, int argc, char** argv)
{
    ocEngine = engine;

    ocMain(argc, argv);

    return 1;
}
