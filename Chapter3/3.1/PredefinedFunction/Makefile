CC = g++
TARGET = PredefinedFunction.out
OBJS = PredefinedFunction.o
SRCS = PredefinedFunction.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS) -lm

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
