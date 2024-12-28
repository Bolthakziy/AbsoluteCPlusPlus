CC = g++
TARGET = DeclaredConstant.out
OBJS = DeclaredConstant.o
SRCS = DeclaredConstant.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
