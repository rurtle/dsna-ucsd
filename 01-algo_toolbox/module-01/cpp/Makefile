CC = g++
CFLAGS = -g -O2 -pipe -std=c++1y

# Generic target
all:	aplusb maxprod

# Individual targets

aplusb:	aplusb.cpp
	$(CC) $(CFLAGS) aplusb.cpp -o aplusb

maxprod:	maxprod.cpp
	$(CC) $(CFLAGS) maxprod.cpp -o maxprod


# Cleanup
clean:
	rm -f 	aplusb \
		maxprod
