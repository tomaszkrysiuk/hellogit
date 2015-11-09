CXX= g++ 
FLAGS= -std=c++11 -Wall
OBJDIR= obj
OBJ= $(addprefix $(OBJDIR)/,kalk.o main.o)
HDIR= headers
SRCDIR= source

Program: $(OBJ)
	$(CXX)$(FLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX)$(FLAGS) -c -o $@ $< 

$(OBJDIR)/main.o: $(SRCDIR)/main.cpp $(addprefix $(HDIR)/,funkcje.h mapa_funkcji.h)
	$(CXX)$(FLAGS) -c -o $@ $< -I./$(HDIR)

clean:
	rm Program ./$(OBJDIR)/*.o
