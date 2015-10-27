# NGUtilities

NGUtilities is a header file which you easily drop into your project that adds some powerfull macros to aid in Grand Central Dispatch, NSUserDefaults, and many more to come.

For example using the GCD you can simplify the boilerplate code like this:

    ASYNC_MAIN({
        [defaults setBool:@"UpdateApp"];
        [defaults synchronize];
    });
    
    ASYNC(HIGH_PRIORITY,{
        <Code here>
    });
    
    ASYNC(DEFAULT_PRIORITY,{
        <Code here>
    });
    
    ASYNC(LOW_PRIORITY,{
        <Code here>
    });
