#!/bin/env python3

import jpype
 
jpype.startJVM("/Library/Java/JavaVirtualMachines/jdk1.8.0_91.jdk/Contents/Home/jre/lib/server/libjvm.dylib")
 	
jpype.java.lang.System.out.println("Hello World")
 
jpype.shutdownJVM()
