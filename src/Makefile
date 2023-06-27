CC=gcc
RM=rm -f
final: login.o main.o menuGuest.o menuMember.o
	$(CC) login.o main.o menuGuest.o menuMember.o -o final

login.o: login.c login.h
	$(CC) -c login.c

main.o: main.c
	$(CC) -c main.c

menuGuest.o: menuGuest.c menuMember.h
	$(CC) -c menuGuest.c

menuMember.o: menuMember.c menuMember.h
	$(CC) -c menuMember.c

clean:
	$(RM) *.o && $(RM) final

	