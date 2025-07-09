CROSS_COMPILE =
CC = ${CROSS_COMPILE}gcc
CFLAGS = -g
LDFLAGS =

SRCS = main.c
OBJS = ${patsubst %.c,%.o,${SRCS}}

TARGET = asahi

all: ${TARGET}

${TARGET}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o $@ ${LDFLAGS}

%.o: %.c Makefile
	${CC} ${CFLAGS} -c -o $@ $<

clean:
	@rm -rf ${TARGET} ${OBJS}

.PHONY = clean
