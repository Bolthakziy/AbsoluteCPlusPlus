CC = g++
TARGET = Simple_Example.out
OBJS = Simple_Example.o
SRCS = Simple_Example.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
