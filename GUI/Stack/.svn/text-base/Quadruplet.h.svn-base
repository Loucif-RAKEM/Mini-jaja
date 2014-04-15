#ifndef QUADRUPLET_H
#define QUADRUPLET_H
typedef enum Genre{CST = 1, VCST=2} Genre;
typedef enum Type{ENTIER=1, BOOLEAN=2, VOID=3 }Type ;

class Quadruplet{

	public:
		Quadruplet();
		Quadruplet(const char* label,int valeur,Type type,Genre genre);
		const char* getLabel();
		void setLabel(char*);
		void display();
		Type getType();
		void setType(Type);
		Genre getGenre();
		void setGenre(Genre);
		int getValue();
		void setValue(int);
	private:
		const char* label;
		int value;
		Type type;
		Genre genre;
		
		

};

#endif
