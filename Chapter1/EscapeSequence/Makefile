CC = g++
TARGET= EscapeSequence.out
OBJS = EscapeSequence.o
SRCS = EscapeSequence.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
