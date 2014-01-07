#include <stdio.h>

int main()
{
	#ifdef _WIN64
		printf("Windows (64bit)\n");
	#elif _WIN32
		printf("Windows (32bit)\n");
	#elif __APPLE__
	    #include "TargetConditionals.h"
	    #if TARGET_IPHONE_SIMULATOR
	         printf("iOS Simulator\n");
	    #elif TARGET_OS_IPHONE
	        printf("iOS device\n");
	    #elif TARGET_OS_MAC
	        printf("Mac OS\n");
	    #else
	        printf("Unsupported Platform\n");
	    #endif
	#elif __linux
	    /printf("Linux\n");
	#elif __unix 
	    printf("UNIX\n");
	#elif __posix
	    printf("POSIX\n");
	#endif
}