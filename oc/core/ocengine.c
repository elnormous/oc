// Copyright (C) 2018 Elviss Strazdins
// This file is part of the OC engine.

#include "ocengine.h"

OcEngine* oc_engine;

int oc_engine_init(OcEngine* engine, int argc, char** argv)
{
    oc_engine = engine;

    oc_main(argc, argv);

    return 1;
}
