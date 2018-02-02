// Copyright (C) 2018 Elviss Strazdins
// This file is part of the OC engine.

#include "ocengine.h"

void ouzel_main(int argc, char** argv);

int oc_engine_init(int argc, char* argv[])
{
    ouzel_main(argc, argv);

    return 1;
}
