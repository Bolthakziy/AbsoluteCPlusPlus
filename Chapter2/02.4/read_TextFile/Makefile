CC = g++
TARGET = read_TextFile.out
OBJS = read_TextFile.o
SRCS = read_TextFile.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
