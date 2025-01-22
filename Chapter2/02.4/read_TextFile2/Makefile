CC = g++
TARGET = read_TextFile2.out
OBJS = read_TextFile2.o
SRCS = read_TextFile2.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
