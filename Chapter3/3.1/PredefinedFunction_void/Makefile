CC = g++
TARGET = PredefinedFunction_void.out
OBJS = PredefinedFunction_void.o
SRCS = PredefinedFunction_void.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
