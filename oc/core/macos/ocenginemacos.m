// Copyright (C) 2018 Elviss Strazdins
// This file is part of the OC engine.

#include <stdlib.h>
#import <Cocoa/Cocoa.h>
#include "ocenginemacos.h"

@interface AppDelegate: NSObject<NSApplicationDelegate>

@end

@implementation AppDelegate

-(void)applicationWillFinishLaunching:(__unused NSNotification*)notification
{
}

-(void)applicationDidFinishLaunching:(__unused NSNotification*)notification
{
}

-(void)applicationWillTerminate:(__unused NSNotification*)notification
{
}

-(BOOL)applicationShouldTerminateAfterLastWindowClosed:(__unused NSApplication*)sender
{
    return YES;
}

@end

int oc_engine_macos_init(OcEngineMacOS* engine, int argc, char* argv[])
{
    if (!oc_engine_init(&engine->engine, argc, argv))
    {
        return 0;
    }

    @autoreleasepool
    {
        NSApplication* application = [NSApplication sharedApplication];
        [application activateIgnoringOtherApps:YES];
        [application setDelegate:[[[AppDelegate alloc] init] autorelease]];
        [application run];
    }

    return 1;
}

int oc_engine_macos_free(OcEngineMacOS* engine)
{
    if (!engine) return 0;

    free(engine);

    return 1;
}
