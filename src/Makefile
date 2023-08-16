CC:=gcc
RM:=rm -f
all:=login.o main.o menuGuest.o menuMember.o
CFLAGS:= -Wall -Wextra -pedantic
final: $(all)
	$(CC) ${CFLAGS} $(all) -o ${@}

login.o: login.c login.h
	$(CC) -c login.c

main.o: main.c
	$(CC) -c main.c

menuGuest.o: menuGuest.c menuMember.h
	$(CC) -c menuGuest.c

menuMember.o: menuMember.c menuMember.h
	$(CC) -c menuMember.c

help:
	@echo "Use one of the following commands as follows"
	@echo "make		Create all necessary files"
	@echo "clean 	Clean up files"

clean:
	$(RM) *.o final

	