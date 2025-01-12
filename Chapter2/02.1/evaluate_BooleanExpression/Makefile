CC = g++
TARGET = evaluate_BooleanExpression.out
OBJS = evaluate_BooleanExpression.o
SRCS = evaluate_BooleanExpression.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
