CC = g++
TARGET = if_else.out
OBJS = if_else.o
SRCS = if_else.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(SRCS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
