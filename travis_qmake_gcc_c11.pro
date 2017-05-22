# Files
SOURCES += main.c

# Compile with high warning levels, a warning is an error
QMAKE_CFLAGS += -Wall -Wextra -Werror

# C11
CONFIG += c11
QMAKE_CFLAGS += -std=c11
