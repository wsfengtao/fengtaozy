#
# Makefile for Menu Program
#

CC_PTHREAD_FLAGS = -lpthread
CC_FLAGS         = -c
CC_OUTPUT_FLAGS  = -o
CC               = gcc
RM               = rm
RM_FLAGS         = -f

TARGET = test
OBJS   = linktable.o menu.o test.o

all:    $(TARGET) clean
$(TARGET):    $(OBJS)
	$(CC) $(CC_OUTPUT_FLAGS) $(TARGET) $(OBJS)

.c.o:
	$(CC) $(CC_FLAGS) $<

.PHONY:clean

clean:
	$(RM) $(RM_FLAGS) $(OBJS) *.bak
