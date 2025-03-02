CC = g++
TARGET = RecursiveFunction.out
OBJS = RecursiveFunction.o
SRCS = RecursiveFunction.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
