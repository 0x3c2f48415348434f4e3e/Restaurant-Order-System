CC=gcc
RM=rm -f
OBJS=login.o main.o menuGuest.o menuMember.o
final: $(OBJS)
	$(CC) $(OBJS) -o final

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
	$(RM) *.o && $(RM) final

	