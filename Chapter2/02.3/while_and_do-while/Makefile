CC = g++
TARGET = while_and_do-while.out
OBJS = while_and_do-while.o
SRCS = while_and_do-while.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
