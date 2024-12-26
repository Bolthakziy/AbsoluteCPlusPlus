CC = g++
TARGET = LiteralVariable.out
OBJS = LiteralVariable.o
SRCS = LiteralVariable.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
