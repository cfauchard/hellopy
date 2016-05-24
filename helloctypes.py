#!/bin/env python3

import ctypes

hellodll = ctypes.CDLL("./hello.so", mode=ctypes.RTLD_GLOBAL)
hellodll.hello("christophe".encode('utf8'))
