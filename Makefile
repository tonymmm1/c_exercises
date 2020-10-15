CFLAGS = -std=c89 -Wall -Wextra -fpic

ifdef DEBUG
	CFLAGS += -O0 -g
else
	CFLAGS += -O2 -DNDEBUG
endif

all: main

main: main.c
	$(CC) $(CFLAGS) -o main main.c

test: 
	@echo "[1] MAKE:"
	make main
	@echo
	@echo "[2] COMMAND:"
	@./main
	@echo
	@echo "[3] CLEANUP:"
	make clean

clean: 
	rm -rf main main.o 
