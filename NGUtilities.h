/*
*  Some useful macros to aid in using Grand Central Dispatch in Objective-C:
*/

#define ASYNC(PRIORITY,...) dispatch_async(dispatch_get_global_queue(PRIORITY, 0), ^{__VA_ARGS__})
#define ASYNC_MAIN(...) dispatch_async(dispatch_get_main_queue(), ^{ __VA_ARGS__ })
#define HIGH_PRIORITY DISPATCH_QUEUE_PRIORITY_HIGH
#define DEFAULT_PRIORITY DISPATCH_QUEUE_PRIORITY_DEFAULT
#define LOW_PRIORITY DISPATCH_QUEUE_PRIORITY_BACKGROUND

// NSUserDefaults macro simplifier
#define defaults [NSUserDefaults standardUserDefaults]

#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)

#define NULL_OBJECT(a) ((a) == nil || [(a) isEqual:[NSNull null]])