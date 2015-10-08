CC= g++ -std=c++11
OBJDIR= obj
OBJ= $(addprefix $(OBJDIR)/,kalk.o main.o)
HDIR= headers
SRCDIR= source

Program: $(OBJ)
	$(CC) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) -c -o $@ $<

$(OBJDIR)/main.o: $(SRCDIR)/main.cpp $(addprefix $(HDIR)/,funkcje.h mapa_funkcji.h)
	$(CC) -c -o $@ $< -I./$(HDIR)

clean:
	rm Program ./$(OBJDIR)/*.o
