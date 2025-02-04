CC = g++
TARGET = ReturningFunction.out
OBJS = ReturningFunction.o
SRCS = ReturningFunction.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
