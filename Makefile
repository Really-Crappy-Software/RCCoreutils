CC=gcc
OBJ = rchs rcln rcls rcping rctds rccat rckill rcmat rcmbox rcmc rcpl rcpm rcrr rcsh
DIR = src/

all: 
	cp include/cap_names.h /usr/include
	cp include/libcap.h /usr/include
	$(CC) -o rchs $(DIR)rchs.c
	$(CC) -o rcln $(DIR)rcln.c
	$(CC) -o rcsh $(DIR)rcmsh.c
	$(CC) -o rcls $(DIR)rcls.c
	$(CC) -o rcping $(DIR)rcping.c -lcap
	$(CC) -o rctds $(DIR)rctds.c
	$(CC) -o rccat $(DIR)rccat.c
	$(CC) -o rckill $(DIR)rckill.c
	$(CC) -o rcmat $(DIR)rcmat.c
	$(CC) -o rcmbox $(DIR)rcmbox.c
	$(CC) -o rcmc $(DIR)rcmc.c
	$(CC) -o rcpl $(DIR)rcpl.c
	$(CC) -o rcpm $(DIR)rcpm.c -lcurl
	$(CC) -o rcrr $(DIR)rcrr.c
	
clean:
	rm -r $(OBJ)
	
install:
	cp -r $(OBJ) /bin


	
