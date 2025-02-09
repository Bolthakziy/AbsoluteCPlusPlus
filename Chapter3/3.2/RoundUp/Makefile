CC = g++
TARGET = RoundUp.out
OBJS = RoundUp.o
SRCS = RoundUp.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS) -lm

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
